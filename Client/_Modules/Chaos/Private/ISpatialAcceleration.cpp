// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 155

// ~ISpatialAcceleration<int,double,3> @ 14373d710

void __thiscall
Chaos::ISpatialAcceleration<int,double,3>::~ISpatialAcceleration<int,double,3>
          (ISpatialAcceleration<int,double,3> *this)

{
  return;
}

// ~ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3> @ 14373d720

void __thiscall
Chaos::ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3>::
~ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3>
          (ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3> *this)

{
  return;
}

// ~ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3> @ 14373d730

void __thiscall
Chaos::ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3>::
~ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3>
          (ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3> *this)

{
  return;
}

// ~ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> @ 14373d740

void __thiscall
Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>::
~ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>
          (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *this)

{
  return;
}

// CacheOverlappingLeaves @ 1437593f0

void __thiscall
Chaos::ISpatialAcceleration<int,double,3>::CacheOverlappingLeaves
          (ISpatialAcceleration<int,double,3> *this)

{
  return;
}

// CacheOverlappingLeaves @ 143759400

void __thiscall
Chaos::ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3>::
CacheOverlappingLeaves
          (ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3> *this)

{
  return;
}

// CacheOverlappingLeaves @ 143759410

void __thiscall
Chaos::ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3>::
CacheOverlappingLeaves
          (ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3> *this)

{
  return;
}

// CacheOverlappingLeaves @ 143759420

void __thiscall
Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>::CacheOverlappingLeaves
          (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *this)

{
  return;
}

// ClearShouldRebuild @ 143759940

void __thiscall
Chaos::ISpatialAcceleration<int,double,3>::ClearShouldRebuild
          (ISpatialAcceleration<int,double,3> *this)

{
  return;
}

// ClearShouldRebuild @ 143759950

void __thiscall
Chaos::ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3>::
ClearShouldRebuild(ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3>
                   *this)

{
  return;
}

// ClearShouldRebuild @ 143759960

void __thiscall
Chaos::ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3>::
ClearShouldRebuild(ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3>
                   *this)

{
  return;
}

// ClearShouldRebuild @ 143759970

void __thiscall
Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>::ClearShouldRebuild
          (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *this)

{
  return;
}

// Copy @ 14375b630

TUniquePtr<Chaos::ISpatialAcceleration<int,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<int,double,3>_>_>
 __thiscall
Chaos::ISpatialAcceleration<int,double,3>::Copy(ISpatialAcceleration<int,double,3> *this)

{
  code *pcVar1;
  bool bVar2;
  TUniquePtr<Chaos::ISpatialAcceleration<int,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<int,double,3>_>_>
  TVar3;
  ISpatialAcceleration<int,double,3> *in_RDX;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                     ,0x154,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    TVar3.Ptr = (ISpatialAcceleration<int,double,3> *)(*pcVar1)();
    return (TUniquePtr<Chaos::ISpatialAcceleration<int,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<int,double,3>_>_>
            )TVar3.Ptr;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<Chaos::ISpatialAcceleration<int,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<int,double,3>_>_>
          )in_RDX;
}

// Copy @ 14375b680

TUniquePtr<Chaos::ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3>_>_>
 __thiscall
Chaos::ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3>::Copy
          (ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3> *this)

{
  code *pcVar1;
  bool bVar2;
  TUniquePtr<Chaos::ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3>_>_>
  TVar3;
  ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3> *in_RDX;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                     ,0x154,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    TVar3.Ptr = (ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3> *)
                (*pcVar1)();
    return (TUniquePtr<Chaos::ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3>_>_>
            )TVar3.Ptr;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<Chaos::ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3>_>_>
          )in_RDX;
}

// Copy @ 14375b6d0

TUniquePtr<Chaos::ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3>_>_>
 __thiscall
Chaos::ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3>::Copy
          (ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3> *this)

{
  code *pcVar1;
  bool bVar2;
  TUniquePtr<Chaos::ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3>_>_>
  TVar3;
  ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3> *in_RDX;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                     ,0x154,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    TVar3.Ptr = (ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3> *)
                (*pcVar1)();
    return (TUniquePtr<Chaos::ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3>_>_>
            )TVar3.Ptr;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<Chaos::ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3>_>_>
          )in_RDX;
}

// Copy @ 14375b720

TUniquePtr<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
 __thiscall
Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>::Copy
          (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *this)

{
  code *pcVar1;
  bool bVar2;
  TUniquePtr<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
  TVar3;
  ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *in_RDX;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                     ,0x154,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    TVar3.Ptr = (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)(*pcVar1)();
    return (TUniquePtr<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
            )TVar3.Ptr;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
          )in_RDX;
}

// DebugDraw @ 14375c590

void __thiscall
Chaos::ISpatialAcceleration<int,double,3>::DebugDraw
          (ISpatialAcceleration<int,double,3> *this,ISpacialDebugDrawInterface<double> *param_1)

{
  return;
}

// DebugDraw @ 14375c5a0

void __thiscall
Chaos::ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3>::DebugDraw
          (ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3> *this,
          ISpacialDebugDrawInterface<double> *param_1)

{
  return;
}

// DebugDraw @ 14375c5b0

void __thiscall
Chaos::ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3>::DebugDraw
          (ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3> *this,
          ISpacialDebugDrawInterface<double> *param_1)

{
  return;
}

// DebugDraw @ 14375c5c0

void __thiscall
Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>::DebugDraw
          (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *this,
          ISpacialDebugDrawInterface<double> *param_1)

{
  return;
}

// DebugDrawLeaf @ 14375c780

void __thiscall
Chaos::ISpatialAcceleration<int,double,3>::DebugDrawLeaf
          (ISpatialAcceleration<int,double,3> *this,ISpacialDebugDrawInterface<double> *param_1,
          FLinearColor *param_2,float param_3)

{
  return;
}

// DebugDrawLeaf @ 14375c790

