// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 28

// ~ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> @ 148251af0

void __thiscall
Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>::
~ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>
          (ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *this)

{
  return;
}

// CacheOverlappingLeaves @ 148269fb0

void __thiscall
Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>::CacheOverlappingLeaves
          (ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *this)

{
  return;
}

// ClearShouldRebuild @ 14826de60

void __thiscall
Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>::ClearShouldRebuild
          (ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *this)

{
  return;
}

// Copy @ 148270a60

TUniquePtr<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>_>
 __thiscall
Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>::Copy
          (ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *this)

{
  code *pcVar1;
  bool bVar2;
  TUniquePtr<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>_>
  TVar3;
  ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *in_RDX;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                     ,0x154,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    TVar3.Ptr = (ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *)(*pcVar1)();
    return (TUniquePtr<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>_>
            )TVar3.Ptr;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>_>_>
          )in_RDX;
}

// DebugDraw @ 1482778f0

void __thiscall
Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>::DebugDraw
          (ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *this,
          ISpacialDebugDrawInterface<double> *param_1)

{
  return;
}

// DebugDrawLeaf @ 1482789b0

void __thiscall
Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>::DebugDrawLeaf
          (ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *this,
          ISpacialDebugDrawInterface<double> *param_1,FLinearColor *param_2,float param_3)

{
  return;
}

// DeepAssign @ 148279050

void __thiscall
Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>::DeepAssign
          (ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *this,
          ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *param_1)

{
  this->Type = param_1->Type;
  this->SyncTimestamp = param_1->SyncTimestamp;
  this->AsyncTimeSlicingComplete = param_1->AsyncTimeSlicingComplete;
  return;
}

// DumpStats @ 14827b750

void __thiscall
Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>::DumpStats
          (ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *this)

{
  return;
}

// DumpStatsTo @ 14827b7a0

void __thiscall
Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>::DumpStatsTo
          (ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *this,
          FOutputDevice *param_1)

{
  return;
}

// FindAllIntersections @ 14827fca0

TArray<FExternalSpatialAccelerationPayload,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>::FindAllIntersections
          (ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *this,
          TArray<FExternalSpatialAccelerationPayload,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,TAABB<double,3> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TArray<FExternalSpatialAccelerationPayload,TSizedDefaultAllocator<32>_> *pTVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                     ,0x127,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TArray<FExternalSpatialAccelerationPayload,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar3;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// IsAsyncTimeSlicingComplete @ 148294950

bool __thiscall
Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>::
IsAsyncTimeSlicingComplete(ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *this)

{
  return this->AsyncTimeSlicingComplete;
}

// IsTreeDynamic @ 148295130

bool __thiscall
Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>::IsTreeDynamic
          (ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *this)

{
  return false;
}

// NeedUpdateElement @ 148296c30

bool __thiscall
Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>::NeedUpdateElement
          (ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *this,
          FExternalSpatialAccelerationPayload *param_1,TAABB<double,3> *param_2)

{
  return true;
}

// NeedUpdateElementIn @ 148296f80

bool __thiscall
Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>::NeedUpdateElementIn
          (ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *this,
          FExternalSpatialAccelerationPayload *param_1,TAABB<double,3> *param_2,
          FSpatialAccelerationIdx param_3)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000148296f83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x78))();
  return (bool)uVar1;
}

// Overlap @ 148299420

void __thiscall
Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>::Overlap
          (ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *this,
          TAABB<double,3> *param_1,
          ISpatialVisitor<FExternalSpatialAccelerationPayload,double> *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                     ,0x12a,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// PrepareCopyTimeSliced @ 14829c320

void __thiscall
Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>::PrepareCopyTimeSliced
          (ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *this,
          ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                     ,0x120,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// ProgressAsyncTimeSlicing @ 14829dd10

void __thiscall
Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>::ProgressAsyncTimeSlicing
          (ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *this,bool param_1)

{
  return;
}

// ProgressCopyTimeSliced @ 14829dff0

void __thiscall
Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>::ProgressCopyTimeSliced
          (ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *this,
          ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                     ,0x121,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// Raycast @ 14829e9d0

void __thiscall
Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>::Raycast
          (ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *this,
          TVector<double,3> *param_1,TVector<double,3> *param_2,double param_3,
          ISpatialVisitor<FExternalSpatialAccelerationPayload,double> *param_4)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                     ,0x128,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// RemoveElement @ 1482a3070

bool __thiscall
Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>::RemoveElement
          (ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *this,
          FExternalSpatialAccelerationPayload *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                     ,0x134,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return true;
}

// RemoveElementFrom @ 1482a4170

bool __thiscall
Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>::RemoveElementFrom
          (ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *this,
          FExternalSpatialAccelerationPayload *param_1,FSpatialAccelerationIdx param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001482a4173. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x70))();
  return (bool)uVar1;
}

// Reset @ 1482a6610

void __thiscall
Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>::Reset
          (ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                     ,0x12e,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// Serialize @ 1482a8760

void __thiscall
Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>::Serialize
          (ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *this,
          FChaosArchive *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                     ,0x17b,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// SetAsyncTimeSlicingComplete @ 1482aa2e0

void __thiscall
Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>::
SetAsyncTimeSlicingComplete
          (ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *this,bool param_1)

{
  this->AsyncTimeSlicingComplete = param_1;
  return;
}

// ShouldRebuild @ 1482af300

bool __thiscall
Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>::ShouldRebuild
          (ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *this)

{
  return true;
}

// Sweep @ 1482b1e20

void __thiscall
Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>::Sweep
          (ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *this,
          TVector<double,3> *param_1,TVector<double,3> *param_2,double param_3,
          TVector<double,3> *param_4,
          ISpatialVisitor<FExternalSpatialAccelerationPayload,double> *param_5)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                     ,0x129,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// UpdateElement @ 1482b79b0

bool __thiscall
Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>::UpdateElement
          (ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *this,
          FExternalSpatialAccelerationPayload *param_1,TAABB<double,3> *param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                     ,0x13f,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return true;
}

// UpdateElementIn @ 1482ba2e0

bool __thiscall
Chaos::ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3>::UpdateElementIn
          (ISpatialAcceleration<FExternalSpatialAccelerationPayload,double,3> *this,
          FExternalSpatialAccelerationPayload *param_1,TAABB<double,3> *param_2,bool param_3,
          FSpatialAccelerationIdx param_4)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001482ba2e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x80))();
  return (bool)uVar1;
}

