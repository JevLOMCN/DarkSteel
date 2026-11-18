// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 16

// CreateCopy @ 146d8d980

INavigationQueryFilterInterface * __thiscall
FAbstractQueryFilter::CreateCopy(FAbstractQueryFilter *this)

{
  INavigationQueryFilterInterface *pIVar1;
  
  pIVar1 = ::operator_new(8);
  if (pIVar1 != (INavigationQueryFilterInterface *)0x0) {
    *pIVar1 = (INavigationQueryFilterInterface)&___7FAbstractQueryFilter__6B_;
    return pIVar1;
  }
  return (INavigationQueryFilterInterface *)0x0;
}

// GetAdjustedEndLocation @ 146d99590

TVector<double> * __thiscall
FAbstractQueryFilter::GetAdjustedEndLocation
          (FAbstractQueryFilter *this,TVector<double> *__return_storage_ptr__,
          TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetAllAreaCosts @ 146d995d0

void __thiscall
FAbstractQueryFilter::GetAllAreaCosts
          (FAbstractQueryFilter *this,float *param_1,float *param_2,int param_3)

{
  return;
}

// GetExcludeFlags @ 146d9b360

ushort __thiscall FAbstractQueryFilter::GetExcludeFlags(FAbstractQueryFilter *this)

{
  return 0;
}

// GetHeuristicScale @ 146d9b960

float __thiscall FAbstractQueryFilter::GetHeuristicScale(FAbstractQueryFilter *this)

{
  return __real_3f800000;
}

// GetIncludeFlags @ 146d9b9b0

ushort __thiscall FAbstractQueryFilter::GetIncludeFlags(FAbstractQueryFilter *this)

{
  return 0;
}

// IsBacktrackingEnabled @ 146da4670

bool __thiscall FAbstractQueryFilter::IsBacktrackingEnabled(FAbstractQueryFilter *this)

{
  return false;
}

// IsEqual @ 146da4890

bool __thiscall
FAbstractQueryFilter::IsEqual(FAbstractQueryFilter *this,INavigationQueryFilterInterface *param_1)

{
  return true;
}

// Reset @ 146db79a0

void __thiscall FAbstractQueryFilter::Reset(FAbstractQueryFilter *this)

{
  return;
}

// SetAllAreaCosts @ 146db87f0

void __thiscall
FAbstractQueryFilter::SetAllAreaCosts(FAbstractQueryFilter *this,float *param_1,int param_2)

{
  return;
}

// SetAreaCost @ 146db8800

void __thiscall
FAbstractQueryFilter::SetAreaCost(FAbstractQueryFilter *this,uchar param_1,float param_2)

{
  return;
}

// SetBacktrackingEnabled @ 146db8810

void __thiscall
FAbstractQueryFilter::SetBacktrackingEnabled(FAbstractQueryFilter *this,bool param_1)

{
  return;
}

// SetExcludeFlags @ 146db8b00

void __thiscall FAbstractQueryFilter::SetExcludeFlags(FAbstractQueryFilter *this,ushort param_1)

{
  return;
}

// SetExcludedArea @ 146db8b10

void __thiscall FAbstractQueryFilter::SetExcludedArea(FAbstractQueryFilter *this,uchar param_1)

{
  return;
}

// SetFixedAreaEnteringCost @ 146db8b20

void __thiscall
FAbstractQueryFilter::SetFixedAreaEnteringCost
          (FAbstractQueryFilter *this,uchar param_1,float param_2)

{
  return;
}

// SetIncludeFlags @ 146db8e90

void __thiscall FAbstractQueryFilter::SetIncludeFlags(FAbstractQueryFilter *this,ushort param_1)

{
  return;
}