void __thiscall
Chaos::ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3>::DebugDrawLeaf
          (ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3> *this,
          ISpacialDebugDrawInterface<double> *param_1,FLinearColor *param_2,float param_3)

{
  return;
}

// DebugDrawLeaf @ 14375c7a0

void __thiscall
Chaos::ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3>::DebugDrawLeaf
          (ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3> *this,
          ISpacialDebugDrawInterface<double> *param_1,FLinearColor *param_2,float param_3)

{
  return;
}

// DebugDrawLeaf @ 14375c7b0

void __thiscall
Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>::DebugDrawLeaf
          (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *this,
          ISpacialDebugDrawInterface<double> *param_1,FLinearColor *param_2,float param_3)

{
  return;
}

// DeepAssign @ 14375c7c0

void __thiscall
Chaos::ISpatialAcceleration<int,double,3>::DeepAssign
          (ISpatialAcceleration<int,double,3> *this,ISpatialAcceleration<int,double,3> *param_1)

{
  this->Type = param_1->Type;
  this->SyncTimestamp = param_1->SyncTimestamp;
  this->AsyncTimeSlicingComplete = param_1->AsyncTimeSlicingComplete;
  return;
}

// DeepAssign @ 14375c7e0

void __thiscall
Chaos::ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3>::DeepAssign
          (ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3> *this,
          ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3> *param_1)

{
  this->Type = param_1->Type;
  this->SyncTimestamp = param_1->SyncTimestamp;
  this->AsyncTimeSlicingComplete = param_1->AsyncTimeSlicingComplete;
  return;
}

// DeepAssign @ 14375c800

void __thiscall
Chaos::ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3>::DeepAssign
          (ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3> *this,
          ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3> *param_1)

{
  this->Type = param_1->Type;
  this->SyncTimestamp = param_1->SyncTimestamp;
  this->AsyncTimeSlicingComplete = param_1->AsyncTimeSlicingComplete;
  return;
}

// DeepAssign @ 14375c820

void __thiscall
Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>::DeepAssign
          (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *this,
          ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *param_1)

{
  this->Type = param_1->Type;
  this->SyncTimestamp = param_1->SyncTimestamp;
  this->AsyncTimeSlicingComplete = param_1->AsyncTimeSlicingComplete;
  return;
}

// DumpStats @ 14376ec80

void __thiscall
Chaos::ISpatialAcceleration<int,double,3>::DumpStats(ISpatialAcceleration<int,double,3> *this)

{
  return;
}

// DumpStats @ 14376ec90

void __thiscall
Chaos::ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3>::DumpStats
          (ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3> *this)

{
  return;
}

// DumpStats @ 14376eca0

void __thiscall
Chaos::ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3>::DumpStats
          (ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3> *this)

{
  return;
}

// DumpStats @ 14376ecb0

void __thiscall
Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>::DumpStats
          (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *this)

{
  return;
}

// DumpStatsTo @ 14376ecc0

void __thiscall
Chaos::ISpatialAcceleration<int,double,3>::DumpStatsTo
          (ISpatialAcceleration<int,double,3> *this,FOutputDevice *param_1)

{
  return;
}

// DumpStatsTo @ 14376ecd0

void __thiscall
Chaos::ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3>::DumpStatsTo
          (ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3> *this,
          FOutputDevice *param_1)

{
  return;
}

// DumpStatsTo @ 14376ece0

void __thiscall
Chaos::ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3>::DumpStatsTo
          (ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3> *this,
          FOutputDevice *param_1)

{
  return;
}

// DumpStatsTo @ 14376ecf0

void __thiscall
Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>::DumpStatsTo
          (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *this,
          FOutputDevice *param_1)

{
  return;
}

