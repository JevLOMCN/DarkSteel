// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 14

// FCollisionResponse @ 147d776b0

FCollisionResponse * __thiscall
FCollisionResponse::FCollisionResponse(FCollisionResponse *this,FCollisionResponse *param_1)

{
  TArray<FResponseChannel,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)((longlong)&(param_1->ResponseToChannels).field0_0x0 + 8);
  pTVar1 = &this->ResponseArray;
  piVar2 = &(this->ResponseArray).ArrayMax;
  *(undefined8 *)&(this->ResponseToChannels).field0_0x0 =
       *(undefined8 *)&(param_1->ResponseToChannels).field0_0x0;
  *(undefined8 *)((longlong)&(this->ResponseToChannels).field0_0x0 + 8) = uVar4;
  uVar4 = *(undefined8 *)((longlong)&(param_1->ResponseToChannels).field0_0x0 + 0x18);
  *(undefined8 *)((longlong)&(this->ResponseToChannels).field0_0x0 + 0x10) =
       *(undefined8 *)((longlong)&(param_1->ResponseToChannels).field0_0x0 + 0x10);
  *(undefined8 *)((longlong)&(this->ResponseToChannels).field0_0x0 + 0x18) = uVar4;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->ResponseArray).ArrayNum;
  _Src = (param_1->ResponseArray).AllocatorInstance.Data;
  (this->ResponseArray).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 * 0xc);
  }
  return this;
}

// StaticStruct @ 1481b96d0

UScriptStruct * __cdecl FCollisionResponse::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollisionResponse.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FCollisionResponse.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollisionResponse,(UObject *)pUVar1,
                         L"CollisionResponse");
  }
  return Z_Registration_Info_UScriptStruct_FCollisionResponse.OuterSingleton;
}

// FCollisionResponse @ 1481c7360

FCollisionResponse * __thiscall
FCollisionResponse::FCollisionResponse(FCollisionResponse *this,ECollisionResponse param_1)

{
  bool bVar1;
  
  FCollisionResponseContainer::FCollisionResponseContainer(&this->ResponseToChannels);
  (this->ResponseArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ResponseArray).ArrayNum = 0;
  (this->ResponseArray).ArrayMax = 0;
  bVar1 = FCollisionResponseContainer::SetAllChannels(&this->ResponseToChannels,param_1);
  if (bVar1) {
    UpdateArrayFromResponseContainer(this);
  }
  return this;
}

// FCollisionResponse @ 1481c73b0

FCollisionResponse * __thiscall FCollisionResponse::FCollisionResponse(FCollisionResponse *this)

{
  FCollisionResponseContainer::FCollisionResponseContainer(&this->ResponseToChannels);
  (this->ResponseArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ResponseArray).ArrayNum = 0;
  (this->ResponseArray).ArrayMax = 0;
  return this;
}

// operator== @ 1481c99b0

