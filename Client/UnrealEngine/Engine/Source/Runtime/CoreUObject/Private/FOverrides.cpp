// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 8

// FOverrides @ 141e85a00

FOverrides * __thiscall
FObjectInitializer::FOverrides::FOverrides(FOverrides *this,FOverrides *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<FObjectInitializer::FOverrides::FOverride> FVar3;
  ForElementType<FObjectInitializer::FOverrides::FOverride> FVar4;
  
  (this->Overrides).AllocatorInstance.SecondaryData =
       (ForElementType<FObjectInitializer::FOverrides::FOverride>)0x0;
  FVar3 = (param_1->Overrides).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->Overrides).ArrayNum;
  (this->Overrides).ArrayNum = iVar2;
  if (FVar3 != (ForElementType<FObjectInitializer::FOverrides::FOverride>)0x0) {
    param_1 = (FOverrides *)FVar3;
  }
  piVar1 = &(this->Overrides).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 8;
    return this;
  }
  UE::Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FObjectInitializer::FOverrides::FOverride>_>
            (0x20,8,iVar2,0,(ForElementType<FObjectInitializer::FOverrides::FOverride> *)this,iVar2,
             piVar1);
  FVar3 = (this->Overrides).AllocatorInstance.SecondaryData;
  FVar4 = (ForElementType<FObjectInitializer::FOverrides::FOverride>)this;
  if (FVar3 != (ForElementType<FObjectInitializer::FOverrides::FOverride>)0x0) {
    FVar4 = FVar3;
  }
  ConstructItems<FObjectInitializer::FOverrides::FOverride,FObjectInitializer::FOverrides::FOverride,int>
            ((void *)FVar4,(FOverride *)param_1,iVar2);
  return this;
}

// operator() @ 14225a710