// FindAllIntersections @ 14376fea0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::ISpatialAcceleration<int,double,3>::FindAllIntersections
          (ISpatialAcceleration<int,double,3> *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,TAABB<double,3> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                     ,0x127,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar3;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// FindAllIntersections @ 14376fef0

TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3>::
FindAllIntersections
          (ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3> *this,
          TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,TAABB<double,3> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                     ,0x127,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
             (*pcVar1)();
    return pTVar3;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// FindAllIntersections @ 14376ff40

TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3>::
FindAllIntersections
          (ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3> *this,
          TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,TAABB<double,3> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                     ,0x127,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
             (*pcVar1)();
    return pTVar3;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// FindAllIntersections @ 14376ff90

TArray<Chaos::FAccelerationStructureHandle,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>::FindAllIntersections
          (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *this,
          TArray<Chaos::FAccelerationStructureHandle,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,TAABB<double,3> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TArray<Chaos::FAccelerationStructureHandle,TSizedDefaultAllocator<32>_> *pTVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                     ,0x127,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TArray<Chaos::FAccelerationStructureHandle,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar3;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// IsAsyncTimeSlicingComplete @ 1437972b0

bool __thiscall
Chaos::ISpatialAcceleration<int,double,3>::IsAsyncTimeSlicingComplete
          (ISpatialAcceleration<int,double,3> *this)

{
  return this->AsyncTimeSlicingComplete;
}

// IsAsyncTimeSlicingComplete @ 1437972c0

bool __thiscall
Chaos::ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3>::
IsAsyncTimeSlicingComplete
          (ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3> *this)

{
  return this->AsyncTimeSlicingComplete;
}

// IsAsyncTimeSlicingComplete @ 1437972d0

bool __thiscall
Chaos::ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3>::
IsAsyncTimeSlicingComplete
          (ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3> *this)

{
  return this->AsyncTimeSlicingComplete;
}

// IsAsyncTimeSlicingComplete @ 1437972e0

bool __thiscall
Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>::
IsAsyncTimeSlicingComplete(ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *this)

{
  return this->AsyncTimeSlicingComplete;
}

// IsTreeDynamic @ 1437983e0

bool __thiscall
Chaos::ISpatialAcceleration<int,double,3>::IsTreeDynamic(ISpatialAcceleration<int,double,3> *this)

{
  return false;
}

// IsTreeDynamic @ 1437983f0

bool __thiscall
Chaos::ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3>::IsTreeDynamic
          (ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3> *this)

{
  return false;
}

// IsTreeDynamic @ 143798400

bool __thiscall
Chaos::ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3>::IsTreeDynamic
          (ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3> *this)

{
  return false;
}

// IsTreeDynamic @ 143798410

bool __thiscall
Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>::IsTreeDynamic
          (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *this)

{
  return false;
}

// NeedUpdateElement @ 14379ab50

bool __thiscall
Chaos::ISpatialAcceleration<int,double,3>::NeedUpdateElement
          (ISpatialAcceleration<int,double,3> *this,int *param_1,TAABB<double,3> *param_2)

{
  return true;
}

// NeedUpdateElement @ 14379ab60

bool __thiscall
Chaos::ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3>::
NeedUpdateElement(ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3>
                  *this,TGeometryParticleHandleImp<double,3,1> **param_1,TAABB<double,3> *param_2)

{
  return true;
}

// NeedUpdateElement @ 14379ab70

bool __thiscall
Chaos::ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3>::
NeedUpdateElement(ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3>
                  *this,TPBDRigidParticleHandleImp<double,3,1> **param_1,TAABB<double,3> *param_2)

{
  return true;
}

// NeedUpdateElement @ 14379ab80

bool __thiscall
Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>::NeedUpdateElement
          (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *this,
          FAccelerationStructureHandle *param_1,TAABB<double,3> *param_2)

{
  return true;
}

// NeedUpdateElementIn @ 14379ab90

bool __thiscall
Chaos::ISpatialAcceleration<int,double,3>::NeedUpdateElementIn
          (ISpatialAcceleration<int,double,3> *this,int *param_1,TAABB<double,3> *param_2,
          FSpatialAccelerationIdx param_3)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014379ab93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x78))();
  return (bool)uVar1;
}

// NeedUpdateElementIn @ 14379aba0

bool __thiscall
Chaos::ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3>::
NeedUpdateElementIn(ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3>
                    *this,TGeometryParticleHandleImp<double,3,1> **param_1,TAABB<double,3> *param_2,
                   FSpatialAccelerationIdx param_3)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014379aba3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x78))();
  return (bool)uVar1;
}

// NeedUpdateElementIn @ 14379abb0

bool __thiscall
Chaos::ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3>::
NeedUpdateElementIn(ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3>
                    *this,TPBDRigidParticleHandleImp<double,3,1> **param_1,TAABB<double,3> *param_2,
                   FSpatialAccelerationIdx param_3)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014379abb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x78))();
  return (bool)uVar1;
}

// NeedUpdateElementIn @ 14379abc0

bool __thiscall
Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>::NeedUpdateElementIn
          (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *this,
          FAccelerationStructureHandle *param_1,TAABB<double,3> *param_2,
          FSpatialAccelerationIdx param_3)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014379abc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x78))();
  return (bool)uVar1;
}

// Overlap @ 14379ad60

void __thiscall
Chaos::ISpatialAcceleration<int,double,3>::Overlap
          (ISpatialAcceleration<int,double,3> *this,TAABB<double,3> *param_1,
          ISpatialVisitor<int,double> *param_2)

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

// Overlap @ 14379ada0

void __thiscall
Chaos::ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3>::Overlap
          (ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3> *this,
          TAABB<double,3> *param_1,
          ISpatialVisitor<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double> *param_2)

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

// Overlap @ 14379ade0

void __thiscall
Chaos::ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3>::Overlap
          (ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3> *this,
          TAABB<double,3> *param_1,
          ISpatialVisitor<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double> *param_2)

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

// Overlap @ 14379ae20

void __thiscall
Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>::Overlap
          (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *this,
          TAABB<double,3> *param_1,
          ISpatialVisitor<Chaos::FAccelerationStructureHandle,double> *param_2)

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

// PrepareCopyTimeSliced @ 14379d8e0

void __thiscall
Chaos::ISpatialAcceleration<int,double,3>::PrepareCopyTimeSliced
          (ISpatialAcceleration<int,double,3> *this,ISpatialAcceleration<int,double,3> *param_1)

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

// PrepareCopyTimeSliced @ 14379d920

void __thiscall
Chaos::ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3>::
PrepareCopyTimeSliced
          (ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3> *this,
          ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3> *param_1)

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

// PrepareCopyTimeSliced @ 14379d960

void __thiscall
Chaos::ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3>::
PrepareCopyTimeSliced
          (ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3> *this,
          ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3> *param_1)

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

// PrepareCopyTimeSliced @ 14379d9a0

void __thiscall
Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>::PrepareCopyTimeSliced
          (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *this,
          ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *param_1)

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

// ProgressAsyncTimeSlicing @ 14379eac0

void __thiscall
Chaos::ISpatialAcceleration<int,double,3>::ProgressAsyncTimeSlicing
          (ISpatialAcceleration<int,double,3> *this,bool param_1)

{
  return;
}

// ProgressAsyncTimeSlicing @ 14379ead0

void __thiscall
Chaos::ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3>::
ProgressAsyncTimeSlicing
          (ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3> *this,
          bool param_1)

{
  return;
}

// ProgressAsyncTimeSlicing @ 14379eae0

void __thiscall
Chaos::ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3>::
ProgressAsyncTimeSlicing
          (ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3> *this,
          bool param_1)

{
  return;
}

// ProgressAsyncTimeSlicing @ 14379eaf0

void __thiscall
Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>::ProgressAsyncTimeSlicing
          (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *this,bool param_1)

{
  return;
}

// ProgressCopyTimeSliced @ 14379eb00

