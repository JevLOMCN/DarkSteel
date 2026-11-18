// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// operator= @ 1419884d0

FArchiveSerializedPropertyChain * __thiscall
FArchiveSerializedPropertyChain::operator=
          (FArchiveSerializedPropertyChain *this,FArchiveSerializedPropertyChain *param_1)

{
  int iVar1;
  ForElementType<FProperty_*> FVar2;
  int *piVar3;
  ForElementType<FProperty_*> _Dst;
  ForElementType<FProperty_*> _Src;
  
  if (this != param_1) {
    FVar2 = (param_1->SerializedPropertyChain).AllocatorInstance.SecondaryData;
    piVar3 = &(this->SerializedPropertyChain).ArrayMax;
    iVar1 = (param_1->SerializedPropertyChain).ArrayNum;
    _Src = (ForElementType<FProperty_*>)param_1;
    if (FVar2 != (ForElementType<FProperty_*>)0x0) {
      _Src = FVar2;
    }
    (this->SerializedPropertyChain).ArrayNum = iVar1;
    if ((iVar1 == 0) && (*piVar3 == 0)) {
      *piVar3 = 8;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FProperty_*>_>
                (8,8,iVar1,*piVar3,(ForElementType<FProperty_*> *)this,iVar1,piVar3);
      FVar2 = (this->SerializedPropertyChain).AllocatorInstance.SecondaryData;
      _Dst = (ForElementType<FProperty_*>)this;
      if (FVar2 != (ForElementType<FProperty_*>)0x0) {
        _Dst = FVar2;
      }
      if (iVar1 != 0) {
        memcpy((void *)_Dst,(void *)_Src,(longlong)iVar1 << 3);
      }
    }
  }
  this->SerializedPropertyChainUpdateCount = param_1->SerializedPropertyChainUpdateCount;
  return this;
}

// GetPropertyFromStack @ 141995590

FProperty * __thiscall
FArchiveSerializedPropertyChain::GetPropertyFromStack
          (FArchiveSerializedPropertyChain *this,int param_1)

{
  int iVar1;
  ForElementType<FProperty_*> FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FProperty *pFVar6;
  ForElementType<FProperty_*> FVar7;
  uint uVar8;
  
  iVar1 = (this->SerializedPropertyChain).ArrayNum;
  uVar8 = ~param_1 + iVar1;
  uVar5 = 0;
  if ((int)uVar8 < iVar1) {
    uVar5 = ~uVar8 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FProperty *)(*pcVar3)();
      return pFVar6;
    }
  }
  FVar2 = (this->SerializedPropertyChain).AllocatorInstance.SecondaryData;
  FVar7 = (ForElementType<FProperty_*>)this;
  if (FVar2 != (ForElementType<FProperty_*>)0x0) {
    FVar7 = FVar2;
  }
  return *(FProperty **)
          ((uint *)((longlong)FVar7 + -8) +
          (longlong)((this->SerializedPropertyChain).ArrayNum - param_1) * 2);
}

// PopProperty @ 1419a67f0

void __thiscall
FArchiveSerializedPropertyChain::PopProperty
          (FArchiveSerializedPropertyChain *this,FProperty *param_1,bool param_2)

{
  int *piVar1;
  void *_Dst;
  int iVar2;
  ForElementType<FProperty_*> FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  ForElementType<FProperty_*> FVar8;
  
  if ((param_1 == (FProperty *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InProperty",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\ArchiveSerializedPropertyChain.h"
                         ,0x31,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar2 = (this->SerializedPropertyChain).ArrayNum;
  if (0 < iVar2) {
    uVar6 = 0;
    if ((int)(iVar2 - 1U) < iVar2) {
      uVar6 = ~(iVar2 - 1U) >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVar3 = (this->SerializedPropertyChain).AllocatorInstance.SecondaryData;
    FVar8 = (ForElementType<FProperty_*>)this;
    if (FVar3 != (ForElementType<FProperty_*>)0x0) {
      FVar8 = FVar3;
    }
    if (*(FProperty **)
         ((uint *)((longlong)FVar8 + -8) + (longlong)(this->SerializedPropertyChain).ArrayNum * 2)
        == param_1) goto LAB_1419a68cc;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("SerializedPropertyChain.Num() > 0 && SerializedPropertyChain.Last() == InProperty"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\ArchiveSerializedPropertyChain.h"
                     ,0x32,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_1419a68cc:
  if (((this->SerializedPropertyChain).ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar3 = (this->SerializedPropertyChain).AllocatorInstance.SecondaryData;
  iVar2 = (this->SerializedPropertyChain).ArrayNum;
  FVar8 = (ForElementType<FProperty_*>)this;
  if (FVar3 != (ForElementType<FProperty_*>)0x0) {
    FVar8 = FVar3;
  }
  uVar6 = iVar2 - 1;
  _Dst = (void *)((longlong)FVar8 + (longlong)(int)uVar6 * 8);
  iVar2 = ~uVar6 + iVar2;
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar2 << 3);
  }
  piVar1 = &(this->SerializedPropertyChain).ArrayNum;
  *piVar1 = *piVar1 + -1;
  uVar6 = this->SerializedPropertyChainUpdateCount;
  do {
    uVar7 = uVar6 + 1;
    uVar6 = 0;
  } while (uVar7 == 0);
  this->SerializedPropertyChainUpdateCount = uVar7;
  return;
}

// PushProperty @ 1419a6a70

void __thiscall
FArchiveSerializedPropertyChain::PushProperty
          (FArchiveSerializedPropertyChain *this,FProperty *param_1,bool param_2)

{
  int *piVar1;
  ForElementType<FProperty_*> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ForElementType<FProperty_*> FVar8;
  FProperty *local_res10 [3];
  uint uVar7;
  
  local_res10[0] = param_1;
  if ((param_1 == (FProperty *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InProperty",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\ArchiveSerializedPropertyChain.h"
                         ,0x1c,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FVar2 = (this->SerializedPropertyChain).AllocatorInstance.SecondaryData;
  FVar8 = (ForElementType<FProperty_*>)this;
  if (FVar2 != (ForElementType<FProperty_*>)0x0) {
    FVar8 = FVar2;
  }
  if ((ulonglong)FVar8 <= local_res10) {
    FVar8 = (ForElementType<FProperty_*>)this;
    if (FVar2 != (ForElementType<FProperty_*>)0x0) {
      FVar8 = FVar2;
    }
    if ((local_res10 <
         (FProperty **)((longlong)FVar8 + (longlong)(this->SerializedPropertyChain).ArrayMax * 8))
       && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->SerializedPropertyChain).ArrayNum;
  piVar1 = &(this->SerializedPropertyChain).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FProperty_*>_>
                      (0x808,(ForElementType<FProperty_*> *)this,piVar1);
  }
  (this->SerializedPropertyChain).ArrayNum = iVar5 + 1;
  FVar2 = (this->SerializedPropertyChain).AllocatorInstance.SecondaryData;
  FVar8 = (ForElementType<FProperty_*>)this;
  if (FVar2 != (ForElementType<FProperty_*>)0x0) {
    FVar8 = FVar2;
  }
  *(FProperty **)((longlong)FVar8 + (longlong)iVar5 * 8) = local_res10[0];
  uVar7 = this->SerializedPropertyChainUpdateCount;
  do {
    uVar6 = uVar7 + 1;
    uVar7 = 0;
  } while (uVar6 == 0);
  this->SerializedPropertyChainUpdateCount = uVar6;
  return;
}