FString * __thiscall
`FObjectInitializer::FOverrides::Add'::__l2::<lambda_1>::operator()
          (void *this,FString *__return_storage_ptr__)

{
  FName *pFVar1;
  int iVar2;
  longlong *plVar3;
  size_t sVar4;
  FString *pFVar5;
  FScriptContainerElement *pFVar6;
  FName *pFVar7;
  wchar_t *_Str;
  int iVar8;
  FName local_res8;
  FString local_38;
  FString local_28;
  
  plVar3 = *(longlong **)((longlong)this + 8);
  if (plVar3 != (longlong *)0x0) {
    pFVar6 = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    pFVar7 = (FName *)*plVar3;
    pFVar1 = pFVar7 + (int)plVar3[1];
    local_38.Data.ArrayMax = local_38.Data.ArrayNum;
    local_38.Data.AllocatorInstance.Data = pFVar6;
    for (; pFVar7 != pFVar1; pFVar7 = pFVar7 + 1) {
      local_res8 = *pFVar7;
      _Str = L".";
      if ((int)pFVar6 < 2) {
        _Str = L"";
      }
      sVar4 = wcslen(_Str);
      ::FString::AppendChars(&local_38,_Str,(int)sVar4);
      pFVar5 = ::FName::ToString(&local_res8,&local_28);
      iVar2 = (pFVar5->Data).ArrayNum;
      iVar8 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar8 = 0;
      }
      ::FString::AppendChars(&local_38,(wchar_t *)(pFVar5->Data).AllocatorInstance.Data,iVar8);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      pFVar6 = (FScriptContainerElement *)(ulonglong)(uint)local_38.Data.ArrayNum;
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_38.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_38.Data.ArrayMax;
    return __return_storage_ptr__;
  }
  ::FName::ToString(this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Add @ 14225cf70

void __thiscall
FObjectInitializer::FOverrides::Add
          (FOverrides *this,TArrayView<FName_const_,int> *param_1,UClass *param_2,
          TArrayView<FName_const_,int> *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  FName FVar4;
  ForElementType<FObjectInitializer::FOverrides::FOverride> FVar5;
  void *pvVar6;
  FOverrides *this_00;
  code *pcVar7;
  TUniquePtr<FObjectInitializer::FOverrides,TDefaultDelete<FObjectInitializer::FOverrides>_> TVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  FName *pFVar12;
  longlong lVar13;
  FOverride *_Dst;
  ForElementType<FObjectInitializer::FOverrides::FOverride> FVar14;
  TUniquePtr<FObjectInitializer::FOverrides,TDefaultDelete<FObjectInitializer::FOverrides>_> TVar15;
  FOverride *pFVar16;
  TArrayView<FName_const_,int> *pTVar17;
  uint uVar18;
  TUniquePtr<FObjectInitializer::FOverrides,TDefaultDelete<FObjectInitializer::FOverrides>_>
  local_res10;
  UClass *local_res18;
  TArrayView<FName_const_,int> *local_res20;
  undefined4 uStack_4c;
  TArrayView<FName_const_,int> local_48;
  
  local_res18 = param_2;
  local_res20 = param_3;
  if (param_1->ArrayNum < 2) {
    pFVar12 = TArrayView<FName_const_,int>::operator[](param_1,0);
    if (param_3 != (TArrayView<FName_const_,int> *)0x0) {
      param_1 = param_3;
    }
    Add(this,*pFVar12,param_2,param_1);
    return;
  }
  pFVar12 = TArrayView<FName_const_,int>::operator[](param_1,0);
  FVar4 = *pFVar12;
  uVar10 = Find(this,FVar4);
  pFVar16 = (FOverride *)0x0;
  if (uVar10 == 0xffffffff) {
    uVar10 = (this->Overrides).ArrayNum;
    piVar2 = &(this->Overrides).ArrayMax;
    if (uVar10 == *piVar2) {
      uVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FObjectInitializer::FOverrides::FOverride>_>
                         (0x820,(ForElementType<FObjectInitializer::FOverrides::FOverride> *)this,
                          piVar2);
    }
    (this->Overrides).ArrayNum = uVar10 + 1;
    FVar5 = (this->Overrides).AllocatorInstance.SecondaryData;
    FVar14 = (ForElementType<FObjectInitializer::FOverrides::FOverride>)this;
    if (FVar5 != (ForElementType<FObjectInitializer::FOverrides::FOverride>)0x0) {
      FVar14 = FVar5;
    }
    lVar13 = (longlong)(int)uVar10 * 0x20;
    *(FName *)(lVar13 + (longlong)FVar14) = FVar4;
    *(undefined8 *)(lVar13 + 0x10 + (longlong)FVar14) = 0;
    *(undefined8 *)(lVar13 + 8 + (longlong)FVar14) = 0;
    *(undefined1 *)(lVar13 + 0x18 + (longlong)FVar14) = 0;
  }
  uVar18 = ~uVar10 >> 0x1f;
  uVar11 = 0;
  if ((int)uVar10 < (this->Overrides).ArrayNum) {
    uVar11 = uVar18;
  }
  if ((uVar11 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar5 = (this->Overrides).AllocatorInstance.SecondaryData;
  FVar14 = (ForElementType<FObjectInitializer::FOverrides::FOverride>)this;
  if (FVar5 != (ForElementType<FObjectInitializer::FOverrides::FOverride>)0x0) {
    FVar14 = FVar5;
  }
  lVar13 = (longlong)(int)uVar10 * 0x20;
  if (*(longlong *)((uchar *)((longlong)FVar14 + 0x10) + lVar13) == 0) {
    _Dst = ::operator_new(0x110);
    if (_Dst != (FOverride *)0x0) {
      memset(_Dst,0,0x100);
      _Dst[8].ComponentName.ComparisonIndex = 0;
      _Dst[8].ComponentName.Number = 0;
      *(undefined4 *)&_Dst[8].ComponentClass = 0;
      *(undefined4 *)((longlong)&_Dst[8].ComponentClass + 4) = 8;
      pFVar16 = _Dst;
    }
    uVar11 = 0;
    if ((int)uVar10 < (this->Overrides).ArrayNum) {
      uVar11 = uVar18;
    }
    local_res10.Ptr = (FOverrides *)pFVar16;
    if ((uVar11 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FVar5 = (this->Overrides).AllocatorInstance.SecondaryData;
    FVar14 = (ForElementType<FObjectInitializer::FOverrides::FOverride>)this;
    if (FVar5 != (ForElementType<FObjectInitializer::FOverrides::FOverride>)0x0) {
      FVar14 = FVar5;
    }
    TUniquePtr<FObjectInitializer::FOverrides,TDefaultDelete<FObjectInitializer::FOverrides>_>::
    operator=((TUniquePtr<FObjectInitializer::FOverrides,TDefaultDelete<FObjectInitializer::FOverrides>_>
               *)((uchar *)((longlong)FVar14 + 0x10) + lVar13),&local_res10);
    TVar8.Ptr = local_res10.Ptr;
    if ((FOverride *)local_res10.Ptr != (FOverride *)0x0) {
      TVar15.Ptr = *(FOverrides **)
                    &((local_res10.Ptr)->Overrides).AllocatorInstance.SecondaryData.field_0x0;
      if ((FOverride *)TVar15.Ptr == (FOverride *)0x0) {
        TVar15.Ptr = local_res10.Ptr;
      }
      DestructItems<FObjectInitializer::FOverrides::FOverride,int>
                ((FOverride *)TVar15.Ptr,((local_res10.Ptr)->Overrides).ArrayNum);
      pvVar6 = *(void **)&((TVar8.Ptr)->Overrides).AllocatorInstance.SecondaryData.field_0x0;
      if (pvVar6 != (void *)0x0) {
        FMemory::Free(pvVar6);
      }
      ::operator_delete(TVar8.Ptr,0x110);
    }
  }
  uVar11 = 0;
  if ((int)uVar10 < (this->Overrides).ArrayNum) {
    uVar11 = uVar18;
  }
  if ((uVar11 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar5 = (this->Overrides).AllocatorInstance.SecondaryData;
  iVar3 = param_1->ArrayNum;
  if (FVar5 != (ForElementType<FObjectInitializer::FOverrides::FOverride>)0x0) {
    this = (FOverrides *)FVar5;
  }
  iVar1 = iVar3 + -1;
  this_00 = *(FOverrides **)((longlong)(int)uVar10 * 0x20 + 0x10 + (longlong)this);
  pTVar17 = param_1;
  if (local_res20 != (TArrayView<FName_const_,int> *)0x0) {
    pTVar17 = local_res20;
  }
  if ((iVar1 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x15c,L"Invalid count (%lld)"), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((param_1->ArrayNum < iVar3) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index + InNum <= ArrayNum",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x15d,
                         L"Range (index: %lld, count: %lld) lies outside the view of %lld elements")
     , bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar12 = param_1->DataPtr;
  if ((iVar1 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_48._12_4_ = uStack_4c;
  local_48.ArrayNum = iVar1;
  local_48.DataPtr = pFVar12 + 1;
  Add(this_00,&local_48,local_res18,pTVar17);
  return;
}

// Add @ 14225d320

void __thiscall
FObjectInitializer::FOverrides::Add(FOverrides *this,TStringView<wchar_t> *param_1,UClass *param_2)

{
  wchar_t *pwVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FName *pFVar6;
  int iVar7;
  FName local_res10;
  UClass *local_res18;
  FName local_res20;
  ForAnyElementType local_88;
  undefined8 local_80;
  TStringView<wchar_t> local_78;
  TArrayView<FName_const_,int> local_68;
  TArrayView<FName_const_,int> local_58;
  
  local_78.DataPtr = param_1->DataPtr;
  local_78.Size = param_1->Size;
  local_78._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  local_res18 = param_2;
  iVar4 = UE::String::FindFirstChar(&local_78,L'.',CaseSensitive);
  if (iVar4 != -1) {
    iVar7 = param_1->Size;
    do {
      pwVar1 = param_1->DataPtr;
      pFVar6 = ::FName::FName(&local_res10,iVar4,pwVar1,FNAME_Add);
      if (((local_88.Data <= pFVar6) &&
          (pFVar6 < (FName *)(local_88.Data + (longlong)local_80._4_4_ * 8))) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = (int)local_80;
      if ((int)local_80 == local_80._4_4_) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&local_88,(int *)((longlong)&local_80 + 4));
      }
      local_80 = CONCAT44(local_80._4_4_,iVar5 + 1);
      *(FName *)(local_88.Data + (longlong)iVar5 * 8) = *pFVar6;
      iVar7 = iVar7 - (iVar4 + 1);
      param_1->Size = iVar7;
      param_1->DataPtr = pwVar1 + (iVar4 + 1);
      local_78.DataPtr = param_1->DataPtr;
      local_78.Size = param_1->Size;
      local_78._12_4_ = *(undefined4 *)&param_1->field_0xc;
      iVar4 = UE::String::FindFirstChar(&local_78,L'.',CaseSensitive);
      param_2 = local_res18;
    } while (iVar4 != -1);
  }
  pFVar6 = ::FName::FName(&local_res20,param_1->Size,param_1->DataPtr,FNAME_Add);
  if (((local_88.Data <= pFVar6) &&
      (pFVar6 < (FName *)(local_88.Data + (longlong)local_80._4_4_ * 8))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (int)local_80;
  if ((int)local_80 == local_80._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&local_88,(int *)((longlong)&local_80 + 4));
  }
  iVar7 = iVar4 + 1;
  local_80 = CONCAT44(local_80._4_4_,iVar7);
  *(FName *)(local_88.Data + (longlong)iVar4 * 8) = *pFVar6;
  local_68.DataPtr = (FName *)local_88.Data;
  if ((iVar7 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_58._12_4_ = local_68._12_4_;
  local_58.ArrayNum = iVar7;
  local_58.DataPtr = local_68.DataPtr;
  local_68.ArrayNum = iVar7;
  Add(this,&local_58,param_2,&local_68);
  if ((FName *)local_88.Data != (FName *)0x0) {
    FMemory::Free(local_88.Data);
  }
  return;
}

// Add @ 14225d5f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FObjectInitializer::FOverrides::Add
          (FOverrides *this,FName param_1,UClass *param_2,TArrayView<FName_const_,int> *param_3)

{
  int *piVar1;
  ForElementType<FObjectInitializer::FOverrides::FOverride> FVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  FName *pFVar10;
  ForElementType<FObjectInitializer::FOverrides::FOverride> FVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FName local_88;
  TArrayView<FName_const_,int> *local_80;
  FScriptContainerElement *local_78;
  FString local_70;
  FString local_60;
  FString local_50;
  
  local_88 = param_1;
  local_80 = param_3;
  uVar6 = Find(this,param_1);
  iVar7 = (this->Overrides).ArrayNum;
  if (uVar6 == 0xffffffff) {
    piVar1 = &(this->Overrides).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FObjectInitializer::FOverrides::FOverride>_>
                        (0x820,(ForElementType<FObjectInitializer::FOverrides::FOverride> *)this,
                         piVar1);
    }
    (this->Overrides).ArrayNum = iVar7 + 1;
    FVar2 = (this->Overrides).AllocatorInstance.SecondaryData;
    if (FVar2 != (ForElementType<FObjectInitializer::FOverrides::FOverride>)0x0) {
      this = (FOverrides *)FVar2;
    }
    pFVar10 = (FName *)((longlong)iVar7 * 0x20 + (longlong)this);
    *pFVar10 = param_1;
    pFVar10[2].ComparisonIndex = 0;
    pFVar10[2].Number = 0;
    pFVar10[1] = (FName)param_2;
    *(bool *)&pFVar10[3].ComparisonIndex.Value = param_2 == (UClass *)0x0;
    return;
  }
  uVar14 = ~uVar6 >> 0x1f;
  uVar12 = 0;
  uVar9 = 0;
  if (param_2 == (UClass *)0x0) {
    uVar8 = uVar12;
    if ((int)uVar6 < iVar7) {
      uVar8 = uVar14;
    }
    if ((uVar8 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVar2 = (this->Overrides).AllocatorInstance.SecondaryData;
    FVar11 = (ForElementType<FObjectInitializer::FOverrides::FOverride>)this;
    if (FVar2 != (ForElementType<FObjectInitializer::FOverrides::FOverride>)0x0) {
      FVar11 = FVar2;
    }
    lVar13 = (longlong)(int)uVar6 * 0x20;
    if ((*(longlong *)(lVar13 + 8 + (longlong)FVar11) != 0) && (1 < (byte)LogUObjectGlobals._0_1_))
    {
      `FObjectInitializer::FOverrides::Add'::__l2::<lambda_1>::operator()(&local_88,&local_60);
      uVar8 = uVar12;
      if ((int)uVar6 < (this->Overrides).ArrayNum) {
        uVar8 = uVar14;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar2 = (this->Overrides).AllocatorInstance.SecondaryData;
      FVar11 = (ForElementType<FObjectInitializer::FOverrides::FOverride>)this;
      if (FVar2 != (ForElementType<FObjectInitializer::FOverrides::FOverride>)0x0) {
        FVar11 = FVar2;
      }
      local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.Data.ArrayNum = 0;
      local_98.Data.ArrayMax = 0;
      UObjectBaseUtility::GetFullName
                (*(UObjectBaseUtility **)((uchar *)((longlong)FVar11 + 8) + lVar13),(UObject *)0x0,
                 &local_98,None);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogUObjectGlobals);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
    }
    if ((int)uVar6 < (this->Overrides).ArrayNum) {
      uVar12 = uVar14;
    }
    if ((uVar12 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVar2 = (this->Overrides).AllocatorInstance.SecondaryData;
    FVar11 = (ForElementType<FObjectInitializer::FOverrides::FOverride>)this;
    if (FVar2 != (ForElementType<FObjectInitializer::FOverrides::FOverride>)0x0) {
      FVar11 = FVar2;
    }
    if ((*(longlong *)((uchar *)((longlong)FVar11 + 0x10) + lVar13) != 0) &&
       (1 < (byte)LogUObjectGlobals._0_1_)) {
      `FObjectInitializer::FOverrides::Add'::__l2::<lambda_1>::operator()(&local_88,&local_50);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogUObjectGlobals);
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
    }
    if ((int)uVar6 < (this->Overrides).ArrayNum) {
      uVar9 = uVar14;
    }
    if ((uVar9 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVar2 = (this->Overrides).AllocatorInstance.SecondaryData;
    if (FVar2 != (ForElementType<FObjectInitializer::FOverrides::FOverride>)0x0) {
      this = (FOverrides *)FVar2;
    }
    ((uchar *)((longlong)this + 0x18))[lVar13] = '\x01';
    return;
  }
  uVar8 = uVar9;
  if ((int)uVar6 < iVar7) {
    uVar8 = uVar14;
  }
  if ((uVar8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar2 = (this->Overrides).AllocatorInstance.SecondaryData;
  iVar7 = (this->Overrides).ArrayNum;
  FVar11 = (ForElementType<FObjectInitializer::FOverrides::FOverride>)this;
  if (FVar2 != (ForElementType<FObjectInitializer::FOverrides::FOverride>)0x0) {
    FVar11 = FVar2;
  }
  lVar13 = (longlong)(int)uVar6 * 0x20;
  if (*(longlong *)((uchar *)((longlong)FVar11 + 8) + lVar13) == 0) {
    if ((int)uVar6 < iVar7) {
      uVar12 = uVar14;
    }
    if ((uVar12 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    if ((int)uVar6 < iVar7) {
      uVar9 = uVar14;
    }
    if ((uVar9 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVar2 = (this->Overrides).AllocatorInstance.SecondaryData;
    FVar11 = (ForElementType<FObjectInitializer::FOverrides::FOverride>)this;
    if (FVar2 != (ForElementType<FObjectInitializer::FOverrides::FOverride>)0x0) {
      FVar11 = FVar2;
    }
    lVar3 = *(longlong *)((uchar *)((longlong)FVar11 + 8) + lVar13);
    if (lVar3 == 0) {
      return;
    }
    iVar7 = (int)param_2->_padding_;
    if ((iVar7 <= *(int *)(lVar3 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar7 * 8) ==
        &param_2->_padding_)) {
      return;
    }
    if (1 < (byte)LogUObjectGlobals._0_1_) {
      local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8.Data.ArrayNum = 0;
      local_a8.Data.ArrayMax = 0;
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_2,(UObject *)0x0,&local_a8,None);
      local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8.Data.ArrayNum = 0;
      local_b8.Data.ArrayMax = 0;
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_2,(UObject *)0x0,&local_b8,None);
      local_78 = (FScriptContainerElement *)L"";
      if (local_b8.Data.ArrayNum != 0) {
        local_78 = local_b8.Data.AllocatorInstance.Data;
      }
      `FObjectInitializer::FOverrides::Add'::__l2::<lambda_1>::operator()(&local_88,&local_70);
      uVar9 = uVar12;
      if ((int)uVar6 < (this->Overrides).ArrayNum) {
        uVar9 = uVar14;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar2 = (this->Overrides).AllocatorInstance.SecondaryData;
      FVar11 = (ForElementType<FObjectInitializer::FOverrides::FOverride>)this;
      if (FVar2 != (ForElementType<FObjectInitializer::FOverrides::FOverride>)0x0) {
        FVar11 = FVar2;
      }
      local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c8.Data.ArrayNum = 0;
      local_c8.Data.ArrayMax = 0;
      UObjectBaseUtility::GetFullName
                (*(UObjectBaseUtility **)((uchar *)((longlong)FVar11 + 8) + lVar13),(UObject *)0x0,
                 &local_c8,None);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogUObjectGlobals);
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
    }
    if ((int)uVar6 < (this->Overrides).ArrayNum) {
      uVar12 = uVar14;
    }
    if ((uVar12 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FVar2 = (this->Overrides).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<FObjectInitializer::FOverrides::FOverride>)0x0) {
    this = (FOverrides *)FVar2;
  }
  *(UClass **)((uchar *)((longlong)this + 8) + lVar13) = param_2;
  return;
}

// Find @ 14226c550

int __thiscall FObjectInitializer::FOverrides::Find(FOverrides *this,FName param_1)

{
  ForElementType<FObjectInitializer::FOverrides::FOverride> FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ForElementType<FObjectInitializer::FOverrides::FOverride> FVar6;
  longlong lVar7;
  uint uVar8;
  
  uVar8 = 0;
  iVar5 = (this->Overrides).ArrayNum;
  if (0 < iVar5) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar8 < iVar5) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      FVar1 = (this->Overrides).AllocatorInstance.SecondaryData;
      FVar6 = (ForElementType<FObjectInitializer::FOverrides::FOverride>)this;
      if (FVar1 != (ForElementType<FObjectInitializer::FOverrides::FOverride>)0x0) {
        FVar6 = FVar1;
      }
      if (*(FName *)((longlong)FVar6 + lVar7) == param_1) {
        return uVar8;
      }
      iVar5 = (this->Overrides).ArrayNum;
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 0x20;
    } while ((int)uVar8 < iVar5);
  }
  return -1;
}