void __thiscall
Chaos::ISpatialAcceleration<int,double,3>::ProgressCopyTimeSliced
          (ISpatialAcceleration<int,double,3> *this,ISpatialAcceleration<int,double,3> *param_1,
          int param_2)

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

// ProgressCopyTimeSliced @ 14379eb40

void __thiscall
Chaos::ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3>::
ProgressCopyTimeSliced
          (ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3> *this,
          ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3> *param_1,
          int param_2)

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

// ProgressCopyTimeSliced @ 14379eb80

void __thiscall
Chaos::ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3>::
ProgressCopyTimeSliced
          (ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3> *this,
          ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3> *param_1,
          int param_2)

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

// ProgressCopyTimeSliced @ 14379ebc0

void __thiscall
Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>::ProgressCopyTimeSliced
          (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *this,
          ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *param_1,int param_2)

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

// Raycast @ 1437a0020

void __thiscall
Chaos::ISpatialAcceleration<int,double,3>::Raycast
          (ISpatialAcceleration<int,double,3> *this,TVector<double,3> *param_1,
          TVector<double,3> *param_2,double param_3,ISpatialVisitor<int,double> *param_4)

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

// Raycast @ 1437a0060

void __thiscall
Chaos::ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3>::Raycast
          (ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3> *this,
          TVector<double,3> *param_1,TVector<double,3> *param_2,double param_3,
          ISpatialVisitor<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double> *param_4)

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

// Raycast @ 1437a00a0

void __thiscall
Chaos::ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3>::Raycast
          (ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3> *this,
          TVector<double,3> *param_1,TVector<double,3> *param_2,double param_3,
          ISpatialVisitor<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double> *param_4)

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

// Raycast @ 1437a00e0

void __thiscall
Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>::Raycast
          (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *this,
          TVector<double,3> *param_1,TVector<double,3> *param_2,double param_3,
          ISpatialVisitor<Chaos::FAccelerationStructureHandle,double> *param_4)

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

// RemoveElement @ 1437a2d80

bool __thiscall
Chaos::ISpatialAcceleration<int,double,3>::RemoveElement
          (ISpatialAcceleration<int,double,3> *this,int *param_1)

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

// RemoveElement @ 1437a2dc0

bool __thiscall
Chaos::ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3>::RemoveElement
          (ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3> *this,
          TGeometryParticleHandleImp<double,3,1> **param_1)

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

// RemoveElement @ 1437a2e00

bool __thiscall
Chaos::ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3>::RemoveElement
          (ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3> *this,
          TPBDRigidParticleHandleImp<double,3,1> **param_1)

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

// RemoveElement @ 1437a2e40

bool __thiscall
Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>::RemoveElement
          (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *this,
          FAccelerationStructureHandle *param_1)

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

// RemoveElementFrom @ 1437a3be0

bool __thiscall
Chaos::ISpatialAcceleration<int,double,3>::RemoveElementFrom
          (ISpatialAcceleration<int,double,3> *this,int *param_1,FSpatialAccelerationIdx param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001437a3be3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x70))();
  return (bool)uVar1;
}

// RemoveElementFrom @ 1437a3bf0

bool __thiscall
Chaos::ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3>::
RemoveElementFrom(ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3>
                  *this,TGeometryParticleHandleImp<double,3,1> **param_1,
                 FSpatialAccelerationIdx param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001437a3bf3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x70))();
  return (bool)uVar1;
}

// RemoveElementFrom @ 1437a3c00

bool __thiscall
Chaos::ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3>::
RemoveElementFrom(ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3>
                  *this,TPBDRigidParticleHandleImp<double,3,1> **param_1,
                 FSpatialAccelerationIdx param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001437a3c03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x70))();
  return (bool)uVar1;
}

// RemoveElementFrom @ 1437a3c10

bool __thiscall
Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>::RemoveElementFrom
          (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *this,
          FAccelerationStructureHandle *param_1,FSpatialAccelerationIdx param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001437a3c13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x70))();
  return (bool)uVar1;
}

// Reset @ 1437a5e60

void __thiscall
Chaos::ISpatialAcceleration<int,double,3>::Reset(ISpatialAcceleration<int,double,3> *this)

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

// Reset @ 1437a5ea0

void __thiscall
Chaos::ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3>::Reset
          (ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3> *this)

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

// Reset @ 1437a5ee0

void __thiscall
Chaos::ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3>::Reset
          (ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3> *this)

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

// Reset @ 1437a5f20

void __thiscall
Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>::Reset
          (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *this)

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

// Serialize @ 1437a7bc0

void __thiscall
Chaos::ISpatialAcceleration<int,double,3>::Serialize
          (ISpatialAcceleration<int,double,3> *this,FChaosArchive *param_1)

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

// Serialize @ 1437a7c00

