// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// FNDIRigidMeshCollisionArrays @ 1491ab5b0

FNDIRigidMeshCollisionArrays * __thiscall
FNDIRigidMeshCollisionArrays::FNDIRigidMeshCollisionArrays
          (FNDIRigidMeshCollisionArrays *this,uint param_1)

{
  this->MaxPrimitives = param_1;
  (this->ElementOffsets).BoxOffset = 0;
  (this->ElementOffsets).SphereOffset = 0;
  (this->ElementOffsets).CapsuleOffset = 0;
  (this->ElementOffsets).NumElements = 0;
  (this->CurrentTransform).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentTransform).ArrayNum = 0;
  (this->CurrentTransform).ArrayMax = 0;
  (this->CurrentInverse).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentInverse).ArrayNum = 0;
  (this->CurrentInverse).ArrayMax = 0;
  (this->PreviousTransform).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreviousTransform).ArrayNum = 0;
  (this->PreviousTransform).ArrayMax = 0;
  (this->PreviousInverse).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreviousInverse).ArrayNum = 0;
  (this->PreviousInverse).ArrayMax = 0;
  (this->ElementExtent).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ElementExtent).ArrayNum = 0;
  (this->ElementExtent).ArrayMax = 0;
  (this->MeshScale).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshScale).ArrayNum = 0;
  (this->MeshScale).ArrayMax = 0;
  (this->PhysicsType).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PhysicsType).ArrayNum = 0;
  (this->PhysicsType).ArrayMax = 0;
  (this->ComponentIdIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComponentIdIndex).ArrayNum = 0;
  (this->ComponentIdIndex).ArrayMax = 0;
  (this->UniqueCompnentId).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UniqueCompnentId).ArrayNum = 0;
  (this->UniqueCompnentId).ArrayMax = 0;
  Reset(this);
  return this;
}

// Reset @ 1491decc0

void __thiscall FNDIRigidMeshCollisionArrays::Reset(FNDIRigidMeshCollisionArrays *this)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  TVector4<float>_u_0 local_78;
  TVector4<float>_u_0 local_68;
  TVector4<float>_u_0 local_58;
  TVector4<float>_u_0 local_48;
  TVector4<float>_u_0 local_38;
  TVector4<float>_u_0 local_28;
  
  uVar3 = this->MaxPrimitives;
  local_90 = 0;
  uStack_88 = 0;
  local_78._0_8_ = 0;
  local_78._8_8_ = 0;
  (this->ElementOffsets).BoxOffset = 0;
  (this->ElementOffsets).SphereOffset = 0;
  (this->ElementOffsets).CapsuleOffset = 0;
  (this->ElementOffsets).NumElements = 0;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>::Init
            (&this->CurrentTransform,(TVector4<float> *)&local_78._s_0,uVar3 * 3);
  local_68._0_8_ = 0;
  local_68._8_8_ = 0;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>::Init
            (&this->CurrentInverse,(TVector4<float> *)&local_68._s_0,this->MaxPrimitives * 3);
  local_58._0_8_ = 0;
  local_58._8_8_ = 0;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>::Init
            (&this->PreviousTransform,(TVector4<float> *)&local_58._s_0,this->MaxPrimitives * 3);
  local_48._0_8_ = 0;
  local_48._8_8_ = 0;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>::Init
            (&this->PreviousInverse,(TVector4<float> *)&local_48._s_0,this->MaxPrimitives * 3);
  local_38._0_8_ = 0;
  local_38._8_8_ = 0;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>::Init
            (&this->ElementExtent,(TVector4<float> *)&local_38._s_0,this->MaxPrimitives);
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>::Init
            (&this->MeshScale,(TVector4<float> *)&local_28._s_0,this->MaxPrimitives);
  uVar3 = this->MaxPrimitives;
  uVar8 = (ulonglong)uVar3;
  local_98 = 0;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar8);
  }
  piVar1 = &(this->PhysicsType).ArrayMax;
  (this->PhysicsType).ArrayNum = 0;
  if (*piVar1 != uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar3,&(this->PhysicsType).AllocatorInstance,0,piVar1);
  }
  if (0 < (int)uVar3) {
    do {
      pFVar4 = (this->PhysicsType).AllocatorInstance.Data;
      if (pFVar4 <= (FScriptContainerElement *)&local_98) {
        if ((FScriptContainerElement *)&local_98 < pFVar4 + (longlong)*piVar1 * 4) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
      }
      iVar7 = (this->PhysicsType).ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&(this->PhysicsType).AllocatorInstance,piVar1);
      }
      (this->PhysicsType).ArrayNum = iVar7 + 1;
      *(undefined4 *)((this->PhysicsType).AllocatorInstance.Data + (longlong)iVar7 * 4) = local_98;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  uVar3 = this->MaxPrimitives;
  uVar8 = (ulonglong)uVar3;
  pTVar2 = &this->ComponentIdIndex;
  local_94 = 0xffffffff;
  if (-1 < (int)uVar3) {
    piVar1 = &(this->ComponentIdIndex).ArrayMax;
    (this->ComponentIdIndex).ArrayNum = 0;
    if (*piVar1 != uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar3,&pTVar2->AllocatorInstance,0,piVar1);
    }
    if (0 < (int)uVar3) {
      do {
        pFVar4 = (pTVar2->AllocatorInstance).Data;
        if (pFVar4 <= (FScriptContainerElement *)&local_94) {
          if ((FScriptContainerElement *)&local_94 < pFVar4 + (longlong)*piVar1 * 4) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
        }
        iVar7 = (this->ComponentIdIndex).ArrayNum;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&pTVar2->AllocatorInstance,piVar1);
        }
        (this->ComponentIdIndex).ArrayNum = iVar7 + 1;
        *(undefined4 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_94;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    (this->UniqueCompnentId).ArrayNum = 0;
    if ((this->UniqueCompnentId).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->UniqueCompnentId).AllocatorInstance,0,
                 &(this->UniqueCompnentId).ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum(uVar8);
}

