// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Projects
// Functions: 7

// Call @ 141e15720

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPluginManager::ProcessEnabledPlugins'::__l2::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `FPluginManager::ProcessEnabledPlugins'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 141e15730

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FProjectEditorRecord::QueueUpdate'::__l5::<lambda_1>,void>::Call(void *param_1)

{
  code *pcVar1;
  FSharedReferencer<1> FVar2;
  bool bVar3;
  undefined8 uVar4;
  IFileManager *pIVar5;
  FString *pFVar6;
  longlong *plVar7;
  wchar_t *pwVar8;
  undefined1 auVar9 [16];
  FWindowsSystemWideMutex FStackX_8;
  FString FStack_a8;
  FProjectEditorRecord FStack_98;
  TSharedRef<TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>,1> TStack_80;
  FString FStack_70;
  TSharedPtr<FJsonObject,1> TStack_60;
  FScriptContainerElement *pFStack_48;
  int iStack_40;
  undefined4 uStack_3c;
  TStringView<wchar_t> TStack_38;
  FString FStack_28;
  
  auVar9._8_8_ = 0;
  auVar9._0_8_ = __real_41c1e1a300400000;
  auVar9 = roundpd(auVar9,auVar9,1);
  ::FString::FString(&FStack_70,L"ProjectEditorRecords");
  FWindowsSystemWideMutex::FWindowsSystemWideMutex
            (&FStackX_8,&FStack_70,(FTimespan)(longlong)auVar9._0_8_);
  if (FStack_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_70.Data.AllocatorInstance.Data);
  }
  FProjectEditorRecord::Load(&FStack_98);
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar7 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar7 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar4 = (**(code **)(*plVar7 + 8))();
  (*pcVar1)(uVar4,&FStack_98);
  FProjectEditorRecord::PruneOldEntries(&FStack_98,&FStack_98.ProjectEditorJson);
  FStack_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_a8.Data.ArrayNum = 0;
  FStack_a8.Data.ArrayMax = 0;
  TJsonWriterFactory<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Create(&TStack_80,&FStack_a8,0);
  pwVar8 = L"";
  if (FStack_98.ProjectEditorJson.Object == (FJsonObject *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FVar2.ReferenceController = FStack_98.ProjectEditorJson.SharedReferenceCount.ReferenceController;
  if (FStack_98.ProjectEditorJson.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FStack_98.ProjectEditorJson.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(FStack_98.ProjectEditorJson.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  if (FStack_98.ProjectEditorJson.Object == (FJsonObject *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TStack_60.Object = FStack_98.ProjectEditorJson.Object;
  TStack_60.SharedReferenceCount.ReferenceController = FVar2.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar2.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar2.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar3 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
          Serialize<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>(&TStack_60,TStack_80.Object,true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar2.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar2.ReferenceController);
  if (bVar3) {
    pIVar5 = IFileManager::Get();
    pFVar6 = FProjectEditorRecord::GetFileLocation(&FStack_28);
    if ((pFVar6->Data).ArrayNum != 0) {
      pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    pFStack_48 = FStack_a8.Data.AllocatorInstance.Data;
    iStack_40 = FStack_a8.Data.ArrayNum + -1;
    if (FStack_a8.Data.ArrayNum == 0) {
      iStack_40 = 0;
    }
    TStack_38._12_4_ = uStack_3c;
    TStack_38.Size = iStack_40;
    TStack_38.DataPtr = (wchar_t *)FStack_a8.Data.AllocatorInstance.Data;
    FFileHelper::SaveStringToFile(&TStack_38,pwVar8,AutoDetect,pIVar5,0);
    if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_80.SharedReferenceCount.ReferenceController);
  if (FStack_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a8.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_98.ProjectEditorJson.SharedReferenceCount.ReferenceController);
  FWindowsSystemWideMutex::~FWindowsSystemWideMutex(&FStackX_8);
  return;
}

// Call @ 141e15740

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPluginManager::ReadPluginsInDirectory'::__l7::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `FPluginManager::ReadPluginsInDirectory'::__l7::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 141e15750

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FProjectDescriptor::Read'::__l29::<lambda_1>,bool,wchar_t_const_*,bool>::Call
          (void *param_1,wchar_t **param_2,bool *param_3)

{
  bool bVar1;
  
  bVar1 = `FProjectDescriptor::Read'::__l29::<lambda_1>::operator()(param_1,*param_2,*param_3);
  return bVar1;
}

// Call @ 141e15770

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPluginManager::MountExplicitlyLoadedPluginLocalizationData'::__l119::<lambda_1>,void>
::Call(void *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 local_res8 [8];
  
  local_res8[0] = 1;
  CheckCallable(*(void **)((longlong)param_1 + 0x10));
  pcVar1 = *(code **)((longlong)param_1 + 0x10);
  plVar3 = (longlong *)((longlong)param_1 + 0x20);
  if (*(longlong **)((longlong)param_1 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x38);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,local_res8,param_1);
  return;
}

// Call @ 141e157d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPluginManager::UnmountExplicitlyLoadedPluginLocalizationData'::__l167::<lambda_1>,void>
::Call(void *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 local_res8 [8];
  
  local_res8[0] = 1;
  CheckCallable(*(void **)((longlong)param_1 + 0x10));
  pcVar1 = *(code **)((longlong)param_1 + 0x10);
  plVar3 = (longlong *)((longlong)param_1 + 0x20);
  if (*(longlong **)((longlong)param_1 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x38);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,local_res8,param_1);
  return;
}

// Call @ 141e15830

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FPluginManager::FindCommandLinePlugins'::__l2::<lambda_1>::operator()'::__l7::<lambda_2>,void,TStringView<wchar_t>_>
::Call(void *param_1,TStringView<wchar_t> *param_2)

{
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.Size = param_2->Size;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  ``FPluginManager::FindCommandLinePlugins'::__l2::<lambda_1>::operator()'::__l7::<lambda_2>::
  operator()(param_1,&local_18);
  return;
}