void __thiscall
Chaos::ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3>::Serialize
          (ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3> *this,
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

// Serialize @ 1437a7c40

void __thiscall
Chaos::ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3>::Serialize
          (ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3> *this,
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

// Serialize @ 1437a7c80

void __thiscall
Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>::Serialize
          (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *this,
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

// SetAsyncTimeSlicingComplete @ 1437ac750

void __thiscall
Chaos::ISpatialAcceleration<int,double,3>::SetAsyncTimeSlicingComplete
          (ISpatialAcceleration<int,double,3> *this,bool param_1)

{
  this->AsyncTimeSlicingComplete = param_1;
  return;
}

// SetAsyncTimeSlicingComplete @ 1437ac760

void __thiscall
Chaos::ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3>::
SetAsyncTimeSlicingComplete
          (ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3> *this,
          bool param_1)

{
  this->AsyncTimeSlicingComplete = param_1;
  return;
}

// SetAsyncTimeSlicingComplete @ 1437ac770

void __thiscall
Chaos::ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3>::
SetAsyncTimeSlicingComplete
          (ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3> *this,
          bool param_1)

{
  this->AsyncTimeSlicingComplete = param_1;
  return;
}

// SetAsyncTimeSlicingComplete @ 1437ac780

void __thiscall
Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>::
SetAsyncTimeSlicingComplete
          (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *this,bool param_1)

{
  this->AsyncTimeSlicingComplete = param_1;
  return;
}

// ShouldRebuild @ 1437b0d60

bool __thiscall
Chaos::ISpatialAcceleration<int,double,3>::ShouldRebuild(ISpatialAcceleration<int,double,3> *this)

{
  return true;
}

// ShouldRebuild @ 1437b0d70

bool __thiscall
Chaos::ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3>::ShouldRebuild
          (ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3> *this)

{
  return true;
}

// ShouldRebuild @ 1437b0d80

bool __thiscall
Chaos::ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3>::ShouldRebuild
          (ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3> *this)

{
  return true;
}

// ShouldRebuild @ 1437b0d90

bool __thiscall
Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>::ShouldRebuild
          (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *this)

{
  return true;
}

// Sweep @ 1437b1ab0

void __thiscall
Chaos::ISpatialAcceleration<int,double,3>::Sweep
          (ISpatialAcceleration<int,double,3> *this,TVector<double,3> *param_1,
          TVector<double,3> *param_2,double param_3,TVector<double,3> *param_4,
          ISpatialVisitor<int,double> *param_5)

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

// Sweep @ 1437b1af0

void __thiscall
Chaos::ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3>::Sweep
          (ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3> *this,
          TVector<double,3> *param_1,TVector<double,3> *param_2,double param_3,
          TVector<double,3> *param_4,
          ISpatialVisitor<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double> *param_5)

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

// Sweep @ 1437b1b30

void __thiscall
Chaos::ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3>::Sweep
          (ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3> *this,
          TVector<double,3> *param_1,TVector<double,3> *param_2,double param_3,
          TVector<double,3> *param_4,
          ISpatialVisitor<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double> *param_5)

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

// Sweep @ 1437b1b70

void __thiscall
Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>::Sweep
          (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *this,
          TVector<double,3> *param_1,TVector<double,3> *param_2,double param_3,
          TVector<double,3> *param_4,
          ISpatialVisitor<Chaos::FAccelerationStructureHandle,double> *param_5)

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

// UpdateElement @ 1437b8520

bool __thiscall
Chaos::ISpatialAcceleration<int,double,3>::UpdateElement
          (ISpatialAcceleration<int,double,3> *this,int *param_1,TAABB<double,3> *param_2,
          bool param_3)

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

// UpdateElement @ 1437b8560

bool __thiscall
Chaos::ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3>::UpdateElement
          (ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3> *this,
          TGeometryParticleHandleImp<double,3,1> **param_1,TAABB<double,3> *param_2,bool param_3)

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

// UpdateElement @ 1437b85a0

bool __thiscall
Chaos::ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3>::UpdateElement
          (ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3> *this,
          TPBDRigidParticleHandleImp<double,3,1> **param_1,TAABB<double,3> *param_2,bool param_3)

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

// UpdateElement @ 1437b85e0

bool __thiscall
Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>::UpdateElement
          (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *this,
          FAccelerationStructureHandle *param_1,TAABB<double,3> *param_2,bool param_3)

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

// UpdateElementIn @ 1437b9260

bool __thiscall
Chaos::ISpatialAcceleration<int,double,3>::UpdateElementIn
          (ISpatialAcceleration<int,double,3> *this,int *param_1,TAABB<double,3> *param_2,
          bool param_3,FSpatialAccelerationIdx param_4)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001437b9263. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x80))();
  return (bool)uVar1;
}

// UpdateElementIn @ 1437b9270

bool __thiscall
Chaos::ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3>::
UpdateElementIn(ISpatialAcceleration<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3> *this
               ,TGeometryParticleHandleImp<double,3,1> **param_1,TAABB<double,3> *param_2,
               bool param_3,FSpatialAccelerationIdx param_4)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001437b9273. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x80))();
  return (bool)uVar1;
}

// UpdateElementIn @ 1437b9280

bool __thiscall
Chaos::ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3>::
UpdateElementIn(ISpatialAcceleration<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3> *this
               ,TPBDRigidParticleHandleImp<double,3,1> **param_1,TAABB<double,3> *param_2,
               bool param_3,FSpatialAccelerationIdx param_4)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001437b9283. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x80))();
  return (bool)uVar1;
}

// UpdateElementIn @ 1437b9290

bool __thiscall
Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>::UpdateElementIn
          (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *this,
          FAccelerationStructureHandle *param_1,TAABB<double,3> *param_2,bool param_3,
          FSpatialAccelerationIdx param_4)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001437b9293. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x80))();
  return (bool)uVar1;
}

// ~ISpatialAcceleration<int,float,3> @ 143c44d00

void __thiscall
Chaos::ISpatialAcceleration<int,float,3>::~ISpatialAcceleration<int,float,3>
          (ISpatialAcceleration<int,float,3> *this)

{
  return;
}

// CacheOverlappingLeaves @ 143c5c310

void __thiscall
Chaos::ISpatialAcceleration<int,float,3>::CacheOverlappingLeaves
          (ISpatialAcceleration<int,float,3> *this)

{
  return;
}

// ClearShouldRebuild @ 143c5ecc0

void __thiscall
Chaos::ISpatialAcceleration<int,float,3>::ClearShouldRebuild
          (ISpatialAcceleration<int,float,3> *this)

{
  return;
}

// Copy @ 143c63150

TUniquePtr<Chaos::ISpatialAcceleration<int,float,3>,TDefaultDelete<Chaos::ISpatialAcceleration<int,float,3>_>_>
 __thiscall Chaos::ISpatialAcceleration<int,float,3>::Copy(ISpatialAcceleration<int,float,3> *this)

