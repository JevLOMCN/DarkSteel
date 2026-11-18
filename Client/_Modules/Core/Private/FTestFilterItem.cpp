// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// FTestFilterItem @ 141917f10

/* WARNING: Removing unreachable block (ram,0x00014191856f) */
/* WARNING: Removing unreachable block (ram,0x0001419183bd) */
/* WARNING: Removing unreachable block (ram,0x00014191820b) */
/* WARNING: Removing unreachable block (ram,0x000141918045) */
/* WARNING: Removing unreachable block (ram,0x000141918128) */
/* WARNING: Removing unreachable block (ram,0x0001419182e4) */
/* WARNING: Removing unreachable block (ram,0x000141918496) */
/* WARNING: Removing unreachable block (ram,0x000141918648) */

FTestFilterItem * __thiscall
TextFilterTests::FTestFilterItem::FTestFilterItem(FTestFilterItem *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FTestFilterItem *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [16];
  TPairInitializer<FName_&&,FString_&&> local_res18;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FName local_d8;
  FName local_d0;
  FName local_c8;
  FName local_c0;
  FName *local_b8;
  FString *local_b0;
  FString local_a8;
  FName *local_98;
  FString *local_90;
  FString local_88;
  FName *local_78;
  FString *local_70;
  FString local_68;
  FName *local_58;
  FString *local_50;
  FString local_48;
  
  this->_padding_ = (longlong)&___7FTestFilterItem_TextFilterTests__6B_;
  (this->BasicStrings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BasicStrings).ArrayNum = 0;
  (this->BasicStrings).ArrayMax = 0;
  *(undefined8 *)&this->KeyValuePairs = 0;
  *(undefined8 *)&(this->KeyValuePairs).field_0x8 = 0;
  *(undefined8 *)&(this->KeyValuePairs).field_0x20 = 0;
  *(undefined4 *)&(this->KeyValuePairs).field_0x28 = 0;
  *(undefined4 *)&(this->KeyValuePairs).field_0x2c = 0x80;
  *(undefined4 *)&(this->KeyValuePairs).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->KeyValuePairs).field_0x34 = 0;
  *(undefined8 *)&(this->KeyValuePairs).field_0x40 = 0;
  *(undefined4 *)&(this->KeyValuePairs).field_0x48 = 0;
  ::FString::FString(&local_158,L"Wooble");
  pFVar5 = (this->BasicStrings).AllocatorInstance.Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_158) &&
      ((FScriptContainerElement *)&local_158 <
       pFVar5 + (longlong)(this->BasicStrings).ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FTestFilterItem *)(*pcVar1)();
    return pFVar4;
  }
  iVar3 = (this->BasicStrings).ArrayNum;
  if (iVar3 == (this->BasicStrings).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->BasicStrings).AllocatorInstance,&(this->BasicStrings).ArrayMax)
    ;
  }
  (this->BasicStrings).ArrayNum = iVar3 + 1;
  pFVar5 = (this->BasicStrings).AllocatorInstance.Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(FScriptContainerElement **)pFVar5 = local_158.Data.AllocatorInstance.Data;
  *(int *)(pFVar5 + 8) = local_158.Data.ArrayNum;
  *(int *)(pFVar5 + 0xc) = local_158.Data.ArrayMax;
  local_158.Data.ArrayNum = 0;
  local_158.Data.ArrayMax = 0;
  local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_148,L"Flibble");
  pFVar5 = (this->BasicStrings).AllocatorInstance.Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_148) &&
      ((FScriptContainerElement *)&local_148 <
       pFVar5 + (longlong)(this->BasicStrings).ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FTestFilterItem *)(*pcVar1)();
    return pFVar4;
  }
  iVar3 = (this->BasicStrings).ArrayNum;
  if (iVar3 == (this->BasicStrings).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->BasicStrings).AllocatorInstance,&(this->BasicStrings).ArrayMax)
    ;
  }
  (this->BasicStrings).ArrayNum = iVar3 + 1;
  pFVar5 = (this->BasicStrings).AllocatorInstance.Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(FScriptContainerElement **)pFVar5 = local_148.Data.AllocatorInstance.Data;
  *(int *)(pFVar5 + 8) = local_148.Data.ArrayNum;
  *(int *)(pFVar5 + 0xc) = local_148.Data.ArrayMax;
  local_148.Data.ArrayNum = 0;
  local_148.Data.ArrayMax = 0;
  local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_138,L"Type\'/Path/To/Asset.Asset\'");
  pFVar5 = (this->BasicStrings).AllocatorInstance.Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_138) &&
      ((FScriptContainerElement *)&local_138 <
       pFVar5 + (longlong)(this->BasicStrings).ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FTestFilterItem *)(*pcVar1)();
    return pFVar4;
  }
  iVar3 = (this->BasicStrings).ArrayNum;
  if (iVar3 == (this->BasicStrings).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->BasicStrings).AllocatorInstance,&(this->BasicStrings).ArrayMax)
    ;
  }
  (this->BasicStrings).ArrayNum = iVar3 + 1;
  pFVar5 = (this->BasicStrings).AllocatorInstance.Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(FScriptContainerElement **)pFVar5 = local_138.Data.AllocatorInstance.Data;
  *(int *)(pFVar5 + 8) = local_138.Data.ArrayNum;
  *(int *)(pFVar5 + 0xc) = local_138.Data.ArrayMax;
  local_138.Data.ArrayNum = 0;
  local_138.Data.ArrayMax = 0;
  local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_128,L"Other\'/Path/To/Asset.Asset\'FollowingText");
  pFVar5 = (this->BasicStrings).AllocatorInstance.Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_128) &&
      ((FScriptContainerElement *)&local_128 <
       pFVar5 + (longlong)(this->BasicStrings).ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FTestFilterItem *)(*pcVar1)();
    return pFVar4;
  }
  iVar3 = (this->BasicStrings).ArrayNum;
  if (iVar3 == (this->BasicStrings).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->BasicStrings).AllocatorInstance,&(this->BasicStrings).ArrayMax)
    ;
  }
  (this->BasicStrings).ArrayNum = iVar3 + 1;
  pFVar5 = (this->BasicStrings).AllocatorInstance.Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(FScriptContainerElement **)pFVar5 = local_128.Data.AllocatorInstance.Data;
  *(int *)(pFVar5 + 8) = local_128.Data.ArrayNum;
  *(int *)(pFVar5 + 0xc) = local_128.Data.ArrayMax;
  local_128.Data.ArrayNum = 0;
  local_128.Data.ArrayMax = 0;
  local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_118,L"Funky<String>");
  pFVar5 = (this->BasicStrings).AllocatorInstance.Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_118) &&
      ((FScriptContainerElement *)&local_118 <
       pFVar5 + (longlong)(this->BasicStrings).ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FTestFilterItem *)(*pcVar1)();
    return pFVar4;
  }
  iVar3 = (this->BasicStrings).ArrayNum;
  if (iVar3 == (this->BasicStrings).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->BasicStrings).AllocatorInstance,&(this->BasicStrings).ArrayMax)
    ;
  }
  (this->BasicStrings).ArrayNum = iVar3 + 1;
  pFVar5 = (this->BasicStrings).AllocatorInstance.Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(FScriptContainerElement **)pFVar5 = local_118.Data.AllocatorInstance.Data;
  *(int *)(pFVar5 + 8) = local_118.Data.ArrayNum;
  *(int *)(pFVar5 + 0xc) = local_118.Data.ArrayMax;
  local_118.Data.ArrayNum = 0;
  local_118.Data.ArrayMax = 0;
  local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_108,L"My-Item");
  pFVar5 = (this->BasicStrings).AllocatorInstance.Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_108) &&
      ((FScriptContainerElement *)&local_108 <
       pFVar5 + (longlong)(this->BasicStrings).ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FTestFilterItem *)(*pcVar1)();
    return pFVar4;
  }
  iVar3 = (this->BasicStrings).ArrayNum;
  if (iVar3 == (this->BasicStrings).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->BasicStrings).AllocatorInstance,&(this->BasicStrings).ArrayMax)
    ;
  }
  (this->BasicStrings).ArrayNum = iVar3 + 1;
  pFVar5 = (this->BasicStrings).AllocatorInstance.Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(FScriptContainerElement **)pFVar5 = local_108.Data.AllocatorInstance.Data;
  *(int *)(pFVar5 + 8) = local_108.Data.ArrayNum;
  *(int *)(pFVar5 + 0xc) = local_108.Data.ArrayMax;
  local_108.Data.ArrayNum = 0;
  local_108.Data.ArrayMax = 0;
  local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_f8,L"My+Item");
  pFVar5 = (this->BasicStrings).AllocatorInstance.Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_f8) &&
      ((FScriptContainerElement *)&local_f8 <
       pFVar5 + (longlong)(this->BasicStrings).ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FTestFilterItem *)(*pcVar1)();
    return pFVar4;
  }
  iVar3 = (this->BasicStrings).ArrayNum;
  if (iVar3 == (this->BasicStrings).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->BasicStrings).AllocatorInstance,&(this->BasicStrings).ArrayMax)
    ;
  }
  (this->BasicStrings).ArrayNum = iVar3 + 1;
  pFVar5 = (this->BasicStrings).AllocatorInstance.Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(FScriptContainerElement **)pFVar5 = local_f8.Data.AllocatorInstance.Data;
  *(int *)(pFVar5 + 8) = local_f8.Data.ArrayNum;
  *(int *)(pFVar5 + 0xc) = local_f8.Data.ArrayMax;
  local_f8.Data.ArrayNum = 0;
  local_f8.Data.ArrayMax = 0;
  local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_e8,L"My.Item");
  pFVar5 = (this->BasicStrings).AllocatorInstance.Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_e8) &&
      ((FScriptContainerElement *)&local_e8 <
       pFVar5 + (longlong)(this->BasicStrings).ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FTestFilterItem *)(*pcVar1)();
    return pFVar4;
  }
  iVar3 = (this->BasicStrings).ArrayNum;
  if (iVar3 == (this->BasicStrings).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->BasicStrings).AllocatorInstance,&(this->BasicStrings).ArrayMax)
    ;
  }
  (this->BasicStrings).ArrayNum = iVar3 + 1;
  pFVar5 = (this->BasicStrings).AllocatorInstance.Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(FScriptContainerElement **)pFVar5 = local_e8.Data.AllocatorInstance.Data;
  *(int *)(pFVar5 + 8) = local_e8.Data.ArrayNum;
  *(int *)(pFVar5 + 0xc) = local_e8.Data.ArrayMax;
  local_e8.Data.ArrayNum = 0;
  local_e8.Data.ArrayMax = 0;
  local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_a8,L"Test");
  ::FName::FName(&local_d8,"StringKey");
  local_b8 = &local_d8;
  local_b0 = &local_a8;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_&&,FString_&&>_>
            ((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
              *)&this->KeyValuePairs,(TPairInitializer<FName_&&,FString_&&> *)local_res8,
             (bool *)&local_b8);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_88,L"123");
  ::FName::FName(&local_d0,"IntKey");
  local_98 = &local_d0;
  local_90 = &local_88;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_&&,FString_&&>_>
            ((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
              *)&this->KeyValuePairs,(TPairInitializer<FName_&&,FString_&&> *)(local_res8 + 8),
             (bool *)&local_98);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_68,L"456.789");
  ::FName::FName(&local_c8,"FloatKey");
  local_78 = &local_c8;
  local_70 = &local_68;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_&&,FString_&&>_>
            ((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
              *)&this->KeyValuePairs,&local_res18,(bool *)&local_78);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_48,L"-456.789");
  ::FName::FName(&local_c0,"NegFloatKey");
  local_58 = &local_c0;
  local_50 = &local_48;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_&&,FString_&&>_>
            ((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
              *)&this->KeyValuePairs,(TPairInitializer<FName_&&,FString_&&> *)&local_res18.Value,
             (bool *)&local_58);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return this;
}

