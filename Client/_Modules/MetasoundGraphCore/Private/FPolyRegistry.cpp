// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 5

// Find @ 14ad50bf0

FPolyTypeInfo * __thiscall Metasound::FPolyRegistry::Find(FPolyRegistry *this,FName param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  FPolyTypeInfo *pFVar4;
  undefined1 *puVar5;
  
  uVar2 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Map).field_0x8 != *(int *)&(this->Map).field_0x34) {
    puVar5 = *(undefined1 **)&(this->Map).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->Map).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->Map).field_0x48 - 1U & param_1.Number + uVar2) * 4);
    if (iVar3 != -1) {
      do {
        lVar1 = *(longlong *)&this->Map + (longlong)iVar3 * 0x24;
        if (*(FName *)(*(longlong *)&this->Map + (longlong)iVar3 * 0x24) == param_1) {
          pFVar4 = (FPolyTypeInfo *)0x0;
          if (lVar1 != 0) {
            pFVar4 = (FPolyTypeInfo *)(lVar1 + 8);
          }
          return pFVar4;
        }
        iVar3 = *(int *)(lVar1 + 0x1c);
      } while (iVar3 != -1);
    }
  }
  return (FPolyTypeInfo *)0x0;
}

// Get @ 14ad54da0

FPolyRegistry * __cdecl Metasound::FPolyRegistry::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`Metasound::FPolyRegistry::Get'::__l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::Instance;
}

// GetAllRegisteredTypes @ 14ad54ed0

void __thiscall
Metasound::FPolyRegistry::GetAllRegisteredTypes
          (FPolyRegistry *this,TArray<Metasound::FPolyTypeInfo,TSizedDefaultAllocator<32>_> *param_1
          )

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  bool bVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar13 = *(int *)&(this->Map).field_0x8 - *(int *)&(this->Map).field_0x34;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  piVar1 = &param_1->ArrayMax;
  iVar12 = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,uVar13,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar4 = *(int *)&(this->Map).field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Map).field_0x10;
  uVar13 = 1;
  iVar14 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar4 != 0) {
    puVar15 = *(uint **)&(this->Map).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)TStack_40.Array;
    }
    uVar5 = *puVar15;
    while (uVar5 == 0) {
      lVar11 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      TStack_40.CurrentBitIndex = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14ad2fa52;
      uVar5 = puVar15[lVar11 + 1];
    }
    uVar13 = -uVar5 & uVar5;
    uVar3 = (ulonglong)uVar13 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar11 + -1 + iVar14;
    if (iVar4 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar4;
    }
  }
LAB_14ad2fa52:
  TStack_40._padding_ = CONCAT44(uVar13,iVar12);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar14;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Map).field_0x28) {
    do {
      pFVar6 = (param_1->AllocatorInstance).Data;
      pFVar2 = (FScriptContainerElement *)
               (*(longlong *)&this->Map + ((longlong)TStack_40.CurrentBitIndex * 9 + 2) * 4);
      if (((pFVar6 <= pFVar2) && (pFVar2 < pFVar6 + (longlong)*piVar1 * 0x14)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar12 = param_1->ArrayNum;
      if (iVar12 == *piVar1) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x414,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar12 + 1;
      uVar9 = *(undefined8 *)(pFVar2 + 8);
      pFVar7 = (param_1->AllocatorInstance).Data;
      pFVar6 = pFVar7 + (longlong)iVar12 * 0x14;
      *(undefined8 *)pFVar6 = *(undefined8 *)pFVar2;
      *(undefined8 *)(pFVar6 + 8) = uVar9;
      *(undefined4 *)(pFVar7 + (longlong)iVar12 * 0x14 + 0x10) = *(undefined4 *)(pFVar2 + 0x10);
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// Register @ 14ad5d610

void __thiscall Metasound::FPolyRegistry::Register(FPolyRegistry *this,FPolyTypeInfo *param_1)

{
  TPairInitializer<FName_const_&,Metasound::FPolyTypeInfo_const_&> local_res8 [2];
  FPolyTypeInfo *local_18;
  FPolyTypeInfo *local_10;
  
  local_18 = param_1;
  local_10 = param_1;
  TSet<TTuple<FName,Metasound::FPolyTypeInfo>,TDefaultMapHashableKeyFuncs<FName,Metasound::FPolyTypeInfo,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,Metasound::FPolyTypeInfo_const_&>_>
            ((TSet<TTuple<FName,Metasound::FPolyTypeInfo>,TDefaultMapHashableKeyFuncs<FName,Metasound::FPolyTypeInfo,0>,FDefaultSetAllocator>
              *)this,local_res8,(bool *)&local_18);
  return;
}

// Unregister @ 14ad694a0

void __thiscall Metasound::FPolyRegistry::Unregister(FPolyRegistry *this,FPolyTypeInfo *param_1)

{
  FName FVar1;
  uint uVar2;
  FName local_res8;
  
  FVar1 = param_1->TypeName;
  if (*(int *)&(this->Map).field_0x8 != *(int *)&(this->Map).field_0x34) {
    local_res8 = FVar1;
    uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
    TSet<TTuple<FName,Metasound::FPolyTypeInfo>,TDefaultMapHashableKeyFuncs<FName,Metasound::FPolyTypeInfo,0>,FDefaultSetAllocator>
    ::RemoveImpl<FName>((TSet<TTuple<FName,Metasound::FPolyTypeInfo>,TDefaultMapHashableKeyFuncs<FName,Metasound::FPolyTypeInfo,0>,FDefaultSetAllocator>
                         *)this,FVar1.Number + uVar2,&local_res8);
  }
  return;
}