{
  code *pcVar1;
  bool bVar2;
  TUniquePtr<Chaos::ISpatialAcceleration<int,float,3>,TDefaultDelete<Chaos::ISpatialAcceleration<int,float,3>_>_>
  TVar3;
  ISpatialAcceleration<int,float,3> *in_RDX;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                     ,0x154,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    TVar3.Ptr = (ISpatialAcceleration<int,float,3> *)(*pcVar1)();
    return (TUniquePtr<Chaos::ISpatialAcceleration<int,float,3>,TDefaultDelete<Chaos::ISpatialAcceleration<int,float,3>_>_>
            )TVar3.Ptr;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<Chaos::ISpatialAcceleration<int,float,3>,TDefaultDelete<Chaos::ISpatialAcceleration<int,float,3>_>_>
          )in_RDX;
}

// DebugDraw @ 143c63a60

void __thiscall
Chaos::ISpatialAcceleration<int,float,3>::DebugDraw
          (ISpatialAcceleration<int,float,3> *this,ISpacialDebugDrawInterface<float> *param_1)

{
  return;
}

// DebugDrawLeaf @ 143c63e00

void __thiscall
Chaos::ISpatialAcceleration<int,float,3>::DebugDrawLeaf
          (ISpatialAcceleration<int,float,3> *this,ISpacialDebugDrawInterface<float> *param_1,
          FLinearColor *param_2,float param_3)

{
  return;
}

// DeepAssign @ 143c64420

void __thiscall
Chaos::ISpatialAcceleration<int,float,3>::DeepAssign
          (ISpatialAcceleration<int,float,3> *this,ISpatialAcceleration<int,float,3> *param_1)

{
  this->Type = param_1->Type;
  this->SyncTimestamp = param_1->SyncTimestamp;
  this->AsyncTimeSlicingComplete = param_1->AsyncTimeSlicingComplete;
  return;
}

// DumpStats @ 143c653f0

void __thiscall
Chaos::ISpatialAcceleration<int,float,3>::DumpStats(ISpatialAcceleration<int,float,3> *this)

{
  return;
}

// DumpStatsTo @ 143c65440

void __thiscall
Chaos::ISpatialAcceleration<int,float,3>::DumpStatsTo
          (ISpatialAcceleration<int,float,3> *this,FOutputDevice *param_1)

{
  return;
}

// FindAllIntersections @ 143c664c0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::ISpatialAcceleration<int,float,3>::FindAllIntersections
          (ISpatialAcceleration<int,float,3> *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,TAABB<double,3> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                     ,0x127,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar3;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// IsAsyncTimeSlicingComplete @ 143c6aec0

bool __thiscall
Chaos::ISpatialAcceleration<int,float,3>::IsAsyncTimeSlicingComplete
          (ISpatialAcceleration<int,float,3> *this)

{
  return this->AsyncTimeSlicingComplete;
}

// IsTreeDynamic @ 143c6b8b0

bool __thiscall
Chaos::ISpatialAcceleration<int,float,3>::IsTreeDynamic(ISpatialAcceleration<int,float,3> *this)

{
  return false;
}

// NeedUpdateElement @ 143c6b980

bool __thiscall
Chaos::ISpatialAcceleration<int,float,3>::NeedUpdateElement
          (ISpatialAcceleration<int,float,3> *this,int *param_1,TAABB<float,3> *param_2)

{
  return true;
}

// NeedUpdateElementIn @ 143c6bb40

bool __thiscall
Chaos::ISpatialAcceleration<int,float,3>::NeedUpdateElementIn
          (ISpatialAcceleration<int,float,3> *this,int *param_1,TAABB<float,3> *param_2,
          FSpatialAccelerationIdx param_3)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143c6bb43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x78))();
  return (bool)uVar1;
}

// Overlap @ 143c6bcc0

void __thiscall
Chaos::ISpatialAcceleration<int,float,3>::Overlap
          (ISpatialAcceleration<int,float,3> *this,TAABB<double,3> *param_1,
          ISpatialVisitor<int,double> *param_2)

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

// PrepareCopyTimeSliced @ 143c6c040

void __thiscall
Chaos::ISpatialAcceleration<int,float,3>::PrepareCopyTimeSliced
          (ISpatialAcceleration<int,float,3> *this,ISpatialAcceleration<int,float,3> *param_1)

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

// ProgressAsyncTimeSlicing @ 143c6c7f0

void __thiscall
Chaos::ISpatialAcceleration<int,float,3>::ProgressAsyncTimeSlicing
          (ISpatialAcceleration<int,float,3> *this,bool param_1)

{
  return;
}

// ProgressCopyTimeSliced @ 143c6cad0

void __thiscall
Chaos::ISpatialAcceleration<int,float,3>::ProgressCopyTimeSliced
          (ISpatialAcceleration<int,float,3> *this,ISpatialAcceleration<int,float,3> *param_1,
          int param_2)

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

// Raycast @ 143c6d900

void __thiscall
Chaos::ISpatialAcceleration<int,float,3>::Raycast
          (ISpatialAcceleration<int,float,3> *this,TVector<double,3> *param_1,
          TVector<double,3> *param_2,double param_3,ISpatialVisitor<int,double> *param_4)

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

// RemoveElement @ 143c6e980

bool __thiscall
Chaos::ISpatialAcceleration<int,float,3>::RemoveElement
          (ISpatialAcceleration<int,float,3> *this,int *param_1)

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

// RemoveElementFrom @ 143c6fb70

bool __thiscall
Chaos::ISpatialAcceleration<int,float,3>::RemoveElementFrom
          (ISpatialAcceleration<int,float,3> *this,int *param_1,FSpatialAccelerationIdx param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143c6fb73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x70))();
  return (bool)uVar1;
}