// ExtractItemStrings @ 14193aa40

void __cdecl
TextFilterTests::FTestFilterItem::ExtractItemStrings
          (FTestFilterItem *param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=(param_2,&param_1->BasicStrings);
  return;
}

// TestBasicStringExpression @ 14196fbc0

bool __thiscall
TextFilterTests::FTestFilterItem::TestBasicStringExpression
          (FTestFilterItem *this,FTextFilterString *param_1,ETextFilterTextComparisonMode param_2)

{
  int iVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  wchar_t *pwVar7;
  int iVar8;
  undefined1 local_res8 [8];
  FTextFilterString local_48;
  
  iVar1 = (this->BasicStrings).ArrayNum;
  pFVar5 = (this->BasicStrings).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->BasicStrings).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar5 == pFVar6) {
      return false;
    }
    ::FString::FString(&local_48.InternalString,(FString *)pFVar5);
    local_48.InternalStringAnsi.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.InternalStringAnsi.ArrayNum = 0;
    local_48.InternalStringAnsi.ArrayMax = 0;
    FTextFilterString::UppercaseInternalString(&local_48);
    iVar4 = (param_1->InternalString).Data.ArrayNum;
    iVar8 = 0;
    if (iVar4 == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(param_1->InternalString).Data.AllocatorInstance.Data;
      iVar8 = iVar4 + -1;
    }
    iVar4 = local_48.InternalString.Data.ArrayNum + -1;
    FVar2.Data = local_48.InternalString.Data.AllocatorInstance.Data;
    if (local_48.InternalString.Data.ArrayNum == 0) {
      iVar4 = 0;
      FVar2.Data = (FScriptContainerElement *)L"";
    }
    bVar3 = TextFilterInternal::CompareStrings<wchar_t>
                      ((wchar_t *)FVar2.Data,iVar4,pwVar7,iVar8,param_2,CaseSensitive);
    if (local_48.InternalStringAnsi.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.InternalStringAnsi.AllocatorInstance.Data);
    }
    if (local_48.InternalString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.InternalString.Data.AllocatorInstance.Data);
    }
    if (bVar3) break;
    pFVar5 = pFVar5 + 0x10;
  }
  return true;
}

