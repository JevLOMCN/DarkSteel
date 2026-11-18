// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 11

// GetTestFlags @ 141cca200

EAutomationTestFlags __thiscall
FCompactBinaryInvalidPackageTest::GetTestFlags(FCompactBinaryInvalidPackageTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141cca210

bool __thiscall
FCompactBinaryInvalidPackageTest::IsStressTest(FCompactBinaryInvalidPackageTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141cca220

uint __thiscall
FCompactBinaryInvalidPackageTest::GetRequiredDeviceNum(FCompactBinaryInvalidPackageTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141cca230

FString * __thiscall
FCompactBinaryInvalidPackageTest::GetTestSourceFileName
          (FCompactBinaryInvalidPackageTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Serialization\\CompactBinaryPackageTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141cca260

int __thiscall
FCompactBinaryInvalidPackageTest::GetTestSourceFileLine(FCompactBinaryInvalidPackageTest *this)

{
  return 0x227;
}

// GetTests @ 141cca270

/* WARNING: Removing unreachable block (ram,0x000141cca3ee) */

void __thiscall
FCompactBinaryInvalidPackageTest::GetTests
          (FCompactBinaryInvalidPackageTest *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  FString *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined8 local_18;
  undefined8 local_10;
  
  pFVar1 = &this->PrettyNameDotNotation;
  pFVar5 = (param_1->AllocatorInstance).Data;
  if (((pFVar5 <= pFVar1) && (pFVar1 < pFVar5 + (longlong)param_1->ArrayMax * 0x10)) &&
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
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  ::FString::FString((FString *)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 0x10),pFVar1)
  ;
  pFVar5 = (param_2->AllocatorInstance).Data;
  local_18 = 0;
  local_10 = 0;
  if (((pFVar5 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar5 + (longlong)param_2->ArrayMax * 0x10)) &&
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
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar4 + 1;
  pFVar5 = (param_2->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(undefined8 *)pFVar5 = local_18;
  *(undefined4 *)(pFVar5 + 8) = (undefined4)local_10;
  *(undefined4 *)(pFVar5 + 0xc) = local_10._4_4_;
  return;
}

// RunTest @ 141cca410

bool __thiscall
FCompactBinaryInvalidPackageTest::RunTest(FCompactBinaryInvalidPackageTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141cca440

FString * __thiscall
FCompactBinaryInvalidPackageTest::GetBeautifiedTestName
          (FCompactBinaryInvalidPackageTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FCompactBinaryInvalidPackageTest @ 141ce6db0

FCompactBinaryInvalidPackageTest * __thiscall
FCompactBinaryInvalidPackageTest::FCompactBinaryInvalidPackageTest
          (FCompactBinaryInvalidPackageTest *this,FString *param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  EAutomationTestFlags EVar3;
  FString *pFVar4;
  FAutomationTestFramework *this_00;
  longlong lVar5;
  FString local_28;
  FString local_18;
  
  FAutomationTestBase::FAutomationTestBase((FAutomationTestBase *)this,param_1,false);
  this->_padding_ = (longlong)&___7FCompactBinaryInvalidPackageTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[Core][CompactBinary][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Serialization::CompactBinary::InvalidPackage"
                             );
  pFVar4 = ::FString::Replace(pFVar4,&local_18,L"::",L".",IgnoreCase);
  if (pFVar1 != pFVar4) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->PrettyNameDotNotation).Data.ArrayNum = (pFVar4->Data).ArrayNum;
    (this->PrettyNameDotNotation).Data.ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  EVar3 = this->TestFlags;
  if ((EVar3 & (ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext)) == None
     ) {
    EVar3 = EVar3 | (ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext);
    this->TestFlags = EVar3;
  }
  if ((EVar3 & (NegativeFilter|StressFilter|PerfFilter|ProductFilter|EngineFilter|SmokeFilter)) ==
      None) {
    this->TestFlags = EVar3 | EngineFilter;
  }
  this_00 = FAutomationTestFramework::Get();
  ::FString::FString(&local_18,"[Core][CompactBinary][SmokeFilter]");
  local_28.Data.ArrayNum = (this->PrettyNameDotNotation).Data.ArrayNum;
  lVar5 = (longlong)local_28.Data.ArrayNum;
  pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28.Data.ArrayNum == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)&local_28,local_28.Data.ArrayNum,
               &local_28.Data.ArrayMax);
    memcpy(local_28.Data.AllocatorInstance.Data,pFVar2,lVar5 * 2);
  }
  FAutomationTestFramework::RegisterAutomationTestTags(this_00,&local_28,&local_18,true);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return this;
}

// operator() @ 141cf3530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FCompactBinaryInvalidPackageTest::TestBody'::__l2::<lambda_1>::operator()
          (void *this,initializer_list<unsigned_char> *param_1,
          TFunctionRef<FUniqueBuffer___cdecl(unsigned___int64)> *param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  FAutomationTestBase *pFVar5;
  code *pcVar6;
  longlong *plVar7;
  bool bVar8;
  FAutomationTestFramework *pFVar9;
  undefined1 auStack_138 [32];
  FString local_118;
  FArchiveState local_108;
  undefined8 local_78;
  uchar *local_70;
  longlong local_68;
  undefined8 local_60;
  undefined1 local_58 [32];
  longlong *local_38;
  uchar local_30 [24];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_58._0_8_ = (FScriptContainerElement *)0x0;
  local_58._8_4_ = 0;
  local_58._12_4_ = 0;
  FCbObjectView::FCbObjectView((FCbObjectView *)(local_58 + 0x10));
  local_38 = (longlong *)0x0;
  local_30[0] = '\0';
  local_30[1] = '\0';
  local_30[2] = '\0';
  local_30[3] = '\0';
  local_30[4] = '\0';
  local_30[5] = '\0';
  local_30[6] = '\0';
  local_30[7] = '\0';
  local_30[8] = '\0';
  local_30[9] = '\0';
  local_30[10] = '\0';
  local_30[0xb] = '\0';
  local_30[0xc] = '\0';
  local_30[0xd] = '\0';
  local_30[0xe] = '\0';
  local_30[0xf] = '\0';
  local_30[0x10] = '\0';
  local_30[0x11] = '\0';
  local_30[0x12] = '\0';
  local_30[0x13] = '\0';
  local_108._padding_ = 0;
  local_108.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_108.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_108.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_108.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_108._40_8_ = 0;
  local_108.ArSerializingDefaults = 0;
  local_108.ArPortFlags = 0;
  local_108.ArMaxSerializeSize = 0;
  local_108.ArUEVer.FileVersionUE4 = 0;
  local_108.ArUEVer.FileVersionUE5 = 0;
  local_108.ArLicenseeUEVer = 0;
  local_108.ArEngineVer.Major = 0;
  local_108.ArEngineVer.Minor = 0;
  local_108.ArEngineVer.Patch = 0;
  local_108.ArEngineVer._6_2_ = 0;
  local_108.ArEngineVer.Changelist = 0;
  local_108.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_108.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_108.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_108.SerializedProperty = (FProperty *)0x0;
  local_108.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_108.bCustomVersionsAreReset = false;
  local_108._129_7_ = 0;
  local_108.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_108);
  local_108._padding_ = (longlong)&___7FMemoryReaderView__6B_;
  local_70 = param_1->_First;
  local_68 = (longlong)((int)param_1->_Last - (int)local_70);
  local_60 = 0x7fffffffffffffff;
  local_78 = 0;
  FArchiveState::SetIsLoading(&local_108,true);
  (**(code **)(local_108._padding_ + 0x108))(&local_108,0);
  local_118.Data.AllocatorInstance.Data = *(FScriptContainerElement **)param_2;
  local_118.Data.ArrayNum = *(int *)&param_2->field_0x8;
  local_118.Data.ArrayMax = *(int *)&param_2->field_0xc;
  bVar8 = FCbPackage::TryLoad((FCbPackage *)local_58,(FArchive *)&local_108,
                              (TFunctionRef<FUniqueBuffer___cdecl(unsigned___int64)> *)&local_118);
  if (bVar8) {
    pFVar9 = FAutomationTestFramework::Get();
    pFVar5 = pFVar9->CurrentTest;
    pcVar6 = *(code **)(pFVar5->_padding_ + 0x28);
    ::FString::FString(&local_118,L"Condition expected to return false but returned true");
    (*pcVar6)(pFVar5,&local_118,0);
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
  }
  FArchive::~FArchive((FArchive *)&local_108);
  plVar7 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 3;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (((uint)lVar3 & 0x3fffffff) == 1) {
      (**(code **)(*local_38 + 0x10))(local_38);
      plVar7[1] = 0;
      plVar7[2] = 0;
      LOCK();
      puVar2 = (ulonglong *)(plVar7 + 3);
      uVar4 = *puVar2;
      *puVar2 = *puVar2 - 0x40000000;
      UNLOCK();
      if (((uint)(uVar4 >> 0x1e) & 0x3fffffff) == 1) {
        (**(code **)*plVar7)(plVar7,1);
      }
    }
  }
  DestructItems<FCbAttachment,int>((FCbAttachment *)local_58._0_8_,local_58._8_4_);
  if ((FScriptContainerElement *)local_58._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_58._0_8_);
  }
  return;
}

// TestBody @ 141d1c850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
FCompactBinaryInvalidPackageTest::TestBody(FCompactBinaryInvalidPackageTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  FAutomationTestFramework *pFVar3;
  undefined1 auStack_88 [32];
  uchar local_68 [4];
  undefined1 local_64 [12];
  initializer_list<unsigned_char> local_58;
  uchar local_48 [16];
  initializer_list<unsigned_char> local_38;
  initializer_list<unsigned_char> local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  pFVar3 = FAutomationTestFramework::Get();
  pFVar1 = pFVar3->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString((FString *)&local_28,L"Empty");
  (*pcVar2)(pFVar1,&local_28,0,0);
  if (local_28._First != (uchar *)0x0) {
    FMemory::Free(local_28._First);
  }
  local_28._Last = local_48;
  local_28._First =
       (uchar *)UE::Core::Private::Function::
                TFunctionRefCaller<`FCompactBinaryInvalidPackageTest::TestBody'::__l2::<lambda_2>_const_,FUniqueBuffer,unsigned___int64>
                ::Call;
  local_38._First = (uchar *)0x0;
  local_38._Last = (uchar *)0x0;
  `FCompactBinaryInvalidPackageTest::TestBody'::__l2::<lambda_1>::operator()
            (local_64,&local_38,(TFunctionRef<FUniqueBuffer___cdecl(unsigned___int64)> *)&local_28);
  pFVar3 = FAutomationTestFramework::Get();
  pFVar1 = pFVar3->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString((FString *)&local_28,L"Invalid Initial Field");
  (*pcVar2)(pFVar1,&local_28,0,0);
  if ((code *)local_28._First != (code *)0x0) {
    FMemory::Free(local_28._First);
  }
  local_58._First = local_68;
  local_68[0] = '\0';
  local_58._Last = local_68 + 1;
  local_28._Last = (uchar *)FUniqueBuffer::Alloc;
  local_28._First =
       (uchar *)UE::Core::Private::Function::
                TFunctionRefCaller<FUniqueBuffer___cdecl(unsigned___int64),FUniqueBuffer,unsigned___int64>
                ::Call;
  `FCompactBinaryInvalidPackageTest::TestBody'::__l2::<lambda_1>::operator()
            (local_64,&local_58,(TFunctionRef<FUniqueBuffer___cdecl(unsigned___int64)> *)&local_28);
  local_28._First = local_68;
  local_58._Last = (uchar *)FUniqueBuffer::Alloc;
  local_28._Last = local_68 + 1;
  local_58._First =
       (uchar *)UE::Core::Private::Function::
                TFunctionRefCaller<FUniqueBuffer___cdecl(unsigned___int64),FUniqueBuffer,unsigned___int64>
                ::Call;
  local_68[0] = '\x04';
  `FCompactBinaryInvalidPackageTest::TestBody'::__l2::<lambda_1>::operator()
            (local_64,&local_28,(TFunctionRef<FUniqueBuffer___cdecl(unsigned___int64)> *)&local_58);
  local_28._First = local_68;
  local_58._Last = (uchar *)FUniqueBuffer::Alloc;
  local_28._Last = local_68 + 1;
  local_58._First =
       (uchar *)UE::Core::Private::Function::
                TFunctionRefCaller<FUniqueBuffer___cdecl(unsigned___int64),FUniqueBuffer,unsigned___int64>
                ::Call;
  local_68[0] = '\x05';
  `FCompactBinaryInvalidPackageTest::TestBody'::__l2::<lambda_1>::operator()
            (local_64,&local_28,(TFunctionRef<FUniqueBuffer___cdecl(unsigned___int64)> *)&local_58);
  local_28._First = local_68;
  local_58._Last = (uchar *)FUniqueBuffer::Alloc;
  local_28._Last = local_68 + 1;
  local_58._First =
       (uchar *)UE::Core::Private::Function::
                TFunctionRefCaller<FUniqueBuffer___cdecl(unsigned___int64),FUniqueBuffer,unsigned___int64>
                ::Call;
  local_68[0] = '\x06';
  `FCompactBinaryInvalidPackageTest::TestBody'::__l2::<lambda_1>::operator()
            (local_64,&local_28,(TFunctionRef<FUniqueBuffer___cdecl(unsigned___int64)> *)&local_58);
  local_28._First = local_68;
  local_58._Last = (uchar *)FUniqueBuffer::Alloc;
  local_28._Last = local_68 + 1;
  local_58._First =
       (uchar *)UE::Core::Private::Function::
                TFunctionRefCaller<FUniqueBuffer___cdecl(unsigned___int64),FUniqueBuffer,unsigned___int64>
                ::Call;
  local_68[0] = '\a';
  `FCompactBinaryInvalidPackageTest::TestBody'::__l2::<lambda_1>::operator()
            (local_64,&local_28,(TFunctionRef<FUniqueBuffer___cdecl(unsigned___int64)> *)&local_58);
  local_28._First = local_68;
  local_58._Last = (uchar *)FUniqueBuffer::Alloc;
  local_28._Last = local_68 + 1;
  local_58._First =
       (uchar *)UE::Core::Private::Function::
                TFunctionRefCaller<FUniqueBuffer___cdecl(unsigned___int64),FUniqueBuffer,unsigned___int64>
                ::Call;
  local_68[0] = '\b';
  `FCompactBinaryInvalidPackageTest::TestBody'::__l2::<lambda_1>::operator()
            (local_64,&local_28,(TFunctionRef<FUniqueBuffer___cdecl(unsigned___int64)> *)&local_58);
  local_28._First = local_68;
  local_58._Last = (uchar *)FUniqueBuffer::Alloc;
  local_28._Last = local_68 + 1;
  local_58._First =
       (uchar *)UE::Core::Private::Function::
                TFunctionRefCaller<FUniqueBuffer___cdecl(unsigned___int64),FUniqueBuffer,unsigned___int64>
                ::Call;
  local_68[0] = '\t';
  `FCompactBinaryInvalidPackageTest::TestBody'::__l2::<lambda_1>::operator()
            (local_64,&local_28,(TFunctionRef<FUniqueBuffer___cdecl(unsigned___int64)> *)&local_58);
  local_58._Last = (uchar *)FUniqueBuffer::Alloc;
  local_58._First =
       (uchar *)UE::Core::Private::Function::
                TFunctionRefCaller<FUniqueBuffer___cdecl(unsigned___int64),FUniqueBuffer,unsigned___int64>
                ::Call;
  local_28._First = local_68;
  local_68[0] = '\n';
  local_28._Last = local_68 + 1;
  `FCompactBinaryInvalidPackageTest::TestBody'::__l2::<lambda_1>::operator()
            (local_64,&local_28,(TFunctionRef<FUniqueBuffer___cdecl(unsigned___int64)> *)&local_58);
  local_28._First = local_68;
  local_58._Last = (uchar *)FUniqueBuffer::Alloc;
  local_28._Last = local_68 + 1;
  local_58._First =
       (uchar *)UE::Core::Private::Function::
                TFunctionRefCaller<FUniqueBuffer___cdecl(unsigned___int64),FUniqueBuffer,unsigned___int64>
                ::Call;
  local_68[0] = '\v';
  `FCompactBinaryInvalidPackageTest::TestBody'::__l2::<lambda_1>::operator()
            (local_64,&local_28,(TFunctionRef<FUniqueBuffer___cdecl(unsigned___int64)> *)&local_58);
  local_28._First = local_68;
  local_58._Last = (uchar *)FUniqueBuffer::Alloc;
  local_28._Last = local_68 + 1;
  local_58._First =
       (uchar *)UE::Core::Private::Function::
                TFunctionRefCaller<FUniqueBuffer___cdecl(unsigned___int64),FUniqueBuffer,unsigned___int64>
                ::Call;
  local_68[0] = '\f';
  `FCompactBinaryInvalidPackageTest::TestBody'::__l2::<lambda_1>::operator()
            (local_64,&local_28,(TFunctionRef<FUniqueBuffer___cdecl(unsigned___int64)> *)&local_58);
  local_28._First = local_68;
  local_58._Last = (uchar *)FUniqueBuffer::Alloc;
  local_28._Last = local_68 + 1;
  local_58._First =
       (uchar *)UE::Core::Private::Function::
                TFunctionRefCaller<FUniqueBuffer___cdecl(unsigned___int64),FUniqueBuffer,unsigned___int64>
                ::Call;
  local_68[0] = '\r';
  `FCompactBinaryInvalidPackageTest::TestBody'::__l2::<lambda_1>::operator()
            (local_64,&local_28,(TFunctionRef<FUniqueBuffer___cdecl(unsigned___int64)> *)&local_58);
  local_28._First = local_68;
  local_58._Last = (uchar *)FUniqueBuffer::Alloc;
  local_28._Last = local_68 + 1;
  local_58._First =
       (uchar *)UE::Core::Private::Function::
                TFunctionRefCaller<FUniqueBuffer___cdecl(unsigned___int64),FUniqueBuffer,unsigned___int64>
                ::Call;
  local_68[0] = '\x0e';
  `FCompactBinaryInvalidPackageTest::TestBody'::__l2::<lambda_1>::operator()
            (local_64,&local_28,(TFunctionRef<FUniqueBuffer___cdecl(unsigned___int64)> *)&local_58);
  local_28._First = local_68;
  local_58._Last = (uchar *)FUniqueBuffer::Alloc;
  local_28._Last = local_68 + 1;
  local_58._First =
       (uchar *)UE::Core::Private::Function::
                TFunctionRefCaller<FUniqueBuffer___cdecl(unsigned___int64),FUniqueBuffer,unsigned___int64>
                ::Call;
  local_68[0] = '\x0f';
  `FCompactBinaryInvalidPackageTest::TestBody'::__l2::<lambda_1>::operator()
            (local_64,&local_28,(TFunctionRef<FUniqueBuffer___cdecl(unsigned___int64)> *)&local_58);
  local_28._First = local_68;
  local_58._Last = (uchar *)FUniqueBuffer::Alloc;
  local_28._Last = local_68 + 1;
  local_58._First =
       (uchar *)UE::Core::Private::Function::
                TFunctionRefCaller<FUniqueBuffer___cdecl(unsigned___int64),FUniqueBuffer,unsigned___int64>
                ::Call;
  local_68[0] = '\x11';
  `FCompactBinaryInvalidPackageTest::TestBody'::__l2::<lambda_1>::operator()
            (local_64,&local_28,(TFunctionRef<FUniqueBuffer___cdecl(unsigned___int64)> *)&local_58);
  local_28._First = local_68;
  local_58._Last = (uchar *)FUniqueBuffer::Alloc;
  local_28._Last = local_68 + 1;
  local_58._First =
       (uchar *)UE::Core::Private::Function::
                TFunctionRefCaller<FUniqueBuffer___cdecl(unsigned___int64),FUniqueBuffer,unsigned___int64>
                ::Call;
  local_68[0] = '\x12';
  `FCompactBinaryInvalidPackageTest::TestBody'::__l2::<lambda_1>::operator()
            (local_64,&local_28,(TFunctionRef<FUniqueBuffer___cdecl(unsigned___int64)> *)&local_58);
  local_28._First = local_68;
  local_58._Last = (uchar *)FUniqueBuffer::Alloc;
  local_28._Last = local_68 + 1;
  local_58._First =
       (uchar *)UE::Core::Private::Function::
                TFunctionRefCaller<FUniqueBuffer___cdecl(unsigned___int64),FUniqueBuffer,unsigned___int64>
                ::Call;
  local_68[0] = '\x13';
  `FCompactBinaryInvalidPackageTest::TestBody'::__l2::<lambda_1>::operator()
            (local_64,&local_28,(TFunctionRef<FUniqueBuffer___cdecl(unsigned___int64)> *)&local_58);
  local_28._First = local_68;
  local_58._Last = (uchar *)FUniqueBuffer::Alloc;
  local_28._Last = local_68 + 1;
  local_58._First =
       (uchar *)UE::Core::Private::Function::
                TFunctionRefCaller<FUniqueBuffer___cdecl(unsigned___int64),FUniqueBuffer,unsigned___int64>
                ::Call;
  local_68[0] = '\x14';
  `FCompactBinaryInvalidPackageTest::TestBody'::__l2::<lambda_1>::operator()
            (local_64,&local_28,(TFunctionRef<FUniqueBuffer___cdecl(unsigned___int64)> *)&local_58);
  local_28._First = local_68;
  local_58._Last = (uchar *)FUniqueBuffer::Alloc;
  local_28._Last = local_68 + 1;
  local_58._First =
       (uchar *)UE::Core::Private::Function::
                TFunctionRefCaller<FUniqueBuffer___cdecl(unsigned___int64),FUniqueBuffer,unsigned___int64>
                ::Call;
  local_68[0] = '\x1e';
  `FCompactBinaryInvalidPackageTest::TestBody'::__l2::<lambda_1>::operator()
            (local_64,&local_28,(TFunctionRef<FUniqueBuffer___cdecl(unsigned___int64)> *)&local_58);
  local_28._First = local_68;
  local_58._Last = (uchar *)FUniqueBuffer::Alloc;
  local_28._Last = local_68 + 1;
  local_58._First =
       (uchar *)UE::Core::Private::Function::
                TFunctionRefCaller<FUniqueBuffer___cdecl(unsigned___int64),FUniqueBuffer,unsigned___int64>
                ::Call;
  local_68[0] = 0x1f;
  `FCompactBinaryInvalidPackageTest::TestBody'::__l2::<lambda_1>::operator()
            (local_64,&local_28,(TFunctionRef<FUniqueBuffer___cdecl(unsigned___int64)> *)&local_58);
  pFVar3 = FAutomationTestFramework::Get();
  pFVar1 = pFVar3->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString((FString *)&local_58,L"Size Out Of Bounds");
  (*pcVar2)(pFVar1,&local_58,0,0);
  if ((code *)local_58._First != (code *)0x0) {
    FMemory::Free(local_58._First);
  }
  local_58._Last = local_48;
  local_58._First =
       (uchar *)UE::Core::Private::Function::
                TFunctionRefCaller<`FCompactBinaryInvalidPackageTest::TestBody'::__l2::<lambda_2>_const_,FUniqueBuffer,unsigned___int64>
                ::Call;
  local_28._First = local_68;
  local_68[0] = '\x02';
  local_68[1] = '\x01';
  local_28._Last = local_68 + 2;
  `FCompactBinaryInvalidPackageTest::TestBody'::__l2::<lambda_1>::operator()
            (local_64,&local_28,(TFunctionRef<FUniqueBuffer___cdecl(unsigned___int64)> *)&local_58);
  local_58._Last = local_48;
  local_58._First =
       (uchar *)UE::Core::Private::Function::
                TFunctionRefCaller<`FCompactBinaryInvalidPackageTest::TestBody'::__l2::<lambda_2>_const_,FUniqueBuffer,unsigned___int64>
                ::Call;
  local_38._First = (uchar *)&local_28;
  local_38._Last = (uchar *)((longlong)&local_28._Last + 2);
  local_28._First = (uchar *)0xbc9a78563412ff02;
  local_28._Last = (uchar *)CONCAT62(local_28._Last._2_6_,0xf0de);
  `FCompactBinaryInvalidPackageTest::TestBody'::__l2::<lambda_1>::operator()
            (local_64,&local_38,(TFunctionRef<FUniqueBuffer___cdecl(unsigned___int64)> *)&local_58);
  return;
}