bool __thiscall FCollisionResponse::operator==(FCollisionResponse *this,FCollisionResponse *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  longlong local_res18;
  
  iVar8 = (this->ResponseArray).ArrayNum;
  bVar11 = iVar8 == (param_1->ResponseArray).ArrayNum;
  if ((bVar11) && (uVar7 = 0, 0 < iVar8)) {
    local_res18 = 0;
    do {
      uVar6 = 0;
      lVar10 = 0;
      if (iVar8 < 1) {
        return false;
      }
      lVar9 = 0;
      while( true ) {
        uVar5 = 0;
        if ((int)uVar6 < (param_1->ResponseArray).ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        pFVar1 = (param_1->ResponseArray).AllocatorInstance.Data;
        uVar5 = 0;
        if ((int)uVar7 < (this->ResponseArray).ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        if (*(longlong *)((this->ResponseArray).AllocatorInstance.Data + local_res18) ==
            *(longlong *)(pFVar1 + lVar9)) break;
        uVar6 = uVar6 + 1;
        lVar10 = lVar10 + 1;
        lVar9 = lVar9 + 0xc;
        if ((this->ResponseArray).ArrayNum <= (int)uVar6) {
          return false;
        }
      }
      uVar5 = 0;
      if ((int)uVar7 < (this->ResponseArray).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pFVar1 = (this->ResponseArray).AllocatorInstance.Data;
      uVar5 = 0;
      if ((int)uVar6 < (param_1->ResponseArray).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if (pFVar1[local_res18 + 8] !=
          (param_1->ResponseArray).AllocatorInstance.Data[lVar10 * 0xc + 8]) {
        return false;
      }
      iVar8 = (this->ResponseArray).ArrayNum;
      local_res18 = local_res18 + 0xc;
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < iVar8);
  }
  return bVar11;
}

// AddReponseToArray @ 1481d3690

bool __thiscall
FCollisionResponse::AddReponseToArray
          (FCollisionResponse *this,ECollisionChannel param_1,ECollisionResponse param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  UCollisionProfile *this_00;
  uint uVar7;
  uint uVar8;
  longlong local_res8;
  longlong local_28;
  undefined4 local_20;
  
  this_00 = UCollisionProfile::Get();
  UCollisionProfile::ReturnChannelNameFromContainerIndex(this_00,(int)&local_res8);
  uVar7 = 0;
  while( true ) {
    if (((int)uVar7 < 0) || ((this->ResponseArray).ArrayNum <= (int)uVar7)) {
      pFVar2 = (this->ResponseArray).AllocatorInstance.Data;
      local_28 = local_res8;
      local_20 = CONCAT31(local_20._1_3_,SUB41(param_2,0));
      if ((pFVar2 <= (FScriptContainerElement *)&local_28) &&
         (((FScriptContainerElement *)&local_28 <
           pFVar2 + (longlong)(this->ResponseArray).ArrayMax * 0xc &&
          (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar4)))) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      iVar6 = (this->ResponseArray).ArrayNum;
      piVar1 = &(this->ResponseArray).ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40c,&(this->ResponseArray).AllocatorInstance,piVar1);
      }
      (this->ResponseArray).ArrayNum = iVar6 + 1;
      pFVar2 = (this->ResponseArray).AllocatorInstance.Data;
      *(longlong *)(pFVar2 + (longlong)iVar6 * 0xc) = local_28;
      *(undefined4 *)(pFVar2 + (longlong)iVar6 * 0xc + 8) = local_20;
      return true;
    }
    if (((int)uVar7 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    if (local_res8 ==
        *(longlong *)((this->ResponseArray).AllocatorInstance.Data + (longlong)(int)uVar7 * 0xc))
    break;
    uVar7 = uVar7 + 1;
  }
  uVar8 = 0;
  if ((int)uVar7 < (this->ResponseArray).ArrayNum) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  (this->ResponseArray).AllocatorInstance.Data[(longlong)(int)uVar7 * 0xc + 8] = SUB41(param_2,0);
  return true;
}

// RemoveReponseFromArray @ 14820ecf0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FCollisionResponse::RemoveReponseFromArray(FCollisionResponse *this,ECollisionChannel param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UCollisionProfile *this_00;
  int iVar4;
  longlong local_res8;
  
  this_00 = UCollisionProfile::Get();
  UCollisionProfile::ReturnChannelNameFromContainerIndex(this_00,(int)&local_res8);
  iVar4 = 0;
  while( true ) {
    if ((iVar4 < 0) || ((this->ResponseArray).ArrayNum <= iVar4)) {
      return false;
    }
    if (iVar4 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if (local_res8 ==
        *(longlong *)((this->ResponseArray).AllocatorInstance.Data + (longlong)iVar4 * 0xc)) break;
    iVar4 = iVar4 + 1;
  }
  TArray<FResponseChannel,TSizedDefaultAllocator<32>_>::RemoveAt(&this->ResponseArray,iVar4,Default)
  ;
  return true;
}

// ReplaceChannels @ 148212d30

bool __thiscall
FCollisionResponse::ReplaceChannels
          (FCollisionResponse *this,ECollisionResponse param_1,ECollisionResponse param_2)

{
  bool bVar1;
  
  bVar1 = FCollisionResponseContainer::ReplaceChannels(&this->ResponseToChannels,param_1,param_2);
  if (bVar1) {
    UpdateArrayFromResponseContainer(this);
    return true;
  }
  return false;
}

// SetAllChannels @ 148216040

bool __thiscall
FCollisionResponse::SetAllChannels(FCollisionResponse *this,ECollisionResponse param_1)

{
  bool bVar1;
  
  bVar1 = FCollisionResponseContainer::SetAllChannels(&this->ResponseToChannels,param_1);
  if (bVar1) {
    UpdateArrayFromResponseContainer(this);
    return true;
  }
  return false;
}

// SetCollisionResponseContainer @ 148216b60

bool __thiscall
FCollisionResponse::SetCollisionResponseContainer
          (FCollisionResponse *this,FCollisionResponseContainer *param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = memcmp(this,param_1,0x20);
  if (iVar2 != 0) {
    uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
    *(undefined8 *)&(this->ResponseToChannels).field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
    *(undefined8 *)((longlong)&(this->ResponseToChannels).field0_0x0 + 8) = uVar1;
    uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 0x18);
    *(undefined8 *)((longlong)&(this->ResponseToChannels).field0_0x0 + 0x10) =
         *(undefined8 *)((longlong)&param_1->field0_0x0 + 0x10);
    *(undefined8 *)((longlong)&(this->ResponseToChannels).field0_0x0 + 0x18) = uVar1;
    UpdateArrayFromResponseContainer(this);
    return true;
  }
  return false;
}

// SetResponse @ 148218580

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FCollisionResponse::SetResponse
          (FCollisionResponse *this,ECollisionChannel param_1,ECollisionResponse param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UCollisionProfile *this_00;
  int iVar4;
  longlong local_res8;
  
  if (FCollisionResponseContainer::DefaultResponseContainer.field0_0x0.EnumArray[(int)param_1] ==
      param_2) {
    this_00 = UCollisionProfile::Get();
    UCollisionProfile::ReturnChannelNameFromContainerIndex(this_00,(int)&local_res8);
    iVar4 = 0;
    while( true ) {
      if ((iVar4 < 0) || ((this->ResponseArray).ArrayNum <= iVar4)) goto LAB_148218644;
      if (iVar4 < 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      if (local_res8 ==
          *(longlong *)((this->ResponseArray).AllocatorInstance.Data + (longlong)iVar4 * 0xc))
      break;
      iVar4 = iVar4 + 1;
    }
    TArray<FResponseChannel,TSizedDefaultAllocator<32>_>::RemoveAt
              (&this->ResponseArray,iVar4,Default);
  }
  else {
    AddReponseToArray(this,param_1,param_2);
  }
LAB_148218644:
  bVar2 = FCollisionResponseContainer::SetResponse(&this->ResponseToChannels,param_1,param_2);
  return bVar2;
}

// SetResponsesArray @ 148218920

void __thiscall
FCollisionResponse::SetResponsesArray
          (FCollisionResponse *this,TArray<FResponseChannel,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<FResponseChannel,TSizedDefaultAllocator<32>_>::operator=(&this->ResponseArray,param_1);
  UpdateResponseContainerFromArray(this);
  return;
}

// UpdateArrayFromResponseContainer @ 148223550

void __thiscall FCollisionResponse::UpdateArrayFromResponseContainer(FCollisionResponse *this)

{
  TArray<FResponseChannel,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UCollisionProfile *this_00;
  uint uVar7;
  FCollisionResponse *pFVar8;
  longlong local_res8;
  longlong local_28;
  undefined4 local_20;
  
  pTVar1 = &this->ResponseArray;
  uVar7 = 0;
  piVar2 = &(this->ResponseArray).ArrayMax;
  (this->ResponseArray).ArrayNum = 0;
  if ((this->ResponseArray).ArrayMax != 0x20) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0x20,&pTVar1->AllocatorInstance,0,piVar2);
  }
  this_00 = UCollisionProfile::Get();
  pFVar8 = this;
  do {
    if ((pFVar8->ResponseToChannels).field0_0x0._s_0.WorldStatic !=
        *(uchar *)((longlong)pFVar8 +
                  ((longlong)&FCollisionResponseContainer::DefaultResponseContainer - (longlong)this
                  ))) {
      UCollisionProfile::ReturnChannelNameFromContainerIndex(this_00,(int)&local_res8);
      if (local_res8 != 0) {
        pFVar3 = (pTVar1->AllocatorInstance).Data;
        local_28 = local_res8;
        local_20 = CONCAT31(local_20._1_3_,(pFVar8->ResponseToChannels).field0_0x0._s_0.WorldStatic)
        ;
        if ((pFVar3 <= (FScriptContainerElement *)&local_28) &&
           ((FScriptContainerElement *)&local_28 < pFVar3 + (longlong)*piVar2 * 0xc)) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar6 = (this->ResponseArray).ArrayNum;
        if (iVar6 == *piVar2) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x40c,&pTVar1->AllocatorInstance,piVar2);
        }
        (this->ResponseArray).ArrayNum = iVar6 + 1;
        pFVar3 = (pTVar1->AllocatorInstance).Data;
        *(longlong *)(pFVar3 + (longlong)iVar6 * 0xc) = local_28;
        *(undefined4 *)(pFVar3 + (longlong)iVar6 * 0xc + 8) = local_20;
      }
    }
    uVar7 = uVar7 + 1;
    pFVar8 = (FCollisionResponse *)((pFVar8->ResponseToChannels).field0_0x0.EnumArray + 1);
  } while (uVar7 < 0x20);
  iVar6 = (this->ResponseArray).ArrayNum;
  if (*piVar2 != iVar6) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar6,&pTVar1->AllocatorInstance,iVar6,piVar2);
  }
  return;
}