// TestComplexExpression @ 14196fe70

bool __thiscall
TextFilterTests::FTestFilterItem::TestComplexExpression
          (FTestFilterItem *this,FName *param_1,FTextFilterString *param_2,
          ETextFilterComparisonOperation param_3,ETextFilterTextComparisonMode param_4)

{
  bool bVar1;
  FString *pFVar2;
  FTextFilterString local_28;
  
  pFVar2 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::Find((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                   *)&this->KeyValuePairs,*param_1);
  if (pFVar2 != (FString *)0x0) {
    ::FString::FString(&local_28.InternalString,pFVar2);
    local_28.InternalStringAnsi.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.InternalStringAnsi.ArrayNum = 0;
    local_28.InternalStringAnsi.ArrayMax = 0;
    FTextFilterString::UppercaseInternalString(&local_28);
    bVar1 = TextFilterUtils::TestComplexExpression(&local_28,param_2,param_3,param_4);
    if (local_28.InternalStringAnsi.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.InternalStringAnsi.AllocatorInstance.Data);
    }
    if (local_28.InternalString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.InternalString.Data.AllocatorInstance.Data);
    }
    return bVar1;
  }
  return false;
}

// TestItemComplexExpression @ 1419704d0

bool __cdecl
TextFilterTests::FTestFilterItem::TestItemComplexExpression
          (FTestFilterItem *param_1,FName *param_2,FTextFilterString *param_3,
          ETextFilterComparisonOperation param_4,ETextFilterTextComparisonMode param_5)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001419704e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(param_1->_padding_ + 8))();
  return (bool)uVar1;
}

