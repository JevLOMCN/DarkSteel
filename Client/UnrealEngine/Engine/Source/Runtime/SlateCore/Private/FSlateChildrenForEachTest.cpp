// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 8

// GetTestFlags @ 1425ace30

EAutomationTestFlags __thiscall
FSlateChildrenForEachTest::GetTestFlags(FSlateChildrenForEachTest *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 1425ace40

bool __thiscall FSlateChildrenForEachTest::IsStressTest(FSlateChildrenForEachTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1425ace50

uint __thiscall FSlateChildrenForEachTest::GetRequiredDeviceNum(FSlateChildrenForEachTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1425ace60

FString * __thiscall
FSlateChildrenForEachTest::GetTestSourceFileName
          (FSlateChildrenForEachTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Test\\SlateChildrenTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1425ace90

int __thiscall FSlateChildrenForEachTest::GetTestSourceFileLine(FSlateChildrenForEachTest *this)

{
  return 0x10;
}

// GetTests @ 1425acea0

/* WARNING: Removing unreachable block (ram,0x0001425acf8d) */
/* WARNING: Removing unreachable block (ram,0x0001425ad058) */

void __thiscall
FSlateChildrenForEachTest::GetTests
          (FSlateChildrenForEachTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"Slate.Children.ForEach");
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_1->ArrayNum;
  if (iVar3 == param_1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar3 + 1;
  pFVar4 = (param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(FScriptContainerElement **)pFVar4 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar4 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar4 + 0xc) = local_18.Data.ArrayMax;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_28 = 0;
  local_20 = 0;
  if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_2->ArrayNum;
  if (iVar3 == param_2->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar3 + 1;
  pFVar4 = (param_2->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(undefined8 *)pFVar4 = local_28;
  *(undefined4 *)(pFVar4 + 8) = (undefined4)local_20;
  *(undefined4 *)(pFVar4 + 0xc) = local_20._4_4_;
  return;
}

// RunTest @ 1425ad080

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FSlateChildrenForEachTest::RunTest(FSlateChildrenForEachTest *this,FString *param_1)

{
  code *pcVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int local_res8 [2];
  <lambda_2> local_res18;
  TSharedRef<SVerticalBox,1> local_68;
  undefined1 local_58 [24];
  TSharedPtr<SWidget,1> local_40;
  
  UE::Slate::Test::Private::BuildNormalTest(&local_68);
  iVar6 = 0;
  plVar4 = (longlong *)(**(code **)(*(longlong *)local_68.Object + 0x188))();
  if (*(char *)((longlong)plVar4 + 0x19) != -0x24) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogSlate);
  }
  lVar2 = plVar4[3];
  *(undefined1 *)(plVar4 + 3) = 1;
  iVar3 = (**(code **)*plVar4)(plVar4);
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      (**(code **)(*plVar4 + 0x38))(plVar4,&local_40,iVar5);
      iVar6 = iVar6 + 1;
      if (local_40.Object != (SWidget *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_40.SharedReferenceCount.ReferenceController);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  *(char *)(plVar4 + 3) = (char)lVar2;
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::PrintfImpl((FString *)local_58,L"Iterated over %d out of 7 SWidget. (BuildNormalTest)")
  ;
  (*pcVar1)(this,iVar6 == 7,local_58,0);
  if ((FScriptContainerElement *)local_58._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_58._0_8_);
  }
  local_res18.Count = local_res8;
  local_res8[0] = 0;
  UE::Slate::Test::Private::Recursive<_FSlateChildrenForEachTest::RunTest_::__l5::<lambda_2>_>
            ((SWidget *)local_68.Object,&local_res18);
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::PrintfImpl
            ((FString *)local_58,L"Iterated recursivly over %d out of 25 SWidget. (BuildNormalTest)"
            );
  (*pcVar1)(this,local_res8[0] == 0x19,local_58,0);
  if ((FScriptContainerElement *)local_58._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_58._0_8_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  local_40.Object = (SWidget *)0x0;
  local_40.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  UE::Slate::Test::Private::BuildChildTest(&local_68,&local_40);
  iVar6 = 0;
  plVar4 = (longlong *)(**(code **)(*(longlong *)local_68.Object + 0x188))();
  if (*(char *)((longlong)plVar4 + 0x19) != -0x24) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogSlate);
  }
  lVar2 = plVar4[3];
  *(undefined1 *)(plVar4 + 3) = 1;
  iVar3 = (**(code **)*plVar4)(plVar4);
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      (**(code **)(*plVar4 + 0x38))(plVar4,local_58,iVar5);
      iVar6 = iVar6 + 1;
      if ((FScriptContainerElement *)local_58._0_8_ != (FScriptContainerElement *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_58._8_8_);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  *(char *)(plVar4 + 3) = (char)lVar2;
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::PrintfImpl((FString *)local_58,L"Iterated over %d out of 2 SWidget. (BuildChildTest)");
  (*pcVar1)(this,iVar6 == 2,local_58,0);
  if ((FScriptContainerElement *)local_58._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_58._0_8_);
  }
  local_res18.Count = local_res8;
  local_res8[0] = 0;
  UE::Slate::Test::Private::Recursive<_FSlateChildrenForEachTest::RunTest_::__l8::<lambda_4>_>
            ((SWidget *)local_68.Object,(<lambda_4> *)&local_res18);
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::PrintfImpl
            ((FString *)local_58,L"Iterated recursivly over %d out of 14 SWidget (BuildChildTest).")
  ;
  (*pcVar1)(this,local_res8[0] == 0xe,local_58,0);
  if ((FScriptContainerElement *)local_58._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_58._0_8_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_40.SharedReferenceCount.ReferenceController);
  return true;
}

// GetBeautifiedTestName @ 1425ad320

FString * __thiscall
FSlateChildrenForEachTest::GetBeautifiedTestName
          (FSlateChildrenForEachTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Slate.Children.ForEach");
  return __return_storage_ptr__;
}

