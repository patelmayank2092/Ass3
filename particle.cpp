#include "particle.h"

Particle::Particle(){
    ;
}



void Particle::position(real a,real b,real c){

	Cordinates position;

	position.X_value = a;
	position.Y_value = b;
	position.Z_value = c;

	x.push_back(position);

}

void Particle::velocity(real a,real b,real c){

	Cordinates velocity;

	velocity.X_value = a;
	velocity.Y_value = b;
	velocity.Z_value = c;

	v.push_back(velocity);

}

void Particle::force(real a,real b,real c){

	Cordinates force;

	force.X_value = a;
	force.Y_value = b;
	force.Z_value = c;

	f.push_back(force);	

}


real Particle::r(int i,int j){

	real sum,norm,d1,d2,d3;
	
	d1 = x[i](X)-x[j](X);
	d2 = x[i](Y)-x[j](Y);
	d3 = x[i](Z)-x[j](Z);

	sum = d1*d1 + d2*d2 + d3*d3;
	
	norm = sqrt(sum);

	return norm;
}



real Cordinates::operator ()(int i){

	if(i == 1){
	 return X_value;
	}

	if(i == 2){
	 return Y_value;
	}

	if(i == 3){
	 return Z_value;
	}

}

  void Particle::readDataFile(std::string filename){

      real x_x,x_y,x_z;
      real v_x,v_y,v_z;
      int mass=1;


      std::ifstream takeData;

      takeData.open(filename);

      while(!takeData.eof()){

          takeData>>mass>>x_x>>x_y>>x_z>>v_x>>v_y>>v_z;

                      position(x_x,x_y,x_z);
                      velocity(v_x,v_y,v_z);

      }

      takeData.close();

      cout<<epsilon<<endl;

      cout<<"No. of particles = "<<(x).size()<<endl;
      cout<<"position :"<<endl;
      cout<<setprecision(18)<<x[0](X)<<"\t"<<setprecision(18)<<x[0](Y)<<"\t"<<setprecision(18)<<x[0](Z)<<endl;

      cout<<"velocity :"<<endl;
      cout<<setprecision(18)<<v[1](X)<<"\t"<<setprecision(18)<<v[1](Y)<<"\t"<<setprecision(18)<<v[1](Z)<<endl;

      cout<<"position :"<<endl;
      cout<<setprecision(18)<<x[180](X)<<"\t"<<setprecision(18)<<x[180](Y)<<"\t"<<setprecision(18)<<x[180](Z)<<endl;

      real ans= r(0,3);

      cout<<"distance is :"<<setprecision(18)<< ans << endl;


  }