// Reset @ 143c70930

void __thiscall
Chaos::ISpatialAcceleration<int,float,3>::Reset(ISpatialAcceleration<int,float,3> *this)

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

// Serialize @ 143c72850

void __thiscall
Chaos::ISpatialAcceleration<int,float,3>::Serialize
          (ISpatialAcceleration<int,float,3> *this,FChaosArchive *param_1)

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

// SetAsyncTimeSlicingComplete @ 143c73370

void __thiscall
Chaos::ISpatialAcceleration<int,float,3>::SetAsyncTimeSlicingComplete
          (ISpatialAcceleration<int,float,3> *this,bool param_1)

{
  this->AsyncTimeSlicingComplete = param_1;
  return;
}

// ShouldRebuild @ 143c76660

bool __thiscall
Chaos::ISpatialAcceleration<int,float,3>::ShouldRebuild(ISpatialAcceleration<int,float,3> *this)

{
  return true;
}

// Sweep @ 143c78b90

void __thiscall
Chaos::ISpatialAcceleration<int,float,3>::Sweep
          (ISpatialAcceleration<int,float,3> *this,TVector<double,3> *param_1,
          TVector<double,3> *param_2,double param_3,TVector<double,3> *param_4,
          ISpatialVisitor<int,double> *param_5)

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

// UpdateElement @ 143c7a5b0

bool __thiscall
Chaos::ISpatialAcceleration<int,float,3>::UpdateElement
          (ISpatialAcceleration<int,float,3> *this,int *param_1,TAABB<float,3> *param_2,bool param_3
          )

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

// UpdateElementIn @ 143c7ccc0

bool __thiscall
Chaos::ISpatialAcceleration<int,float,3>::UpdateElementIn
          (ISpatialAcceleration<int,float,3> *this,int *param_1,TAABB<float,3> *param_2,bool param_3
          ,FSpatialAccelerationIdx param_4)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143c7ccc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x80))();
  return (bool)uVar1;
}

// AsChecked<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_> @ 143cbb0d0

TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
* __thiscall
Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>::
AsChecked<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
          (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *this)

{
  code *pcVar1;
  bool bVar2;
  TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
  *pTVar3;
  
  if (this->Type != '\x01') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type == TConcrete::StaticType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                       ,399,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
                *)(*pcVar1)();
      return pTVar3;
    }
  }
  return (TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
          *)this;
}

// AsChecked<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_> @ 143cbb120

TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
* __thiscall
Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>::
AsChecked<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
          (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *this)

{
  code *pcVar1;
  bool bVar2;
  TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
  *pTVar3;
  
  if (this->Type != '\x02') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type == TConcrete::StaticType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                       ,399,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
                *)(*pcVar1)();
      return pTVar3;
    }
  }
  return (TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
          *)this;
}

// AsChecked<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_> @ 143cbb170

TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3> * __thiscall
Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>::
AsChecked<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
          (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *this)

