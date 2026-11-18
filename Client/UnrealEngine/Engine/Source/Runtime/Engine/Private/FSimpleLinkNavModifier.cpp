// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// AddLink @ 147382bf0

void __thiscall
FSimpleLinkNavModifier::AddLink(FSimpleLinkNavModifier *this,FNavigationLink *param_1)

{
  int *piVar1;
  FNavigationLink *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  FNavigationLinkBase *pFVar9;
  
  pFVar2 = (FNavigationLink *)(this->Links).AllocatorInstance.Data;
  if ((pFVar2 <= param_1) && (param_1 < pFVar2 + (this->Links).ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar7 = (this->Links).ArrayNum;
  piVar1 = &(this->Links).ArrayMax;
  if (uVar7 == *piVar1) {
    uVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x870,&(this->Links).AllocatorInstance,piVar1);
  }
  pFVar3 = (this->Links).AllocatorInstance.Data;
  (this->Links).ArrayNum = uVar7 + 1;
  pFVar9 = (FNavigationLinkBase *)(pFVar3 + (longlong)(int)uVar7 * 0x70);
  FNavigationLinkBase::FNavigationLinkBase(pFVar9,(FNavigationLinkBase *)param_1);
  dVar5 = (param_1->Left).field0_0x0._s_0.Y;
  *(double *)(pFVar9 + 1) = (param_1->Left).field0_0x0._s_0.X;
  *(double *)&pFVar9[1].UserId = dVar5;
  pFVar9[1].NavLinkId.Id = (ulong64)(param_1->Left).field0_0x0._s_0.Z;
  dVar5 = (param_1->Right).field0_0x0._s_0.Y;
  *(double *)&pFVar9[1].SnapRadius = (param_1->Right).field0_0x0._s_0.X;
  *(double *)&pFVar9[1].SupportedAgents = dVar5;
  *(double *)&pFVar9[1].Direction = (param_1->Right).field0_0x0._s_0.Z;
  uVar8 = 0;
  if ((int)uVar7 < (this->Links).ArrayNum) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar9 = (FNavigationLinkBase *)
           ((this->Links).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x70);
  bVar6 = FNavigationLinkBase::HasMetaArea(pFVar9);
  uVar7 = (uint)bVar6 * 2 | *(uint *)&this->field_0xa0;
  uVar7 = (uVar7 ^ *(uint *)&this->field_0xa0) & 0xfffffffd ^ uVar7;
  *(uint *)&this->field_0xa0 = uVar7;
  uVar8 = 0.0 < pFVar9->MaxFallDownLength | uVar7;
  uVar8 = (uVar7 ^ uVar8) & 0xfffffffe ^ uVar8;
  *(uint *)&this->field_0xa0 = uVar8;
  if (((uVar8 & 4) == 0) && ((uVar8 & 2) == 0)) {
    *(uint *)this = *(uint *)this & 0xfffffffe;
  }
  else {
    *(uint *)this = *(uint *)this & 0xfffffffe;
    *(uint *)this = *(uint *)this | 1;
  }
  return;
}

// AddSegmentLink @ 1473834d0

void __thiscall
FSimpleLinkNavModifier::AddSegmentLink(FSimpleLinkNavModifier *this,FNavigationSegmentLink *param_1)

{
  int *piVar1;
  FNavigationSegmentLink *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  FNavigationLinkBase *this_00;
  
  pFVar2 = (FNavigationSegmentLink *)(this->SegmentLinks).AllocatorInstance.Data;
  if ((pFVar2 <= param_1) && (param_1 < pFVar2 + (this->SegmentLinks).ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar5 = (this->SegmentLinks).ArrayNum;
  piVar1 = &(this->SegmentLinks).ArrayMax;
  if (uVar5 == *piVar1) {
    uVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x8a0,&(this->SegmentLinks).AllocatorInstance,piVar1);
  }
  (this->SegmentLinks).ArrayNum = uVar5 + 1;
  FNavigationSegmentLink::FNavigationSegmentLink
            ((FNavigationSegmentLink *)
             ((this->SegmentLinks).AllocatorInstance.Data + (longlong)(int)uVar5 * 0xa0),param_1);
  uVar6 = 0;
  if ((int)uVar5 < (this->SegmentLinks).ArrayNum) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this_00 = (FNavigationLinkBase *)
            ((this->SegmentLinks).AllocatorInstance.Data + (longlong)(int)uVar5 * 0xa0);
  (this_00->NavLinkId).Id = (this->NavLinkId).Id;
  bVar4 = FNavigationLinkBase::HasMetaArea(this_00);
  uVar5 = (uint)bVar4 * 4 | *(uint *)&this->field_0xa0;
  uVar5 = (uVar5 ^ *(uint *)&this->field_0xa0) & 0xfffffffb ^ uVar5;
  *(uint *)&this->field_0xa0 = uVar5;
  uVar6 = 0.0 < this_00->MaxFallDownLength | uVar5;
  uVar6 = (uVar5 ^ uVar6) & 0xfffffffe ^ uVar6;
  *(uint *)&this->field_0xa0 = uVar6;
  if (((uVar6 & 4) == 0) && ((uVar6 & 2) == 0)) {
    *(uint *)this = *(uint *)this & 0xfffffffe;
  }
  else {
    *(uint *)this = *(uint *)this & 0xfffffffe;
    *(uint *)this = *(uint *)this | 1;
  }
  return;
}

// AppendLinks @ 147383a50

void __thiscall
FSimpleLinkNavModifier::AppendLinks
          (FSimpleLinkNavModifier *this,TArray<FNavigationLink,TSizedDefaultAllocator<32>_> *param_1
          )

{
  TArray<FNavigationLink,TSizedDefaultAllocator<32>_> *pTVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  FNavigationLinkBase *this_00;
  uint uVar9;
  longlong lVar10;
  
  uVar2 = (this->SegmentLinks).ArrayNum;
  pTVar1 = &this->Links;
  if ((pTVar1 == param_1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar3 = param_1->ArrayNum;
  if (iVar3 != 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x70,8,iVar3,&pTVar1->AllocatorInstance,&(this->Links).ArrayNum,
                       &(this->Links).ArrayMax);
    ConstructItems<FNavigationLink,FNavigationLink,int>
              ((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 0x70,
               (FNavigationLink *)(param_1->AllocatorInstance).Data,iVar3);
  }
  if (0 < param_1->ArrayNum) {
    lVar10 = (longlong)(int)uVar2 * 0x70;
    uVar9 = uVar2;
    do {
      uVar7 = 0;
      if ((int)uVar9 < (this->Links).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      this_00 = (FNavigationLinkBase *)((pTVar1->AllocatorInstance).Data + lVar10);
      bVar5 = FNavigationLinkBase::HasMetaArea(this_00);
      uVar7 = (uint)bVar5 * 2 | *(uint *)&this->field_0xa0;
      uVar7 = (uVar7 ^ *(uint *)&this->field_0xa0) & 0xfffffffd ^ uVar7;
      *(uint *)&this->field_0xa0 = uVar7;
      uVar9 = uVar9 + 1;
      uVar8 = 0.0 < this_00->MaxFallDownLength | uVar7;
      lVar10 = lVar10 + 0x70;
      *(uint *)&this->field_0xa0 = (uVar7 ^ uVar8) & 0xfffffffe ^ uVar8;
    } while ((int)(uVar9 - uVar2) < param_1->ArrayNum);
  }
  if ((this->bHasMetaAreasSegment == 0) && (this->bHasMetaAreasPoint == 0)) {
    *(uint *)this = *(uint *)this & 0xfffffffe;
    return;
  }
  *(uint *)this = *(uint *)this & 0xfffffffe;
  *(uint *)this = *(uint *)this | 1;
  return;
}

// AppendSegmentLinks @ 147383c00

void __thiscall
FSimpleLinkNavModifier::AppendSegmentLinks
          (FSimpleLinkNavModifier *this,
          TArray<FNavigationSegmentLink,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  TArray<FNavigationSegmentLink,TSizedDefaultAllocator<32>_> *pTVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  FNavigationLinkBase *this_00;
  longlong lVar10;
  uint uVar11;
  
  piVar1 = &(this->SegmentLinks).ArrayNum;
  uVar3 = *piVar1;
  pTVar2 = &this->SegmentLinks;
  if ((pTVar2 == param_1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 != 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xa0,8,iVar4,&pTVar2->AllocatorInstance,piVar1,&(this->SegmentLinks).ArrayMax
                      );
    ConstructItems<FNavigationSegmentLink,FNavigationSegmentLink,int>
              ((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0xa0,
               (FNavigationSegmentLink *)(param_1->AllocatorInstance).Data,iVar4);
  }
  if (0 < param_1->ArrayNum) {
    lVar10 = (longlong)(int)uVar3 * 0xa0;
    uVar11 = uVar3;
    do {
      uVar8 = 0;
      if ((int)uVar11 < (this->SegmentLinks).ArrayNum) {
        uVar8 = ~uVar11 >> 0x1f;
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
      this_00 = (FNavigationLinkBase *)((pTVar2->AllocatorInstance).Data + lVar10);
      (this_00->NavLinkId).Id = (this->NavLinkId).Id;
      bVar6 = FNavigationLinkBase::HasMetaArea(this_00);
      uVar8 = (uint)bVar6 * 4 | *(uint *)&this->field_0xa0;
      uVar8 = (uVar8 ^ *(uint *)&this->field_0xa0) & 0xfffffffb ^ uVar8;
      *(uint *)&this->field_0xa0 = uVar8;
      uVar11 = uVar11 + 1;
      uVar9 = 0.0 < this_00->MaxFallDownLength | uVar8;
      lVar10 = lVar10 + 0xa0;
      *(uint *)&this->field_0xa0 = (uVar8 ^ uVar9) & 0xfffffffe ^ uVar9;
    } while ((int)(uVar11 - uVar3) < param_1->ArrayNum);
  }
  if ((this->bHasMetaAreasSegment == 0) && (this->bHasMetaAreasPoint == 0)) {
    *(uint *)this = *(uint *)this & 0xfffffffe;
    return;
  }
  *(uint *)this = *(uint *)this & 0xfffffffe;
  *(uint *)this = *(uint *)this | 1;
  return;
}

// SetLinks @ 1473b70f0

void __thiscall
FSimpleLinkNavModifier::SetLinks
          (FSimpleLinkNavModifier *this,TArray<FNavigationLink,TSizedDefaultAllocator<32>_> *param_1
          )

{
  TArray<FNavigationLink,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FNavigationLink *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  FNavigationLinkBase *this_00;
  longlong lVar9;
  uint uVar10;
  
  pTVar1 = &this->Links;
  if (pTVar1 != param_1) {
    iVar3 = param_1->ArrayNum;
    piVar2 = &(this->Links).ArrayMax;
    pFVar4 = (FNavigationLink *)(param_1->AllocatorInstance).Data;
    (this->Links).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x70,8,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
      ConstructItems<FNavigationLink,FNavigationLink,int>
                ((pTVar1->AllocatorInstance).Data,pFVar4,iVar3);
    }
  }
  uVar10 = 0;
  uVar8 = *(uint *)&this->field_0xa0 & 0xfffffffd;
  this->bHasMetaAreasPoint = 0;
  if (0 < (this->Links).ArrayNum) {
    lVar9 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar10 < (this->Links).ArrayNum) {
        uVar8 = ~uVar10 >> 0x1f;
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
      this_00 = (FNavigationLinkBase *)((pTVar1->AllocatorInstance).Data + lVar9);
      bVar6 = FNavigationLinkBase::HasMetaArea(this_00);
      uVar7 = (uint)bVar6 * 2 | *(uint *)&this->field_0xa0;
      uVar7 = (uVar7 ^ *(uint *)&this->field_0xa0) & 0xfffffffd ^ uVar7;
      *(uint *)&this->field_0xa0 = uVar7;
      uVar10 = uVar10 + 1;
      uVar8 = 0.0 < this_00->MaxFallDownLength | uVar7;
      lVar9 = lVar9 + 0x70;
      uVar8 = (uVar7 ^ uVar8) & 0xfffffffe ^ uVar8;
      *(uint *)&this->field_0xa0 = uVar8;
    } while ((int)uVar10 < (this->Links).ArrayNum);
  }
  if (((uVar8 & 4) == 0) && ((uVar8 & 2) == 0)) {
    *(uint *)this = *(uint *)this & 0xfffffffe;
    return;
  }
  *(uint *)this = *(uint *)this & 0xfffffffe;
  *(uint *)this = *(uint *)this | 1;
  return;
}

// SetSegmentLinks @ 1473b83e0

void __thiscall
FSimpleLinkNavModifier::SetSegmentLinks
          (FSimpleLinkNavModifier *this,
          TArray<FNavigationSegmentLink,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<FNavigationSegmentLink,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FNavigationSegmentLink *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  FNavigationLinkBase *this_00;
  longlong lVar9;
  uint uVar10;
  
  pTVar1 = &this->SegmentLinks;
  if (pTVar1 != param_1) {
    iVar3 = param_1->ArrayNum;
    piVar2 = &(this->SegmentLinks).ArrayMax;
    pFVar4 = (FNavigationSegmentLink *)(param_1->AllocatorInstance).Data;
    (this->SegmentLinks).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xa0,8,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
      ConstructItems<FNavigationSegmentLink,FNavigationSegmentLink,int>
                ((pTVar1->AllocatorInstance).Data,pFVar4,iVar3);
    }
  }
  uVar10 = 0;
  uVar8 = *(uint *)&this->field_0xa0 & 0xfffffffb;
  this->bHasMetaAreasSegment = 0;
  if (0 < (this->SegmentLinks).ArrayNum) {
    lVar9 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar10 < (this->SegmentLinks).ArrayNum) {
        uVar8 = ~uVar10 >> 0x1f;
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
      this_00 = (FNavigationLinkBase *)((pTVar1->AllocatorInstance).Data + lVar9);
      (this_00->NavLinkId).Id = (this->NavLinkId).Id;
      bVar6 = FNavigationLinkBase::HasMetaArea(this_00);
      uVar7 = (uint)bVar6 * 4 | *(uint *)&this->field_0xa0;
      uVar7 = (uVar7 ^ *(uint *)&this->field_0xa0) & 0xfffffffb ^ uVar7;
      *(uint *)&this->field_0xa0 = uVar7;
      uVar10 = uVar10 + 1;
      uVar8 = 0.0 < this_00->MaxFallDownLength | uVar7;
      lVar9 = lVar9 + 0xa0;
      uVar8 = (uVar7 ^ uVar8) & 0xfffffffe ^ uVar8;
      *(uint *)&this->field_0xa0 = uVar8;
    } while ((int)uVar10 < (this->SegmentLinks).ArrayNum);
  }
  if (((uVar8 & 4) == 0) && ((uVar8 & 2) == 0)) {
    *(uint *)this = *(uint *)this & 0xfffffffe;
    return;
  }
  *(uint *)this = *(uint *)this & 0xfffffffe;
  *(uint *)this = *(uint *)this | 1;
  return;
}

// UpdateFlags @ 1473bc280

void __thiscall FSimpleLinkNavModifier::UpdateFlags(FSimpleLinkNavModifier *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  puVar1 = &this->field_0xa0;
  uVar5 = *(uint *)puVar1 & 0xfffffff8;
  uVar6 = 0;
  puVar2 = &this->field_0xa0;
  this->bHasFallDownLinks = 0;
  this->bHasMetaAreasSegment = 0;
  this->bHasMetaAreasPoint = 0;
  if (0 < (this->Links).ArrayNum) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar6 < (this->Links).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
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
      bVar4 = FNavigationLinkBase::HasMetaArea
                        ((FNavigationLinkBase *)
                         ((this->Links).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x70));
      uVar5 = (uint)bVar4 + (uint)bVar4 | *(uint *)&this->field_0xa0;
      *(uint *)&this->field_0xa0 = (uVar5 ^ *(uint *)&this->field_0xa0) & 0xfffffffd ^ uVar5;
      uVar5 = 0;
      if ((int)uVar6 < (this->Links).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
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
      uVar6 = uVar6 + 1;
      uVar5 = (uint)(0.0 < *(float *)((this->Links).AllocatorInstance.Data + lVar7 + 4)) |
              *(uint *)&this->field_0xa0;
      lVar7 = lVar7 + 0x70;
      uVar5 = (uVar5 ^ *(uint *)&this->field_0xa0) & 0xfffffffe ^ uVar5;
      *(uint *)&this->field_0xa0 = uVar5;
    } while ((int)uVar6 < (this->Links).ArrayNum);
  }
  if (((uVar5 & 4) == 0) && ((uVar5 & 2) == 0)) {
    *(uint *)this = *(uint *)this & 0xfffffffe;
    return;
  }
  *(uint *)this = *(uint *)this & 0xfffffffe;
  *(uint *)this = *(uint *)this | 1;
  return;
}