// UpdateResponseContainerFromArray @ 148225dc0

void __thiscall FCollisionResponse::UpdateResponseContainerFromArray(FCollisionResponse *this)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  ECollisionChannel EVar5;
  uint uVar6;
  UCollisionProfile *this_00;
  FScriptContainerElement *_Dst;
  int iVar7;
  uint uVar8;
  FName *pFVar9;
  
  uVar3 = FCollisionResponseContainer::DefaultResponseContainer.field0_0x0._8_8_;
  uVar8 = 0;
  *(undefined8 *)&(this->ResponseToChannels).field0_0x0 =
       FCollisionResponseContainer::DefaultResponseContainer.field0_0x0._0_8_;
  *(undefined8 *)((longlong)&(this->ResponseToChannels).field0_0x0 + 8) = uVar3;
  uVar3 = FCollisionResponseContainer::DefaultResponseContainer.field0_0x0._24_8_;
  *(undefined8 *)((longlong)&(this->ResponseToChannels).field0_0x0 + 0x10) =
       FCollisionResponseContainer::DefaultResponseContainer.field0_0x0._16_8_;
  *(undefined8 *)((longlong)&(this->ResponseToChannels).field0_0x0 + 0x18) = uVar3;
  while ((-1 < (int)uVar8 && ((int)uVar8 < (this->ResponseArray).ArrayNum))) {
    if ((int)uVar8 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar9 = (FName *)((this->ResponseArray).AllocatorInstance.Data + (longlong)(int)uVar8 * 0xc);
    this_00 = UCollisionProfile::Get();
    EVar5 = UCollisionProfile::ReturnContainerIndexFromChannelName(this_00,pFVar9);
    if (EVar5 == ~ECC_WorldStatic) {
      uVar6 = 0;
      if ((int)uVar8 < (this->ResponseArray).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      _Dst = (this->ResponseArray).AllocatorInstance.Data + (longlong)(int)uVar8 * 0xc;
      iVar7 = (this->ResponseArray).ArrayNum + ~uVar8;
      if (iVar7 != 0) {
        memmove(_Dst,_Dst + 0xc,(longlong)iVar7 * 0xc);
      }
      piVar1 = &(this->ResponseArray).ArrayNum;
      *piVar1 = *piVar1 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,&(this->ResponseArray).AllocatorInstance,(this->ResponseArray).ArrayNum,
                 &(this->ResponseArray).ArrayMax);
    }
    else {
      FCollisionResponseContainer::SetResponse
                (&this->ResponseToChannels,EVar5,(uint)(byte)pFVar9[1].ComparisonIndex.Value);
      uVar8 = uVar8 + 1;
    }
  }
  return;
}

