// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 8

// ~IMeshBakerDetailSampler @ 14ca6b270

void __thiscall
UE::Geometry::IMeshBakerDetailSampler::~IMeshBakerDetailSampler(IMeshBakerDetailSampler *this)

{
  return;
}

// ComputeCustomCorrespondence @ 14ca80e20

void * __thiscall
UE::Geometry::IMeshBakerDetailSampler::ComputeCustomCorrespondence
          (IMeshBakerDetailSampler *this,FMeshUVSampleInfo *param_1,FCorrespondenceSample *param_2)

{
  return (void *)0x0;
}

// FindNearestHitTriangle @ 14ca898c0

void * __thiscall
UE::Geometry::IMeshBakerDetailSampler::FindNearestHitTriangle
          (IMeshBakerDetailSampler *this,TRay<double> *param_1,double *param_2,int *param_3,
          TVector<double> *param_4,FQueryOptions *param_5)

{
  return (void *)0x0;
}

// FindNearestTriangle @ 14ca89a60

void * __thiscall
UE::Geometry::IMeshBakerDetailSampler::FindNearestTriangle
          (IMeshBakerDetailSampler *this,TVector<double> *param_1,double *param_2,int *param_3,
          TVector<double> *param_4,FQueryOptions *param_5)

{
  return (void *)0x0;
}

// IsValidCorrespondence @ 14ca979a0

bool __thiscall
UE::Geometry::IMeshBakerDetailSampler::IsValidCorrespondence
          (IMeshBakerDetailSampler *this,FCorrespondenceSample *param_1)

{
  char cVar1;
  
  if (param_1->DetailMesh != (void *)0x0) {
    cVar1 = (**(code **)((longlong)*this + 0x90))(this,param_1->DetailMesh,param_1->DetailTriID);
    if (cVar1 != '\0') {
      return true;
    }
  }
  return false;
}

// SetTangents @ 14caa42f0

void __thiscall
UE::Geometry::IMeshBakerDetailSampler::SetTangents
          (IMeshBakerDetailSampler *this,void *param_1,TMeshTangents<double> *param_2)

{
  return;
}

// SupportsCustomCorrespondence @ 14caa7380

bool __thiscall
UE::Geometry::IMeshBakerDetailSampler::SupportsCustomCorrespondence(IMeshBakerDetailSampler *this)

{
  return false;
}

// TestAnyHitTriangle @ 14caa73e0

bool __thiscall
UE::Geometry::IMeshBakerDetailSampler::TestAnyHitTriangle
          (IMeshBakerDetailSampler *this,TRay<double> *param_1,FQueryOptions *param_2)

{
  return false;
}