// Get @ 14226dd90

/* WARNING: Enum "Type": Some values do not have unique names */

FOverrideDetails * __thiscall
FObjectInitializer::FOverrides::Get
          (FOverrides *this,FOverrideDetails *__return_storage_ptr__,FName param_1,UClass *param_2,
          UClass *param_3,bool param_4)

{
  int iVar1;
  ForElementType<FObjectInitializer::FOverrides::FOverride> FVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  FOverrideDetails *pFVar9;
  ForElementType<FObjectInitializer::FOverrides::FOverride> FVar10;
  uint uVar11;
  longlong lVar12;
  FName local_res18;
  UClass *local_res20;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FName local_d8;
  FScriptContainerElement *local_d0;
  FScriptContainerElement *local_c8;
  FName local_c0;
  FName local_b8;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  
  __return_storage_ptr__->Class = (UClass *)0x0;
  __return_storage_ptr__->SubOverrides = (FOverrides *)0x0;
  local_res18 = param_1;
  local_res20 = param_2;
  uVar6 = Find(this,param_1);
  if (uVar6 == 0xffffffff) {
    __return_storage_ptr__->Class = param_3;
    __return_storage_ptr__->SubOverrides = (FOverrides *)0x0;
    return __return_storage_ptr__;
  }
  uVar11 = ~uVar6 >> 0x1f;
  uVar7 = 0;
  if ((int)uVar6 < (this->Overrides).ArrayNum) {
    uVar7 = uVar11;
  }
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar9 = (FOverrideDetails *)(*pcVar4)();
    return pFVar9;
  }
  FVar2 = (this->Overrides).AllocatorInstance.SecondaryData;
  FVar10 = (ForElementType<FObjectInitializer::FOverrides::FOverride>)this;
  if (FVar2 != (ForElementType<FObjectInitializer::FOverrides::FOverride>)0x0) {
    FVar10 = FVar2;
  }
  lVar12 = (longlong)(int)uVar6 * 0x20;
  if ((((uchar *)((longlong)FVar10 + 0x18))[lVar12] != '\0') && (param_4)) {
    __return_storage_ptr__->Class = (UClass *)0x0;
    __return_storage_ptr__->SubOverrides = (FOverrides *)0x0;
    return __return_storage_ptr__;
  }
  uVar8 = 0;
  uVar7 = uVar8;
  if ((int)uVar6 < (this->Overrides).ArrayNum) {
    uVar7 = uVar11;
  }
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar9 = (FOverrideDetails *)(*pcVar4)();
    return pFVar9;
  }
  FVar2 = (this->Overrides).AllocatorInstance.SecondaryData;
  iVar1 = (this->Overrides).ArrayNum;
  FVar10 = (ForElementType<FObjectInitializer::FOverrides::FOverride>)this;
  if (FVar2 != (ForElementType<FObjectInitializer::FOverrides::FOverride>)0x0) {
    FVar10 = FVar2;
  }
  if (*(longlong *)((uchar *)((longlong)FVar10 + 8) + lVar12) == 0) {
    uVar7 = uVar8;
    if ((int)uVar6 < iVar1) {
      uVar7 = uVar11;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FOverrideDetails *)(*pcVar4)();
      return pFVar9;
    }
    FVar2 = (this->Overrides).AllocatorInstance.SecondaryData;
    FVar10 = (ForElementType<FObjectInitializer::FOverrides::FOverride>)this;
    if (FVar2 != (ForElementType<FObjectInitializer::FOverrides::FOverride>)0x0) {
      FVar10 = FVar2;
    }
    if ((((uchar *)((longlong)FVar10 + 0x18))[lVar12] != '\0') &&
       (1 < (byte)LogUObjectGlobals._0_1_)) {
      local_b8 = (FName)param_3->_padding_;
      ::FName::ToString(&local_b8,&local_90);
      ::FName::ToString(&local_res18,&local_50);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogUObjectGlobals);
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
    }
    __return_storage_ptr__->Class = param_3;
    goto LAB_14226e3fc;
  }
  uVar7 = uVar8;
  if ((int)uVar6 < iVar1) {
    uVar7 = uVar11;
  }
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar9 = (FOverrideDetails *)(*pcVar4)();
    return pFVar9;
  }
  FVar2 = (this->Overrides).AllocatorInstance.SecondaryData;
  FVar10 = (ForElementType<FObjectInitializer::FOverrides::FOverride>)this;
  if (FVar2 != (ForElementType<FObjectInitializer::FOverrides::FOverride>)0x0) {
    FVar10 = FVar2;
  }
  lVar3 = *(longlong *)((uchar *)((longlong)FVar10 + 8) + lVar12);
  if ((lVar3 != 0) && (local_res20 != (UClass *)0x0)) {
    iVar1 = (int)local_res20->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
        &local_res20->_padding_)) {
      uVar7 = uVar8;
      if ((int)uVar6 < (this->Overrides).ArrayNum) {
        uVar7 = uVar11;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FOverrideDetails *)(*pcVar4)();
        return pFVar9;
      }
      FVar2 = (this->Overrides).AllocatorInstance.SecondaryData;
      FVar10 = (ForElementType<FObjectInitializer::FOverrides::FOverride>)this;
      if (FVar2 != (ForElementType<FObjectInitializer::FOverrides::FOverride>)0x0) {
        FVar10 = FVar2;
      }
      if (((uchar *)((longlong)FVar10 + 0x18))[lVar12] == '\0') {
LAB_14226e04c:
        if (1 < (byte)LogUObjectGlobals._0_1_) {
          local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_e8.Data.ArrayNum = 0;
          local_e8.Data.ArrayMax = 0;
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)param_3,(UObject *)0x0,&local_e8,None);
          local_d0 = (FScriptContainerElement *)L"";
          if (local_e8.Data.ArrayNum != 0) {
            local_d0 = local_e8.Data.AllocatorInstance.Data;
          }
          local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_f8.Data.ArrayNum = 0;
          local_f8.Data.ArrayMax = 0;
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)local_res20,(UObject *)0x0,&local_f8,None);
          local_c8 = (FScriptContainerElement *)L"";
          if (local_f8.Data.ArrayNum != 0) {
            local_c8 = local_f8.Data.AllocatorInstance.Data;
          }
          ::FName::ToString(&local_res18,&local_70);
          uVar7 = uVar8;
          if ((int)uVar6 < (this->Overrides).ArrayNum) {
            uVar7 = uVar11;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pFVar9 = (FOverrideDetails *)(*pcVar4)();
            return pFVar9;
          }
          FVar2 = (this->Overrides).AllocatorInstance.SecondaryData;
          FVar10 = (ForElementType<FObjectInitializer::FOverrides::FOverride>)this;
          if (FVar2 != (ForElementType<FObjectInitializer::FOverrides::FOverride>)0x0) {
            FVar10 = FVar2;
          }
          local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_108.Data.ArrayNum = 0;
          local_108.Data.ArrayMax = 0;
          UObjectBaseUtility::GetFullName
                    (*(UObjectBaseUtility **)((uchar *)((longlong)FVar10 + 8) + lVar12),
                     (UObject *)0x0,&local_108,None);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogUObjectGlobals);
          if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_108.Data.AllocatorInstance.Data);
          }
          if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_70.Data.AllocatorInstance.Data);
          }
          if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f8.Data.AllocatorInstance.Data);
          }
          if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e8.Data.AllocatorInstance.Data);
          }
        }
      }
      else if (1 < (byte)LogUObjectGlobals._0_1_) {
        local_d8 = (FName)param_3->_padding_;
        ::FName::ToString(&local_d8,&local_b0);
        ::FName::ToString(&local_res18,&local_80);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogUObjectGlobals);
        if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.Data.AllocatorInstance.Data);
        }
        if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        }
        goto LAB_14226e04c;
      }
      __return_storage_ptr__->Class = param_3;
      goto LAB_14226e3fc;
    }
  }
  uVar7 = uVar8;
  if ((int)uVar6 < (this->Overrides).ArrayNum) {
    uVar7 = uVar11;
  }
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar9 = (FOverrideDetails *)(*pcVar4)();
    return pFVar9;
  }
  FVar2 = (this->Overrides).AllocatorInstance.SecondaryData;
  FVar10 = (ForElementType<FObjectInitializer::FOverrides::FOverride>)this;
  if (FVar2 != (ForElementType<FObjectInitializer::FOverrides::FOverride>)0x0) {
    FVar10 = FVar2;
  }
  iVar1 = (this->Overrides).ArrayNum;
  __return_storage_ptr__->Class = *(UClass **)((uchar *)((longlong)FVar10 + 8) + lVar12);
  uVar7 = uVar8;
  if ((int)uVar6 < iVar1) {
    uVar7 = uVar11;
  }
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar9 = (FOverrideDetails *)(*pcVar4)();
    return pFVar9;
  }
  FVar2 = (this->Overrides).AllocatorInstance.SecondaryData;
  FVar10 = (ForElementType<FObjectInitializer::FOverrides::FOverride>)this;
  if (FVar2 != (ForElementType<FObjectInitializer::FOverrides::FOverride>)0x0) {
    FVar10 = FVar2;
  }
  if ((((uchar *)((longlong)FVar10 + 0x18))[lVar12] != '\0') && (1 < (byte)LogUObjectGlobals._0_1_))
  {
    local_c0 = (FName)__return_storage_ptr__->Class->_padding_;
    ::FName::ToString(&local_c0,&local_a0);
    ::FName::ToString(&local_res18,&local_60);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogUObjectGlobals);
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
  }
LAB_14226e3fc:
  if ((int)uVar6 < (this->Overrides).ArrayNum) {
    uVar8 = uVar11;
  }
  if ((uVar8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar9 = (FOverrideDetails *)(*pcVar4)();
    return pFVar9;
  }
  FVar2 = (this->Overrides).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<FObjectInitializer::FOverrides::FOverride>)0x0) {
    this = (FOverrides *)FVar2;
  }
  __return_storage_ptr__->SubOverrides = *(FOverrides **)((uchar *)((longlong)this + 0x10) + lVar12)
  ;
  return __return_storage_ptr__;
}

// IsLegalOverride @ 142274c60

bool __cdecl FObjectInitializer::FOverrides::IsLegalOverride(UClass *param_1,UClass *param_2)

{
  int iVar1;
  
  if ((param_1 != (UClass *)0x0) && (param_2 != (UClass *)0x0)) {
    iVar1 = (int)param_2->_padding_;
    if (((int)param_1->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
        &param_2->_padding_)) {
      return false;
    }
  }
  return true;
}

