// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 56

// Clone @ 14ab6c4c0

TSharedPtr<UE::Mutable::Private::FPhysicsBody,1> * __thiscall
UE::Mutable::Private::FPhysicsBody::Clone
          (FPhysicsBody *this,
          TSharedPtr<UE::Mutable::Private::FPhysicsBody,1> *__return_storage_ptr__)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  FPhysicsBody *pFVar4;
  FPhysicsBodyAggregate *pFVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  TSharedRef<UE::Mutable::Private::FPhysicsBody,1> *pTVar9;
  TSharedPtr<UE::Mutable::Private::FPhysicsBody,1> *pTVar10;
  TArray<UE::Mutable::Private::FPhysicsBodyAggregate,TSizedDefaultAllocator<32>_> *pTVar11;
  TSharedRef<UE::Mutable::Private::FPhysicsBody,1> local_18;
  
  pTVar9 = MakeShared<UE::Mutable::Private::FPhysicsBody,1>(&local_18);
  __return_storage_ptr__->Object = pTVar9->Object;
  pTVar3 = (pTVar9->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  iVar2 = this->CustomId;
  if ((__return_storage_ptr__->Object == (FPhysicsBody *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar10 = (TSharedPtr<UE::Mutable::Private::FPhysicsBody,1> *)(*pcVar6)();
    return pTVar10;
  }
  __return_storage_ptr__->Object->CustomId = iVar2;
  if ((__return_storage_ptr__->Object == (FPhysicsBody *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar10 = (TSharedPtr<UE::Mutable::Private::FPhysicsBody,1> *)(*pcVar6)();
    return pTVar10;
  }
  pFVar4 = __return_storage_ptr__->Object;
  pTVar11 = &pFVar4->Bodies;
  if (pTVar11 != &this->Bodies) {
    DestructItems<UE::Mutable::Private::FPhysicsBodyAggregate,int>
              ((FPhysicsBodyAggregate *)(pTVar11->AllocatorInstance).Data,(pFVar4->Bodies).ArrayNum)
    ;
    iVar2 = (this->Bodies).ArrayNum;
    piVar1 = &(pFVar4->Bodies).ArrayMax;
    pFVar5 = (FPhysicsBodyAggregate *)(this->Bodies).AllocatorInstance.Data;
    (pFVar4->Bodies).ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,8,iVar2,*piVar1,&pTVar11->AllocatorInstance,iVar2,piVar1);
      ConstructItems<UE::Mutable::Private::FPhysicsBodyAggregate,UE::Mutable::Private::FPhysicsBodyAggregate,int>
                ((pTVar11->AllocatorInstance).Data,pFVar5,iVar2);
    }
  }
  if ((__return_storage_ptr__->Object == (FPhysicsBody *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar10 = (TSharedPtr<UE::Mutable::Private::FPhysicsBody,1> *)(*pcVar6)();
    return pTVar10;
  }
  TArray<UE::Mutable::Private::FBoneName,TSizedDefaultAllocator<32>_>::operator=
            (&__return_storage_ptr__->Object->BoneIds,&this->BoneIds);
  if ((__return_storage_ptr__->Object == (FPhysicsBody *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar10 = (TSharedPtr<UE::Mutable::Private::FPhysicsBody,1> *)(*pcVar6)();
    return pTVar10;
  }
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            (&__return_storage_ptr__->Object->BodiesCustomIds,&this->BodiesCustomIds);
  bVar7 = this->bBodiesModified;
  if ((__return_storage_ptr__->Object == (FPhysicsBody *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pTVar10 = (TSharedPtr<UE::Mutable::Private::FPhysicsBody,1> *)(*pcVar6)();
    return pTVar10;
  }
  __return_storage_ptr__->Object->bBodiesModified = bVar7;
  return __return_storage_ptr__;
}

// GetBodyBoneId @ 14ab70cc0

FBoneName * __thiscall
UE::Mutable::Private::FPhysicsBody::GetBodyBoneId(FPhysicsBody *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FBoneName *pFVar4;
  
  if ((param_1 < 0) || ((this->BoneIds).ArrayNum <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("BoneIds.IsValidIndex(B)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\PhysicsBody.cpp"
                       ,0xcb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBoneName *)(*pcVar1)();
      return pFVar4;
    }
  }
  uVar3 = 0;
  if (param_1 < (this->BoneIds).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBoneName *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FBoneName *)((this->BoneIds).AllocatorInstance.Data + (longlong)param_1 * 4);
}

// GetBodyCount @ 14ab70d60

int __thiscall UE::Mutable::Private::FPhysicsBody::GetBodyCount(FPhysicsBody *this)

{
  return (this->Bodies).ArrayNum;
}

// GetBodyCustomId @ 14ab70d70

int __thiscall UE::Mutable::Private::FPhysicsBody::GetBodyCustomId(FPhysicsBody *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  if ((param_1 < 0) || ((this->BodiesCustomIds).ArrayNum <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("B >= 0 && B < BodiesCustomIds.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\PhysicsBody.cpp"
                       ,0xd7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  uVar4 = 0;
  if (param_1 < (this->BodiesCustomIds).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return *(int *)((this->BodiesCustomIds).AllocatorInstance.Data + (longlong)param_1 * 4);
}

// GetBox @ 14ab711d0

void __thiscall
UE::Mutable::Private::FPhysicsBody::GetBox
          (FPhysicsBody *this,int param_1,int param_2,TVector<float> *param_3,TQuat<float> *param_4,
          TVector<float> *param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  uint uVar10;
  TArray<UE::Mutable::Private::FPhysicsBodyAggregate,TSizedDefaultAllocator<32>_> *pTVar11;
  uint uVar12;
  longlong lVar13;
  
  lVar13 = (longlong)param_2;
  if (((param_1 < 0) || ((this->Bodies).ArrayNum <= param_1)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("B >= 0 && B < Bodies.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\PhysicsBody.cpp"
                         ,0x1bd,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pTVar11 = &this->Bodies;
  uVar10 = (uint)~param_1 >> 0x1f;
  if (-1 < param_2) {
    uVar7 = 0;
    if (param_1 < (this->Bodies).ArrayNum) {
      uVar7 = uVar10;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (param_2 < *(int *)((pTVar11->AllocatorInstance).Data + (longlong)param_1 * 0x50 + 0x18))
    goto LAB_14ab712b1;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("I >= 0 && I < Bodies[B].Boxes.Num()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\PhysicsBody.cpp"
                     ,0x1be,L"");
  if (bVar6) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_14ab712b1:
  uVar7 = 0;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar7 = uVar10;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar9 = (longlong)param_1 * 0x50;
  pFVar8 = (pTVar11->AllocatorInstance).Data + lVar9 + 0x10;
  uVar12 = (uint)~param_2 >> 0x1f;
  uVar7 = 0;
  if (param_2 < *(int *)(pFVar8 + 8)) {
    uVar7 = uVar12;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar2 = *(longlong *)pFVar8;
  *(undefined8 *)&param_3->field0_0x0 = *(undefined8 *)(lVar2 + 0x18 + lVar13 * 0x50);
  (param_3->field0_0x0)._s_0.Z = *(float *)(lVar2 + 0x20 + lVar13 * 0x50);
  uVar7 = 0;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar7 = uVar10;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar8 = (pTVar11->AllocatorInstance).Data + lVar9 + 0x10;
  uVar7 = 0;
  if (param_2 < *(int *)(pFVar8 + 8)) {
    uVar7 = uVar12;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  puVar1 = (undefined8 *)(*(longlong *)pFVar8 + 0x30 + lVar13 * 0x50);
  uVar4 = *puVar1;
  uVar5 = puVar1[1];
  param_4->X = (float)(int)uVar4;
  param_4->Y = (float)(int)((ulonglong)uVar4 >> 0x20);
  param_4->Z = (float)(int)uVar5;
  param_4->W = (float)(int)((ulonglong)uVar5 >> 0x20);
  uVar7 = 0;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar7 = uVar10;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar8 = (pTVar11->AllocatorInstance).Data;
  uVar10 = 0;
  if (param_2 < *(int *)(pFVar8 + lVar9 + 0x18)) {
    uVar10 = uVar12;
  }
  if ((uVar10 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar9 = *(longlong *)(pFVar8 + lVar9 + 0x10);
  *(undefined8 *)&param_5->field0_0x0 = *(undefined8 *)(lVar9 + 0x40 + lVar13 * 0x50);
  (param_5->field0_0x0)._s_0.Z = *(float *)(lVar9 + 0x48 + lVar13 * 0x50);
  return;
}

// GetBoxCount @ 14ab71510

int __thiscall UE::Mutable::Private::FPhysicsBody::GetBoxCount(FPhysicsBody *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  return *(int *)((this->Bodies).AllocatorInstance.Data + (longlong)param_1 * 0x50 + 0x18);
}

// GetBoxFlags @ 14ab71590

uint __thiscall
UE::Mutable::Private::FPhysicsBody::GetBoxFlags(FPhysicsBody *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  
  lVar5 = (longlong)param_1;
  if (((param_1 < 0) || ((this->Bodies).ArrayNum <= param_1)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("B >= 0 && B < Bodies.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\PhysicsBody.cpp"
                         ,0x20b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  if (-1 < param_2) {
    uVar4 = 0;
    if (param_1 < (this->Bodies).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
    if (param_2 < *(int *)((this->Bodies).AllocatorInstance.Data + lVar5 * 0x50 + 0x18))
    goto LAB_14ab71670;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("I >= 0 && I < Bodies[B].Boxes.Num()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\PhysicsBody.cpp"
                     ,0x20c,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
LAB_14ab71670:
  uVar4 = 0;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  pFVar1 = (this->Bodies).AllocatorInstance.Data;
  uVar4 = 0;
  if (param_2 < *(int *)(pFVar1 + lVar5 * 0x50 + 0x18)) {
    uVar4 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  return *(uint *)(*(longlong *)(pFVar1 + lVar5 * 0x50 + 0x10) + 0x10 + (longlong)param_2 * 0x50);
}

// GetBoxName @ 14ab71740

FString * __thiscall
UE::Mutable::Private::FPhysicsBody::GetBoxName(FPhysicsBody *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FString *pFVar5;
  longlong lVar6;
  
  lVar6 = (longlong)param_1;
  if (((param_1 < 0) || ((this->Bodies).ArrayNum <= param_1)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("B >= 0 && B < Bodies.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\PhysicsBody.cpp"
                         ,0x233,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar2)();
    return pFVar5;
  }
  if (-1 < param_2) {
    uVar4 = 0;
    if (param_1 < (this->Bodies).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
    if (param_2 < *(int *)((this->Bodies).AllocatorInstance.Data + lVar6 * 0x50 + 0x18))
    goto LAB_14ab71820;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("I >= 0 && I < Bodies[B].Boxes.Num()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\PhysicsBody.cpp"
                     ,0x234,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar2)();
    return pFVar5;
  }
LAB_14ab71820:
  uVar4 = 0;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar2)();
    return pFVar5;
  }
  pFVar1 = (this->Bodies).AllocatorInstance.Data;
  uVar4 = 0;
  if (param_2 < *(int *)(pFVar1 + lVar6 * 0x50 + 0x18)) {
    uVar4 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar2)();
    return pFVar5;
  }
  return (FString *)((longlong)param_2 * 0x50 + *(longlong *)(pFVar1 + lVar6 * 0x50 + 0x10));
}

// GetConvex @ 14ab72530

void __thiscall
UE::Mutable::Private::FPhysicsBody::GetConvex
          (FPhysicsBody *this,int param_1,int param_2,
          TArrayView<UE::Math::TVector<float>_const_,int> *param_3,
          TArrayView<int_const_,int> *param_4,TTransform<float> *param_5)

{
  ulong64 *puVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  TVector<float> *pTVar4;
  int *piVar5;
  code *pcVar6;
  ulong64 uVar7;
  bool bVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  TArray<UE::Mutable::Private::FPhysicsBodyAggregate,TSizedDefaultAllocator<32>_> *pTVar14;
  undefined4 uStack_54;
  undefined4 uStack_44;
  
  if (((param_1 < 0) || ((this->Bodies).ArrayNum <= param_1)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("B >= 0 && B < Bodies.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\PhysicsBody.cpp"
                         ,0x1ca,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pTVar14 = &this->Bodies;
  uVar13 = (uint)~param_1 >> 0x1f;
  if (-1 < param_2) {
    uVar9 = 0;
    if (param_1 < (this->Bodies).ArrayNum) {
      uVar9 = uVar13;
    }
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (param_2 < *(int *)((pTVar14->AllocatorInstance).Data + (longlong)param_1 * 0x50 + 0x28))
    goto LAB_14ab72611;
  }
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("I >= 0 && I < Bodies[B].Convex.Num()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\PhysicsBody.cpp"
                     ,0x1cb,L"");
  if (bVar8) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
LAB_14ab72611:
  uVar9 = 0;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar9 = uVar13;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar3 = (pTVar14->AllocatorInstance).Data;
  lVar10 = (longlong)param_1 * 0x50;
  uVar12 = (uint)~param_2 >> 0x1f;
  uVar9 = 0;
  if (param_2 < *(int *)(pFVar3 + lVar10 + 0x28)) {
    uVar9 = uVar12;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lVar11 = (longlong)param_2 * 0x70;
  iVar2 = *(int *)(lVar11 + 0x20 + *(longlong *)(pFVar3 + lVar10 + 0x20));
  uVar9 = 0;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar9 = uVar13;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar3 = (pTVar14->AllocatorInstance).Data;
  uVar9 = 0;
  if (param_2 < *(int *)(pFVar3 + lVar10 + 0x28)) {
    uVar9 = uVar12;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pTVar4 = *(TVector<float> **)(*(longlong *)(pFVar3 + lVar10 + 0x20) + 0x18 + lVar11);
  if ((iVar2 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  param_3->DataPtr = pTVar4;
  *(ulonglong *)&param_3->ArrayNum = CONCAT44(uStack_54,iVar2);
  uVar9 = 0;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar9 = uVar13;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar3 = (pTVar14->AllocatorInstance).Data;
  uVar9 = 0;
  if (param_2 < *(int *)(pFVar3 + lVar10 + 0x28)) {
    uVar9 = uVar12;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar2 = *(int *)(*(longlong *)(pFVar3 + lVar10 + 0x20) + 0x30 + lVar11);
  uVar9 = 0;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar9 = uVar13;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar3 = (pTVar14->AllocatorInstance).Data;
  uVar9 = 0;
  if (param_2 < *(int *)(pFVar3 + lVar10 + 0x28)) {
    uVar9 = uVar12;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  piVar5 = *(int **)(*(longlong *)(pFVar3 + lVar10 + 0x20) + 0x28 + lVar11);
  if ((iVar2 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  param_4->DataPtr = piVar5;
  *(ulonglong *)&param_4->ArrayNum = CONCAT44(uStack_44,iVar2);
  uVar9 = 0;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar9 = uVar13;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar3 = (pTVar14->AllocatorInstance).Data;
  uVar13 = 0;
  if (param_2 < *(int *)(pFVar3 + lVar10 + 0x28)) {
    uVar13 = uVar12;
  }
  if ((uVar13 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lVar10 = *(longlong *)(pFVar3 + lVar10 + 0x20);
  puVar1 = (ulong64 *)(lVar10 + 0x40 + lVar11);
  uVar7 = puVar1[1];
  (param_5->Rotation).m128_u64[0] = *puVar1;
  (param_5->Rotation).m128_u64[1] = uVar7;
  puVar1 = (ulong64 *)(lVar10 + 0x50 + lVar11);
  uVar7 = puVar1[1];
  (param_5->Translation).m128_u64[0] = *puVar1;
  (param_5->Translation).m128_u64[1] = uVar7;
  puVar1 = (ulong64 *)(lVar10 + 0x60 + lVar11);
  uVar7 = puVar1[1];
  (param_5->Scale3D).m128_u64[0] = *puVar1;
  (param_5->Scale3D).m128_u64[1] = uVar7;
  return;
}

// GetConvexCount @ 14ab72a10

int __thiscall UE::Mutable::Private::FPhysicsBody::GetConvexCount(FPhysicsBody *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  return *(int *)((this->Bodies).AllocatorInstance.Data + (longlong)param_1 * 0x50 + 0x28);
}

// GetConvexFlags @ 14ab72a90

uint __thiscall
UE::Mutable::Private::FPhysicsBody::GetConvexFlags(FPhysicsBody *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  
  lVar5 = (longlong)param_1;
  if (((param_1 < 0) || ((this->Bodies).ArrayNum <= param_1)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("B >= 0 && B < Bodies.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\PhysicsBody.cpp"
                         ,0x213,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  if (-1 < param_2) {
    uVar4 = 0;
    if (param_1 < (this->Bodies).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
    if (param_2 < *(int *)((this->Bodies).AllocatorInstance.Data + lVar5 * 0x50 + 0x28))
    goto LAB_14ab72b70;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("I >= 0 && I < Bodies[B].Convex.Num()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\PhysicsBody.cpp"
                     ,0x214,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
LAB_14ab72b70:
  uVar4 = 0;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  pFVar1 = (this->Bodies).AllocatorInstance.Data;
  uVar4 = 0;
  if (param_2 < *(int *)(pFVar1 + lVar5 * 0x50 + 0x28)) {
    uVar4 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  return *(uint *)((longlong)param_2 * 0x70 + 0x10 + *(longlong *)(pFVar1 + lVar5 * 0x50 + 0x20));
}

// GetConvexMeshView @ 14ab72c30

void __thiscall
UE::Mutable::Private::FPhysicsBody::GetConvexMeshView
          (FPhysicsBody *this,int param_1,int param_2,
          TArrayView<UE::Math::TVector<float>,int> *param_3,TArrayView<int,int> *param_4)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  TVector<float> *pTVar3;
  int *piVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  TArray<UE::Mutable::Private::FPhysicsBodyAggregate,TSizedDefaultAllocator<32>_> *pTVar12;
  undefined4 uStack_54;
  undefined4 uStack_44;
  
  if (((param_1 < 0) || ((this->Bodies).ArrayNum <= param_1)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("B >= 0 && B < Bodies.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\PhysicsBody.cpp"
                         ,0x1d5,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar12 = &this->Bodies;
  uVar11 = (uint)~param_1 >> 0x1f;
  if (-1 < param_2) {
    uVar7 = 0;
    if (param_1 < (this->Bodies).ArrayNum) {
      uVar7 = uVar11;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (param_2 < *(int *)((pTVar12->AllocatorInstance).Data + (longlong)param_1 * 0x50 + 0x28))
    goto LAB_14ab72d11;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("I >= 0 && I < Bodies[B].Convex.Num()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\PhysicsBody.cpp"
                     ,0x1d6,L"");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_14ab72d11:
  uVar7 = 0;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar7 = uVar11;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar2 = (pTVar12->AllocatorInstance).Data;
  lVar8 = (longlong)param_1 * 0x50;
  uVar10 = (uint)~param_2 >> 0x1f;
  uVar7 = 0;
  if (param_2 < *(int *)(pFVar2 + lVar8 + 0x28)) {
    uVar7 = uVar10;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar9 = (longlong)param_2 * 0x70;
  iVar1 = *(int *)(lVar9 + 0x20 + *(longlong *)(pFVar2 + lVar8 + 0x20));
  uVar7 = 0;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar7 = uVar11;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar2 = (pTVar12->AllocatorInstance).Data;
  uVar7 = 0;
  if (param_2 < *(int *)(pFVar2 + lVar8 + 0x28)) {
    uVar7 = uVar10;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar3 = *(TVector<float> **)(lVar9 + 0x18 + *(longlong *)(pFVar2 + lVar8 + 0x20));
  if ((iVar1 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  param_3->DataPtr = pTVar3;
  *(ulonglong *)&param_3->ArrayNum = CONCAT44(uStack_54,iVar1);
  uVar7 = 0;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar7 = uVar11;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar2 = (pTVar12->AllocatorInstance).Data;
  uVar7 = 0;
  if (param_2 < *(int *)(pFVar2 + lVar8 + 0x28)) {
    uVar7 = uVar10;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar1 = *(int *)(*(longlong *)(pFVar2 + lVar8 + 0x20) + 0x30 + lVar9);
  uVar7 = 0;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar7 = uVar11;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar2 = (pTVar12->AllocatorInstance).Data;
  uVar11 = 0;
  if (param_2 < *(int *)(pFVar2 + lVar8 + 0x28)) {
    uVar11 = uVar10;
  }
  if ((uVar11 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  piVar4 = *(int **)(*(longlong *)(pFVar2 + lVar8 + 0x20) + 0x28 + lVar9);
  if ((iVar1 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  param_4->DataPtr = piVar4;
  *(ulonglong *)&param_4->ArrayNum = CONCAT44(uStack_44,iVar1);
  return;
}

// GetConvexName @ 14ab73050

FString * __thiscall
UE::Mutable::Private::FPhysicsBody::GetConvexName(FPhysicsBody *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FString *pFVar5;
  longlong lVar6;
  
  lVar6 = (longlong)param_1;
  if (((param_1 < 0) || ((this->Bodies).ArrayNum <= param_1)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("B >= 0 && B < Bodies.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\PhysicsBody.cpp"
                         ,0x23b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar2)();
    return pFVar5;
  }
  if (-1 < param_2) {
    uVar4 = 0;
    if (param_1 < (this->Bodies).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
    if (param_2 < *(int *)((this->Bodies).AllocatorInstance.Data + lVar6 * 0x50 + 0x28))
    goto LAB_14ab73130;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("I >= 0 && I < Bodies[B].Convex.Num()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\PhysicsBody.cpp"
                     ,0x23c,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar2)();
    return pFVar5;
  }
LAB_14ab73130:
  uVar4 = 0;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar2)();
    return pFVar5;
  }
  pFVar1 = (this->Bodies).AllocatorInstance.Data;
  uVar4 = 0;
  if (param_2 < *(int *)(pFVar1 + lVar6 * 0x50 + 0x28)) {
    uVar4 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar2)();
    return pFVar5;
  }
  return (FString *)((longlong)param_2 * 0x70 + *(longlong *)(pFVar1 + lVar6 * 0x50 + 0x20));
}

// GetConvexTransform @ 14ab731f0

void __thiscall
UE::Mutable::Private::FPhysicsBody::GetConvexTransform
          (FPhysicsBody *this,int param_1,int param_2,TTransform<float> *param_3)

{
  ulong64 *puVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  ulong64 uVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar8 = (longlong)param_1;
  if (((param_1 < 0) || ((this->Bodies).ArrayNum <= param_1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("B >= 0 && B < Bodies.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\PhysicsBody.cpp"
                         ,0x1de,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (-1 < param_2) {
    uVar6 = 0;
    if (param_1 < (this->Bodies).ArrayNum) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (param_2 < *(int *)((this->Bodies).AllocatorInstance.Data + lVar8 * 0x50 + 0x28))
    goto LAB_14ab732d9;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("I >= 0 && I < Bodies[B].Convex.Num()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\PhysicsBody.cpp"
                     ,0x1df,L"");
  if (bVar5) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_14ab732d9:
  uVar6 = 0;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (this->Bodies).AllocatorInstance.Data;
  uVar6 = 0;
  if (param_2 < *(int *)(pFVar2 + lVar8 * 0x50 + 0x28)) {
    uVar6 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar8 = *(longlong *)(pFVar2 + lVar8 * 0x50 + 0x20);
  lVar7 = (longlong)param_2 * 0x70;
  puVar1 = (ulong64 *)(lVar7 + 0x40 + lVar8);
  uVar4 = puVar1[1];
  (param_3->Rotation).m128_u64[0] = *puVar1;
  (param_3->Rotation).m128_u64[1] = uVar4;
  puVar1 = (ulong64 *)(lVar7 + 0x50 + lVar8);
  uVar4 = puVar1[1];
  (param_3->Translation).m128_u64[0] = *puVar1;
  (param_3->Translation).m128_u64[1] = uVar4;
  puVar1 = (ulong64 *)(lVar7 + 0x60 + lVar8);
  uVar4 = puVar1[1];
  (param_3->Scale3D).m128_u64[0] = *puVar1;
  (param_3->Scale3D).m128_u64[1] = uVar4;
  return;
}

// GetCustomId @ 14ab73520

int __thiscall UE::Mutable::Private::FPhysicsBody::GetCustomId(FPhysicsBody *this)

{
  return this->CustomId;
}

// GetSphere @ 14ab7b1b0

void __thiscall
UE::Mutable::Private::FPhysicsBody::GetSphere
          (FPhysicsBody *this,int param_1,int param_2,TVector<float> *param_3,float *param_4)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  TArray<UE::Mutable::Private::FPhysicsBodyAggregate,TSizedDefaultAllocator<32>_> *pTVar8;
  longlong lVar9;
  
  lVar9 = (longlong)param_2;
  lVar7 = (longlong)param_1;
  if (((param_1 < 0) || ((this->Bodies).ArrayNum <= param_1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("B >= 0 && B < Bodies.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\PhysicsBody.cpp"
                         ,0x1b2,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pTVar8 = &this->Bodies;
  uVar6 = (uint)~param_1 >> 0x1f;
  if (-1 < param_2) {
    uVar5 = 0;
    if (param_1 < (this->Bodies).ArrayNum) {
      uVar5 = uVar6;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (param_2 < *(int *)((pTVar8->AllocatorInstance).Data + lVar7 * 0x50 + 8)) goto LAB_14ab7b291;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("I >= 0 && I < Bodies[B].Spheres.Num()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\PhysicsBody.cpp"
                     ,0x1b3,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_14ab7b291:
  uVar5 = 0;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar5 = uVar6;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar1 = (pTVar8->AllocatorInstance).Data;
  uVar5 = 0;
  if (param_2 < *(int *)(pFVar1 + lVar7 * 0x50 + 8)) {
    uVar5 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar2 = *(longlong *)(pFVar1 + lVar7 * 0x50);
  *(undefined8 *)&param_3->field0_0x0 = *(undefined8 *)(lVar2 + 0x18 + lVar9 * 0x28);
  (param_3->field0_0x0)._s_0.Z = *(float *)(lVar2 + 0x20 + lVar9 * 0x28);
  uVar5 = 0;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar5 = uVar6;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar1 = (pTVar8->AllocatorInstance).Data;
  uVar6 = 0;
  if (param_2 < *(int *)(pFVar1 + lVar7 * 0x50 + 8)) {
    uVar6 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *param_4 = *(float *)(*(longlong *)(pFVar1 + lVar7 * 0x50) + 0x24 + lVar9 * 0x28);
  return;
}

// GetSphereCount @ 14ab7b410

int __thiscall UE::Mutable::Private::FPhysicsBody::GetSphereCount(FPhysicsBody *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  return *(int *)((this->Bodies).AllocatorInstance.Data + (longlong)param_1 * 0x50 + 8);
}

// GetSphereFlags @ 14ab7b490

uint __thiscall
UE::Mutable::Private::FPhysicsBody::GetSphereFlags(FPhysicsBody *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  
  if (((param_1 < 0) || ((this->Bodies).ArrayNum <= param_1)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("B >= 0 && B < Bodies.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\PhysicsBody.cpp"
                         ,0x203,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if (-1 < param_2) {
    uVar3 = 0;
    if (param_1 < (this->Bodies).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    if (param_2 < *(int *)((this->Bodies).AllocatorInstance.Data + (longlong)param_1 * 0x50 + 8))
    goto LAB_14ab7b570;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("I >= 0 && I < Bodies[B].Spheres.Num()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\PhysicsBody.cpp"
                     ,0x204,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
LAB_14ab7b570:
  uVar3 = 0;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  pFVar4 = (this->Bodies).AllocatorInstance.Data + (longlong)param_1 * 0x50;
  uVar3 = 0;
  if (param_2 < *(int *)(pFVar4 + 8)) {
    uVar3 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return *(uint *)(*(longlong *)pFVar4 + 0x10 + (longlong)param_2 * 0x28);
}

// GetSphereName @ 14ab7b640

FString * __thiscall
UE::Mutable::Private::FPhysicsBody::GetSphereName(FPhysicsBody *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FString *pFVar4;
  FScriptContainerElement *pFVar5;
  
  if (((param_1 < 0) || ((this->Bodies).ArrayNum <= param_1)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("B >= 0 && B < Bodies.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\PhysicsBody.cpp"
                         ,0x22b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FString *)(*pcVar1)();
    return pFVar4;
  }
  if (-1 < param_2) {
    uVar3 = 0;
    if (param_1 < (this->Bodies).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
    if (param_2 < *(int *)((this->Bodies).AllocatorInstance.Data + (longlong)param_1 * 0x50 + 8))
    goto LAB_14ab7b720;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("I >= 0 && I < Bodies[B].Spheres.Num()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\PhysicsBody.cpp"
                     ,0x22c,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FString *)(*pcVar1)();
    return pFVar4;
  }
LAB_14ab7b720:
  uVar3 = 0;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FString *)(*pcVar1)();
    return pFVar4;
  }
  pFVar5 = (this->Bodies).AllocatorInstance.Data + (longlong)param_1 * 0x50;
  uVar3 = 0;
  if (param_2 < *(int *)(pFVar5 + 8)) {
    uVar3 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FString *)(*pcVar1)();
    return pFVar4;
  }
  return (FString *)(*(longlong *)pFVar5 + (longlong)param_2 * 0x28);
}

// GetSphyl @ 14ab7b7f0

void __thiscall
UE::Mutable::Private::FPhysicsBody::GetSphyl
          (FPhysicsBody *this,int param_1,int param_2,TVector<float> *param_3,TQuat<float> *param_4,
          float *param_5,float *param_6)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  TArray<UE::Mutable::Private::FPhysicsBodyAggregate,TSizedDefaultAllocator<32>_> *pTVar12;
  uint uVar13;
  
  lVar11 = (longlong)param_1;
  if (((param_1 < 0) || ((this->Bodies).ArrayNum <= param_1)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("B >= 0 && B < Bodies.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\PhysicsBody.cpp"
                         ,0x1e8,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar12 = &this->Bodies;
  uVar10 = (uint)~param_1 >> 0x1f;
  if (-1 < param_2) {
    uVar8 = 0;
    if (param_1 < (this->Bodies).ArrayNum) {
      uVar8 = uVar10;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (param_2 < *(int *)((pTVar12->AllocatorInstance).Data + lVar11 * 0x50 + 0x38))
    goto LAB_14ab7b8d1;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("I >= 0 && I < Bodies[B].Sphyls.Num()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\PhysicsBody.cpp"
                     ,0x1e9,L"");
  if (bVar7) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14ab7b8d1:
  uVar8 = 0;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar8 = uVar10;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar2 = (pTVar12->AllocatorInstance).Data;
  uVar13 = (uint)~param_2 >> 0x1f;
  uVar8 = 0;
  if (param_2 < *(int *)(pFVar2 + lVar11 * 0x50 + 0x38)) {
    uVar8 = uVar13;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar9 = (longlong)param_2 * 0x50;
  lVar3 = *(longlong *)(pFVar2 + lVar11 * 0x50 + 0x30);
  *(undefined8 *)&param_3->field0_0x0 = *(undefined8 *)(lVar9 + 0x18 + lVar3);
  (param_3->field0_0x0)._s_0.Z = *(float *)(lVar9 + 0x20 + lVar3);
  uVar8 = 0;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar8 = uVar10;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar2 = (pTVar12->AllocatorInstance).Data;
  uVar8 = 0;
  if (param_2 < *(int *)(pFVar2 + lVar11 * 0x50 + 0x38)) {
    uVar8 = uVar13;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  puVar1 = (undefined8 *)(*(longlong *)(pFVar2 + lVar11 * 0x50 + 0x30) + 0x30 + lVar9);
  uVar5 = *puVar1;
  uVar6 = puVar1[1];
  param_4->X = (float)(int)uVar5;
  param_4->Y = (float)(int)((ulonglong)uVar5 >> 0x20);
  param_4->Z = (float)(int)uVar6;
  param_4->W = (float)(int)((ulonglong)uVar6 >> 0x20);
  uVar8 = 0;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar8 = uVar10;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar2 = (pTVar12->AllocatorInstance).Data;
  uVar8 = 0;
  if (param_2 < *(int *)(pFVar2 + lVar11 * 0x50 + 0x38)) {
    uVar8 = uVar13;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *param_5 = *(float *)(*(longlong *)(pFVar2 + lVar11 * 0x50 + 0x30) + 0x40 + lVar9);
  uVar8 = 0;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar8 = uVar10;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar2 = (pTVar12->AllocatorInstance).Data;
  uVar10 = 0;
  if (param_2 < *(int *)(pFVar2 + lVar11 * 0x50 + 0x38)) {
    uVar10 = uVar13;
  }
  if ((uVar10 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *param_6 = *(float *)(lVar9 + 0x44 + *(longlong *)(pFVar2 + lVar11 * 0x50 + 0x30));
  return;
}

// GetSphylCount @ 14ab7bbd0

int __thiscall UE::Mutable::Private::FPhysicsBody::GetSphylCount(FPhysicsBody *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  return *(int *)((this->Bodies).AllocatorInstance.Data + (longlong)param_1 * 0x50 + 0x38);
}

// GetSphylFlags @ 14ab7bc50

uint __thiscall
UE::Mutable::Private::FPhysicsBody::GetSphylFlags(FPhysicsBody *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  
  lVar5 = (longlong)param_1;
  if (((param_1 < 0) || ((this->Bodies).ArrayNum <= param_1)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("B >= 0 && B < Bodies.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\PhysicsBody.cpp"
                         ,0x21b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  if (-1 < param_2) {
    uVar4 = 0;
    if (param_1 < (this->Bodies).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
    if (param_2 < *(int *)((this->Bodies).AllocatorInstance.Data + lVar5 * 0x50 + 0x38))
    goto LAB_14ab7bd30;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("I >= 0 && I < Bodies[B].Sphyls.Num()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\PhysicsBody.cpp"
                     ,0x21c,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
LAB_14ab7bd30:
  uVar4 = 0;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  pFVar1 = (this->Bodies).AllocatorInstance.Data;
  uVar4 = 0;
  if (param_2 < *(int *)(pFVar1 + lVar5 * 0x50 + 0x38)) {
    uVar4 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  return *(uint *)(*(longlong *)(pFVar1 + lVar5 * 0x50 + 0x30) + 0x10 + (longlong)param_2 * 0x50);
}

// GetSphylName @ 14ab7be00

FString * __thiscall
UE::Mutable::Private::FPhysicsBody::GetSphylName(FPhysicsBody *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FString *pFVar5;
  longlong lVar6;
  
  lVar6 = (longlong)param_1;
  if (((param_1 < 0) || ((this->Bodies).ArrayNum <= param_1)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("B >= 0 && B < Bodies.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\PhysicsBody.cpp"
                         ,0x243,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar2)();
    return pFVar5;
  }
  if (-1 < param_2) {
    uVar4 = 0;
    if (param_1 < (this->Bodies).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
    if (param_2 < *(int *)((this->Bodies).AllocatorInstance.Data + lVar6 * 0x50 + 0x38))
    goto LAB_14ab7bee0;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("I >= 0 && I < Bodies[B].Sphyls.Num()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\PhysicsBody.cpp"
                     ,0x244,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar2)();
    return pFVar5;
  }
LAB_14ab7bee0:
  uVar4 = 0;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar2)();
    return pFVar5;
  }
  pFVar1 = (this->Bodies).AllocatorInstance.Data;
  uVar4 = 0;
  if (param_2 < *(int *)(pFVar1 + lVar6 * 0x50 + 0x38)) {
    uVar4 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar2)();
    return pFVar5;
  }
  return (FString *)((longlong)param_2 * 0x50 + *(longlong *)(pFVar1 + lVar6 * 0x50 + 0x30));
}

// GetTaperedCapsule @ 14ab7c270

void __thiscall
UE::Mutable::Private::FPhysicsBody::GetTaperedCapsule
          (FPhysicsBody *this,int param_1,int param_2,TVector<float> *param_3,TQuat<float> *param_4,
          float *param_5,float *param_6,float *param_7)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  TArray<UE::Mutable::Private::FPhysicsBodyAggregate,TSizedDefaultAllocator<32>_> *pTVar12;
  uint uVar13;
  
  lVar11 = (longlong)param_1;
  if (((param_1 < 0) || ((this->Bodies).ArrayNum <= param_1)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("B >= 0 && B < Bodies.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\PhysicsBody.cpp"
                         ,0x1f6,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar12 = &this->Bodies;
  uVar10 = (uint)~param_1 >> 0x1f;
  if (-1 < param_2) {
    uVar8 = 0;
    if (param_1 < (this->Bodies).ArrayNum) {
      uVar8 = uVar10;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (param_2 < *(int *)((pTVar12->AllocatorInstance).Data + lVar11 * 0x50 + 0x48))
    goto LAB_14ab7c351;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("I >= 0 && I < Bodies[B].TaperedCapsules.Num()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\PhysicsBody.cpp"
                     ,0x1f7,L"");
  if (bVar7) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14ab7c351:
  uVar8 = 0;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar8 = uVar10;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar2 = (pTVar12->AllocatorInstance).Data;
  uVar13 = (uint)~param_2 >> 0x1f;
  uVar8 = 0;
  if (param_2 < *(int *)(pFVar2 + lVar11 * 0x50 + 0x48)) {
    uVar8 = uVar13;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar9 = (longlong)param_2 * 0x50;
  lVar3 = *(longlong *)(pFVar2 + lVar11 * 0x50 + 0x40);
  *(undefined8 *)&param_3->field0_0x0 = *(undefined8 *)(lVar9 + 0x18 + lVar3);
  (param_3->field0_0x0)._s_0.Z = *(float *)(lVar9 + 0x20 + lVar3);
  uVar8 = 0;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar8 = uVar10;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar2 = (pTVar12->AllocatorInstance).Data;
  uVar8 = 0;
  if (param_2 < *(int *)(pFVar2 + lVar11 * 0x50 + 0x48)) {
    uVar8 = uVar13;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  puVar1 = (undefined8 *)(*(longlong *)(pFVar2 + lVar11 * 0x50 + 0x40) + 0x30 + lVar9);
  uVar5 = *puVar1;
  uVar6 = puVar1[1];
  param_4->X = (float)(int)uVar5;
  param_4->Y = (float)(int)((ulonglong)uVar5 >> 0x20);
  param_4->Z = (float)(int)uVar6;
  param_4->W = (float)(int)((ulonglong)uVar6 >> 0x20);
  uVar8 = 0;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar8 = uVar10;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar2 = (pTVar12->AllocatorInstance).Data;
  uVar8 = 0;
  if (param_2 < *(int *)(pFVar2 + lVar11 * 0x50 + 0x48)) {
    uVar8 = uVar13;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *param_5 = *(float *)(*(longlong *)(pFVar2 + lVar11 * 0x50 + 0x40) + 0x40 + lVar9);
  uVar8 = 0;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar8 = uVar10;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar2 = (pTVar12->AllocatorInstance).Data;
  uVar8 = 0;
  if (param_2 < *(int *)(pFVar2 + lVar11 * 0x50 + 0x48)) {
    uVar8 = uVar13;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *param_6 = *(float *)(lVar9 + 0x44 + *(longlong *)(pFVar2 + lVar11 * 0x50 + 0x40));
  uVar8 = 0;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar8 = uVar10;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar2 = (pTVar12->AllocatorInstance).Data;
  uVar10 = 0;
  if (param_2 < *(int *)(pFVar2 + lVar11 * 0x50 + 0x48)) {
    uVar10 = uVar13;
  }
  if ((uVar10 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *param_7 = *(float *)(*(longlong *)(pFVar2 + lVar11 * 0x50 + 0x40) + 0x48 + lVar9);
  return;
}

// GetTaperedCapsuleCount @ 14ab7c6f0

int __thiscall
UE::Mutable::Private::FPhysicsBody::GetTaperedCapsuleCount(FPhysicsBody *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  return *(int *)((this->Bodies).AllocatorInstance.Data + (longlong)param_1 * 0x50 + 0x48);
}

// GetTaperedCapsuleFlags @ 14ab7c770

uint __thiscall
UE::Mutable::Private::FPhysicsBody::GetTaperedCapsuleFlags
          (FPhysicsBody *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  
  lVar5 = (longlong)param_1;
  if (((param_1 < 0) || ((this->Bodies).ArrayNum <= param_1)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("B >= 0 && B < Bodies.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\PhysicsBody.cpp"
                         ,0x223,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  if (-1 < param_2) {
    uVar4 = 0;
    if (param_1 < (this->Bodies).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
    if (param_2 < *(int *)((this->Bodies).AllocatorInstance.Data + lVar5 * 0x50 + 0x48))
    goto LAB_14ab7c850;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("I >= 0 && I < Bodies[B].TaperedCapsules.Num()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\PhysicsBody.cpp"
                     ,0x224,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
LAB_14ab7c850:
  uVar4 = 0;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  pFVar1 = (this->Bodies).AllocatorInstance.Data;
  uVar4 = 0;
  if (param_2 < *(int *)(pFVar1 + lVar5 * 0x50 + 0x48)) {
    uVar4 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  return *(uint *)(*(longlong *)(pFVar1 + lVar5 * 0x50 + 0x40) + 0x10 + (longlong)param_2 * 0x50);
}

// GetTaperedCapsuleName @ 14ab7c920

FString * __thiscall
UE::Mutable::Private::FPhysicsBody::GetTaperedCapsuleName
          (FPhysicsBody *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FString *pFVar5;
  longlong lVar6;
  
  lVar6 = (longlong)param_1;
  if (((param_1 < 0) || ((this->Bodies).ArrayNum <= param_1)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("B >= 0 && B < Bodies.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\PhysicsBody.cpp"
                         ,0x24b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar2)();
    return pFVar5;
  }
  if (-1 < param_2) {
    uVar4 = 0;
    if (param_1 < (this->Bodies).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
    if (param_2 < *(int *)((this->Bodies).AllocatorInstance.Data + lVar6 * 0x50 + 0x48))
    goto LAB_14ab7ca00;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("I >= 0 && I < Bodies[B].TaperedCapsules.Num()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\PhysicsBody.cpp"
                     ,0x24c,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar2)();
    return pFVar5;
  }
LAB_14ab7ca00:
  uVar4 = 0;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar2)();
    return pFVar5;
  }
  pFVar1 = (this->Bodies).AllocatorInstance.Data;
  uVar4 = 0;
  if (param_2 < *(int *)(pFVar1 + lVar6 * 0x50 + 0x48)) {
    uVar4 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar2)();
    return pFVar5;
  }
  return (FString *)((longlong)param_2 * 0x50 + *(longlong *)(pFVar1 + lVar6 * 0x50 + 0x40));
}

// Serialise @ 14ab85440

void __thiscall
UE::Mutable::Private::FPhysicsBody::Serialise(FPhysicsBody *this,FOutputArchive *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 local_res8 [8];
  uint local_res10 [2];
  uint local_res18 [4];
  
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,this,4);
  local_res10[0] = (this->Bodies).ArrayNum;
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_res10,4);
  uVar5 = 0;
  if (local_res10[0] != 0) {
    do {
      uVar4 = (uint)uVar5;
      uVar3 = 0;
      if ((int)uVar4 < (this->Bodies).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      FPhysicsBodyAggregate::Serialise
                ((FPhysicsBodyAggregate *)
                 ((this->Bodies).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x50),param_1);
      uVar5 = uVar5 + 1;
    } while (uVar5 < local_res10[0]);
  }
  operator<<<UE::Mutable::Private::FBoneName_TSizedDefaultAllocator<32>_>(param_1,&this->BoneIds);
  local_res18[0] = (this->BodiesCustomIds).ArrayNum;
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_res18,4);
  if (local_res18[0] != 0) {
    (**(code **)((longlong)*param_1->Stream + 8))
              (param_1->Stream,(this->BodiesCustomIds).AllocatorInstance.Data,
               (ulonglong)local_res18[0] << 2);
  }
  local_res8[0] = this->bBodiesModified != false;
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_res8,1);
  return;
}

// Serialise @ 14ab85560

void __cdecl
UE::Mutable::Private::FPhysicsBody::Serialise(FPhysicsBody *param_1,FOutputArchive *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 local_res8 [8];
  uint local_res10 [2];
  uint local_res18 [4];
  
  (**(code **)((longlong)*param_2->Stream + 8))(param_2->Stream,param_1,4);
  local_res10[0] = (param_1->Bodies).ArrayNum;
  (**(code **)((longlong)*param_2->Stream + 8))(param_2->Stream,local_res10,4);
  uVar5 = 0;
  if (local_res10[0] != 0) {
    do {
      uVar4 = (uint)uVar5;
      uVar3 = 0;
      if ((int)uVar4 < (param_1->Bodies).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      FPhysicsBodyAggregate::Serialise
                ((FPhysicsBodyAggregate *)
                 ((param_1->Bodies).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x50),param_2);
      uVar5 = uVar5 + 1;
    } while (uVar5 < local_res10[0]);
  }
  operator<<<UE::Mutable::Private::FBoneName_TSizedDefaultAllocator<32>_>(param_2,&param_1->BoneIds)
  ;
  local_res18[0] = (param_1->BodiesCustomIds).ArrayNum;
  (**(code **)((longlong)*param_2->Stream + 8))(param_2->Stream,local_res18,4);
  if (local_res18[0] != 0) {
    (**(code **)((longlong)*param_2->Stream + 8))
              (param_2->Stream,(param_1->BodiesCustomIds).AllocatorInstance.Data,
               (ulonglong)local_res18[0] << 2);
  }
  local_res8[0] = param_1->bBodiesModified != false;
  (**(code **)((longlong)*param_2->Stream + 8))(param_2->Stream,local_res8,1);
  return;
}

// SetBodyBoneId @ 14ab85fd0

void __thiscall
UE::Mutable::Private::FPhysicsBody::SetBodyBoneId(FPhysicsBody *this,int param_1,FBoneName *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  if ((param_1 < 0) || ((this->BoneIds).ArrayNum <= param_1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("BoneIds.IsValidIndex(B)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\PhysicsBody.cpp"
                       ,0xd1,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar1 = param_2->Id;
  uVar4 = 0;
  if (param_1 < (this->BoneIds).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(uint *)((this->BoneIds).AllocatorInstance.Data + (longlong)param_1 * 4) = uVar1;
  return;
}

// SetBodyCount @ 14ab86080

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UE::Mutable::Private::FPhysicsBody::SetBodyCount(FPhysicsBody *this,int param_1)

{
  int local_res8 [2];
  
  TArray<UE::Mutable::Private::FPhysicsBodyAggregate,TSizedDefaultAllocator<32>_>::SetNum
            (&this->Bodies,param_1,Default);
  TArray<UE::Mutable::Private::FBoneName,TSizedDefaultAllocator<32>_>::SetNum
            (&this->BoneIds,param_1,Default);
  local_res8[0] = -1;
  TArray<int,TSizedDefaultAllocator<32>_>::Init(&this->BodiesCustomIds,local_res8,param_1);
  return;
}

// SetBodyCustomId @ 14ab860e0

void __thiscall
UE::Mutable::Private::FPhysicsBody::SetBodyCustomId(FPhysicsBody *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if ((param_1 < 0) || ((this->BodiesCustomIds).ArrayNum <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("B >= 0 && B < BodiesCustomIds.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\PhysicsBody.cpp"
                       ,0xde,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = 0;
  if (param_1 < (this->BodiesCustomIds).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(int *)((this->BodiesCustomIds).AllocatorInstance.Data + (longlong)param_1 * 4) = param_2;
  return;
}

// SetBox @ 14ab867b0

void __thiscall
UE::Mutable::Private::FPhysicsBody::SetBox
          (FPhysicsBody *this,int param_1,int param_2,TVector<float> *param_3,TQuat<float> *param_4,
          TVector<float> *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  float fVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  uint uVar11;
  TArray<UE::Mutable::Private::FPhysicsBodyAggregate,TSizedDefaultAllocator<32>_> *pTVar12;
  uint uVar13;
  longlong lVar14;
  
  if (((param_1 < 0) || ((this->Bodies).ArrayNum <= param_1)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("B >= 0 && B < Bodies.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\PhysicsBody.cpp"
                         ,0x124,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar12 = &this->Bodies;
  uVar11 = (uint)~param_1 >> 0x1f;
  if (-1 < param_2) {
    uVar8 = 0;
    if (param_1 < (this->Bodies).ArrayNum) {
      uVar8 = uVar11;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (param_2 < *(int *)((pTVar12->AllocatorInstance).Data + (longlong)param_1 * 0x50 + 0x18))
    goto LAB_14ab8688f;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("I >= 0 && I < Bodies[B].Boxes.Num()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\PhysicsBody.cpp"
                     ,0x125,L"");
  if (bVar7) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_14ab8688f:
  fVar3 = (param_3->field0_0x0)._s_0.Z;
  uVar2 = *(undefined8 *)&param_3->field0_0x0;
  uVar8 = 0;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar8 = uVar11;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar14 = (longlong)param_1 * 0x50;
  pFVar9 = (pTVar12->AllocatorInstance).Data + lVar14 + 0x10;
  uVar13 = (uint)~param_2 >> 0x1f;
  uVar8 = 0;
  if (param_2 < *(int *)(pFVar9 + 8)) {
    uVar8 = uVar13;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar10 = (longlong)param_2 * 0x50;
  lVar4 = *(longlong *)pFVar9;
  *(undefined8 *)(lVar10 + 0x18 + lVar4) = uVar2;
  *(float *)(lVar10 + 0x20 + lVar4) = fVar3;
  uVar2 = *(undefined8 *)param_4;
  uVar6 = *(undefined8 *)&param_4->Z;
  uVar8 = 0;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar8 = uVar11;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar9 = (pTVar12->AllocatorInstance).Data + lVar14 + 0x10;
  uVar8 = 0;
  if (param_2 < *(int *)(pFVar9 + 8)) {
    uVar8 = uVar13;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puVar1 = (undefined8 *)(lVar10 + 0x30 + *(longlong *)pFVar9);
  *puVar1 = uVar2;
  puVar1[1] = uVar6;
  uVar2 = *(undefined8 *)&param_5->field0_0x0;
  fVar3 = (param_5->field0_0x0)._s_0.Z;
  uVar8 = 0;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar8 = uVar11;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar9 = (pTVar12->AllocatorInstance).Data;
  uVar11 = 0;
  if (param_2 < *(int *)(pFVar9 + lVar14 + 0x18)) {
    uVar11 = uVar13;
  }
  if ((uVar11 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar14 = *(longlong *)(pFVar9 + lVar14 + 0x10);
  *(undefined8 *)(lVar14 + 0x40 + lVar10) = uVar2;
  *(float *)(lVar14 + 0x48 + lVar10) = fVar3;
  return;
}

// SetBoxCount @ 14ab86b30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Mutable::Private::FPhysicsBody::SetBoxCount(FPhysicsBody *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<UE::Mutable::Private::FBoxBody,TSizedDefaultAllocator<32>_>::SetNum
            ((TArray<UE::Mutable::Private::FBoxBody,TSizedDefaultAllocator<32>_> *)
             ((this->Bodies).AllocatorInstance.Data + (longlong)param_1 * 0x50 + 0x10),param_2,
             Default);
  return;
}

// SetBoxFlags @ 14ab86bd0

void __thiscall
UE::Mutable::Private::FPhysicsBody::SetBoxFlags
          (FPhysicsBody *this,int param_1,int param_2,uint param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  
  lVar5 = (longlong)param_1;
  if (((param_1 < 0) || ((this->Bodies).ArrayNum <= param_1)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("B >= 0 && B < Bodies.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\PhysicsBody.cpp"
                         ,0x159,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (-1 < param_2) {
    uVar4 = 0;
    if (param_1 < (this->Bodies).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (param_2 < *(int *)((this->Bodies).AllocatorInstance.Data + lVar5 * 0x50 + 0x18))
    goto LAB_14ab86cb9;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("I >= 0 && I < Bodies[B].Boxes.Num()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\PhysicsBody.cpp"
                     ,0x15a,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14ab86cb9:
  uVar4 = 0;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = (this->Bodies).AllocatorInstance.Data;
  uVar4 = 0;
  if (param_2 < *(int *)(pFVar1 + lVar5 * 0x50 + 0x18)) {
    uVar4 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(uint *)(*(longlong *)(pFVar1 + lVar5 * 0x50 + 0x10) + 0x10 + (longlong)param_2 * 0x50) = param_3
  ;
  return;
}

// SetBoxName @ 14ab86d90

void __thiscall
UE::Mutable::Private::FPhysicsBody::SetBoxName
          (FPhysicsBody *this,int param_1,int param_2,char *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FString *pFVar5;
  longlong lVar6;
  FString local_28;
  
  lVar6 = (longlong)param_1;
  if (((param_1 < 0) || ((this->Bodies).ArrayNum <= param_1)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("B >= 0 && B < Bodies.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\PhysicsBody.cpp"
                         ,0x181,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (-1 < param_2) {
    uVar4 = 0;
    if (param_1 < (this->Bodies).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (param_2 < *(int *)((this->Bodies).AllocatorInstance.Data + lVar6 * 0x50 + 0x18))
    goto LAB_14ab86e6f;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("I >= 0 && I < Bodies[B].Boxes.Num()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\PhysicsBody.cpp"
                     ,0x182,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14ab86e6f:
  ::FString::FString(&local_28,param_3);
  uVar4 = 0;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = (this->Bodies).AllocatorInstance.Data;
  uVar4 = 0;
  if (param_2 < *(int *)(pFVar1 + lVar6 * 0x50 + 0x18)) {
    uVar4 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar5 = (FString *)(*(longlong *)(pFVar1 + lVar6 * 0x50 + 0x10) + (longlong)param_2 * 0x50);
  if (pFVar5 != &local_28) {
    pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar5->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar5->Data).ArrayNum = local_28.Data.ArrayNum;
    (pFVar5->Data).ArrayMax = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// SetConvexCount @ 14ab872b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Mutable::Private::FPhysicsBody::SetConvexCount(FPhysicsBody *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<UE::Mutable::Private::FConvexBody,TSizedDefaultAllocator<32>_>::SetNum
            ((TArray<UE::Mutable::Private::FConvexBody,TSizedDefaultAllocator<32>_> *)
             ((this->Bodies).AllocatorInstance.Data + (longlong)param_1 * 0x50 + 0x20),param_2,
             Default);
  return;
}

// SetConvexFlags @ 14ab87350

void __thiscall
UE::Mutable::Private::FPhysicsBody::SetConvexFlags
          (FPhysicsBody *this,int param_1,int param_2,uint param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  
  lVar5 = (longlong)param_1;
  if (((param_1 < 0) || ((this->Bodies).ArrayNum <= param_1)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("B >= 0 && B < Bodies.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\PhysicsBody.cpp"
                         ,0x161,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (-1 < param_2) {
    uVar4 = 0;
    if (param_1 < (this->Bodies).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (param_2 < *(int *)((this->Bodies).AllocatorInstance.Data + lVar5 * 0x50 + 0x28))
    goto LAB_14ab87439;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("I >= 0 && I < Bodies[B].Convex.Num()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\PhysicsBody.cpp"
                     ,0x162,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14ab87439:
  uVar4 = 0;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = (this->Bodies).AllocatorInstance.Data;
  uVar4 = 0;
  if (param_2 < *(int *)(pFVar1 + lVar5 * 0x50 + 0x28)) {
    uVar4 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(uint *)((longlong)param_2 * 0x70 + 0x10 + *(longlong *)(pFVar1 + lVar5 * 0x50 + 0x20)) = param_3
  ;
  return;
}

// SetConvexMesh @ 14ab87500

void __thiscall
UE::Mutable::Private::FPhysicsBody::SetConvexMesh
          (FPhysicsBody *this,int param_1,int param_2,
          TArrayView<UE::Math::TVector<float>_const_,int> *param_3,
          TArrayView<int_const_,int> *param_4)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  int *_Src;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  ForAnyElementType *pFVar7;
  uint uVar8;
  ForAnyElementType local_48;
  undefined8 local_40;
  ForAnyElementType local_38;
  undefined8 local_30;
  
  lVar6 = (longlong)param_1;
  if (((param_1 < 0) || ((this->Bodies).ArrayNum <= param_1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("B >= 0 && B < Bodies.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\PhysicsBody.cpp"
                         ,0x130,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (-1 < param_2) {
    uVar5 = 0;
    if (param_1 < (this->Bodies).ArrayNum) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (param_2 < *(int *)((this->Bodies).AllocatorInstance.Data + lVar6 * 0x50 + 0x28))
    goto LAB_14ab875e6;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("I >= 0 && I < Bodies[B].Convex.Num()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\PhysicsBody.cpp"
                     ,0x131,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_14ab875e6:
  iVar1 = param_3->ArrayNum;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = CONCAT44(local_40._4_4_,iVar1);
  if (iVar1 == 0) {
    local_40 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar1,0,&local_48,iVar1,(int *)((longlong)&local_40 + 4));
    memcpy(local_48.Data,param_3->DataPtr,(longlong)iVar1 * 0xc);
  }
  uVar8 = 0;
  uVar5 = uVar8;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (this->Bodies).AllocatorInstance.Data;
  uVar5 = uVar8;
  if (param_2 < *(int *)(pFVar2 + lVar6 * 0x50 + 0x28)) {
    uVar5 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar7 = (ForAnyElementType *)
           (*(longlong *)(pFVar2 + lVar6 * 0x50 + 0x20) + (longlong)param_2 * 0x70 + 0x18);
  if (pFVar7 != &local_48) {
    if (pFVar7->Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7->Data);
    }
    pFVar7->Data = local_48.Data;
    local_48.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)&pFVar7[1].Data = (undefined4)local_40;
    *(undefined4 *)((longlong)&pFVar7[1].Data + 4) = local_40._4_4_;
    local_40 = 0;
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  local_38.Data = (FScriptContainerElement *)0x0;
  iVar1 = param_4->ArrayNum;
  _Src = param_4->DataPtr;
  local_30 = CONCAT44(local_30._4_4_,iVar1);
  if (iVar1 == 0) {
    local_30 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar1,0,&local_38,iVar1,(int *)((longlong)&local_30 + 4));
    memcpy(local_38.Data,_Src,(longlong)iVar1 << 2);
  }
  uVar5 = uVar8;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (this->Bodies).AllocatorInstance.Data;
  if (param_2 < *(int *)(pFVar2 + lVar6 * 0x50 + 0x28)) {
    uVar8 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar7 = (ForAnyElementType *)
           (*(longlong *)(pFVar2 + lVar6 * 0x50 + 0x20) + (longlong)param_2 * 0x70 + 0x28);
  if (pFVar7 != &local_38) {
    if (pFVar7->Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7->Data);
    }
    pFVar7->Data = local_38.Data;
    local_38.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)&pFVar7[1].Data = (undefined4)local_30;
    *(undefined4 *)((longlong)&pFVar7[1].Data + 4) = local_30._4_4_;
    local_30 = 0;
  }
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return;
}

// SetConvexName @ 14ab878a0

void __thiscall
UE::Mutable::Private::FPhysicsBody::SetConvexName
          (FPhysicsBody *this,int param_1,int param_2,char *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FString *pFVar5;
  longlong lVar6;
  FString local_28;
  
  lVar6 = (longlong)param_1;
  if (((param_1 < 0) || ((this->Bodies).ArrayNum <= param_1)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("B >= 0 && B < Bodies.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\PhysicsBody.cpp"
                         ,0x189,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (-1 < param_2) {
    uVar4 = 0;
    if (param_1 < (this->Bodies).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (param_2 < *(int *)((this->Bodies).AllocatorInstance.Data + lVar6 * 0x50 + 0x28))
    goto LAB_14ab8797f;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("I >= 0 && I < Bodies[B].Convex.Num()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\PhysicsBody.cpp"
                     ,0x18a,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14ab8797f:
  ::FString::FString(&local_28,param_3);
  uVar4 = 0;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = (this->Bodies).AllocatorInstance.Data;
  uVar4 = 0;
  if (param_2 < *(int *)(pFVar1 + lVar6 * 0x50 + 0x28)) {
    uVar4 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar5 = (FString *)(*(longlong *)(pFVar1 + lVar6 * 0x50 + 0x20) + (longlong)param_2 * 0x70);
  if (pFVar5 != &local_28) {
    pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar5->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar5->Data).ArrayNum = local_28.Data.ArrayNum;
    (pFVar5->Data).ArrayMax = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// SetConvexTransform @ 14ab87aa0

void __thiscall
UE::Mutable::Private::FPhysicsBody::SetConvexTransform
          (FPhysicsBody *this,int param_1,int param_2,TTransform<float> *param_3)

{
  ulong64 *puVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  ulong64 uVar4;
  ulong64 uVar5;
  ulong64 uVar6;
  ulong64 uVar7;
  ulong64 uVar8;
  ulong64 uVar9;
  bool bVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  
  lVar13 = (longlong)param_1;
  if (((param_1 < 0) || ((this->Bodies).ArrayNum <= param_1)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("B >= 0 && B < Bodies.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\PhysicsBody.cpp"
                          ,0x13b,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (-1 < param_2) {
    uVar11 = 0;
    if (param_1 < (this->Bodies).ArrayNum) {
      uVar11 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (param_2 < *(int *)((this->Bodies).AllocatorInstance.Data + lVar13 * 0x50 + 0x28))
    goto LAB_14ab87b89;
  }
  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                     ("I >= 0 && I < Bodies[B].Convex.Num()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\PhysicsBody.cpp"
                      ,0x13c,L"");
  if (bVar10) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_14ab87b89:
  uVar4 = (param_3->Rotation).m128_u64[0];
  uVar5 = (param_3->Rotation).m128_u64[1];
  uVar6 = (param_3->Translation).m128_u64[0];
  uVar7 = (param_3->Translation).m128_u64[1];
  uVar11 = 0;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar11 = (uint)~param_1 >> 0x1f;
  }
  uVar8 = (param_3->Scale3D).m128_u64[0];
  uVar9 = (param_3->Scale3D).m128_u64[1];
  if ((uVar11 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (this->Bodies).AllocatorInstance.Data;
  uVar11 = 0;
  if (param_2 < *(int *)(pFVar2 + lVar13 * 0x50 + 0x28)) {
    uVar11 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar13 = *(longlong *)(pFVar2 + lVar13 * 0x50 + 0x20);
  lVar12 = (longlong)param_2 * 0x70;
  puVar1 = (ulong64 *)(lVar12 + 0x40 + lVar13);
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  puVar1 = (ulong64 *)(lVar12 + 0x50 + lVar13);
  *puVar1 = uVar6;
  puVar1[1] = uVar7;
  puVar1 = (ulong64 *)(lVar12 + 0x60 + lVar13);
  *puVar1 = uVar8;
  puVar1[1] = uVar9;
  return;
}

// SetCustomId @ 14ab87c90

void __thiscall UE::Mutable::Private::FPhysicsBody::SetCustomId(FPhysicsBody *this,int param_1)

{
  this->CustomId = param_1;
  return;
}

// SetSphere @ 14ab8a100

void __thiscall
UE::Mutable::Private::FPhysicsBody::SetSphere
          (FPhysicsBody *this,int param_1,int param_2,TVector<float> *param_3,float param_4)

{
  undefined8 uVar1;
  float fVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  TArray<UE::Mutable::Private::FPhysicsBodyAggregate,TSizedDefaultAllocator<32>_> *pTVar10;
  longlong lVar11;
  
  lVar11 = (longlong)param_2;
  lVar9 = (longlong)param_1;
  if (((param_1 < 0) || ((this->Bodies).ArrayNum <= param_1)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("B >= 0 && B < Bodies.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\PhysicsBody.cpp"
                         ,0x119,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar10 = &this->Bodies;
  uVar8 = (uint)~param_1 >> 0x1f;
  if (-1 < param_2) {
    uVar7 = 0;
    if (param_1 < (this->Bodies).ArrayNum) {
      uVar7 = uVar8;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (param_2 < *(int *)((pTVar10->AllocatorInstance).Data + lVar9 * 0x50 + 8))
    goto LAB_14ab8a1e6;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("I >= 0 && I < Bodies[B].Spheres.Num()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\PhysicsBody.cpp"
                     ,0x11a,L"");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_14ab8a1e6:
  fVar2 = (param_3->field0_0x0)._s_0.Z;
  uVar1 = *(undefined8 *)&param_3->field0_0x0;
  uVar7 = 0;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar7 = uVar8;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar3 = (pTVar10->AllocatorInstance).Data;
  uVar7 = 0;
  if (param_2 < *(int *)(pFVar3 + lVar9 * 0x50 + 8)) {
    uVar7 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar4 = *(longlong *)(pFVar3 + lVar9 * 0x50);
  *(undefined8 *)(lVar4 + 0x18 + lVar11 * 0x28) = uVar1;
  *(float *)(lVar4 + 0x20 + lVar11 * 0x28) = fVar2;
  uVar7 = 0;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar7 = uVar8;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar3 = (pTVar10->AllocatorInstance).Data;
  uVar8 = 0;
  if (param_2 < *(int *)(pFVar3 + lVar9 * 0x50 + 8)) {
    uVar8 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  *(float *)(*(longlong *)(pFVar3 + lVar9 * 0x50) + 0x24 + lVar11 * 0x28) = param_4;
  return;
}

// SetSphereCount @ 14ab8a390

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Mutable::Private::FPhysicsBody::SetSphereCount(FPhysicsBody *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<UE::Mutable::Private::FSphereBody,TSizedDefaultAllocator<32>_>::SetNum
            ((TArray<UE::Mutable::Private::FSphereBody,TSizedDefaultAllocator<32>_> *)
             ((this->Bodies).AllocatorInstance.Data + (longlong)param_1 * 0x50),param_2,Default);
  return;
}

// SetSphereFlags @ 14ab8a420

void __thiscall
UE::Mutable::Private::FPhysicsBody::SetSphereFlags
          (FPhysicsBody *this,int param_1,int param_2,uint param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  
  if (((param_1 < 0) || ((this->Bodies).ArrayNum <= param_1)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("B >= 0 && B < Bodies.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\PhysicsBody.cpp"
                         ,0x151,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (-1 < param_2) {
    uVar3 = 0;
    if (param_1 < (this->Bodies).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (param_2 < *(int *)((this->Bodies).AllocatorInstance.Data + (longlong)param_1 * 0x50 + 8))
    goto LAB_14ab8a509;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("I >= 0 && I < Bodies[B].Spheres.Num()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\PhysicsBody.cpp"
                     ,0x152,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_14ab8a509:
  uVar3 = 0;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar4 = (this->Bodies).AllocatorInstance.Data + (longlong)param_1 * 0x50;
  uVar3 = 0;
  if (param_2 < *(int *)(pFVar4 + 8)) {
    uVar3 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(uint *)(*(longlong *)pFVar4 + 0x10 + (longlong)param_2 * 0x28) = param_3;
  return;
}

// SetSphereName @ 14ab8a5e0

void __thiscall
UE::Mutable::Private::FPhysicsBody::SetSphereName
          (FPhysicsBody *this,int param_1,int param_2,char *param_3)

{
  FString *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  FString local_28;
  
  if (((param_1 < 0) || ((this->Bodies).ArrayNum <= param_1)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("B >= 0 && B < Bodies.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\PhysicsBody.cpp"
                         ,0x179,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (-1 < param_2) {
    uVar4 = 0;
    if (param_1 < (this->Bodies).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (param_2 < *(int *)((this->Bodies).AllocatorInstance.Data + (longlong)param_1 * 0x50 + 8))
    goto LAB_14ab8a6bf;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("I >= 0 && I < Bodies[B].Spheres.Num()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\PhysicsBody.cpp"
                     ,0x17a,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14ab8a6bf:
  ::FString::FString(&local_28,param_3);
  uVar4 = 0;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar5 = (this->Bodies).AllocatorInstance.Data + (longlong)param_1 * 0x50;
  uVar4 = 0;
  if (param_2 < *(int *)(pFVar5 + 8)) {
    uVar4 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = (FString *)(*(longlong *)pFVar5 + (longlong)param_2 * 0x28);
  if (pFVar1 != &local_28) {
    pFVar5 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = local_28.Data.ArrayNum;
    (pFVar1->Data).ArrayMax = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// SetSphyl @ 14ab8a7e0

void __thiscall
UE::Mutable::Private::FPhysicsBody::SetSphyl
          (FPhysicsBody *this,int param_1,int param_2,TVector<float> *param_3,TQuat<float> *param_4,
          float param_5,float param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  float fVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  TArray<UE::Mutable::Private::FPhysicsBodyAggregate,TSizedDefaultAllocator<32>_> *pTVar13;
  longlong lVar14;
  
  lVar14 = (longlong)param_2;
  lVar12 = (longlong)param_1;
  if (((param_1 < 0) || ((this->Bodies).ArrayNum <= param_1)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("B >= 0 && B < Bodies.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\PhysicsBody.cpp"
                         ,0x146,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pTVar13 = &this->Bodies;
  uVar11 = (uint)~param_1 >> 0x1f;
  if (-1 < param_2) {
    uVar9 = 0;
    if (param_1 < (this->Bodies).ArrayNum) {
      uVar9 = uVar11;
    }
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (param_2 < *(int *)((pTVar13->AllocatorInstance).Data + lVar12 * 0x50 + 0x38))
    goto LAB_14ab8a8c6;
  }
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("I >= 0 && I < Bodies[B].Sphyls.Num()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\PhysicsBody.cpp"
                     ,0x147,L"");
  if (bVar8) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
LAB_14ab8a8c6:
  fVar3 = (param_3->field0_0x0)._s_0.Z;
  uVar2 = *(undefined8 *)&param_3->field0_0x0;
  uVar9 = 0;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar9 = uVar11;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar4 = (pTVar13->AllocatorInstance).Data;
  uVar10 = (uint)~param_2 >> 0x1f;
  uVar9 = 0;
  if (param_2 < *(int *)(pFVar4 + lVar12 * 0x50 + 0x38)) {
    uVar9 = uVar10;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lVar5 = *(longlong *)(pFVar4 + lVar12 * 0x50 + 0x30);
  *(undefined8 *)(lVar5 + 0x18 + lVar14 * 0x50) = uVar2;
  *(float *)(lVar5 + 0x20 + lVar14 * 0x50) = fVar3;
  uVar2 = *(undefined8 *)param_4;
  uVar7 = *(undefined8 *)&param_4->Z;
  uVar9 = 0;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar9 = uVar11;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar4 = (pTVar13->AllocatorInstance).Data;
  uVar9 = 0;
  if (param_2 < *(int *)(pFVar4 + lVar12 * 0x50 + 0x38)) {
    uVar9 = uVar10;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  puVar1 = (undefined8 *)(*(longlong *)(pFVar4 + lVar12 * 0x50 + 0x30) + 0x30 + lVar14 * 0x50);
  *puVar1 = uVar2;
  puVar1[1] = uVar7;
  uVar9 = 0;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar9 = uVar11;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar4 = (pTVar13->AllocatorInstance).Data;
  uVar9 = 0;
  if (param_2 < *(int *)(pFVar4 + lVar12 * 0x50 + 0x38)) {
    uVar9 = uVar10;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  *(float *)(*(longlong *)(pFVar4 + lVar12 * 0x50 + 0x30) + 0x40 + lVar14 * 0x50) = param_5;
  uVar9 = 0;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar9 = uVar11;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar4 = (pTVar13->AllocatorInstance).Data;
  uVar11 = 0;
  if (param_2 < *(int *)(pFVar4 + lVar12 * 0x50 + 0x38)) {
    uVar11 = uVar10;
  }
  if ((uVar11 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  *(float *)(*(longlong *)(pFVar4 + lVar12 * 0x50 + 0x30) + 0x44 + lVar14 * 0x50) = param_6;
  return;
}

// SetSphylCount @ 14ab8abd0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Mutable::Private::FPhysicsBody::SetSphylCount(FPhysicsBody *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<UE::Mutable::Private::FSphylBody,TSizedDefaultAllocator<32>_>::SetNum
            ((TArray<UE::Mutable::Private::FSphylBody,TSizedDefaultAllocator<32>_> *)
             ((this->Bodies).AllocatorInstance.Data + (longlong)param_1 * 0x50 + 0x30),param_2,
             Default);
  return;
}

// SetSphylFlags @ 14ab8ac70

void __thiscall
UE::Mutable::Private::FPhysicsBody::SetSphylFlags
          (FPhysicsBody *this,int param_1,int param_2,uint param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  
  lVar5 = (longlong)param_1;
  if (((param_1 < 0) || ((this->Bodies).ArrayNum <= param_1)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("B >= 0 && B < Bodies.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\PhysicsBody.cpp"
                         ,0x169,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (-1 < param_2) {
    uVar4 = 0;
    if (param_1 < (this->Bodies).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (param_2 < *(int *)((this->Bodies).AllocatorInstance.Data + lVar5 * 0x50 + 0x38))
    goto LAB_14ab8ad59;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("I >= 0 && I < Bodies[B].Sphyls.Num()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\PhysicsBody.cpp"
                     ,0x16a,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14ab8ad59:
  uVar4 = 0;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = (this->Bodies).AllocatorInstance.Data;
  uVar4 = 0;
  if (param_2 < *(int *)(pFVar1 + lVar5 * 0x50 + 0x38)) {
    uVar4 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(uint *)(*(longlong *)(pFVar1 + lVar5 * 0x50 + 0x30) + 0x10 + (longlong)param_2 * 0x50) = param_3
  ;
  return;
}

// SetSphylName @ 14ab8ae30

void __thiscall
UE::Mutable::Private::FPhysicsBody::SetSphylName
          (FPhysicsBody *this,int param_1,int param_2,char *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FString *pFVar5;
  longlong lVar6;
  FString local_28;
  
  lVar6 = (longlong)param_1;
  if (((param_1 < 0) || ((this->Bodies).ArrayNum <= param_1)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("B >= 0 && B < Bodies.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\PhysicsBody.cpp"
                         ,0x191,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (-1 < param_2) {
    uVar4 = 0;
    if (param_1 < (this->Bodies).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (param_2 < *(int *)((this->Bodies).AllocatorInstance.Data + lVar6 * 0x50 + 0x38))
    goto LAB_14ab8af0f;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("I >= 0 && I < Bodies[B].Sphyls.Num()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\PhysicsBody.cpp"
                     ,0x192,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14ab8af0f:
  ::FString::FString(&local_28,param_3);
  uVar4 = 0;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = (this->Bodies).AllocatorInstance.Data;
  uVar4 = 0;
  if (param_2 < *(int *)(pFVar1 + lVar6 * 0x50 + 0x38)) {
    uVar4 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar5 = (FString *)(*(longlong *)(pFVar1 + lVar6 * 0x50 + 0x30) + (longlong)param_2 * 0x50);
  if (pFVar5 != &local_28) {
    pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar5->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar5->Data).ArrayNum = local_28.Data.ArrayNum;
    (pFVar5->Data).ArrayMax = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// SetTaperedCapsule @ 14ab8b560

void __thiscall
UE::Mutable::Private::FPhysicsBody::SetTaperedCapsule
          (FPhysicsBody *this,int param_1,int param_2,TVector<float> *param_3,TQuat<float> *param_4,
          float param_5,float param_6,float param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  float fVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  TArray<UE::Mutable::Private::FPhysicsBodyAggregate,TSizedDefaultAllocator<32>_> *pTVar13;
  longlong lVar14;
  
  lVar14 = (longlong)param_2;
  lVar12 = (longlong)param_1;
  if (((param_1 < 0) || ((this->Bodies).ArrayNum <= param_1)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("B >= 0 && B < Bodies.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\PhysicsBody.cpp"
                         ,0x1a4,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pTVar13 = &this->Bodies;
  uVar11 = (uint)~param_1 >> 0x1f;
  if (-1 < param_2) {
    uVar9 = 0;
    if (param_1 < (this->Bodies).ArrayNum) {
      uVar9 = uVar11;
    }
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (param_2 < *(int *)((pTVar13->AllocatorInstance).Data + lVar12 * 0x50 + 0x48))
    goto LAB_14ab8b64d;
  }
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("I >= 0 && I < Bodies[B].TaperedCapsules.Num()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\PhysicsBody.cpp"
                     ,0x1a5,L"");
  if (bVar8) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
LAB_14ab8b64d:
  fVar3 = (param_3->field0_0x0)._s_0.Z;
  uVar2 = *(undefined8 *)&param_3->field0_0x0;
  uVar9 = 0;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar9 = uVar11;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar4 = (pTVar13->AllocatorInstance).Data;
  uVar10 = (uint)~param_2 >> 0x1f;
  uVar9 = 0;
  if (param_2 < *(int *)(pFVar4 + lVar12 * 0x50 + 0x48)) {
    uVar9 = uVar10;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lVar5 = *(longlong *)(pFVar4 + lVar12 * 0x50 + 0x40);
  *(undefined8 *)(lVar5 + 0x18 + lVar14 * 0x50) = uVar2;
  *(float *)(lVar5 + 0x20 + lVar14 * 0x50) = fVar3;
  uVar2 = *(undefined8 *)param_4;
  uVar7 = *(undefined8 *)&param_4->Z;
  uVar9 = 0;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar9 = uVar11;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar4 = (pTVar13->AllocatorInstance).Data;
  uVar9 = 0;
  if (param_2 < *(int *)(pFVar4 + lVar12 * 0x50 + 0x48)) {
    uVar9 = uVar10;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  puVar1 = (undefined8 *)(*(longlong *)(pFVar4 + lVar12 * 0x50 + 0x40) + 0x30 + lVar14 * 0x50);
  *puVar1 = uVar2;
  puVar1[1] = uVar7;
  uVar9 = 0;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar9 = uVar11;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar4 = (pTVar13->AllocatorInstance).Data;
  uVar9 = 0;
  if (param_2 < *(int *)(pFVar4 + lVar12 * 0x50 + 0x48)) {
    uVar9 = uVar10;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  *(float *)(*(longlong *)(pFVar4 + lVar12 * 0x50 + 0x40) + 0x40 + lVar14 * 0x50) = param_5;
  uVar9 = 0;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar9 = uVar11;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar4 = (pTVar13->AllocatorInstance).Data;
  uVar9 = 0;
  if (param_2 < *(int *)(pFVar4 + lVar12 * 0x50 + 0x48)) {
    uVar9 = uVar10;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  *(float *)(*(longlong *)(pFVar4 + lVar12 * 0x50 + 0x40) + 0x44 + lVar14 * 0x50) = param_6;
  uVar9 = 0;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar9 = uVar11;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar4 = (pTVar13->AllocatorInstance).Data;
  uVar11 = 0;
  if (param_2 < *(int *)(pFVar4 + lVar12 * 0x50 + 0x48)) {
    uVar11 = uVar10;
  }
  if ((uVar11 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  *(float *)(*(longlong *)(pFVar4 + lVar12 * 0x50 + 0x40) + 0x48 + lVar14 * 0x50) = param_7;
  return;
}

// SetTaperedCapsuleCount @ 14ab8ba10

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Mutable::Private::FPhysicsBody::SetTaperedCapsuleCount
          (FPhysicsBody *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<UE::Mutable::Private::FTaperedCapsuleBody,TSizedDefaultAllocator<32>_>::SetNum
            ((TArray<UE::Mutable::Private::FTaperedCapsuleBody,TSizedDefaultAllocator<32>_> *)
             ((this->Bodies).AllocatorInstance.Data + (longlong)param_1 * 0x50 + 0x40),param_2,
             Default);
  return;
}

// SetTaperedCapsuleFlags @ 14ab8bab0

void __thiscall
UE::Mutable::Private::FPhysicsBody::SetTaperedCapsuleFlags
          (FPhysicsBody *this,int param_1,int param_2,uint param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  
  lVar5 = (longlong)param_1;
  if (((param_1 < 0) || ((this->Bodies).ArrayNum <= param_1)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("B >= 0 && B < Bodies.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\PhysicsBody.cpp"
                         ,0x171,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (-1 < param_2) {
    uVar4 = 0;
    if (param_1 < (this->Bodies).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (param_2 < *(int *)((this->Bodies).AllocatorInstance.Data + lVar5 * 0x50 + 0x48))
    goto LAB_14ab8bb99;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("I >= 0 && I < Bodies[B].TaperedCapsules.Num()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\PhysicsBody.cpp"
                     ,0x172,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14ab8bb99:
  uVar4 = 0;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = (this->Bodies).AllocatorInstance.Data;
  uVar4 = 0;
  if (param_2 < *(int *)(pFVar1 + lVar5 * 0x50 + 0x48)) {
    uVar4 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(uint *)(*(longlong *)(pFVar1 + lVar5 * 0x50 + 0x40) + 0x10 + (longlong)param_2 * 0x50) = param_3
  ;
  return;
}

// SetTaperedCapsuleName @ 14ab8bc70

void __thiscall
UE::Mutable::Private::FPhysicsBody::SetTaperedCapsuleName
          (FPhysicsBody *this,int param_1,int param_2,char *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FString *pFVar5;
  longlong lVar6;
  FString local_28;
  
  lVar6 = (longlong)param_1;
  if (((param_1 < 0) || ((this->Bodies).ArrayNum <= param_1)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("B >= 0 && B < Bodies.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\PhysicsBody.cpp"
                         ,0x199,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (-1 < param_2) {
    uVar4 = 0;
    if (param_1 < (this->Bodies).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (param_2 < *(int *)((this->Bodies).AllocatorInstance.Data + lVar6 * 0x50 + 0x48))
    goto LAB_14ab8bd4f;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("I >= 0 && I < Bodies[B].TaperedCapsules.Num()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\PhysicsBody.cpp"
                     ,0x19a,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14ab8bd4f:
  ::FString::FString(&local_28,param_3);
  uVar4 = 0;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = (this->Bodies).AllocatorInstance.Data;
  uVar4 = 0;
  if (param_2 < *(int *)(pFVar1 + lVar6 * 0x50 + 0x48)) {
    uVar4 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar5 = (FString *)(*(longlong *)(pFVar1 + lVar6 * 0x50 + 0x40) + (longlong)param_2 * 0x50);
  if (pFVar5 != &local_28) {
    pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar5->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar5->Data).ArrayNum = local_28.Data.ArrayNum;
    (pFVar5->Data).ArrayMax = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// StaticUnserialise @ 14ab8c1d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TSharedPtr<UE::Mutable::Private::FPhysicsBody,1> * __cdecl
UE::Mutable::Private::FPhysicsBody::StaticUnserialise
          (TSharedPtr<UE::Mutable::Private::FPhysicsBody,1> *__return_storage_ptr__,
          FInputArchive *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FPhysicsBody *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TSharedRef<UE::Mutable::Private::FPhysicsBody,1> *pTVar6;
  TSharedPtr<UE::Mutable::Private::FPhysicsBody,1> *pTVar7;
  uint uVar8;
  ulonglong uVar9;
  char local_res8 [8];
  uint local_res10 [2];
  uint local_res18 [4];
  TSharedRef<UE::Mutable::Private::FPhysicsBody,1> local_38;
  
  pTVar6 = MakeShared<UE::Mutable::Private::FPhysicsBody,1>(&local_38);
  __return_storage_ptr__->Object = pTVar6->Object;
  pTVar1 = (pTVar6->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  if (__return_storage_ptr__->Object == (FPhysicsBody *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedPtr<UE::Mutable::Private::FPhysicsBody,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pFVar2 = __return_storage_ptr__->Object;
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,pFVar2,4);
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_res10,4);
  TArray<UE::Mutable::Private::FPhysicsBodyAggregate,TSizedDefaultAllocator<32>_>::SetNum
            (&pFVar2->Bodies,local_res10[0],Default);
  uVar9 = 0;
  if (local_res10[0] != 0) {
    do {
      uVar8 = (uint)uVar9;
      uVar5 = 0;
      if ((int)uVar8 < (pFVar2->Bodies).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TSharedPtr<UE::Mutable::Private::FPhysicsBody,1> *)(*pcVar3)();
          return pTVar7;
        }
      }
      FPhysicsBodyAggregate::Unserialise
                ((FPhysicsBodyAggregate *)
                 ((pFVar2->Bodies).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x50),param_1);
      uVar9 = uVar9 + 1;
    } while (uVar9 < local_res10[0]);
  }
  operator>><UE::Mutable::Private::FBoneName_TSizedDefaultAllocator<32>_>(param_1,&pFVar2->BoneIds);
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_res18,4);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&pFVar2->BodiesCustomIds,local_res18[0],Default);
  if (local_res18[0] != 0) {
    (**(code **)((longlong)*param_1->Stream + 8))
              (param_1->Stream,(pFVar2->BodiesCustomIds).AllocatorInstance.Data,
               (ulonglong)local_res18[0] << 2);
  }
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_res8,1);
  pFVar2->bBodiesModified = local_res8[0] != '\0';
  return __return_storage_ptr__;
}

// Unserialise @ 14ab8d1b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Mutable::Private::FPhysicsBody::Unserialise(FPhysicsBody *this,FInputArchive *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  char local_res8 [8];
  uint local_res10 [2];
  uint local_res18 [2];
  
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,this,4);
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_res10,4);
  TArray<UE::Mutable::Private::FPhysicsBodyAggregate,TSizedDefaultAllocator<32>_>::SetNum
            (&this->Bodies,local_res10[0],Default);
  uVar5 = 0;
  if (local_res10[0] != 0) {
    do {
      uVar4 = (uint)uVar5;
      uVar3 = 0;
      if ((int)uVar4 < (this->Bodies).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      FPhysicsBodyAggregate::Unserialise
                ((FPhysicsBodyAggregate *)
                 ((this->Bodies).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x50),param_1);
      uVar5 = uVar5 + 1;
    } while (uVar5 < local_res10[0]);
  }
  operator>><UE::Mutable::Private::FBoneName_TSizedDefaultAllocator<32>_>(param_1,&this->BoneIds);
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_res18,4);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&this->BodiesCustomIds,local_res18[0],Default);
  if (local_res18[0] != 0) {
    (**(code **)((longlong)*param_1->Stream + 8))
              (param_1->Stream,(this->BodiesCustomIds).AllocatorInstance.Data,
               (ulonglong)local_res18[0] << 2);
  }
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_res8,1);
  this->bBodiesModified = local_res8[0] != '\0';
  return;
}