{
  code *pcVar1;
  bool bVar2;
  TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3> *pTVar3;
  
  if (this->Type != '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type == TConcrete::StaticType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                       ,399,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return (TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3> *)this;
}

// ISpatialAcceleration<int,double,3> @ 143df7e40

ISpatialAcceleration<int,double,3> * __thiscall
Chaos::ISpatialAcceleration<int,double,3>::ISpatialAcceleration<int,double,3>
          (ISpatialAcceleration<int,double,3> *this,uchar param_1)

{
  this->SyncTimestamp = 0;
  this->_padding_ = (longlong)&___7__ISpatialAcceleration_HN_02_Chaos__6B_;
  this->AsyncTimeSlicingComplete = true;
  this->Type = param_1;
  return this;
}

// ISpatialAcceleration<int,double,3> @ 143df7e70

ISpatialAcceleration<int,double,3> * __thiscall
Chaos::ISpatialAcceleration<int,double,3>::ISpatialAcceleration<int,double,3>
          (ISpatialAcceleration<int,double,3> *this,ESpatialAcceleration param_1)

{
  this->SyncTimestamp = 0;
  this->_padding_ = (longlong)&___7__ISpatialAcceleration_HN_02_Chaos__6B_;
  this->AsyncTimeSlicingComplete = true;
  this->Type = param_1;
  return this;
}

// ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> @ 143df7ea0

ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> * __thiscall
Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>::
ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>
          (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *this,uchar param_1)

{
  this->SyncTimestamp = 0;
  this->_padding_ =
       (longlong)&___7__ISpatialAcceleration_VFAccelerationStructureHandle_Chaos__N_02_Chaos__6B_;
  this->AsyncTimeSlicingComplete = true;
  this->Type = param_1;
  return this;
}

// ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> @ 143df7ed0

ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> * __thiscall
Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>::
ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>
          (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *this,
          ESpatialAcceleration param_1)

{
  this->SyncTimestamp = 0;
  this->_padding_ =
       (longlong)&___7__ISpatialAcceleration_VFAccelerationStructureHandle_Chaos__N_02_Chaos__6B_;
  this->AsyncTimeSlicingComplete = true;
  this->Type = param_1;
  return this;
}

// GetSyncTimestamp @ 143e2cb40

int __thiscall
Chaos::ISpatialAcceleration<int,double,3>::GetSyncTimestamp
          (ISpatialAcceleration<int,double,3> *this)

{
  return this->SyncTimestamp;
}

// GetSyncTimestamp @ 143e2cb50

int __thiscall
Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>::GetSyncTimestamp
          (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *this)

{
  return this->SyncTimestamp;
}

// GetType @ 143e2cb60

uchar __thiscall
Chaos::ISpatialAcceleration<int,double,3>::GetType(ISpatialAcceleration<int,double,3> *this)

{
  return this->Type;
}

// GetType @ 143e2cb70

uchar __thiscall
Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>::GetType
          (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *this)

{
  return this->Type;
}

// SerializationFactory @ 143e4a3e0

ISpatialAcceleration<int,double,3> * __cdecl
Chaos::ISpatialAcceleration<int,double,3>::SerializationFactory
          (FChaosArchive *param_1,ISpatialAcceleration<int,double,3> *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ISpatialAcceleration<int,double,3> *pIVar5;
  TAABBTree<int,Chaos::TBoundingVolume<int,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
  *pTVar6;
  TAABBTree<int,Chaos::TAABBTreeLeafArray<int,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
  *pTVar7;
  uchar local_res18 [16];
  
  iVar4 = FArchiveState::CustomVer
                    ((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  if (3 < iVar4) {
    if ((param_1->_padding_ & 1) == 0) {
      local_res18[0] = param_2->Type;
    }
    else {
      local_res18[0] = '\0';
    }
    plVar1 = (longlong *)param_1->_padding_;
    if ((uchar *)plVar1[1] < (uchar *)*plVar1 + 1) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res18,1);
    }
    else {
      local_res18[0] = *(uchar *)*plVar1;
      *plVar1 = *plVar1 + 1;
    }
    if (local_res18[0] == '\0') {
      if ((param_1->_padding_ & 1) != 0) goto LAB_143e4a51a;
    }
    else if (local_res18[0] == '\x01') {
      if ((param_1->_padding_ & 1) != 0) {
        pTVar7 = ::operator_new(0x1d8);
        if (pTVar7 != (TAABBTree<int,Chaos::TAABBTreeLeafArray<int,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                       *)0x0) {
          pTVar7 = TAABBTree<int,Chaos::TAABBTreeLeafArray<int,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                   ::
                   TAABBTree<int,Chaos::TAABBTreeLeafArray<int,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                             (pTVar7);
          return (ISpatialAcceleration<int,double,3> *)pTVar7;
        }
      }
    }
    else if (local_res18[0] == '\x02') {
      if ((param_1->_padding_ & 1) != 0) {
        pTVar6 = ::operator_new(0x1d8);
        if (pTVar6 != (TAABBTree<int,Chaos::TBoundingVolume<int,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                       *)0x0) {
          pTVar6 = TAABBTree<int,Chaos::TBoundingVolume<int,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                   ::
                   TAABBTree<int,Chaos::TBoundingVolume<int,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<int>_>
                             (pTVar6);
          return (ISpatialAcceleration<int,double,3> *)pTVar6;
        }
      }
    }
    else {
      if (local_res18[0] == '\x03') {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                           ,0x174,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pIVar5 = (ISpatialAcceleration<int,double,3> *)(*pcVar2)();
          return pIVar5;
        }
      }
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                         ,0x175,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pIVar5 = (ISpatialAcceleration<int,double,3> *)(*pcVar2)();
        return pIVar5;
      }
    }
    return (ISpatialAcceleration<int,double,3> *)0x0;
  }
LAB_143e4a51a:
  pIVar5 = TSpatialAccelerationSerializationFactory<0,int,double,3>::Create();
  return pIVar5;
}

// SerializationFactory @ 143e4a530

ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> * __cdecl
Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>::SerializationFactory
          (FChaosArchive *param_1,
          ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *pIVar5;
  TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
  *pTVar6;
  TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
  *pTVar7;
  uchar local_res18 [16];
  
  iVar4 = FArchiveState::CustomVer
                    ((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  if (3 < iVar4) {
    if ((param_1->_padding_ & 1) == 0) {
      local_res18[0] = param_2->Type;
    }
    else {
      local_res18[0] = '\0';
    }
    plVar1 = (longlong *)param_1->_padding_;
    if ((uchar *)plVar1[1] < (uchar *)*plVar1 + 1) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res18,1);
    }
    else {
      local_res18[0] = *(uchar *)*plVar1;
      *plVar1 = *plVar1 + 1;
    }
    if (local_res18[0] == '\0') {
      if ((param_1->_padding_ & 1) != 0) goto LAB_143e4a66a;
    }
    else if (local_res18[0] == '\x01') {
      if ((param_1->_padding_ & 1) != 0) {
        pTVar7 = ::operator_new(0x1e0);
        if (pTVar7 != (TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
                       *)0x0) {
          pTVar7 = TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
                   ::
                   TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
                             (pTVar7);
          return (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)pTVar7;
        }
      }
    }
    else if (local_res18[0] == '\x02') {
      if ((param_1->_padding_ & 1) != 0) {
        pTVar6 = ::operator_new(0x1d8);
        if (pTVar6 != (TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
                       *)0x0) {
          pTVar6 = TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
                   ::
                   TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
                             (pTVar6);
          return (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)pTVar6;
        }
      }
    }
    else {
      if (local_res18[0] == '\x03') {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                           ,0x174,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pIVar5 = (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)(*pcVar2)()
          ;
          return pIVar5;
        }
      }
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ISpatialAcceleration.h"
                         ,0x175,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pIVar5 = (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)(*pcVar2)();
        return pIVar5;
      }
    }
    return (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)0x0;
  }
LAB_143e4a66a:
  pIVar5 = TSpatialAccelerationSerializationFactory<0,Chaos::FAccelerationStructureHandle,double,3>
           ::Create();
  return pIVar5;
}

// SetSyncTimestamp @ 143e4ecd0

void __thiscall
Chaos::ISpatialAcceleration<int,double,3>::SetSyncTimestamp
          (ISpatialAcceleration<int,double,3> *this,int param_1)

{
  this->SyncTimestamp = param_1;
  return;
}

// SetSyncTimestamp @ 143e4ece0

void __thiscall
Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>::SetSyncTimestamp
          (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *this,int param_1)

{
  this->SyncTimestamp = param_1;
  return;
}

