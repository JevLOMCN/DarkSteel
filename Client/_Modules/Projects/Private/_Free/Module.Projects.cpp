// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Projects
// Functions: 171

// AsyncUpdateTask'' @ 140f1c9f0

void __cdecl `dynamic_initializer_for_'FProjectEditorRecord::AsyncUpdateTask__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FProjectEditorRecord::AsyncUpdateTask__);
  return;
}

// BaseDirProperty'' @ 140f1ca10

void __cdecl `dynamic_initializer_for_'FProjectEditorRecord::BaseDirProperty__(void)

{
  ::FString::FString(&FProjectEditorRecord::BaseDirProperty,L"BaseDir");
  atexit(`dynamic_atexit_destructor_for_'FProjectEditorRecord::BaseDirProperty__);
  return;
}

// CustomPluginDescriptorReaderDelegate'' @ 140f1ca40

void __cdecl
`dynamic_initializer_for_'FPluginDescriptor::CustomPluginDescriptorReaderDelegate__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FPluginDescriptor::CustomPluginDescriptorReaderDelegate__);
  return;
}

// EngineLocationProperty'' @ 140f1ca60

void __cdecl `dynamic_initializer_for_'FProjectEditorRecord::EngineLocationProperty__(void)

{
  ::FString::FString(&FProjectEditorRecord::EngineLocationProperty,L"EngineLocation");
  atexit(`dynamic_atexit_destructor_for_'FProjectEditorRecord::EngineLocationProperty__);
  return;
}

// EpicAppProperty'' @ 140f1ca90

void __cdecl `dynamic_initializer_for_'FProjectEditorRecord::EpicAppProperty__(void)

{
  ::FString::FString(&FProjectEditorRecord::EpicAppProperty,L"EpicApp");
  atexit(`dynamic_atexit_destructor_for_'FProjectEditorRecord::EpicAppProperty__);
  return;
}

// ProjectsProperty'' @ 140f1cac0

void __cdecl `dynamic_initializer_for_'FProjectEditorRecord::ProjectsProperty__(void)

{
  ::FString::FString(&FProjectEditorRecord::ProjectsProperty,L"Projects");
  atexit(`dynamic_atexit_destructor_for_'FProjectEditorRecord::ProjectsProperty__);
  return;
}

// SubProjectProperty'' @ 140f1caf0

void __cdecl `dynamic_initializer_for_'FProjectEditorRecord::SubProjectProperty__(void)

{
  ::FString::FString(&FProjectEditorRecord::SubProjectProperty,L"SubProjects");
  atexit(`dynamic_atexit_destructor_for_'FProjectEditorRecord::SubProjectProperty__);
  return;
}

// TimestampProperty'' @ 140f1cb20

void __cdecl `dynamic_initializer_for_'FProjectEditorRecord::TimestampProperty__(void)

{
  ::FString::FString(&FProjectEditorRecord::TimestampProperty,L"LastAccessed");
  atexit(`dynamic_atexit_destructor_for_'FProjectEditorRecord::TimestampProperty__);
  return;
}

// `dynamic_initializer_for_'CVarProjectEngineLocationFile'' @ 140f1cb50

void __cdecl ProjectEditorRecords::_dynamic_initializer_for__CVarProjectEngineLocationFile__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarProjectEngineLocationFile,L"r.Editor.ProjectEditorRecordsFile",
             &ProjectEngineLocationFile,L"The path of the Project - Engine Location record file.",0)
  ;
  atexit(_dynamic_atexit_destructor_for__CVarProjectEngineLocationFile__);
  return;
}

// `dynamic_initializer_for_'FProjectsLoadingPluginDescriptorTestsInstance'' @ 140f1cba0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FProjectsLoadingPluginDescriptorTestsInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FProjectsLoadingPluginDescriptorTests");
  FProjectsLoadingPluginDescriptorTests::FProjectsLoadingPluginDescriptorTests
            (&FProjectsLoadingPluginDescriptorTestsInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FProjectsLoadingPluginDescriptorTestsInstance__);
  return;
}

// `dynamic_initializer_for_'FProjectsLoadingProjectDescriptorTestsInstance'' @ 140f1cbf0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FProjectsLoadingProjectDescriptorTestsInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FProjectsLoadingProjectDescriptorTests");
  FProjectsLoadingProjectDescriptorTests::FProjectsLoadingProjectDescriptorTests
            (&FProjectsLoadingProjectDescriptorTestsInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FProjectsLoadingProjectDescriptorTestsInstance__);
  return;
}

// `dynamic_initializer_for_'FProjectsLoadingRapidJsonPluginLoadingInstance'' @ 140f1cc40

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FProjectsLoadingRapidJsonPluginLoadingInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FProjectsLoadingRapidJsonPluginLoading");
  FProjectsLoadingRapidJsonPluginLoading::FProjectsLoadingRapidJsonPluginLoading
            (&FProjectsLoadingRapidJsonPluginLoadingInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FProjectsLoadingRapidJsonPluginLoadingInstance__);
  return;
}

// `dynamic_initializer_for_'LogPluginManager'' @ 140f1cc90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogPluginManager__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogPluginManager,L"LogPluginManager",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogPluginManager__);
  return;
}

// `dynamic_initializer_for_'LogProjectManager'' @ 140f1ccd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogProjectManager__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogProjectManager,L"LogProjectManager",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogProjectManager__);
  return;
}

// `dynamic_initializer_for_'LogRapidJsonPluginLoading'' @ 140f1cd10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogRapidJsonPluginLoading__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogRapidJsonPluginLoading,L"LogRapidJsonPluginLoading",Display,All
            );
  atexit(_dynamic_atexit_destructor_for__LogRapidJsonPluginLoading__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantProjects'' @ 140f1cd50

void __cdecl _dynamic_initializer_for__ModuleRegistrantProjects__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "Projects";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"Projects",8);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FProjectsModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'ProjectEngineLocationFile'' @ 140f1cda0

void __cdecl ProjectEditorRecords::_dynamic_initializer_for__ProjectEngineLocationFile__(void)

{
  atexit(_dynamic_atexit_destructor_for__ProjectEngineLocationFile__);
  return;
}

// `scalar_deleting_destructor' @ 141e03220

void * __thiscall
FProjectsLoadingRapidJsonPluginLoading::_scalar_deleting_destructor_
          (FProjectsLoadingRapidJsonPluginLoading *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e034e0

void * __thiscall
FProjectsLoadingPluginDescriptorTests::_scalar_deleting_destructor_
          (FProjectsLoadingPluginDescriptorTests *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e037a0

void * __thiscall
FProjectsLoadingProjectDescriptorTests::_scalar_deleting_destructor_
          (FProjectsLoadingProjectDescriptorTests *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e03820

void * __thiscall FProjectsModule::_scalar_deleting_destructor_(FProjectsModule *this,uint param_1)

{
  *this = (FProjectsModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// ConstructItems<FLocalizationTargetDescriptor,FLocalizationTargetDescriptor,int> @ 141e044b0

void __cdecl
ConstructItems<FLocalizationTargetDescriptor,FLocalizationTargetDescriptor,int>
          (void *param_1,FLocalizationTargetDescriptor *param_2,int param_3)

{
  Type *pTVar1;
  Type *pTVar2;
  
  if (param_3 != 0) {
    pTVar1 = (Type *)((longlong)param_1 + 0x14);
    pTVar2 = &param_2->ConfigGenerationPolicy;
    do {
      FString::FString((FString *)(pTVar1 + -5),
                       (FString *)
                       ((longlong)param_2 + (-0x14 - (longlong)param_1) + (longlong)pTVar1));
      pTVar1[-1] = pTVar2[-1];
      *pTVar1 = *pTVar2;
      param_3 = param_3 + -1;
      pTVar1 = pTVar1 + 6;
      pTVar2 = pTVar2 + 6;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FModuleDescriptor,FModuleDescriptor,int> @ 141e04530

void __cdecl
ConstructItems<FModuleDescriptor,FModuleDescriptor,int>
          (void *param_1,FModuleDescriptor *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      FModuleDescriptor::FModuleDescriptor((FModuleDescriptor *)(lVar1 + (longlong)param_2),param_2)
      ;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FPluginDisallowedDescriptor,FPluginDisallowedDescriptor,int> @ 141e04580

void __cdecl
ConstructItems<FPluginDisallowedDescriptor,FPluginDisallowedDescriptor,int>
          (void *param_1,FPluginDisallowedDescriptor *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      FString::FString((FString *)(lVar1 + (longlong)param_2),&param_2->Name);
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FPluginReferenceDescriptor,FPluginReferenceDescriptor,int> @ 141e045d0

void __cdecl
ConstructItems<FPluginReferenceDescriptor,FPluginReferenceDescriptor,int>
          (void *param_1,FPluginReferenceDescriptor *param_2,int param_3)

{
  int iVar1;
  FString *pFVar2;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  int *piVar5;
  int *piVar6;
  
  if (param_3 != 0) {
    piVar5 = (int *)((longlong)param_1 + 0x50);
    piVar6 = &(param_2->PlatformDenyList).ArrayNum;
    do {
      FString::FString((FString *)
                       ((longlong)param_1 + (-0x50 - (longlong)param_2) + (longlong)piVar6),
                       (FString *)(piVar6 + -0x14));
      *(char *)(piVar5 + -0x10) = (char)piVar6[-0x10];
      *(undefined1 *)((longlong)piVar5 + -0x3f) = *(undefined1 *)((longlong)piVar6 + -0x3f);
      *(undefined1 *)((longlong)piVar5 + -0x3e) = *(undefined1 *)((longlong)piVar6 + -0x3e);
      FString::FString((FString *)(piVar5 + -0xe),(FString *)(piVar6 + -0xe));
      FString::FString((FString *)(piVar5 + -10),(FString *)(piVar6 + -10));
      piVar5[-6] = 0;
      piVar5[-5] = 0;
      iVar1 = piVar6[-4];
      pFVar2 = *(FString **)(piVar6 + -6);
      piVar5[-4] = iVar1;
      if (iVar1 == 0) {
        piVar5[-3] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar1,0,(ForAnyElementType *)(piVar5 + -6),iVar1,piVar5 + -3);
        ConstructItems<FString,FString,int>(((ForAnyElementType *)(piVar5 + -6))->Data,pFVar2,iVar1)
        ;
      }
      piVar5[-2] = 0;
      piVar5[-1] = 0;
      iVar1 = *piVar6;
      pFVar3 = (((TArray<FString,TSizedDefaultAllocator<32>_> *)(piVar6 + -2))->AllocatorInstance).
               Data;
      *piVar5 = iVar1;
      if (iVar1 == 0) {
        piVar5[1] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar1,0,(ForAnyElementType *)(piVar5 + -2),iVar1,piVar5 + 1);
        ConstructItems<FString,FString,int>
                  (((ForAnyElementType *)(piVar5 + -2))->Data,(FString *)pFVar3,iVar1);
      }
      piVar5[2] = 0;
      piVar5[3] = 0;
      iVar1 = piVar6[4];
      pvVar4 = *(void **)(piVar6 + 2);
      piVar5[4] = iVar1;
      if (iVar1 == 0) {
        piVar5[5] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar1,0,(ForAnyElementType *)(piVar5 + 2),iVar1,piVar5 + 5);
        memcpy(((ForAnyElementType *)(piVar5 + 2))->Data,pvVar4,(longlong)iVar1);
      }
      piVar5[6] = 0;
      piVar5[7] = 0;
      iVar1 = piVar6[8];
      pvVar4 = *(void **)(piVar6 + 6);
      piVar5[8] = iVar1;
      if (iVar1 == 0) {
        piVar5[9] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar1,0,(ForAnyElementType *)(piVar5 + 6),iVar1,piVar5 + 9);
        memcpy(((ForAnyElementType *)(piVar5 + 6))->Data,pvVar4,(longlong)iVar1);
      }
      piVar5[10] = 0;
      piVar5[0xb] = 0;
      iVar1 = piVar6[0xc];
      pvVar4 = *(void **)(piVar6 + 10);
      piVar5[0xc] = iVar1;
      if (iVar1 == 0) {
        piVar5[0xd] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar1,0,(ForAnyElementType *)(piVar5 + 10),iVar1,piVar5 + 0xd);
        memcpy(((ForAnyElementType *)(piVar5 + 10))->Data,pvVar4,(longlong)iVar1);
      }
      piVar5[0xe] = 0;
      piVar5[0xf] = 0;
      iVar1 = piVar6[0x10];
      pvVar4 = *(void **)(piVar6 + 0xe);
      piVar5[0x10] = iVar1;
      if (iVar1 == 0) {
        piVar5[0x11] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar1,0,(ForAnyElementType *)(piVar5 + 0xe),iVar1,piVar5 + 0x11);
        memcpy(((ForAnyElementType *)(piVar5 + 0xe))->Data,pvVar4,(longlong)iVar1);
      }
      piVar5[0x12] = 0;
      piVar5[0x13] = 0;
      iVar1 = piVar6[0x14];
      pFVar2 = *(FString **)(piVar6 + 0x12);
      piVar5[0x14] = iVar1;
      if (iVar1 == 0) {
        piVar5[0x15] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar1,0,(ForAnyElementType *)(piVar5 + 0x12),iVar1,piVar5 + 0x15);
        ConstructItems<FString,FString,int>
                  (((ForAnyElementType *)(piVar5 + 0x12))->Data,pFVar2,iVar1);
      }
      iVar1 = piVar6[0x16];
      *(undefined1 *)(piVar5 + 0x18) = 0;
      *(char *)(piVar5 + 0x16) = (char)iVar1;
      iVar1 = piVar6[0x18];
      *(char *)(piVar5 + 0x18) = (char)iVar1;
      if ((char)iVar1 != '\0') {
        piVar5[0x17] = piVar6[0x17];
      }
      piVar5 = piVar5 + 0x2e;
      piVar6 = piVar6 + 0x2e;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TSharedRef<IPlugin,1>,TSharedRef<IPlugin,1>,int> @ 141e048f0

void __cdecl
ConstructItems<TSharedRef<IPlugin,1>,TSharedRef<IPlugin,1>,int>
          (void *param_1,TSharedRef<IPlugin,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(IPlugin **)(lVar2 + (longlong)param_2) = param_2->Object;
      pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(lVar2 + 8 + (longlong)param_2) = pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<`FPluginManager::ReadPluginsInDirectory'::__l5::FLoadContext,int> @ 141e04a40

void __cdecl
DefaultConstructItems<_FPluginManager::ReadPluginsInDirectory_::__l5::FLoadContext,int>
          (void *param_1,int param_2)

{
  undefined1 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined1 *)((longlong)param_1 + 0x218);
    do {
      FPluginDescriptor::FPluginDescriptor((FPluginDescriptor *)(puVar1 + -0x218));
      FText::FText((FText *)(puVar1 + -0x10));
      *puVar1 = 0;
      puVar1 = puVar1 + 0x220;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FPluginDisallowedDescriptor,int> @ 141e04aa0

void __cdecl DefaultConstructItems<FPluginDisallowedDescriptor,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      lVar1 = lVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<`ParallelForImpl::ParallelForInternal<`FPluginManager::FindPluginsInDirectory'::__l4::<lambda_1>,`ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,`FPluginManager::FindPluginsInDirectory'::__l4::<lambda_1>_>'::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>'::__l2::FTracedTask,int> @ 141e04ad0

void __cdecl
DefaultConstructItems<_ParallelForImpl::ParallelForInternal<_FPluginManager::FindPluginsInDirectory_::__l4::<lambda_1>,_ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,_FPluginManager::FindPluginsInDirectory_::__l4::<lambda_1>_>_::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>_::__l2::FTracedTask,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x28);
    do {
      *puVar1 = &
                ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
      ;
      puVar1[1] = 0;
      puVar1[2] = 0xe800000000000020;
      puVar1[3] = 0xffffffffffffffff;
      puVar1 = puVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<`FPluginManager::ReadPluginsInDirectory'::__l5::FLoadContext,int> @ 141e04b40

void __cdecl
DestructItems<_FPluginManager::ReadPluginsInDirectory_::__l5::FLoadContext,int>
          (FLoadContext *param_1,int param_2)

{
  ITextData *pIVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pIVar1 = (param_1->FailureReason).TextData.Reference;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))();
    }
    FPluginDescriptor::~FPluginDescriptor(&param_1->Descriptor);
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FLocalizationTargetDescriptor,int> @ 141e04b90

void __cdecl
DestructItems<FLocalizationTargetDescriptor,int>(FLocalizationTargetDescriptor *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Name).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FModuleContextInfo,int> @ 141e04bd0

void __cdecl DestructItems<FModuleContextInfo,int>(FModuleContextInfo *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->ModuleName).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->ModuleSourcePath).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FModuleDescriptor,int> @ 141e04c20

void __cdecl DestructItems<FModuleDescriptor,int>(FModuleDescriptor *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->PlatformArchitectureDenyList).field_0x40;
    do {
      DestructItems<FString,int>((FString *)puVar1[0x12],*(int *)(puVar1 + 0x13));
      if ((void *)puVar1[0x12] != (void *)0x0) {
        FMemory::Free((void *)puVar1[0x12]);
      }
      DestructItems<FString,int>((FString *)puVar1[0x10],*(int *)(puVar1 + 0x11));
      if ((void *)puVar1[0x10] != (void *)0x0) {
        FMemory::Free((void *)puVar1[0x10]);
      }
      DestructItems<FString,int>((FString *)puVar1[0xe],*(int *)(puVar1 + 0xf));
      if ((void *)puVar1[0xe] != (void *)0x0) {
        FMemory::Free((void *)puVar1[0xe]);
      }
      DestructItems<FString,int>((FString *)puVar1[0xc],*(int *)(puVar1 + 0xd));
      if ((void *)puVar1[0xc] != (void *)0x0) {
        FMemory::Free((void *)puVar1[0xc]);
      }
      DestructItems<FString,int>((FString *)puVar1[10],*(int *)(puVar1 + 0xb));
      if ((void *)puVar1[10] != (void *)0x0) {
        FMemory::Free((void *)puVar1[10]);
      }
      if ((void *)puVar1[8] != (void *)0x0) {
        FMemory::Free((void *)puVar1[8]);
      }
      if ((void *)puVar1[6] != (void *)0x0) {
        FMemory::Free((void *)puVar1[6]);
      }
      if ((void *)puVar1[4] != (void *)0x0) {
        FMemory::Free((void *)puVar1[4]);
      }
      if ((void *)puVar1[2] != (void *)0x0) {
        FMemory::Free((void *)puVar1[2]);
      }
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      *(undefined4 *)(puVar1 + -9) = 0;
      if ((void *)puVar1[-10] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-10]);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -0x12));
      DestructItems<FString,int>((FString *)puVar1[-0x14],*(int *)(puVar1 + -0x13));
      if ((void *)puVar1[-0x14] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0x14]);
      }
      DestructItems<FString,int>((FString *)puVar1[-0x16],*(int *)(puVar1 + -0x15));
      if ((void *)puVar1[-0x16] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0x16]);
      }
      puVar1 = puVar1 + 0x2d;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FPluginDisallowedDescriptor,int> @ 141e04db0

void __cdecl
DestructItems<FPluginDisallowedDescriptor,int>(FPluginDisallowedDescriptor *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Name).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FPluginManifestEntry,int> @ 141e04df0

void __cdecl DestructItems<FPluginManifestEntry,int>(FPluginManifestEntry *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FPluginDescriptor::~FPluginDescriptor(&param_1->Descriptor);
    pFVar1 = (param_1->File).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FPluginReferenceDescriptor,int> @ 141e04e40

void __cdecl
DestructItems<FPluginReferenceDescriptor,int>(FPluginReferenceDescriptor *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->SupportedTargetPlatforms;
    do {
      DestructItems<FString,int>((FString *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((TArray<EBuildTargetType,TSizedDefaultAllocator<32>_> *)(pTVar2 + -1))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((TArray<EBuildTargetType,TSizedDefaultAllocator<32>_> *)(pTVar2 + -2))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((TArray<EBuildConfiguration,TSizedDefaultAllocator<32>_> *)(pTVar2 + -3))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((TArray<EBuildConfiguration,TSizedDefaultAllocator<32>_> *)(pTVar2 + -4))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DestructItems<FString,int>((FString *)pTVar2[-5].AllocatorInstance.Data,pTVar2[-5].ArrayNum);
      pFVar1 = pTVar2[-5].AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      DestructItems<FString,int>((FString *)pTVar2[-6].AllocatorInstance.Data,pTVar2[-6].ArrayNum);
      pFVar1 = pTVar2[-6].AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FString *)(pTVar2 + -7))->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FString *)(pTVar2 + -8))->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      if (*(void **)((longlong)(pTVar2 + -10) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pTVar2 + -10) + 8));
      }
      pTVar2 = (TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)(pTVar2 + 0xb) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<`ParallelForImpl::ParallelForInternal<`FPluginManager::FindPluginsInDirectory'::__l4::<lambda_1>,`ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,`FPluginManager::FindPluginsInDirectory'::__l4::<lambda_1>_>'::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>'::__l2::FTracedTask,int> @ 141e04f40

void __cdecl
DestructItems<_ParallelForImpl::ParallelForInternal<_FPluginManager::FindPluginsInDirectory_::__l4::<lambda_1>,_ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,_FPluginManager::FindPluginsInDirectory_::__l4::<lambda_1>_>_::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>_::__l2::FTracedTask,int>
          (FTracedTask *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  ulonglong *puVar3;
  
  if (param_2 != 0) {
    puVar3 = (ulonglong *)&(param_1->Task).field_0x38;
    do {
      if (((*puVar3 & 0x20) == 0) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("IsCompleted()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                             ,0x204,L"State: %d"), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (**(code **)(puVar3[-2] + 0x18))(puVar3 + -2,puVar3 + -7);
      puVar3 = puVar3 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedRef<FPlugin,1>,int> @ 141e04fc0

void __cdecl DestructItems<TSharedRef<FPlugin,1>,int>(TSharedRef<FPlugin,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedRef<IPlugin,1>,int> @ 141e05000

void __cdecl DestructItems<TSharedRef<IPlugin,1>,int>(TSharedRef<IPlugin,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// FindByPredicate<`FPluginManager::ConfigureEnabledPluginForTarget'::__l307::<lambda_2>_> @ 141e06c80

FPluginDisallowedDescriptor * __thiscall
TArray<FPluginDisallowedDescriptor,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FPluginManager::ConfigureEnabledPluginForTarget_::__l307::<lambda_2>_>
          (TArray<FPluginDisallowedDescriptor,TSizedDefaultAllocator<32>_> *this,<lambda_2> param_1)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  
  pFVar4 = (this->AllocatorInstance).Data;
  pFVar3 = pFVar4 + (longlong)this->ArrayNum * 0x10;
  while( true ) {
    if (pFVar4 == pFVar3) {
      return (FPluginDisallowedDescriptor *)0x0;
    }
    iVar2 = *(int *)&pFVar4[8].field_0x0;
    iVar1 = ((*param_1.NextPluginPtr)->Object->Name).Data.ArrayNum;
    if (iVar2 == iVar1) {
      if (iVar2 < 2) {
        return (FPluginDisallowedDescriptor *)pFVar4;
      }
      iVar2 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(((FString *)&pFVar4->field_0x0)->Data).AllocatorInstance.Data,
                         (wchar_t *)
                         ((*param_1.NextPluginPtr)->Object->Name).Data.AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
    }
    else {
      bVar5 = iVar2 + iVar1 == 1;
    }
    if (bVar5) break;
    pFVar4 = pFVar4 + 0x10;
  }
  return (FPluginDisallowedDescriptor *)pFVar4;
}

// FindPluginInMap_ByHash<TStringView<wchar_t>_> @ 141e072f0

TSharedRef<FPlugin,1> * __cdecl
DiscoveredPluginMapUtils::FindPluginInMap_ByHash<TStringView<wchar_t>_>
          (TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
           *param_1,uint param_2,TStringView<wchar_t> *param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  TSharedRef<FPlugin,1> *pTVar6;
  uint uVar7;
  longlong *plVar8;
  int iVar9;
  uint uVar10;
  undefined1 *puVar11;
  
  if (*(int *)&param_1->field_0x8 != *(int *)&param_1->field_0x34) {
    puVar11 = *(undefined1 **)&param_1->field_0x40;
    if (*(undefined1 **)&param_1->field_0x40 == (undefined1 *)0x0) {
      puVar11 = &param_1->field_0x38;
    }
    iVar9 = *(int *)(puVar11 + (ulonglong)(*(int *)&param_1->field_0x48 - 1U & param_2) * 4);
    if (iVar9 != -1) {
      do {
        lVar1 = (longlong)iVar9 * 0x28;
        iVar5 = *(int *)(lVar1 + 8 + *(longlong *)param_1);
        uVar10 = iVar5 - 1;
        if (iVar5 == 0) {
          uVar10 = 0;
        }
        uVar7 = (uint)*(undefined8 *)&param_3->Size;
        if (uVar7 == uVar10) {
          if ((uVar7 != 0) && (uVar10 != 0)) {
            uVar4 = uVar10;
            if ((int)uVar7 < (int)uVar10) {
              uVar4 = uVar7;
            }
            iVar5 = FGenericPlatformStricmp::Strnicmp
                              (param_3->DataPtr,*(wchar_t **)(lVar1 + *(longlong *)param_1),
                               (longlong)(int)uVar4);
            if (iVar5 != 0) goto LAB_141e073ac;
          }
          if (uVar7 == uVar10) {
            lVar1 = *(longlong *)param_1 + (longlong)iVar9 * 0x28;
            plVar8 = (longlong *)(lVar1 + 0x10);
            if (lVar1 == 0) {
              plVar8 = (longlong *)0x0;
            }
            if (plVar8 == (longlong *)0x0) {
              return (TSharedRef<FPlugin,1> *)0x0;
            }
            iVar9 = (int)plVar8[1];
            if (iVar9 == 0) {
              return (TSharedRef<FPlugin,1> *)0x0;
            }
            uVar10 = 0;
            if ((int)(iVar9 - 1U) < iVar9) {
              uVar10 = ~(iVar9 - 1U) >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              pTVar6 = (TSharedRef<FPlugin,1> *)(*pcVar2)();
              return pTVar6;
            }
            return (TSharedRef<FPlugin,1> *)((longlong)((int)plVar8[1] + -1) * 0x10 + *plVar8);
          }
        }
LAB_141e073ac:
        iVar9 = *(int *)(*(longlong *)param_1 + 0x20 + lVar1);
      } while (iVar9 != -1);
    }
  }
  return (TSharedRef<FPlugin,1> *)0x0;
}

// ParallelForInternal<`FPluginManager::FindPluginsInDirectory'::__l4::<lambda_1>,`ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,`FPluginManager::FindPluginsInDirectory'::__l4::<lambda_1>_>'::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_> @ 141e07860

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
ParallelForImpl::
ParallelForInternal<_FPluginManager::FindPluginsInDirectory_::__l4::<lambda_1>,_ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,_FPluginManager::FindPluginsInDirectory_::__l4::<lambda_1>_>_::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>
          (wchar_t *param_1,int param_2,int param_3,<lambda_1> *param_4,<lambda_1> param_5,
          EParallelForFlags param_6,
          TArrayView<TArray<FString,TSizedDefaultAllocator<32>_>,int> *param_7)

{
  int *piVar1;
  bool bVar2;
  ulonglong uVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  ETaskTag EVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_ParallelFor> FVar13;
  FName FVar14;
  FTaskGraphInterface *pFVar15;
  bool *pbVar16;
  int iVar17;
  ulonglong uVar18;
  FName FVar19;
  int iVar20;
  int iVar21;
  bool bVar22;
  undefined1 local_88;
  FColor_u_0 local_84;
  FEventRef local_80;
  FName local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_50;
  int local_48;
  char local_44;
  
  if (param_2 == 0) {
    return;
  }
  FVar13 = StatPtr_STAT_ParallelFor;
  if (StatPtr_STAT_ParallelFor == (FThreadSafeStaticStat<FStat_STAT_ParallelFor>)0x0) {
    pFVar12 = ::FName::FName(&local_68,"STAT_ParallelFor");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_ParallelFor>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParallelFor,*pFVar12,
                        L"ParallelFor","STATGROUP_TaskGraphTasks","STATCAT_Advanced",
                        L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar13;
  bVar5 = false;
  bVar6 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  bVar7 = false;
  bVar22 = false;
  if ((FVar19.ComparisonIndex.Value.Value == 0) && (FVar19.Number == 0)) {
LAB_141e079c4:
    bVar6 = bVar22;
    bVar5 = bVar7;
    bVar7 = false;
    FVar19 = local_60;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_84.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_84._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar5 = false;
      bVar6 = true;
      bVar7 = false;
      bVar22 = true;
      if (-1 < CpuChannel->Enabled) {
        local_78.ComparisonIndex.Value = FVar19.ComparisonIndex.Value.Value;
        local_78.Number = FVar19.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_78,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
                   ,0x7e);
        bVar5 = true;
        bVar6 = true;
        bVar7 = true;
        bVar22 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_141e079c4;
    local_70 = FVar19;
    FThreadStats::AddMessage(FVar19,CycleScopeStart);
    bVar7 = true;
  }
  bVar22 = -1 < CpuChannel->Enabled;
  if (bVar22) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId127,"ParallelFor",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
               ,0x7f);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId127);
  }
  if ((param_2 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Num >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
                         ,0x80,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar10 = GetNumberOfThreadTasks(param_2,param_3,param_6);
  iVar17 = param_7->ArrayNum;
  iVar21 = iVar10;
  if ((iVar17 != 0) && (iVar21 = iVar17, iVar10 < iVar17)) {
    iVar21 = iVar10;
  }
  if (iVar21 < 2) {
    iVar17 = 0;
    if (0 < param_2) {
      do {
        if ((param_7->ArrayNum < 1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        `FPluginManager::FindPluginsInDirectory'::__l4::<lambda_1>::operator()
                  (param_4,param_7->DataPtr,iVar17);
        iVar17 = iVar17 + 1;
      } while (iVar17 < param_2);
    }
    goto LAB_141e07def;
  }
  uVar18 = 1;
  iVar17 = 1;
  local_84 = (FColor_u_0)param_2;
  if ((param_6 & Unbalanced) == None) {
    iVar20 = 6;
    iVar10 = iVar21 * 6;
    do {
      if (iVar10 <= param_2) {
        uVar3 = (longlong)(param_2 + -1 + iVar10) / (longlong)iVar10;
        uVar18 = uVar3 & 0xffffffff;
        iVar17 = (int)uVar3;
        local_84.Bits = (param_2 + -1 + iVar17) / iVar17;
        if (iVar21 <= (int)local_84.Bits) break;
      }
      iVar17 = (int)uVar18;
      iVar10 = iVar10 - iVar21;
      iVar20 = iVar20 + -1;
    } while (iVar20 != 0);
  }
  iVar21 = iVar21 + -1;
  EVar11 = FTaskTagScope::GetCurrentTag();
  local_88 = 6;
  if ((EVar11 & (ERhiThread|ERenderingThread|ESlateThread|EGameThread|EStaticInit)) == ENone) {
    if ((param_6 & BackgroundPriority) != None) goto LAB_141e07b3e;
  }
  else if ((param_6 & BackgroundPriority) == None) {
    local_88 = 0;
  }
  else {
LAB_141e07b3e:
    local_88 = 3;
  }
  FEventRef::FEventRef(&local_80,ManualReset);
  FVar14 = (FName)TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0xc0,0x40);
  if (FVar14 == (FName)0x0) {
    FVar14.ComparisonIndex.Value = 0;
    FVar14.Number = 0;
  }
  else {
    ((FColor_u_0 *)((longlong)FVar14 + 0x54))->Bits = (uint)local_84;
    *(undefined4 *)((longlong)FVar14 + 8) = 0;
    *(int *)((longlong)FVar14 + 0x80) = 0;
    *(undefined ***)FVar14 =
         &`ParallelForImpl::
          ParallelForInternal<`FPluginManager::FindPluginsInDirectory'::`4'::<lambda_1>,`ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,`FPluginManager::FindPluginsInDirectory'::`4'::<lambda_1>_>'::`5'::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>'
          ::`2'::FParallelForData::_vftable_;
    *(wchar_t **)((longlong)FVar14 + 0x38) = param_1;
    *(<lambda_1> **)((longlong)FVar14 + 0x60) = param_4;
    *(FEventRef **)((longlong)FVar14 + 0x68) = &local_80;
    *(undefined1 *)((longlong)FVar14 + 0x70) = local_88;
    *(int *)((longlong)FVar14 + 0x84) = 0;
    *(undefined8 *)((longlong)FVar14 + 0x40) = 0;
    *(undefined4 *)((longlong)FVar14 + 0x48) = 0;
    *(undefined8 *)((longlong)FVar14 + 0x78) = 0;
    *(int *)((longlong)FVar14 + 0x4c) = param_2;
    *(int *)((longlong)FVar14 + 0x50) = iVar17;
    *(TArrayView<TArray<FString,TSizedDefaultAllocator<32>_>,int> **)((longlong)FVar14 + 0x58) =
         param_7;
    ((FColor_u_0 *)((longlong)FVar14 + 0x44))->Bits = (uint)local_84;
    iVar17 = UE::Core::Private::
             ReallocGrow<0,TLinearArrayAllocatorBase<FTaskGraphBlockAllocationTag,0>::ForElementType<_ParallelForImpl::ParallelForInternal<_FPluginManager::FindPluginsInDirectory_::__l4::<lambda_1>,_ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,_FPluginManager::FindPluginsInDirectory_::__l4::<lambda_1>_>_::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>_::__l2::FTracedTask>_>
                       (0x48,8,iVar21,
                        (ForElementType<_void___cdecl_ParallelForImpl::ParallelForInternal<_private:_static_void___cdecl_FPluginManager::FindPluginsInDirectory(FString_const_&,TArray<FString,TSizedDefaultAllocator<32>_>_&,IPlatformFile_&)_::_4_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,_private:_static_void___cdecl_FPluginManager::FindPluginsInDirectory(FString_const_&,TArray<FString,TSizedDefaultAllocator<32>_>_&,IPlatformFile_&)_::_4_::<lambda_1>_>(wchar_t_const_*,TArray<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_&,int,int,_private:_static_void___cdecl_FPluginManager::FindPluginsInDirectory(FString_const_&,TArray<FString,TSizedDefaultAllocator<32>_>_&,IPlatformFile_&)_::_4_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>(wchar_t_const_*,int,int,_private:_static_void___cdecl_FPluginManager::FindPluginsInDirectory(FString_const_&,TArray<FString,TSizedDefaultAllocator<32>_>_&,IPlatformFile_&)_::_4_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,_private:_static_void___cdecl_FPluginManager::FindPluginsInDirectory(FString_const_&,TArray<FString,TSizedDefaultAllocator<32>_>_&,IPlatformFile_&)_::_4_::<lambda_1>_>(wchar_t_const_*,TArray<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_&,int,int,_private:_static_void___cdecl_FPluginManager::FindPluginsInDirectory(FString_const_&,TArray<FString,TSizedDefaultAllocator<32>_>_&,IPlatformFile_&)_::_4_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<TArray<FString,TSizedDefaultAllocator<32>_>,int>_const_&)_::_2_::FTracedTask>
                         *)((longlong)FVar14 + 0x78),(int *)((longlong)FVar14 + 0x80),
                        (int *)((longlong)FVar14 + 0x84));
    DefaultConstructItems<_ParallelForImpl::ParallelForInternal<_FPluginManager::FindPluginsInDirectory_::__l4::<lambda_1>,_ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,_FPluginManager::FindPluginsInDirectory_::__l4::<lambda_1>_>_::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>_::__l2::FTracedTask,int>
              ((void *)(*(longlong *)((longlong)FVar14 + 0x78) + (longlong)iVar17 * 0x48),iVar21);
    UE::FInheritedContextBase::CaptureInheritedContext
              ((FInheritedContextBase *)((longlong)FVar14 + 0x10));
    LOCK();
    *(int *)((longlong)FVar14 + 8) = *(int *)((longlong)FVar14 + 8) + 1;
    UNLOCK();
  }
  LOCK();
  piVar1 = (int *)((longlong)FVar14 + 0x48);
  iVar17 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if (*(int *)((longlong)FVar14 + 0x80) <= iVar17) {
    iVar17 = -1;
  }
  if (iVar17 != -1) {
    LOCK();
    *(int *)((longlong)FVar14 + 8) = *(int *)((longlong)FVar14 + 8) + 1;
    UNLOCK();
    local_70 = FVar14;
    `ParallelForImpl::
    ParallelForInternal<`FPluginManager::FindPluginsInDirectory'::__l4::<lambda_1>,`ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,`FPluginManager::FindPluginsInDirectory'::__l4::<lambda_1>_>'::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>'
    ::__l2::FParallelExecutor::LaunchTask
              ((TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_private:_static_void___cdecl_FPluginManager::FindPluginsInDirectory(FString_const_&,TArray<FString,TSizedDefaultAllocator<32>_>_&,IPlatformFile_&)_::_4_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,_private:_static_void___cdecl_FPluginManager::FindPluginsInDirectory(FString_const_&,TArray<FString,TSizedDefaultAllocator<32>_>_&,IPlatformFile_&)_::_4_::<lambda_1>_>(wchar_t_const_*,TArray<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_&,int,int,_private:_static_void___cdecl_FPluginManager::FindPluginsInDirectory(FString_const_&,TArray<FString,TSizedDefaultAllocator<32>_>_&,IPlatformFile_&)_::_4_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>(wchar_t_const_*,int,int,_private:_static_void___cdecl_FPluginManager::FindPluginsInDirectory(FString_const_&,TArray<FString,TSizedDefaultAllocator<32>_>_&,IPlatformFile_&)_::_4_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,_private:_static_void___cdecl_FPluginManager::FindPluginsInDirectory(FString_const_&,TArray<FString,TSizedDefaultAllocator<32>_>_&,IPlatformFile_&)_::_4_::<lambda_1>_>(wchar_t_const_*,TArray<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_&,int,int,_private:_static_void___cdecl_FPluginManager::FindPluginsInDirectory(FString_const_&,TArray<FString,TSizedDefaultAllocator<32>_>_&,IPlatformFile_&)_::_4_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<TArray<FString,TSizedDefaultAllocator<32>_>,int>_const_&)_::_2_::FParallelForData>
                *)&local_70,iVar17,true);
    if (local_70 != (FName)0x0) {
      piVar1 = (int *)((longlong)local_70 + 8);
      LOCK();
      iVar17 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (((iVar17 == 1) && (piVar1 != (int *)0x0)) && (local_70 != (FName)0x0)) {
        (*(code *)**(undefined8 **)local_70)(local_70,1);
      }
    }
  }
  local_44 = '\0';
  local_50 = FVar14;
  local_48 = iVar21;
  bVar8 = `ParallelForImpl::
          ParallelForInternal<`FPluginManager::FindPluginsInDirectory'::__l4::<lambda_1>,`ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,`FPluginManager::FindPluginsInDirectory'::__l4::<lambda_1>_>'::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>'
          ::__l2::FParallelExecutor::operator()(&local_50,true);
  if (!bVar8) {
    if (((param_6 & PumpRenderingThread) == None) || (bVar8 = IsInActualRenderingThread(), !bVar8))
    {
      bVar8 = -1 < CpuChannel->Enabled;
      if (bVar8) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&::__CpuProfilerEventSpecId456,"ParallelFor.Wait",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
                   ,0x1c8);
        FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId456);
      }
      if (GParallelForDisableOversubscription == false) {
        (**(code **)((local_80.Event)->_padding_ + 0x20))(local_80.Event,0xffffffff,0);
      }
      else {
        pbVar16 = LowLevelTasks::Private::FOversubscriptionTls::GetIsOversubscriptionAllowedRef();
        bVar2 = *pbVar16;
        *pbVar16 = false;
        (**(code **)((local_80.Event)->_padding_ + 0x20))(local_80.Event,0xffffffff,0);
        *pbVar16 = bVar2;
      }
      if (bVar8) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    else {
      cVar9 = (**(code **)((local_80.Event)->_padding_ + 0x20))(local_80.Event,1,0);
      while (cVar9 == '\0') {
        pFVar15 = FTaskGraphInterface::Get();
        (**(code **)((longlong)*pFVar15 + 0x48))
                  (pFVar15,ENamedThreads::FRenderThreadStatics::RenderThread_Local);
        cVar9 = (**(code **)((local_80.Event)->_padding_ + 0x20))(local_80.Event,1,0);
      }
    }
  }
  if (local_50 != (FName)0x0) {
    if (local_44 != '\0') {
      `ParallelForImpl::
      ParallelForInternal<`FPluginManager::FindPluginsInDirectory'::__l4::<lambda_1>,`ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,`FPluginManager::FindPluginsInDirectory'::__l4::<lambda_1>_>'::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>'
      ::__l2::FParallelExecutor::LaunchTask
                ((TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_private:_static_void___cdecl_FPluginManager::FindPluginsInDirectory(FString_const_&,TArray<FString,TSizedDefaultAllocator<32>_>_&,IPlatformFile_&)_::_4_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,_private:_static_void___cdecl_FPluginManager::FindPluginsInDirectory(FString_const_&,TArray<FString,TSizedDefaultAllocator<32>_>_&,IPlatformFile_&)_::_4_::<lambda_1>_>(wchar_t_const_*,TArray<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_&,int,int,_private:_static_void___cdecl_FPluginManager::FindPluginsInDirectory(FString_const_&,TArray<FString,TSizedDefaultAllocator<32>_>_&,IPlatformFile_&)_::_4_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>(wchar_t_const_*,int,int,_private:_static_void___cdecl_FPluginManager::FindPluginsInDirectory(FString_const_&,TArray<FString,TSizedDefaultAllocator<32>_>_&,IPlatformFile_&)_::_4_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,_private:_static_void___cdecl_FPluginManager::FindPluginsInDirectory(FString_const_&,TArray<FString,TSizedDefaultAllocator<32>_>_&,IPlatformFile_&)_::_4_::<lambda_1>_>(wchar_t_const_*,TArray<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_&,int,int,_private:_static_void___cdecl_FPluginManager::FindPluginsInDirectory(FString_const_&,TArray<FString,TSizedDefaultAllocator<32>_>_&,IPlatformFile_&)_::_4_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<TArray<FString,TSizedDefaultAllocator<32>_>,int>_const_&)_::_2_::FParallelForData>
                  *)&local_50,local_48,true);
    }
    if (local_50 != (FName)0x0) {
      piVar1 = (int *)((longlong)local_50 + 8);
      LOCK();
      iVar17 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar17 == 1) && (piVar1 != (int *)0x0)) {
        (*(code *)**(undefined8 **)local_50)(local_50,1);
      }
    }
  }
  FEventRef::~FEventRef(&local_80);
LAB_141e07def:
  if (bVar22) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FThreadStats::AddMessage(FVar19,CycleScopeEnd);
  }
  return;
}

// ReadFromDefaultJsonHelper<`UE::Projects::Private::ReadArrayFromDefaultJson<FLocalizationTargetDescriptor>'::__l2::<lambda_1>_> @ 141e09d00

bool __cdecl
UE::Projects::Private::
ReadFromDefaultJsonHelper<_UE::Projects::Private::ReadArrayFromDefaultJson<FLocalizationTargetDescriptor>_::__l2::<lambda_1>_>
          (FJsonObject *param_1,<lambda_1> *param_2)

{
  bool bVar1;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *local_res18 [2];
  TOptional<FText>_u_0 local_98;
  TOptional<rapidjson::GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  local_88;
  Data local_78;
  void *local_60;
  void *local_50;
  void *local_48;
  char local_18;
  
  Json::ConvertSharedJsonToRapidJsonDocument
            ((TOptional<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
              *)&local_78.s,param_1);
  if (local_18 == '\0') {
    return false;
  }
  Json::GetRootObject(&local_88,
                      (GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
                       *)&local_78.s);
  if (local_88.bIsSet == false) {
    bVar1 = false;
  }
  else {
    local_res18[0] = local_88.TypedValue.value_;
    ReadArray<FLocalizationTargetDescriptor>
              ((TOptional<FText> *)&local_98.TypedValue,
               (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               local_res18,param_2->Name,param_2->OutArray);
    if (local_98.TypedValue.TextData.Reference == (ITextData *)0x0) {
      bVar1 = true;
    }
    else {
      if (param_2->OutFailReason != (FText *)0x0) {
        FText::operator=(param_2->OutFailReason,&local_98.TypedValue);
      }
      if (local_98.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_98.TypedValue.TextData.Reference + 0x10))();
      }
      bVar1 = false;
    }
  }
  if (local_18 != '\0') {
    if (local_60 != (void *)0x0) {
      rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &local_78.s);
      local_78.n.i64 = (Number)0x0;
      local_78.s.str = (wchar_t *)0x0;
    }
    ::operator_delete(local_60,1);
    free(local_48);
    ::operator_delete(local_50,1);
    rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
    ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
              ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               &local_78.s);
  }
  return bVar1;
}

// ReadFromDefaultJsonHelper<`UE::Projects::Private::ReadArrayFromDefaultJson<FModuleDescriptor>'::__l2::<lambda_1>_> @ 141e09e10

bool __cdecl
UE::Projects::Private::
ReadFromDefaultJsonHelper<_UE::Projects::Private::ReadArrayFromDefaultJson<FModuleDescriptor>_::__l2::<lambda_1>_>
          (FJsonObject *param_1,<lambda_1> *param_2)

{
  bool bVar1;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *local_res18 [2];
  TOptional<FText>_u_0 local_98;
  TOptional<rapidjson::GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  local_88;
  Data local_78;
  void *local_60;
  void *local_50;
  void *local_48;
  char local_18;
  
  Json::ConvertSharedJsonToRapidJsonDocument
            ((TOptional<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
              *)&local_78.s,param_1);
  if (local_18 == '\0') {
    return false;
  }
  Json::GetRootObject(&local_88,
                      (GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
                       *)&local_78.s);
  if (local_88.bIsSet == false) {
    bVar1 = false;
  }
  else {
    local_res18[0] = local_88.TypedValue.value_;
    ReadArray<FModuleDescriptor>
              ((TOptional<FText> *)&local_98.TypedValue,
               (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               local_res18,param_2->Name,param_2->OutArray);
    if (local_98.TypedValue.TextData.Reference == (ITextData *)0x0) {
      bVar1 = true;
    }
    else {
      if (param_2->OutFailReason != (FText *)0x0) {
        FText::operator=(param_2->OutFailReason,&local_98.TypedValue);
      }
      if (local_98.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_98.TypedValue.TextData.Reference + 0x10))();
      }
      bVar1 = false;
    }
  }
  if (local_18 != '\0') {
    if (local_60 != (void *)0x0) {
      rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &local_78.s);
      local_78.n.i64 = (Number)0x0;
      local_78.s.str = (wchar_t *)0x0;
    }
    ::operator_delete(local_60,1);
    free(local_48);
    ::operator_delete(local_50,1);
    rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
    ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
              ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               &local_78.s);
  }
  return bVar1;
}

// ReadFromDefaultJsonHelper<`UE::Projects::Private::ReadArrayFromDefaultJson<FPluginDisallowedDescriptor>'::__l2::<lambda_1>_> @ 141e09f20

bool __cdecl
UE::Projects::Private::
ReadFromDefaultJsonHelper<_UE::Projects::Private::ReadArrayFromDefaultJson<FPluginDisallowedDescriptor>_::__l2::<lambda_1>_>
          (FJsonObject *param_1,<lambda_1> *param_2)

{
  bool bVar1;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *local_res18 [2];
  TOptional<FText>_u_0 local_98;
  TOptional<rapidjson::GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  local_88;
  Data local_78;
  void *local_60;
  void *local_50;
  void *local_48;
  char local_18;
  
  Json::ConvertSharedJsonToRapidJsonDocument
            ((TOptional<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
              *)&local_78.s,param_1);
  if (local_18 == '\0') {
    return false;
  }
  Json::GetRootObject(&local_88,
                      (GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
                       *)&local_78.s);
  if (local_88.bIsSet == false) {
    bVar1 = false;
  }
  else {
    local_res18[0] = local_88.TypedValue.value_;
    ReadArray<FPluginDisallowedDescriptor>
              ((TOptional<FText> *)&local_98.TypedValue,
               (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               local_res18,param_2->Name,param_2->OutArray);
    if (local_98.TypedValue.TextData.Reference == (ITextData *)0x0) {
      bVar1 = true;
    }
    else {
      if (param_2->OutFailReason != (FText *)0x0) {
        FText::operator=(param_2->OutFailReason,&local_98.TypedValue);
      }
      if (local_98.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_98.TypedValue.TextData.Reference + 0x10))();
      }
      bVar1 = false;
    }
  }
  if (local_18 != '\0') {
    if (local_60 != (void *)0x0) {
      rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &local_78.s);
      local_78.n.i64 = (Number)0x0;
      local_78.s.str = (wchar_t *)0x0;
    }
    ::operator_delete(local_60,1);
    free(local_48);
    ::operator_delete(local_50,1);
    rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
    ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
              ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               &local_78.s);
  }
  return bVar1;
}

// ReadFromDefaultJsonHelper<`UE::Projects::Private::ReadArrayFromDefaultJson<FPluginReferenceDescriptor>'::__l2::<lambda_1>_> @ 141e0a030

bool __cdecl
UE::Projects::Private::
ReadFromDefaultJsonHelper<_UE::Projects::Private::ReadArrayFromDefaultJson<FPluginReferenceDescriptor>_::__l2::<lambda_1>_>
          (FJsonObject *param_1,<lambda_1> *param_2)

{
  bool bVar1;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *local_res18 [2];
  TOptional<FText>_u_0 local_98;
  TOptional<rapidjson::GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  local_88;
  Data local_78;
  void *local_60;
  void *local_50;
  void *local_48;
  char local_18;
  
  Json::ConvertSharedJsonToRapidJsonDocument
            ((TOptional<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
              *)&local_78.s,param_1);
  if (local_18 == '\0') {
    return false;
  }
  Json::GetRootObject(&local_88,
                      (GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
                       *)&local_78.s);
  if (local_88.bIsSet == false) {
    bVar1 = false;
  }
  else {
    local_res18[0] = local_88.TypedValue.value_;
    ReadArray<FPluginReferenceDescriptor>
              ((TOptional<FText> *)&local_98.TypedValue,
               (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               local_res18,param_2->Name,param_2->OutArray);
    if (local_98.TypedValue.TextData.Reference == (ITextData *)0x0) {
      bVar1 = true;
    }
    else {
      if (param_2->OutFailReason != (FText *)0x0) {
        FText::operator=(param_2->OutFailReason,&local_98.TypedValue);
      }
      if (local_98.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_98.TypedValue.TextData.Reference + 0x10))();
      }
      bVar1 = false;
    }
  }
  if (local_18 != '\0') {
    if (local_60 != (void *)0x0) {
      rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &local_78.s);
      local_78.n.i64 = (Number)0x0;
      local_78.s.str = (wchar_t *)0x0;
    }
    ::operator_delete(local_60,1);
    free(local_48);
    ::operator_delete(local_50,1);
    rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
    ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
              ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               &local_78.s);
  }
  return bVar1;
}

// ReadFromDefaultJsonHelper<`UE::Projects::Private::ReadFromDefaultJson<FLocalizationTargetDescriptor>'::__l2::<lambda_1>_> @ 141e0a140

bool __cdecl
UE::Projects::Private::
ReadFromDefaultJsonHelper<_UE::Projects::Private::ReadFromDefaultJson<FLocalizationTargetDescriptor>_::__l2::<lambda_1>_>
          (FJsonObject *param_1,<lambda_1> *param_2)

{
  bool bVar1;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *local_res18 [2];
  TOptional<FText>_u_0 local_98;
  TOptional<rapidjson::GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  local_88;
  Data local_78;
  void *local_60;
  void *local_50;
  void *local_48;
  char local_18;
  
  Json::ConvertSharedJsonToRapidJsonDocument
            ((TOptional<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
              *)&local_78.s,param_1);
  if (local_18 == '\0') {
    return false;
  }
  Json::GetRootObject(&local_88,
                      (GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
                       *)&local_78.s);
  if (local_88.bIsSet == false) {
    bVar1 = false;
  }
  else {
    local_res18[0] = local_88.TypedValue.value_;
    Read((TOptional<FText> *)&local_98.TypedValue,
         (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)local_res18,
         param_2->Out);
    if (local_98.TypedValue.TextData.Reference == (ITextData *)0x0) {
      bVar1 = true;
    }
    else {
      if (param_2->OutFailReason != (FText *)0x0) {
        FText::operator=(param_2->OutFailReason,&local_98.TypedValue);
      }
      if (local_98.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_98.TypedValue.TextData.Reference + 0x10))();
      }
      bVar1 = false;
    }
  }
  if (local_18 != '\0') {
    if (local_60 != (void *)0x0) {
      rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &local_78.s);
      local_78.n.i64 = (Number)0x0;
      local_78.s.str = (wchar_t *)0x0;
    }
    ::operator_delete(local_60,1);
    free(local_48);
    ::operator_delete(local_50,1);
    rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
    ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
              ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               &local_78.s);
  }
  return bVar1;
}

// ReadFromDefaultJsonHelper<`UE::Projects::Private::ReadFromDefaultJson<FModuleDescriptor>'::__l2::<lambda_1>_> @ 141e0a250

bool __cdecl
UE::Projects::Private::
ReadFromDefaultJsonHelper<_UE::Projects::Private::ReadFromDefaultJson<FModuleDescriptor>_::__l2::<lambda_1>_>
          (FJsonObject *param_1,<lambda_1> *param_2)

{
  bool bVar1;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *local_res18 [2];
  TOptional<FText>_u_0 local_98;
  TOptional<rapidjson::GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  local_88;
  Data local_78;
  void *local_60;
  void *local_50;
  void *local_48;
  char local_18;
  
  Json::ConvertSharedJsonToRapidJsonDocument
            ((TOptional<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
              *)&local_78.s,param_1);
  if (local_18 == '\0') {
    return false;
  }
  Json::GetRootObject(&local_88,
                      (GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
                       *)&local_78.s);
  if (local_88.bIsSet == false) {
    bVar1 = false;
  }
  else {
    local_res18[0] = local_88.TypedValue.value_;
    Read((TOptional<FText> *)&local_98.TypedValue,
         (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)local_res18,
         param_2->Out);
    if (local_98.TypedValue.TextData.Reference == (ITextData *)0x0) {
      bVar1 = true;
    }
    else {
      if (param_2->OutFailReason != (FText *)0x0) {
        FText::operator=(param_2->OutFailReason,&local_98.TypedValue);
      }
      if (local_98.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_98.TypedValue.TextData.Reference + 0x10))();
      }
      bVar1 = false;
    }
  }
  if (local_18 != '\0') {
    if (local_60 != (void *)0x0) {
      rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &local_78.s);
      local_78.n.i64 = (Number)0x0;
      local_78.s.str = (wchar_t *)0x0;
    }
    ::operator_delete(local_60,1);
    free(local_48);
    ::operator_delete(local_50,1);
    rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
    ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
              ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               &local_78.s);
  }
  return bVar1;
}

// ReadFromDefaultJsonHelper<`UE::Projects::Private::ReadFromDefaultJson<FPluginDescriptor>'::__l2::<lambda_1>_> @ 141e0a360

bool __cdecl
UE::Projects::Private::
ReadFromDefaultJsonHelper<_UE::Projects::Private::ReadFromDefaultJson<FPluginDescriptor>_::__l2::<lambda_1>_>
          (FJsonObject *param_1,<lambda_1> *param_2)

{
  bool bVar1;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *local_res18 [2];
  TOptional<FText>_u_0 local_98;
  TOptional<rapidjson::GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  local_88;
  Data local_78;
  void *local_60;
  void *local_50;
  void *local_48;
  char local_18;
  
  Json::ConvertSharedJsonToRapidJsonDocument
            ((TOptional<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
              *)&local_78.s,param_1);
  if (local_18 == '\0') {
    return false;
  }
  Json::GetRootObject(&local_88,
                      (GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
                       *)&local_78.s);
  if (local_88.bIsSet == false) {
    bVar1 = false;
  }
  else {
    local_res18[0] = local_88.TypedValue.value_;
    Read((TOptional<FText> *)&local_98.TypedValue,
         (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)local_res18,
         param_2->Out);
    if (local_98.TypedValue.TextData.Reference == (ITextData *)0x0) {
      bVar1 = true;
    }
    else {
      if (param_2->OutFailReason != (FText *)0x0) {
        FText::operator=(param_2->OutFailReason,&local_98.TypedValue);
      }
      if (local_98.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_98.TypedValue.TextData.Reference + 0x10))();
      }
      bVar1 = false;
    }
  }
  if (local_18 != '\0') {
    if (local_60 != (void *)0x0) {
      rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &local_78.s);
      local_78.n.i64 = (Number)0x0;
      local_78.s.str = (wchar_t *)0x0;
    }
    ::operator_delete(local_60,1);
    free(local_48);
    ::operator_delete(local_50,1);
    rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
    ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
              ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               &local_78.s);
  }
  return bVar1;
}

// ReadFromDefaultJsonHelper<`UE::Projects::Private::ReadFromDefaultJson<FPluginDisallowedDescriptor>'::__l2::<lambda_1>_> @ 141e0a470

bool __cdecl
UE::Projects::Private::
ReadFromDefaultJsonHelper<_UE::Projects::Private::ReadFromDefaultJson<FPluginDisallowedDescriptor>_::__l2::<lambda_1>_>
          (FJsonObject *param_1,<lambda_1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FText *pFVar4;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *local_res18 [2];
  FText local_a8;
  TOptional<rapidjson::GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  local_98;
  FText local_88;
  Data local_78;
  void *local_60;
  void *local_50;
  void *local_48;
  char local_18;
  
  Json::ConvertSharedJsonToRapidJsonDocument
            ((TOptional<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
              *)&local_78.s,param_1);
  if (local_18 == '\0') {
    return false;
  }
  Json::GetRootObject(&local_98,
                      (GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
                       *)&local_78.s);
  if (local_98.bIsSet == false) {
    bVar2 = false;
  }
  else {
    local_res18[0] = local_98.TypedValue.value_;
    bVar2 = TryGetStringField((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                               *)local_res18,L"Name",&param_2->Out->Name);
    if (bVar2) {
      local_a8.TextData.Reference = (ITextData *)0x0;
      local_a8.Flags = 0;
    }
    else {
      pFVar4 = FText::AsLocalizable_Advanced_LocText
                         (&local_88,L"PluginDisallowedDescriptor",L"FPluginDisallowedWithoutName",
                          L"Disallowed plugin must have a \'Name\' field");
      FText::FText(&local_a8,pFVar4);
      if ((local_a8.TextData.Reference == (ITextData *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))(local_88.TextData.Reference);
      }
    }
    if (local_a8.TextData.Reference == (ITextData *)0x0) {
      bVar2 = true;
    }
    else {
      if (param_2->OutFailReason != (FText *)0x0) {
        FText::operator=(param_2->OutFailReason,&local_a8);
      }
      if (local_a8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
      }
      bVar2 = false;
    }
  }
  if (local_18 != '\0') {
    if (local_60 != (void *)0x0) {
      rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &local_78.s);
      local_78.n.i64 = (Number)0x0;
      local_78.s.str = (wchar_t *)0x0;
    }
    ::operator_delete(local_60,1);
    free(local_48);
    ::operator_delete(local_50,1);
    rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
    ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
              ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               &local_78.s);
  }
  return bVar2;
}

// ReadFromDefaultJsonHelper<`UE::Projects::Private::ReadFromDefaultJson<FPluginManifest>'::__l2::<lambda_1>_> @ 141e0a600

bool __cdecl
UE::Projects::Private::
ReadFromDefaultJsonHelper<_UE::Projects::Private::ReadFromDefaultJson<FPluginManifest>_::__l2::<lambda_1>_>
          (FJsonObject *param_1,<lambda_1> *param_2)

{
  bool bVar1;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *local_res18 [2];
  TOptional<FText>_u_0 local_98;
  TOptional<rapidjson::GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  local_88;
  Data local_78;
  void *local_60;
  void *local_50;
  void *local_48;
  char local_18;
  
  Json::ConvertSharedJsonToRapidJsonDocument
            ((TOptional<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
              *)&local_78.s,param_1);
  if (local_18 == '\0') {
    return false;
  }
  Json::GetRootObject(&local_88,
                      (GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
                       *)&local_78.s);
  if (local_88.bIsSet == false) {
    bVar1 = false;
  }
  else {
    local_res18[0] = local_88.TypedValue.value_;
    Read((TOptional<FText> *)&local_98.TypedValue,
         (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)local_res18,
         param_2->Out);
    if (local_98.TypedValue.TextData.Reference == (ITextData *)0x0) {
      bVar1 = true;
    }
    else {
      if (param_2->OutFailReason != (FText *)0x0) {
        FText::operator=(param_2->OutFailReason,&local_98.TypedValue);
      }
      if (local_98.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_98.TypedValue.TextData.Reference + 0x10))();
      }
      bVar1 = false;
    }
  }
  if (local_18 != '\0') {
    if (local_60 != (void *)0x0) {
      rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &local_78.s);
      local_78.n.i64 = (Number)0x0;
      local_78.s.str = (wchar_t *)0x0;
    }
    ::operator_delete(local_60,1);
    free(local_48);
    ::operator_delete(local_50,1);
    rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
    ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
              ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               &local_78.s);
  }
  return bVar1;
}

// ReadFromDefaultJsonHelper<`UE::Projects::Private::ReadFromDefaultJson<FPluginReferenceDescriptor>'::__l2::<lambda_1>_> @ 141e0a710

bool __cdecl
UE::Projects::Private::
ReadFromDefaultJsonHelper<_UE::Projects::Private::ReadFromDefaultJson<FPluginReferenceDescriptor>_::__l2::<lambda_1>_>
          (FJsonObject *param_1,<lambda_1> *param_2)

{
  bool bVar1;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *local_res18 [2];
  TOptional<FText>_u_0 local_98;
  TOptional<rapidjson::GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  local_88;
  Data local_78;
  void *local_60;
  void *local_50;
  void *local_48;
  char local_18;
  
  Json::ConvertSharedJsonToRapidJsonDocument
            ((TOptional<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
              *)&local_78.s,param_1);
  if (local_18 == '\0') {
    return false;
  }
  Json::GetRootObject(&local_88,
                      (GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
                       *)&local_78.s);
  if (local_88.bIsSet == false) {
    bVar1 = false;
  }
  else {
    local_res18[0] = local_88.TypedValue.value_;
    Read((TOptional<FText> *)&local_98.TypedValue,
         (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)local_res18,
         param_2->Out);
    if (local_98.TypedValue.TextData.Reference == (ITextData *)0x0) {
      bVar1 = true;
    }
    else {
      if (param_2->OutFailReason != (FText *)0x0) {
        FText::operator=(param_2->OutFailReason,&local_98.TypedValue);
      }
      if (local_98.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_98.TypedValue.TextData.Reference + 0x10))();
      }
      bVar1 = false;
    }
  }
  if (local_18 != '\0') {
    if (local_60 != (void *)0x0) {
      rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &local_78.s);
      local_78.n.i64 = (Number)0x0;
      local_78.s.str = (wchar_t *)0x0;
    }
    ::operator_delete(local_60,1);
    free(local_48);
    ::operator_delete(local_50,1);
    rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
    ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
              ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               &local_78.s);
  }
  return bVar1;
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FTaskGraphBlockAllocationTag,0>::ForElementType<`ParallelForImpl::ParallelForInternal<`FPluginManager::FindPluginsInDirectory'::__l4::<lambda_1>,`ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,`FPluginManager::FindPluginsInDirectory'::__l4::<lambda_1>_>'::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>'::__l2::FTracedTask>_> @ 141e0a820

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FTaskGraphBlockAllocationTag,0>::ForElementType<_ParallelForImpl::ParallelForInternal<_FPluginManager::FindPluginsInDirectory_::__l4::<lambda_1>,_ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,_FPluginManager::FindPluginsInDirectory_::__l4::<lambda_1>_>_::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>_::__l2::FTracedTask>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<_void___cdecl_ParallelForImpl::ParallelForInternal<_private:_static_void___cdecl_FPluginManager::FindPluginsInDirectory(FString_const_&,TArray<FString,TSizedDefaultAllocator<32>_>_&,IPlatformFile_&)_::_4_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,_private:_static_void___cdecl_FPluginManager::FindPluginsInDirectory(FString_const_&,TArray<FString,TSizedDefaultAllocator<32>_>_&,IPlatformFile_&)_::_4_::<lambda_1>_>(wchar_t_const_*,TArray<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_&,int,int,_private:_static_void___cdecl_FPluginManager::FindPluginsInDirectory(FString_const_&,TArray<FString,TSizedDefaultAllocator<32>_>_&,IPlatformFile_&)_::_4_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>(wchar_t_const_*,int,int,_private:_static_void___cdecl_FPluginManager::FindPluginsInDirectory(FString_const_&,TArray<FString,TSizedDefaultAllocator<32>_>_&,IPlatformFile_&)_::_4_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,_private:_static_void___cdecl_FPluginManager::FindPluginsInDirectory(FString_const_&,TArray<FString,TSizedDefaultAllocator<32>_>_&,IPlatformFile_&)_::_4_::<lambda_1>_>(wchar_t_const_*,TArray<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_&,int,int,_private:_static_void___cdecl_FPluginManager::FindPluginsInDirectory(FString_const_&,TArray<FString,TSizedDefaultAllocator<32>_>_&,IPlatformFile_&)_::_4_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<TArray<FString,TSizedDefaultAllocator<32>_>,int>_const_&)_::_2_::FTracedTask>
          *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  FTracedTask *_Src;
  FTracedTask *_Dst;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  iVar2 = *param_5;
  iVar4 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar4 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar6 = (ulonglong)param_1;
    uVar3 = (ulonglong)(int)uVar1;
    if (iVar4 == 0) {
      uVar5 = 4;
      if (4 < uVar3) {
        uVar5 = uVar3;
      }
    }
    else {
      uVar5 = (uVar3 * 3 >> 3) + 0x10 + uVar3;
    }
    iVar4 = (int)uVar5;
    if (iVar4 < (int)uVar1) {
      uVar5 = 0x7fffffff;
    }
    else if (iVar4 < 0) goto LAB_141e0a936;
    iVar4 = (int)uVar5;
    if (0x7ffffffe < uVar6 - 1) {
LAB_141e0a936:
                    /* WARNING: Subroutine does not return */
      OnInvalidConcurrentLinearArrayAllocatorNum(iVar4,uVar6);
    }
    _Dst = (FTracedTask *)0x0;
    uVar6 = (uVar5 & 0xffffffff) * uVar6;
    _Src = param_4->Data;
    if (uVar6 != 0) {
      _Dst = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(uVar6,8);
      if ((_Src != (FTracedTask *)0x0) &&
         (uVar3 = ((ulonglong)&_Src[0x38e].Task.field_0xf & 0xffffffffffff0000) - (longlong)_Src,
         uVar3 != 0)) {
        if (uVar6 < uVar3) {
          uVar3 = uVar6;
        }
        memcpy(_Dst,_Src,uVar3);
      }
    }
    TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(_Src);
    param_4->Data = _Dst;
    *param_6 = iVar4;
  }
  return iVar2;
}

// Reverse<FPluginReferenceDescriptor_const_*> @ 141e0b190

void __cdecl
AlgoImpl::Reverse<FPluginReferenceDescriptor_const_*>
          (FPluginReferenceDescriptor **param_1,int param_2)

{
  FPluginReferenceDescriptor *pFVar1;
  FPluginReferenceDescriptor **ppFVar2;
  longlong lVar3;
  
  if (0 < param_2 / 2) {
    lVar3 = 0;
    ppFVar2 = param_1 + (param_2 + -1);
    do {
      pFVar1 = param_1[lVar3];
      param_1[lVar3] = *ppFVar2;
      lVar3 = lVar3 + 1;
      *ppFVar2 = pFVar1;
      ppFVar2 = ppFVar2 + -1;
    } while (lVar3 < param_2 / 2);
  }
  return;
}

// ~TFunction_OwnedObject<`FProjectEditorRecord::QueueUpdate'::__l5::<lambda_1>,1,1> @ 141e0e8f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FProjectEditorRecord::QueueUpdate'::__l5::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FProjectEditorRecord::QueueUpdate_::__l5::<lambda_1>,1,1>(void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FProjectEditorRecord::QueueUpdate'::`5'::<lambda_1>,1,1>::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x000141e0e913. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FPluginManager::MountExplicitlyLoadedPluginLocalizationData'::__l119::<lambda_1>,1,1> @ 141e0e920

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPluginManager::MountExplicitlyLoadedPluginLocalizationData'::__l119::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FPluginManager::MountExplicitlyLoadedPluginLocalizationData_::__l119::<lambda_1>,1,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FPluginManager::MountExplicitlyLoadedPluginLocalizationData'::`119'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x20) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x30);
    if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x48);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FPluginManager::UnmountExplicitlyLoadedPluginLocalizationData'::__l167::<lambda_1>,1,1> @ 141e0e970

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPluginManager::UnmountExplicitlyLoadedPluginLocalizationData'::__l167::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FPluginManager::UnmountExplicitlyLoadedPluginLocalizationData_::__l167::<lambda_1>,1,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FPluginManager::UnmountExplicitlyLoadedPluginLocalizationData'::`167'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x20) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x30);
    if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x48);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
    return;
  }
  return;
}

// ~TScopeGuard<`LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FPluginManager::FindPluginsInDirectory'::__l4::<lambda_1>,`ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,`FPluginManager::FindPluginsInDirectory'::__l4::<lambda_1>_>'::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>::CallAndMove'::__l2::<lambda_1>_> @ 141e0e9c0

void __thiscall
ScopeExitSupport::
TScopeGuard<`LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FPluginManager::FindPluginsInDirectory'::__l4::<lambda_1>,`ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,`FPluginManager::FindPluginsInDirectory'::__l4::<lambda_1>_>'::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>::CallAndMove'::__l2::<lambda_1>_>
::
~TScopeGuard<_LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<_LowLevelTasks::FTask::Init<_ParallelForImpl::ParallelForInternal<_FPluginManager::FindPluginsInDirectory_::__l4::<lambda_1>,_ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,_FPluginManager::FindPluginsInDirectory_::__l4::<lambda_1>_>_::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>_::__l2::FParallelExecutor>_::__l13::<lambda_1>,0>::CallAndMove_::__l2::<lambda_1>_>
          (void *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar1 = *(undefined8 **)this;
  puVar2 = *(undefined8 **)((longlong)this + 8);
  puVar3 = (undefined8 *)**(undefined8 **)((longlong)this + 0x10);
  if ((**(uint **)((longlong)this + 0x18) < 0x10) || (((ulonglong)puVar2 & 7) != 0)) {
    puVar2[5] = &LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
                 TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FPluginManager::FindPluginsInDirectory'::`4'::<lambda_1>,`ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,`FPluginManager::FindPluginsInDirectory'::`4'::<lambda_1>_>'::`5'::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,1>
                 ::_vftable_;
    puVar4 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(0x10,8)
    ;
    *puVar2 = puVar4;
    *puVar4 = 0;
    *puVar4 = *puVar3;
    *puVar3 = 0;
    *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar3 + 1);
    *(undefined1 *)((longlong)puVar4 + 0xc) = *(undefined1 *)((longlong)puVar3 + 0xc);
  }
  else {
    puVar2[5] = &LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
                 TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FPluginManager::FindPluginsInDirectory'::`4'::<lambda_1>,`ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,`FPluginManager::FindPluginsInDirectory'::`4'::<lambda_1>_>'::`5'::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,0>
                 ::_vftable_;
    *puVar2 = 0;
    *puVar2 = *puVar3;
    *puVar3 = 0;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar3 + 1);
    *(undefined1 *)((longlong)puVar2 + 0xc) = *(undefined1 *)((longlong)puVar3 + 0xc);
  }
  *puVar1 = &
            ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// operator() @ 141e10270

bool __thiscall
``FPluginManager::FindCommandLinePlugins'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::
operator()(void *this,FString *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  
  bVar4 = ::FString::EndsWith(param_1,L".txt",4,IgnoreCase);
  if (!bVar4) {
    return false;
  }
  pFVar2 = *(ForAnyElementType **)this;
  if ((pFVar2->Data <= param_1) &&
     (param_1 < pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  ::FString::FString((FString *)(pFVar2->Data + (longlong)iVar6 * 0x10),param_1);
  return true;
}

// operator() @ 141e13090

/* WARNING: Removing unreachable block (ram,0x000141e131d9) */

void __thiscall
``FPluginManager::FindCommandLinePlugins'::__l2::<lambda_1>::operator()'::__l7::<lambda_2>::
operator()(void *this,TStringView<wchar_t> *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FString *pFVar6;
  FScriptContainerElement *pFVar7;
  FString local_38;
  FString local_28;
  wchar_t *local_18;
  undefined8 uStack_10;
  
  local_18 = param_1->DataPtr;
  uStack_10 = *(undefined8 *)&param_1->Size;
  pFVar2 = *(ForAnyElementType **)this;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  pFVar6 = ::FString::ConstructFromPtrSize
                     (&local_28,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
  if (&local_38 != pFVar6) {
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    local_38.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = (pFVar6->Data).ArrayNum;
    local_38.Data.ArrayMax = (pFVar6->Data).ArrayMax;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (((pFVar2->Data <= (FScriptContainerElement *)&local_38) &&
      ((FScriptContainerElement *)&local_38 <
       pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x10)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar5 + 1;
  pFVar7 = pFVar2->Data + (longlong)iVar5 * 0x10;
  *(undefined8 *)pFVar7 = 0;
  *(FScriptContainerElement **)pFVar7 = local_38.Data.AllocatorInstance.Data;
  *(int *)(pFVar7 + 8) = local_38.Data.ArrayNum;
  *(int *)(pFVar7 + 0xc) = local_38.Data.ArrayMax;
  return;
}

// operator() @ 141e13200

bool __thiscall
``FPluginManager::FindCommandLinePlugins'::__l2::<lambda_1>::operator()'::__l2::<lambda_3>::
operator()(void *this,FString *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res10 [8];
  
  iVar6 = (param_1->Data).ArrayNum;
  uVar8 = 0;
  pFVar7 = (param_1->Data).AllocatorInstance.Data;
  pFVar9 = pFVar7 + (longlong)iVar6 * 2 + -2;
  if (iVar6 == 0) {
    pFVar9 = pFVar7 + (longlong)iVar6 * 2;
  }
  while( true ) {
    if ((param_1->Data).ArrayNum != iVar6) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<wchar_t_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar7 == pFVar9) break;
    uVar8 = uVar8 | 1L << ((byte)*(ushort *)pFVar7 & 0x3f) &
                    -(ulonglong)(*(ushort *)pFVar7 < 0x40) & 0x8000040000000000;
    pFVar7 = pFVar7 + 2;
  }
  if (uVar8 == 0) {
    bVar4 = false;
  }
  else {
    pFVar2 = *(ForAnyElementType **)this;
    if ((pFVar2->Data <= param_1) &&
       (param_1 < pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x10)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    iVar6 = *(int *)&pFVar2[1].Data;
    piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,pFVar2,piVar1);
    }
    *(int *)&pFVar2[1].Data = iVar6 + 1;
    ::FString::FString((FString *)(pFVar2->Data + (longlong)iVar6 * 0x10),param_1);
    bVar4 = true;
  }
  return bVar4;
}

// `vcall'{56,{flat}}'_}' @ 141e1395c

/* [thunk]: __cdecl FPluginManager::`vcall'{56,{flat}}' }' */

void __thiscall FPluginManager::_vcall__56__flat______(FPluginManager *this)

{
                    /* WARNING: Could not recover jumptable at 0x000141e1395f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x38))();
  return;
}

// `scalar_deleting_destructor' @ 141e13970

void * __thiscall
IBaseDelegateInstance<FString___cdecl(FLocalizationTargetDescriptor_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<FString___cdecl(FLocalizationTargetDescriptor_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e139a0

void * __thiscall
IBaseDelegateInstance<FString___cdecl(FModuleDescriptor_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<FString___cdecl(FModuleDescriptor_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e139d0

void * __thiscall
IBaseDelegateInstance<FString___cdecl(FPluginDisallowedDescriptor_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<FString___cdecl(FPluginDisallowedDescriptor_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e13a00

void * __thiscall
IBaseDelegateInstance<FString___cdecl(FPluginReferenceDescriptor_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<FString___cdecl(FPluginReferenceDescriptor_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e13a30

void * __thiscall
IBaseDelegateInstance<void___cdecl(TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e13a60

void * __thiscall
IBaseDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e13a90

void * __thiscall
IBaseDelegateInstance<void___cdecl(FLocalizationTargetDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FLocalizationTargetDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e13ac0

void * __thiscall
IBaseDelegateInstance<void___cdecl(FModuleDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FModuleDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e13af0

void * __thiscall
IBaseDelegateInstance<void___cdecl(FPluginDisallowedDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FPluginDisallowedDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e13b20

void * __thiscall
IBaseDelegateInstance<void___cdecl(FPluginReferenceDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FPluginReferenceDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e13b50

void * __thiscall
IBaseDelegateInstance<bool___cdecl(FJsonObject_const_&,FString_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<bool___cdecl(FJsonObject_const_&,FString_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e13b80

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`FPluginReferenceDescriptor::UpdateArray'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e13bb0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FPluginManager,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FPluginManager,void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e13be0

void * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(FLocalizationTargetDescriptor_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<FString___cdecl(FLocalizationTargetDescriptor_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e13c10

void * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(FModuleDescriptor_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<FString___cdecl(FModuleDescriptor_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e13c40

void * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(FPluginDisallowedDescriptor_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<FString___cdecl(FPluginDisallowedDescriptor_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e13c70

void * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(FPluginReferenceDescriptor_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<FString___cdecl(FPluginReferenceDescriptor_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e13ca0

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FLocalizationTargetDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<void___cdecl(FLocalizationTargetDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e13cd0

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FModuleDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<void___cdecl(FModuleDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e13d00

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FPluginDisallowedDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<void___cdecl(FPluginDisallowedDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e13d30

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(FPluginReferenceDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<void___cdecl(FPluginReferenceDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e13d60

void * __thiscall
TBaseStaticDelegateInstance<bool___cdecl(FJsonObject_const_&,FString_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<bool___cdecl(FJsonObject_const_&,FString_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e13d90

void * __thiscall
TCommonDelegateInstanceState<FString___cdecl(FLocalizationTargetDescriptor_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FString___cdecl(FLocalizationTargetDescriptor_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e13dc0

void * __thiscall
TCommonDelegateInstanceState<FString___cdecl(FModuleDescriptor_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FString___cdecl(FModuleDescriptor_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e13df0

void * __thiscall
TCommonDelegateInstanceState<FString___cdecl(FPluginDisallowedDescriptor_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FString___cdecl(FPluginDisallowedDescriptor_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e13e20

void * __thiscall
TCommonDelegateInstanceState<FString___cdecl(FPluginReferenceDescriptor_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FString___cdecl(FPluginReferenceDescriptor_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e13e50

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e13e80

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e13eb0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FLocalizationTargetDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FLocalizationTargetDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e13ee0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FModuleDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FModuleDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e13f10

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FPluginDisallowedDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FPluginDisallowedDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e13f40

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FPluginReferenceDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FPluginReferenceDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e13f70

void * __thiscall
TCommonDelegateInstanceState<bool___cdecl(FJsonObject_const_&,FString_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<bool___cdecl(FJsonObject_const_&,FString_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e13fa0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FProjectEditorRecord::QueueUpdate'::__l5::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FProjectEditorRecord::QueueUpdate'::`5'::<lambda_1>,1,1>::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e14000

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPluginManager::MountExplicitlyLoadedPluginLocalizationData'::__l119::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FPluginManager::MountExplicitlyLoadedPluginLocalizationData'::`119'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x20) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x30);
    if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x48);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e14070

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPluginManager::UnmountExplicitlyLoadedPluginLocalizationData'::__l167::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FPluginManager::UnmountExplicitlyLoadedPluginLocalizationData'::`167'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x20) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x30);
    if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x48);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e140e0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FProjectDescriptor,SharedPointerInternals::DefaultDeleter<FProjectDescriptor>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FProjectDescriptor,SharedPointerInternals::DefaultDeleter<FProjectDescriptor>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e14120

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TJsonValueString<wchar_t>,SharedPointerInternals::DefaultDeleter<TJsonValueString<wchar_t>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TJsonValueString<wchar_t>,SharedPointerInternals::DefaultDeleter<TJsonValueString<wchar_t>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e14160

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FJsonObject,SharedPointerInternals::DefaultDeleter<FJsonObject>,1>::
_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FJsonObject,SharedPointerInternals::DefaultDeleter<FJsonObject>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e141a0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FJsonValueObject,SharedPointerInternals::DefaultDeleter<FJsonValueObject>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FJsonValueObject,SharedPointerInternals::DefaultDeleter<FJsonValueObject>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e141e0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FPlugin,SharedPointerInternals::DefaultDeleter<FPlugin>,1>::
_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FPlugin,SharedPointerInternals::DefaultDeleter<FPlugin>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e14220

void * __thiscall
`FPluginManager::FindPluginsInDirectory'::__l2::FFindPluginsInDirectory_Visitor::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  *(undefined ***)this = &___7FDirectoryVisitor_IPlatformFile__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e14270

void * __thiscall
`FPluginManager::FindPluginManifestsInDirectory'::__l2::FManifestVisitor::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &___7FDirectoryVisitor_IPlatformFile__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e142b0

void * __thiscall
FPakFileSearchVisitor::_scalar_deleting_destructor_(FPakFileSearchVisitor *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FDirectoryVisitor_IPlatformFile__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e142f0

void * __thiscall
`ParallelForImpl::
ParallelForInternal<`FPluginManager::FindPluginsInDirectory'::__l4::<lambda_1>,`ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,`FPluginManager::FindPluginsInDirectory'::__l4::<lambda_1>_>'::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>'
::__l2::FParallelForData::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong lVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  void *pvVar5;
  longlong lVar6;
  undefined1 local_res10 [8];
  
  *(undefined ***)this =
       &ParallelForInternal<`FPluginManager::FindPluginsInDirectory'::`4'::<lambda_1>,`ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,`FPluginManager::FindPluginsInDirectory'::`4'::<lambda_1>_>'::`5'::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>'
        ::`2'::FParallelForData::_vftable_;
  iVar2 = *(int *)((longlong)this + 0x80);
  lVar6 = *(longlong *)((longlong)this + 0x78);
  lVar1 = lVar6 + (longlong)iVar2 * 0x48;
  while( true ) {
    if (*(int *)((longlong)this + 0x80) != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<`ParallelForImpl::ParallelForInternal<`FPluginManager::FindPluginsInDirectory'::__l4::<lambda_1>,`ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,`FPluginManager::FindPluginsInDirectory'::__l4::<lambda_1>_>'::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>'::__l2::FTracedTask,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (lVar6 == lVar1) break;
    if (*(longlong *)(lVar6 + 0x40) != -1) {
      TaskTrace::Destroyed(*(ulong64 *)(lVar6 + 0x40));
    }
    lVar6 = lVar6 + 0x48;
  }
  DestructItems<_ParallelForImpl::ParallelForInternal<_FPluginManager::FindPluginsInDirectory_::__l4::<lambda_1>,_ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,_FPluginManager::FindPluginsInDirectory_::__l4::<lambda_1>_>_::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>_::__l2::FTracedTask,int>
            (*(FTracedTask **)((longlong)this + 0x78),*(int *)((longlong)this + 0x80));
  if (*(void **)((longlong)this + 0x78) != (void *)0x0) {
    TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(*(void **)((longlong)this + 0x78));
  }
  *(undefined ***)this = &___7FThreadSafeRefCountedObject__6B_;
  if (*(int *)((longlong)this + 8) != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Super::GetRefCount() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                       ,0x124,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar3)();
      return pvVar5;
    }
  }
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
    }
    else {
      __empty_global_delete(this,0xc0,0x40);
    }
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e14400

void * __thiscall FPlugin::_scalar_deleting_destructor_(FPlugin *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  this->_padding_ = (longlong)&___7FPlugin__6B_;
  FPluginDescriptor::~FPluginDescriptor(&this->Descriptor);
  DestructItems<FString,int>
            ((FString *)(this->PluginExtensionFileNameList).AllocatorInstance.Data,
             (this->PluginExtensionFileNameList).ArrayNum);
  pFVar3 = (this->PluginExtensionFileNameList).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->FileName).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  this->_padding_ = (longlong)&___7IPlugin__6B_;
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,600);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e144b0

void * __thiscall FPluginManager::_scalar_deleting_destructor_(FPluginManager *this,uint param_1)

{
  ~FPluginManager(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x318);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e144f0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall FProjectManager::_scalar_deleting_destructor_(FProjectManager *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->SuppressProjectFileWriteList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnLoadingPhaseCompleteEvent).field_0x8,
             *(int *)&(this->OnLoadingPhaseCompleteEvent).field_0x10);
  pvVar2 = *(void **)&(this->OnLoadingPhaseCompleteEvent).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLoadingPhaseCompleteEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnTargetPlatformsForCurrentProjectChangedEvent).field_0x8,
             *(int *)&(this->OnTargetPlatformsForCurrentProjectChangedEvent).field_0x10);
  pvVar2 = *(void **)&(this->OnTargetPlatformsForCurrentProjectChangedEvent).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTargetPlatformsForCurrentProjectChangedEvent);
  DestructItems<FModuleContextInfo,int>
            ((FModuleContextInfo *)(this->CurrentProjectModuleContextInfos).AllocatorInstance.Data,
             (this->CurrentProjectModuleContextInfos).ArrayNum);
  pFVar1 = (this->CurrentProjectModuleContextInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CurrentProject).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7IProjectManager__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e145c0

void * __thiscall IPlugin::_scalar_deleting_destructor_(IPlugin *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &___7IPlugin__6B_;
  plVar3 = *(longlong **)&this->field_0x10;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e14630

void * __thiscall IPluginManager::_scalar_deleting_destructor_(IPluginManager *this,uint param_1)

{
  *this = (IPluginManager)&___7IPluginManager__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e14670

void * __thiscall IProjectManager::_scalar_deleting_destructor_(IProjectManager *this,uint param_1)

{
  *this = (IProjectManager)&___7IProjectManager__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// DumpContents @ 141e1a080

/* WARNING: Removing unreachable block (ram,0x000141e1a215) */

void __cdecl
PluginManifest::DumpContents
          (TArray<FPluginManifestEntry,TSizedDefaultAllocator<32>_> *param_1,FString *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  IFileManager *pIVar6;
  FScriptContainerElement *pFVar7;
  ForAnyElementType FVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  FIdentityFunctor local_res8 [8];
  undefined1 local_res18 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  iVar1 = param_1->ArrayNum;
  pFVar9 = (param_1->AllocatorInstance).Data;
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar10 = pFVar9 + (longlong)iVar1 * 0x218;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      local_res8[0] = (FIdentityFunctor)0x0;
      `TCheckedPointerIterator<FPluginManifestEntry_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar9 == pFVar10) {
      AlgoImpl::
      IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,TLess<void>_>_>
                ((FString *)local_78.AllocatorInstance.Data,local_78.ArrayNum,local_res8[0],
                 (TLess<void> *)local_res18);
      pFVar5 = FPaths::ProjectSavedDir();
      ::operator/(&local_48,pFVar5,param_2);
      pIVar6 = IFileManager::Get();
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_48.Data.ArrayNum != 0) {
        FVar8.Data = local_48.Data.AllocatorInstance.Data;
      }
      FFileHelper::SaveStringArrayToFile
                (&local_78,(wchar_t *)FVar8.Data,ForceUTF8WithoutBOM,pIVar6,0);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      DestructItems<FString,int>((FString *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
      if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.AllocatorInstance.Data);
      }
      return;
    }
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    FPluginDescriptor::Write((FPluginDescriptor *)(pFVar9 + 0x10),&local_68);
    ::FString::ConcatFC(&local_38,(FString *)pFVar9,L"\n");
    ::FString::ConcatFF(&local_58,&local_38,&local_68);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    local_68.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
    local_68.Data.ArrayNum = local_58.Data.ArrayNum;
    local_68.Data.ArrayMax = local_58.Data.ArrayMax;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (((local_78.AllocatorInstance.Data <= (FScriptContainerElement *)&local_68) &&
        ((FScriptContainerElement *)&local_68 <
         local_78.AllocatorInstance.Data + (longlong)local_78.ArrayMax * 0x10)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) break;
    iVar4 = local_78.ArrayNum;
    if (local_78.ArrayNum == local_78.ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_78.AllocatorInstance,&local_78.ArrayMax);
    }
    local_78.ArrayNum = iVar4 + 1;
    pFVar7 = local_78.AllocatorInstance.Data + (longlong)iVar4 * 0x10;
    *(undefined8 *)pFVar7 = 0;
    *(FScriptContainerElement **)pFVar7 = local_68.Data.AllocatorInstance.Data;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar7 + 8) = local_68.Data.ArrayNum;
    *(int *)(pFVar7 + 0xc) = local_68.Data.ArrayMax;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    pFVar9 = pFVar9 + 0x218;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// EnumToString @ 141e1a380

FString * __cdecl EnumToString(EPluginType *param_1)

{
  EPluginType EVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  int *piVar5;
  
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar5 < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      FString::FString(&Engine,L"Engine");
      atexit(`EnumToString'::__l2::_dynamic_atexit_destructor_for__Engine__);
      _Init_thread_footer(&_TSS0);
    }
  }
  if (*piVar5 < _TSS1) {
    _Init_thread_header(&_TSS1);
    if (_TSS1 == -1) {
      FString::FString(&Enterprise,L"Enterprise");
      atexit(`EnumToString'::__l2::_dynamic_atexit_destructor_for__Enterprise__);
      _Init_thread_footer(&_TSS1);
    }
  }
  if (*piVar5 < _TSS2) {
    _Init_thread_header(&_TSS2);
    if (_TSS2 == -1) {
      FString::FString(&Project,L"Project");
      atexit(`EnumToString'::__l2::_dynamic_atexit_destructor_for__Project__);
      _Init_thread_footer(&_TSS2);
    }
  }
  if (*piVar5 < _TSS3) {
    _Init_thread_header(&_TSS3);
    if (_TSS3 == -1) {
      FString::FString(&External,L"External");
      atexit(`EnumToString'::__l2::_dynamic_atexit_destructor_for__External__);
      _Init_thread_footer(&_TSS3);
    }
  }
  if (*piVar5 < _TSS4) {
    _Init_thread_header(&_TSS4);
    if (_TSS4 == -1) {
      FString::FString(&Mod,L"Mod");
      atexit(`EnumToString'::__l2::_dynamic_atexit_destructor_for__Mod__);
      _Init_thread_footer(&_TSS4);
    }
  }
  if (*piVar5 < _TSS5) {
    _Init_thread_header(&_TSS5);
    if (_TSS5 == -1) {
      FString::FString(&ErrorString,L"Unknown plugin type, has EPluginType been changed?");
      atexit(`EnumToString'::__l2::_dynamic_atexit_destructor_for__ErrorString__);
      _Init_thread_footer(&_TSS5);
    }
  }
  EVar1 = *param_1;
  if (EVar1 == Engine) {
    return &Engine;
  }
  if (EVar1 == Enterprise) {
    return &Enterprise;
  }
  if (EVar1 != Project) {
    if (EVar1 == External) {
      return &External;
    }
    if (EVar1 != Mod) {
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("!\"Unknown plugin type, has EPluginType been changed?\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Projects\\Private\\PluginManager.cpp"
                         ,0x1f1,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FString *)(*pcVar2)();
        return pFVar4;
      }
      return &ErrorString;
    }
    return &Mod;
  }
  return &Project;
}

// FindPluginInMap @ 141e20070

TSharedRef<FPlugin,1> * __cdecl
DiscoveredPluginMapUtils::FindPluginInMap
          (TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
           *param_1,FString *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_> *pTVar5;
  TSharedRef<FPlugin,1> *pTVar6;
  
  pTVar5 = TMapBase<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
           ::Find((TMapBase<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
                   *)param_1,param_2);
  if (pTVar5 != (TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_> *)0x0) {
    iVar1 = pTVar5->ArrayNum;
    if (iVar1 != 0) {
      uVar4 = 0;
      if ((int)(iVar1 - 1U) < iVar1) {
        uVar4 = ~(iVar1 - 1U) >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pTVar6 = (TSharedRef<FPlugin,1> *)(*pcVar2)();
          return pTVar6;
        }
      }
      return (TSharedRef<FPlugin,1> *)
             ((pTVar5->AllocatorInstance).Data + (longlong)(pTVar5->ArrayNum + -1) * 0x10);
    }
  }
  return (TSharedRef<FPlugin,1> *)0x0;
}

// FindPluginInMap_FromDescriptor @ 141e20100

TSharedRef<FPlugin,1> * __cdecl
DiscoveredPluginMapUtils::FindPluginInMap_FromDescriptor
          (TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
           *param_1,FPluginReferenceDescriptor *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_> *pTVar5;
  TSharedRef<FPlugin,1> *pTVar6;
  TSharedRef<FPlugin,1> *pTVar7;
  undefined1 local_res10 [8];
  
  pTVar5 = TMapBase<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
           ::Find((TMapBase<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
                   *)param_1,&param_2->Name);
  if (pTVar5 != (TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_> *)0x0) {
    iVar1 = pTVar5->ArrayNum;
    if (0 < iVar1) {
      if ((param_2->RequestedVersion).bIsSet == false) {
        uVar4 = 0;
        if ((int)(iVar1 - 1U) < iVar1) {
          uVar4 = ~(iVar1 - 1U) >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pTVar6 = (TSharedRef<FPlugin,1> *)(*pcVar2)();
          return pTVar6;
        }
        return (TSharedRef<FPlugin,1> *)
               ((pTVar5->AllocatorInstance).Data + (longlong)(pTVar5->ArrayNum + -1) * 0x10);
      }
      pTVar6 = (TSharedRef<FPlugin,1> *)(pTVar5->AllocatorInstance).Data;
      pTVar7 = pTVar6 + iVar1;
      while( true ) {
        if (pTVar5->ArrayNum != iVar1) {
          `TCheckedPointerIterator<TSharedRef<FPlugin,1>,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res10);
        }
        if (pTVar6 == pTVar7) break;
        if (((param_2->RequestedVersion).bIsSet == true) &&
           ((pTVar6->Object->Descriptor).Version == (param_2->RequestedVersion).TypedValue)) {
          return pTVar6;
        }
        pTVar6 = pTVar6 + 1;
      }
    }
  }
  return (TSharedRef<FPlugin,1> *)0x0;
}

// FindPluginInMap_FromFileName @ 141e20200

TSharedRef<FPlugin,1> * __cdecl
DiscoveredPluginMapUtils::FindPluginInMap_FromFileName
          (TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
           *param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  FPlugin **ppFVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ForAnyElementType FVar6;
  longlong lVar7;
  FPlugin *pFVar8;
  FPlugin *pFVar9;
  FPlugin *pFVar10;
  bool bVar11;
  undefined1 local_res8 [8];
  FString local_58;
  FString local_48;
  FString local_38;
  
  FPaths::GetBaseFilename(&local_38,param_2,true);
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar6.Data = local_38.Data.AllocatorInstance.Data;
  }
  pFVar9 = (FPlugin *)0x0;
  iVar4 = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,(wchar_t *)FVar6.Data);
  iVar4 = TSet<TTuple<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)param_1,uVar3,&local_38);
  if (iVar4 != -1) {
    lVar7 = *(longlong *)param_1 + (longlong)iVar4 * 0x28;
    pFVar10 = (FPlugin *)(lVar7 + 0x10);
    if (lVar7 == 0) {
      pFVar10 = pFVar9;
    }
    if (pFVar10 != (FPlugin *)0x0) {
      local_58.Data.ArrayNum = (param_2->Data).ArrayNum;
      lVar7 = (longlong)local_58.Data.ArrayNum;
      pFVar1 = (param_2->Data).AllocatorInstance.Data;
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_58.Data.ArrayNum == 0) {
        local_58.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_58.Data.ArrayNum,0,(ForAnyElementType *)&local_58,
                   local_58.Data.ArrayNum,&local_58.Data.ArrayMax);
        memcpy(local_58.Data.AllocatorInstance.Data,pFVar1,lVar7 * 2);
      }
      FPaths::NormalizeFilename(&local_58);
      iVar4 = *(int *)&((FSharedReferencer<1> *)&pFVar10->_padding_)->ReferenceController;
      pFVar8 = (FPlugin *)pFVar10->_padding_;
      ppFVar2 = (FPlugin **)&pFVar8->_padding_;
      do {
        if (*(int *)&((FSharedReferencer<1> *)&pFVar10->_padding_)->ReferenceController != iVar4) {
          `TCheckedPointerIterator<TSharedRef<FPlugin,1>,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (pFVar8 == (FPlugin *)(ppFVar2 + (longlong)iVar4 * 2)) {
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
          break;
        }
        local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_48.Data.ArrayNum = (((FPlugin *)pFVar8->_padding_)->FileName).Data.ArrayNum;
        lVar7 = (longlong)local_48.Data.ArrayNum;
        pFVar1 = (((FPlugin *)pFVar8->_padding_)->FileName).Data.AllocatorInstance.Data;
        if (local_48.Data.ArrayNum == 0) {
          local_48.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_48,
                     local_48.Data.ArrayNum,&local_48.Data.ArrayMax);
          memcpy(local_48.Data.AllocatorInstance.Data,pFVar1,lVar7 * 2);
        }
        FPaths::NormalizeFilename(&local_48);
        FVar6.Data = local_48.Data.AllocatorInstance.Data;
        if (local_48.Data.ArrayNum == local_58.Data.ArrayNum) {
          if (local_48.Data.ArrayNum < 2) goto LAB_141e203bd;
          iVar5 = wcscmp((wchar_t *)local_48.Data.AllocatorInstance.Data,
                         (wchar_t *)local_58.Data.AllocatorInstance.Data);
          bVar11 = iVar5 == 0;
        }
        else {
          bVar11 = local_48.Data.ArrayNum + local_58.Data.ArrayNum == 1;
        }
        if (bVar11) goto LAB_141e203bd;
        if (FVar6.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar6.Data);
        }
        pFVar8 = (FPlugin *)&pFVar8->_padding_;
      } while( true );
    }
  }
LAB_141e203eb:
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return (TSharedRef<FPlugin,1> *)pFVar9;
LAB_141e203bd:
  if (FVar6.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar6.Data);
  }
  pFVar9 = pFVar8;
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  goto LAB_141e203eb;
}

// GetCmdLinePluginPaths @ 141e22110

void __cdecl
PluginSystemDefs::GetCmdLinePluginPaths
          (TSet<FExternalPluginPath,DefaultKeyFuncs<FExternalPluginPath,0>,FDefaultSetAllocator>
           *param_1)

{
  wchar_t wVar1;
  ForAnyElementType _Src;
  bool bVar2;
  int iVar3;
  wchar_t *pwVar4;
  wchar_t wVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  FString local_68;
  FString local_58;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  undefined4 local_38;
  
  pwVar4 = FCommandLine::Get();
  do {
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    pwVar7 = (wchar_t *)0x0;
    if (pwVar4 != (wchar_t *)0x0) {
      bVar2 = false;
      wVar1 = *pwVar4;
      while (pwVar7 = (wchar_t *)0x0, wVar1 != L'\0') {
        pwVar6 = pwVar4 + 1;
        wVar5 = wVar1 + L'￠';
        if (0x19 < (ushort)(wVar1 + L'ﾟ')) {
          wVar5 = wVar1;
        }
        if (((!bVar2) && (wVar5 == L'P')) &&
           (iVar3 = FGenericPlatformStricmp::Strnicmp(pwVar6,L"LUGIN=",6), pwVar7 = pwVar4,
           iVar3 == 0)) break;
        if (((ushort)(wVar5 + L'﾿') < 0x1a) || ((ushort)(wVar5 + L'￐') < 10)) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        pwVar4 = pwVar6;
        wVar1 = *pwVar6;
      }
    }
    bVar2 = FParse::Value(pwVar7,L"PLUGIN=",&local_68,true,(wchar_t **)0x0);
    if (!bVar2) {
      if (local_68.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
      return;
    }
    FPaths::GetPath(&local_58,&local_68);
    _Src.Data = local_58.Data.AllocatorInstance.Data;
    local_48.Data = (FScriptContainerElement *)0x0;
    iVar3 = local_58.Data.ArrayNum;
    local_40 = iVar3;
    if (iVar3 == 0) {
      local_3c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar3,0,&local_48,iVar3,&local_3c);
      memcpy(local_48.Data,_Src.Data,(longlong)iVar3 * 2);
    }
    local_38 = 1;
    TSet<FExternalPluginPath,DefaultKeyFuncs<FExternalPluginPath,0>,FDefaultSetAllocator>::
    Emplace<FExternalPluginPath>(param_1,(FExternalPluginPath *)&stack0x00000010,(bool *)&local_48);
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
    iVar3 = local_68.Data.ArrayNum + 6;
    if (local_68.Data.ArrayNum == 0) {
      iVar3 = 7;
    }
    pwVar4 = pwVar7 + iVar3;
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (pwVar4 == (wchar_t *)0x0) {
      return;
    }
  } while( true );
}

// GetDescriptorKey @ 141e23100

FString * __cdecl
LocalizationDescriptor::GetDescriptorKey
          (FString *__return_storage_ptr__,FLocalizationTargetDescriptor *param_1)

{
  ::FString::FString(__return_storage_ptr__,&param_1->Name);
  return __return_storage_ptr__;
}

// GetLocalizationPathsForPlugin @ 141e251a0

/* WARNING: Removing unreachable block (ram,0x000141e25408) */

void __cdecl
PluginLocalizationUtils::GetLocalizationPathsForPlugin
          (IPlugin *param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  code *pcVar3;
  ForAnyElementType _Src;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined1 local_res8 [8];
  undefined8 *local_res20;
  FString local_68;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_58;
  void *local_48 [2];
  
  pTVar8 = (TArray<wchar_t,TSizedDefaultAllocator<32>_> *)
           (**(code **)(*(longlong *)param_1 + 0x30))(param_1,local_48);
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_58,pTVar8,0xe - (uint)(pTVar8->ArrayNum != 0));
  ::FString::PathAppend((FString *)&local_58,L"Localization",0xc);
  if (local_48[0] != (void *)0x0) {
    FMemory::Free(local_48[0]);
  }
  lVar9 = (**(code **)(*(longlong *)param_1 + 0xa0))(param_1);
  iVar2 = *(int *)(lVar9 + 0x100);
  puVar11 = *(undefined8 **)(lVar9 + 0xf8);
  puVar1 = puVar11 + (longlong)iVar2 * 3;
  do {
    if (*(int *)(lVar9 + 0x100) != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FLocalizationTargetDescriptor_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    _Src.Data = local_58.AllocatorInstance.Data;
    if (puVar11 == puVar1) {
      if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.AllocatorInstance.Data);
      }
      return;
    }
    switch(*(undefined4 *)(puVar11 + 2)) {
    case 1:
    case 3:
      iVar7 = *(int *)(puVar11 + 1) + -1;
      if (*(int *)(puVar11 + 1) == 0) {
        iVar7 = 0;
      }
      iVar12 = local_58.ArrayNum;
      if ((iVar12 == 0) && (iVar7 != -1)) {
        iVar5 = iVar7 + 2;
LAB_141e252e4:
        local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (iVar5 != 0) goto LAB_141e252ee;
        local_68.Data._8_8_ = local_58._8_8_ & 0xffffffff;
      }
      else {
        iVar5 = iVar7 + 1;
        if (iVar12 == 0) goto LAB_141e252e4;
LAB_141e252ee:
        local_68.Data.ArrayNum = iVar12;
        local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        uVar6 = iVar5 + iVar12;
        if ((int)uVar6 < iVar12) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
        }
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar6,0,(ForAnyElementType *)&local_68,iVar12,&local_68.Data.ArrayMax);
        if (iVar12 != 0) {
          memcpy(local_68.Data.AllocatorInstance.Data,_Src.Data,(longlong)iVar12 * 2);
        }
      }
      ::FString::PathAppend(&local_68,(wchar_t *)*puVar11,iVar7);
      pFVar10 = (param_2->AllocatorInstance).Data;
      if (((pFVar10 <= (FScriptContainerElement *)&local_68) &&
          ((FScriptContainerElement *)&local_68 < pFVar10 + (longlong)param_2->ArrayMax * 0x10)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar7 = param_2->ArrayNum;
      if (iVar7 == param_2->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar7 + 1;
      pFVar10 = (param_2->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
      *(undefined8 *)pFVar10 = 0;
      *(FScriptContainerElement **)pFVar10 = local_68.Data.AllocatorInstance.Data;
      *(int *)(pFVar10 + 8) = local_68.Data.ArrayNum;
      *(int *)(pFVar10 + 0xc) = local_68.Data.ArrayMax;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    case 0:
    case 2:
    case 4:
    case 5:
      puVar11 = puVar11 + 3;
      break;
    default:
      local_res20 = puVar11;
      `FLocalizationTargetDescriptor::ShouldLoadLocalizationTarget'::__l4::<lambda_1>::operator()
                (&local_res20);
      puVar11 = puVar11 + 3;
    }
  } while( true );
}

// GetModuleKey @ 141e254a0

FString * __cdecl
ModuleDescriptor::GetModuleKey(FString *__return_storage_ptr__,FModuleDescriptor *param_1)

{
  ::FName::ToString(&param_1->Name,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetPluginRefKey @ 141e25770

FString * __cdecl
PluginDisallowedDescriptor::GetPluginRefKey
          (FString *__return_storage_ptr__,FPluginDisallowedDescriptor *param_1)

{
  ::FString::FString(__return_storage_ptr__,&param_1->Name);
  return __return_storage_ptr__;
}

// GetPluginRefKey @ 141e25790

FString * __cdecl
PluginReferenceDescriptor::GetPluginRefKey
          (FString *__return_storage_ptr__,FPluginReferenceDescriptor *param_1)

{
  ::FString::FString(__return_storage_ptr__,&param_1->Name);
  return __return_storage_ptr__;
}

// GetTypeHash @ 141e25890

uint __cdecl GetTypeHash(FExternalPluginPath *param_1)

{
  int iVar1;
  EPluginExternalSource EVar2;
  uint uVar3;
  int iVar4;
  wchar_t *pwVar5;
  uint uVar6;
  uint uVar7;
  
  iVar1 = (param_1->Path).Data.ArrayNum;
  EVar2 = param_1->Source;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar5 = L"";
    iVar4 = 0;
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Path).Data.AllocatorInstance.Data;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
  uVar7 = uVar3 - EVar2 ^ EVar2 >> 0xd;
  uVar3 = (-0x61c88647 - uVar7) - EVar2 ^ uVar7 << 8;
  uVar6 = (EVar2 - uVar3) - uVar7 ^ uVar3 >> 0xd;
  uVar7 = (uVar7 - uVar6) - uVar3 ^ uVar6 >> 0xc;
  uVar3 = (uVar3 - uVar7) - uVar6 ^ uVar7 << 0x10;
  uVar6 = (uVar6 - uVar3) - uVar7 ^ uVar3 >> 5;
  uVar7 = (uVar7 - uVar6) - uVar3 ^ uVar6 >> 3;
  uVar3 = (uVar3 - uVar7) - uVar6 ^ uVar7 << 10;
  return (uVar6 - uVar3) - uVar7 ^ uVar3 >> 0xf;
}

// HasDefaultPluginSettings @ 141e25a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl HasDefaultPluginSettings(FString *param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  IProjectManager *pIVar6;
  longlong lVar7;
  FString *pFVar8;
  int iVar9;
  bool *pbVar10;
  wchar_t *pwVar11;
  TSharedRef<IPlugin,1> *pTVar12;
  undefined1 uVar13;
  char cVar14;
  TSharedRef<IPlugin,1> *pTVar15;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined1 local_a7;
  undefined1 local_a6 [6];
  TSharedRef<IPlugin,1> *local_a0;
  undefined1 *local_98;
  undefined1 local_90 [8];
  TSet<TTuple<FString,bool>,TDefaultMapHashableKeyFuncs<FString,bool,0>,FDefaultSetAllocator>
  local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pIVar6 = IProjectManager::Get();
  lVar7 = (**(code **)((longlong)*pIVar6 + 8))(pIVar6);
  local_88.Elements._44_4_ = 0x80;
  local_a8 = 1;
  local_88.Elements._48_4_ = 0xffffffff;
  local_88.Elements._0_8_ = (bool *)0x0;
  local_88.Elements._8_8_ = 0;
  local_88.Elements._32_8_ = 0;
  local_88.Elements._40_4_ = 0;
  local_88.Elements._52_4_ = 0;
  local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_88.HashSize = 0;
  if (lVar7 != 0) {
    local_a8 = *(char *)(lVar7 + 0x111) == '\0';
    iVar1 = *(int *)(lVar7 + 0x50);
    pTVar12 = *(TSharedRef<IPlugin,1> **)(lVar7 + 0x48);
    pTVar15 = (TSharedRef<IPlugin,1> *)((longlong)iVar1 * 0xb8 + (longlong)pTVar12);
    while( true ) {
      if (*(int *)(lVar7 + 0x50) != iVar1) {
        `TCheckedPointerIterator<FPluginReferenceDescriptor_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_a6);
      }
      if (pTVar12 == pTVar15) break;
      if (*(char *)&pTVar12[1].Object == '\0') {
        bVar3 = false;
      }
      else if (((*(char *)&pTVar12[10].SharedReferenceCount.ReferenceController == '\0') &&
               (*(int *)&pTVar12[4].Object < 1)) ||
              (bVar2 = TArray<FString,TSizedDefaultAllocator<32>_>::Contains<FString>
                                 ((TArray<FString,TSizedDefaultAllocator<32>_> *)
                                  &pTVar12[3].SharedReferenceCount,param_1), bVar3 = false, bVar2))
      {
        bVar3 = TArray<FString,TSizedDefaultAllocator<32>_>::Contains<FString>
                          ((TArray<FString,TSizedDefaultAllocator<32>_> *)
                           &pTVar12[4].SharedReferenceCount,param_1);
        bVar3 = !bVar3;
      }
      local_98 = &local_a7;
      local_a7 = bVar3;
      local_a0 = pTVar12;
      TSet<TTuple<FString,bool>,TDefaultMapHashableKeyFuncs<FString,bool,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<FString_const_&,bool_&&>_>
                ((TSet<TTuple<FString,bool>,TDefaultMapHashableKeyFuncs<FString,bool,0>,FDefaultSetAllocator>
                  *)(local_90 + 8),(TPairInitializer<FString_const_&,bool_&&> *)local_90,
                 (bool *)&local_a0);
      pTVar12 = (TSharedRef<IPlugin,1> *)&pTVar12[0xb].SharedReferenceCount;
    }
  }
  uVar13 = local_a8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    FPluginManager::FPluginManager(&PluginManager);
    atexit(`IPluginManager::Get'::__l2::_dynamic_atexit_destructor_for__PluginManager__);
    _Init_thread_footer(&_TSS0);
  }
  (**(code **)(PluginManager._padding_ + 0xe0))(&PluginManager,&local_a0);
  iVar1 = (int)local_98;
  pTVar15 = local_a0 + (int)local_98;
  pTVar12 = local_a0;
  do {
    if ((int)local_98 != iVar1) {
      `TCheckedPointerIterator<TSharedRef<IPlugin,1>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_a6);
    }
    if (pTVar12 == pTVar15) {
      DestructItems<TSharedRef<IPlugin,1>,int>(local_a0,(int)local_98);
      if (local_a0 != (TSharedRef<IPlugin,1> *)0x0) {
        FMemory::Free(local_a0);
      }
      bVar3 = true;
      goto LAB_141e25cea;
    }
    lVar7 = (**(code **)(*(longlong *)pTVar12->Object + 0xa0))();
    if (((*(char *)(lVar7 + 0x142) == '\0') && (*(int *)(lVar7 + 0xc0) == 0)) ||
       (bVar3 = TArray<FString,TSizedDefaultAllocator<32>_>::Contains<FString>
                          ((TArray<FString,TSizedDefaultAllocator<32>_> *)(lVar7 + 0xb8),param_1),
       bVar3)) {
      cVar4 = (**(code **)(*(longlong *)pTVar12->Object + 0x50))(pTVar12->Object,uVar13);
      pFVar8 = (FString *)(**(code **)(*(longlong *)pTVar12->Object + 8))();
      iVar9 = (pFVar8->Data).ArrayNum;
      if (iVar9 == 0) {
        pwVar11 = L"";
        iVar9 = 0;
      }
      else {
        pwVar11 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
        iVar9 = iVar9 + -1;
      }
      uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar11);
      iVar9 = TSet<TTuple<FString,bool>,TDefaultMapHashableKeyFuncs<FString,bool,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FString>
                        ((TSet<TTuple<FString,bool>,TDefaultMapHashableKeyFuncs<FString,bool,0>,FDefaultSetAllocator>
                          *)(local_90 + 8),uVar5,pFVar8);
      cVar14 = cVar4;
      if (iVar9 != -1) {
        pbVar10 = (bool *)(local_88.Elements._0_8_ + (longlong)iVar9 * 0x20) + 0x10;
        if ((bool *)(local_88.Elements._0_8_ + (longlong)iVar9 * 0x20) == (bool *)0x0) {
          pbVar10 = (bool *)0x0;
        }
        if (pbVar10 != (bool *)0x0) {
          cVar14 = *pbVar10;
        }
      }
      iVar9 = (**(code **)(*(longlong *)pTVar12->Object + 0x98))();
      if (((iVar9 == 0) && (cVar4 != '\0')) &&
         (lVar7 = (**(code **)(*(longlong *)pTVar12->Object + 0xa0))(),
         *(char *)(lVar7 + 0x13c) == '\0')) {
        cVar4 = '\x01';
      }
      else {
        cVar4 = '\0';
      }
      if (cVar14 != cVar4) {
        DestructItems<TSharedRef<IPlugin,1>,int>(local_a0,(int)local_98);
        if (local_a0 != (TSharedRef<IPlugin,1> *)0x0) {
          FMemory::Free(local_a0);
        }
        bVar3 = false;
LAB_141e25cea:
        local_88.HashSize = 0;
        if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_88.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<TTuple<FString,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FString,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FString,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)(local_90 + 8));
        return bVar3;
      }
    }
    pTVar12 = pTVar12 + 1;
    uVar13 = local_a8;
  } while( true );
}

// InsertPluginIntoMap @ 141e25ed0

void __cdecl
DiscoveredPluginMapUtils::InsertPluginIntoMap
          (TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
           *param_1,FString *param_2,TSharedRef<FPlugin,1> *param_3,EInsertionType param_4)

{
  TSharedRef<FPlugin,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  int iVar8;
  wchar_t *pwVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  
  iVar8 = (param_2->Data).ArrayNum;
  iVar5 = iVar8 + -1;
  if (iVar8 == 0) {
    pwVar9 = L"";
    iVar5 = 0;
  }
  else {
    pwVar9 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar9);
  pTVar6 = TMapBase<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
           ::FindOrAddImpl<FString_const_&>
                     ((TMapBase<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
                       *)param_1,uVar4,param_2);
  if (param_4 == AsOfferedPlugin) {
    pTVar1 = (TSharedRef<FPlugin,1> *)(pTVar6->AllocatorInstance).Data;
    if (((pTVar1 <= param_3) && (param_3 < pTVar1 + pTVar6->ArrayMax)) &&
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
    iVar5 = pTVar6->ArrayNum;
    if (iVar5 == pTVar6->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar6->AllocatorInstance,&pTVar6->ArrayMax);
    }
    pTVar6->ArrayNum = iVar5 + 1;
    pFVar10 = (pTVar6->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    *(FPlugin **)pFVar10 = param_3->Object;
    pTVar7 = (param_3->SharedReferenceCount).ReferenceController;
    *(TReferenceControllerBase<1> **)(pFVar10 + 8) = pTVar7;
  }
  else {
    if (param_4 != AsSuppressedPlugin) {
      return;
    }
    iVar8 = pTVar6->ArrayNum + -1;
    iVar5 = 0;
    if (0 < iVar8) {
      iVar5 = iVar8;
    }
    pTVar1 = (TSharedRef<FPlugin,1> *)(pTVar6->AllocatorInstance).Data;
    if (((pTVar1 <= param_3) && (param_3 < pTVar1 + pTVar6->ArrayMax)) &&
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
    iVar8 = pTVar6->ArrayNum;
    if (iVar8 == pTVar6->ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar6->AllocatorInstance,&pTVar6->ArrayMax);
    }
    pFVar10 = (pTVar6->AllocatorInstance).Data;
    pTVar6->ArrayNum = iVar8 + 1;
    lVar11 = (longlong)iVar5 * 0x10;
    pFVar10 = pFVar10 + lVar11;
    memmove(pFVar10 + 0x10,pFVar10,(longlong)(iVar8 - iVar5) << 4);
    pFVar10 = (pTVar6->AllocatorInstance).Data;
    *(FPlugin **)(pFVar10 + lVar11) = param_3->Object;
    pTVar7 = (param_3->SharedReferenceCount).ReferenceController;
    *(TReferenceControllerBase<1> **)(pFVar10 + lVar11 + 8) = pTVar7;
  }
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  return;
}

// PromotePluginToOfferedVersion @ 141e2beb0

TSharedRef<FPlugin,1> * __cdecl
DiscoveredPluginMapUtils::PromotePluginToOfferedVersion
          (TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
           *param_1,TSharedRef<FPlugin,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FPlugin *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FPlugin *pFVar4;
  code *pcVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  uint uVar8;
  TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_> *pTVar9;
  TSharedRef<FPlugin,1> *pTVar10;
  uint uVar11;
  FString *pFVar12;
  FString *local_res10;
  
  pFVar12 = &param_2->Object->Name;
  pTVar9 = TMapBase<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
           ::Find((TMapBase<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
                   *)param_1,pFVar12);
  if (((pTVar9 == (TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_> *)0x0) ||
      (pTVar10 = (TSharedRef<FPlugin,1> *)(pTVar9->AllocatorInstance).Data, param_2 < pTVar10)) ||
     (pTVar10 + pTVar9->ArrayNum <= param_2)) {
    local_res10 = pFVar12;
    bVar7 = `DiscoveredPluginMapUtils::PromotePluginToOfferedVersion'::__l3::<lambda_1>::operator()
                      (&local_res10);
    if (!bVar7) {
      return (TSharedRef<FPlugin,1> *)0x0;
    }
  }
  uVar11 = pTVar9->ArrayNum - 1;
  uVar8 = 0;
  if ((int)uVar11 < pTVar9->ArrayNum) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TSharedRef<FPlugin,1> *)(*pcVar5)();
      return pTVar10;
    }
  }
  pTVar10 = (TSharedRef<FPlugin,1> *)
            ((pTVar9->AllocatorInstance).Data + (longlong)pTVar9->ArrayNum * 0x10 + -0x10);
  if (pTVar10 != param_2) {
    pTVar1 = (pTVar10->SharedReferenceCount).ReferenceController;
    pFVar2 = pTVar10->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar3 = (param_2->SharedReferenceCount).ReferenceController;
    pFVar4 = param_2->Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar6 = (pTVar10->SharedReferenceCount).ReferenceController;
    pTVar10->Object = pFVar4;
    (pTVar10->SharedReferenceCount).ReferenceController = pTVar3;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar3 = (param_2->SharedReferenceCount).ReferenceController;
    param_2->Object = pFVar2;
    (param_2->SharedReferenceCount).ReferenceController = pTVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  return pTVar10;
}

// RemovePluginFromMap @ 141e35460

void __cdecl
DiscoveredPluginMapUtils::RemovePluginFromMap
          (TMap<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
           *param_1,TSharedRef<FPlugin,1> *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  FPlugin *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  wchar_t *pwVar10;
  undefined1 *puVar11;
  ulonglong *puVar12;
  ulonglong *puVar13;
  int iVar14;
  ulonglong *puVar15;
  int iVar16;
  ulonglong *puVar17;
  
  puVar13 = (ulonglong *)0x0;
  iVar7 = (param_2->Object->Name).Data.ArrayNum;
  if (iVar7 == 0) {
    pwVar10 = L"";
    iVar7 = 0;
  }
  else {
    pwVar10 = (wchar_t *)(param_2->Object->Name).Data.AllocatorInstance.Data;
    iVar7 = iVar7 + -1;
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar10);
  iVar7 = TSet<TTuple<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)param_1,uVar6,&param_2->Object->Name);
  if (iVar7 != -1) {
    lVar8 = *(longlong *)param_1 + (longlong)iVar7 * 0x28;
    puVar12 = (ulonglong *)(lVar8 + 0x10);
    if (lVar8 == 0) {
      puVar12 = puVar13;
    }
    if (puVar12 != (ulonglong *)0x0) {
      if ((((TSharedRef<FPlugin,1> *)*puVar12 <= param_2) &&
          (param_2 < (TSharedRef<FPlugin,1> *)*puVar12 + *(int *)((longlong)puVar12 + 0xc))) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar8 = (longlong)(int)puVar12[1];
      if ((int)puVar12[1] != 0) {
        plVar2 = (longlong *)*puVar12;
        bVar5 = (FPlugin *)*plVar2 != param_2->Object;
        puVar15 = puVar13;
        puVar17 = puVar13;
        do {
          iVar7 = (int)puVar15;
          puVar13 = (ulonglong *)((longlong)puVar13 + 1);
          puVar15 = (ulonglong *)(ulonglong)(iVar7 + 1);
          if ((longlong)puVar13 < lVar8) {
            plVar9 = plVar2 + (longlong)puVar13 * 2;
            do {
              if (bVar5 != ((FPlugin *)*plVar9 != param_2->Object)) break;
              puVar15 = (ulonglong *)(ulonglong)((int)puVar15 + 1);
              puVar13 = (ulonglong *)((longlong)puVar13 + 1);
              plVar9 = plVar9 + 2;
            } while ((longlong)puVar13 < lVar8);
          }
          iVar14 = (int)puVar15 - iVar7;
          if (bVar5 == false) {
            DestructItems<TSharedRef<FPlugin,1>,int>
                      ((TSharedRef<FPlugin,1> *)(plVar2 + (longlong)iVar7 * 2),iVar14);
          }
          else {
            iVar16 = (int)puVar17;
            if (iVar16 != iVar7) {
              memmove(plVar2 + (longlong)iVar16 * 2,plVar2 + (longlong)iVar7 * 2,
                      (longlong)iVar14 << 4);
            }
            puVar17 = (ulonglong *)(ulonglong)(uint)(iVar16 + iVar14);
          }
          bVar5 = (bool)(bVar5 ^ 1);
        } while ((longlong)puVar13 < lVar8);
        *(int *)(puVar12 + 1) = (int)puVar17;
        if ((int)puVar17 != 0) {
          return;
        }
      }
      pFVar3 = param_2->Object;
      if (*(int *)&param_1->field_0x8 != *(int *)&param_1->field_0x34) {
        puVar11 = *(undefined1 **)&param_1->field_0x40;
        if (*(undefined1 **)&param_1->field_0x40 == (undefined1 *)0x0) {
          puVar11 = &param_1->field_0x38;
        }
        iVar7 = *(int *)(puVar11 +
                        ((longlong)*(int *)&param_1->field_0x48 - 1U & (longlong)(int)uVar6) * 4);
        while (iVar7 != -1) {
          puVar1 = (undefined8 *)(*(longlong *)param_1 + (longlong)iVar7 * 0x28);
          iVar14 = (pFVar3->Name).Data.ArrayNum;
          iVar16 = *(int *)(puVar1 + 1);
          if (iVar16 == iVar14) {
            if (iVar16 < 2) goto LAB_141e356d4;
            iVar14 = FGenericPlatformStricmp::Stricmp
                               ((wchar_t *)*puVar1,
                                (wchar_t *)(pFVar3->Name).Data.AllocatorInstance.Data);
            bVar5 = iVar14 == 0;
          }
          else {
            bVar5 = iVar16 + iVar14 == 1;
          }
          if (bVar5) {
LAB_141e356d4:
            TSet<TTuple<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            ::RemoveByIndex((TSet<TTuple<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                             *)param_1,iVar7);
            return;
          }
          iVar7 = *(int *)(puVar1 + 4);
        }
      }
    }
  }
  return;
}

// TryGetDescriptorJsonObjectKey @ 141e3c3e0

bool __cdecl
LocalizationDescriptor::TryGetDescriptorJsonObjectKey(FJsonObject *param_1,FString *param_2)

{
  bool bVar1;
  TStringView<wchar_t> local_18;
  
  local_18.Size = 4;
  local_18.DataPtr = L"Name";
  bVar1 = FJsonObject::TryGetStringField(param_1,&local_18,param_2);
  return bVar1;
}

// TryGetModuleJsonObjectKey @ 141e3c420

bool __cdecl ModuleDescriptor::TryGetModuleJsonObjectKey(FJsonObject *param_1,FString *param_2)

{
  bool bVar1;
  TStringView<wchar_t> local_18;
  
  local_18.Size = 4;
  local_18.DataPtr = L"Name";
  bVar1 = FJsonObject::TryGetStringField(param_1,&local_18,param_2);
  return bVar1;
}

// TryGetPluginRefJsonObjectKey @ 141e3c4c0

bool __cdecl
PluginDisallowedDescriptor::TryGetPluginRefJsonObjectKey(FJsonObject *param_1,FString *param_2)

{
  bool bVar1;
  TStringView<wchar_t> local_18;
  
  local_18.Size = 4;
  local_18.DataPtr = L"Name";
  bVar1 = FJsonObject::TryGetStringField(param_1,&local_18,param_2);
  return bVar1;
}

// TryGetPluginRefJsonObjectKey @ 141e3c500

bool __cdecl
PluginReferenceDescriptor::TryGetPluginRefJsonObjectKey(FJsonObject *param_1,FString *param_2)

{
  bool bVar1;
  TStringView<wchar_t> local_18;
  
  local_18.Size = 4;
  local_18.DataPtr = L"Name";
  bVar1 = FJsonObject::TryGetStringField(param_1,&local_18,param_2);
  return bVar1;
}

// UpdateDescriptorJsonObject @ 141e3f500

void __cdecl
LocalizationDescriptor::UpdateDescriptorJsonObject
          (FLocalizationTargetDescriptor *param_1,FJsonObject *param_2)

{
  wchar_t *pwVar1;
  FString *pFVar2;
  Type aTStackX_8 [2];
  Type *pTStackX_18;
  FString FStack_28;
  FString FStack_18;
  
  ::FString::FString(&FStack_28,L"Name");
  FJsonObject::SetStringField(param_2,&FStack_28,&param_1->Name);
  if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
  }
  pwVar1 = ELocalizationTargetDescriptorLoadingPolicy::ToString(param_1->LoadingPolicy);
  pFVar2 = ::FString::FString(&FStack_18,pwVar1);
  ::FString::FString(&FStack_28,L"LoadingPolicy");
  FJsonObject::SetStringField(param_2,&FStack_28,pFVar2);
  if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
  }
  if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
  }
  aTStackX_8[0] = param_1->ConfigGenerationPolicy;
  if (aTStackX_8[0] == Never) {
    pwVar1 = L"Never";
  }
  else if (aTStackX_8[0] == User) {
    pwVar1 = L"User";
  }
  else if (aTStackX_8[0] == Auto) {
    pwVar1 = L"Auto";
  }
  else {
    pTStackX_18 = aTStackX_8;
    `ELocalizationConfigGenerationPolicy::ToString'::__l4::<lambda_1>::operator()(&pTStackX_18);
    pwVar1 = (wchar_t *)0x0;
  }
  pFVar2 = ::FString::FString(&FStack_18,pwVar1);
  ::FString::FString(&FStack_28,L"ConfigGenerationPolicy");
  FJsonObject::SetStringField(param_2,&FStack_28,pFVar2);
  if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
  }
  if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
  }
  return;
}

// UpdateModuleJsonObject @ 141e443d0

void __cdecl
ModuleDescriptor::UpdateModuleJsonObject(FModuleDescriptor *param_1,FJsonObject *param_2)

{
  FScriptContainerElement FVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  FString *pFVar7;
  wchar_t *pwVar8;
  TJsonValueString<wchar_t> *pTVar9;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar10;
  TJsonValueString<wchar_t> *pTVar11;
  TJsonValueString<wchar_t> *pTVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  uint auStackX_8 [2];
  FJsonObject *pFStackX_10;
  undefined1 auStackX_18 [8];
  undefined1 auStackX_20 [8];
  undefined1 uStack_678;
  undefined1 uStack_677;
  undefined1 uStack_676;
  undefined1 uStack_675;
  undefined1 uStack_674;
  undefined1 uStack_673;
  undefined1 uStack_672;
  undefined1 uStack_671;
  undefined1 auStack_670 [8];
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> TStack_668;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> TStack_658;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> TStack_648;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> TStack_638;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> TStack_628;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> TStack_618;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> TStack_608;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> TStack_5f8;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> TStack_5e8;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> TStack_5d8;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> TStack_5c8;
  TSharedPtr<FJsonValue,1> TStack_5b8;
  TSharedPtr<FJsonValue,1> TStack_5a8;
  TSharedPtr<FJsonValue,1> TStack_598;
  FString FStack_588;
  TSharedPtr<FJsonValue,1> TStack_578;
  FString FStack_568;
  TSharedPtr<FJsonValue,1> TStack_558;
  FString FStack_548;
  TSharedPtr<FJsonValue,1> TStack_538;
  FString FStack_528;
  TSharedPtr<FJsonValue,1> TStack_518;
  TSharedPtr<FJsonValue,1> TStack_508;
  TSharedPtr<FJsonValue,1> TStack_4f8;
  TSharedPtr<FJsonValue,1> TStack_4e8;
  TSharedPtr<FJsonValue,1> TStack_4d8;
  TRawPtrProxy<TJsonValueString<wchar_t>_> TStack_4c8;
  TRawPtrProxy<TJsonValueString<wchar_t>_> TStack_4c0;
  TRawPtrProxy<TJsonValueString<wchar_t>_> TStack_4b8;
  TRawPtrProxy<TJsonValueString<wchar_t>_> TStack_4b0;
  TRawPtrProxy<TJsonValueString<wchar_t>_> TStack_4a8;
  TRawPtrProxy<TJsonValueString<wchar_t>_> TStack_4a0;
  TRawPtrProxy<TJsonValueString<wchar_t>_> TStack_498;
  TRawPtrProxy<TJsonValueString<wchar_t>_> TStack_490;
  TRawPtrProxy<TJsonValueString<wchar_t>_> TStack_488;
  TRawPtrProxy<TJsonValueString<wchar_t>_> TStack_480;
  TRawPtrProxy<TJsonValueString<wchar_t>_> TStack_478;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> TStack_470;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> TStack_460;
  FString FStack_450;
  FString FStack_440;
  FString FStack_430;
  FString FStack_420;
  wchar_t *pwStack_408;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  FString FStack_3f8;
  wchar_t *pwStack_3e8;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  FString FStack_3d8;
  wchar_t *pwStack_3c8;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  FString FStack_3b8;
  wchar_t *pwStack_3a8;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  FString FStack_398;
  wchar_t *pwStack_388;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  FString FStack_378;
  wchar_t *pwStack_368;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  FString FStack_358;
  wchar_t *pwStack_348;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  FString FStack_338;
  wchar_t *pwStack_328;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  FString FStack_318;
  wchar_t *pwStack_308;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  FString FStack_2f8;
  wchar_t *pwStack_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  FString FStack_2d8;
  wchar_t *pwStack_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  FString FStack_2b8;
  wchar_t *pwStack_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  FString FStack_298;
  wchar_t *pwStack_288;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  FString FStack_278;
  wchar_t *pwStack_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  wchar_t *pwStack_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  wchar_t *pwStack_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  wchar_t *pwStack_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  wchar_t *pwStack_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  wchar_t *pwStack_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  wchar_t *pwStack_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  wchar_t *pwStack_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  wchar_t *pwStack_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  FString FStack_1d8;
  FString FStack_1c8;
  FString FStack_1b8;
  TStringView<wchar_t> TStack_1a8;
  TStringView<wchar_t> TStack_198;
  TStringView<wchar_t> TStack_188;
  TStringView<wchar_t> TStack_178;
  TStringView<wchar_t> TStack_168;
  TStringView<wchar_t> TStack_158;
  TStringView<wchar_t> TStack_148;
  TStringView<wchar_t> TStack_138;
  TStringView<wchar_t> TStack_128;
  TStringView<wchar_t> TStack_118;
  TStringView<wchar_t> TStack_108;
  TStringView<wchar_t> TStack_f8;
  TStringView<wchar_t> TStack_e8;
  TStringView<wchar_t> TStack_d8;
  TStringView<wchar_t> TStack_c8;
  TStringView<wchar_t> TStack_b8;
  TStringView<wchar_t> TStack_a8;
  TStringView<wchar_t> TStack_98;
  TStringView<wchar_t> TStack_88;
  TStringView<wchar_t> TStack_78;
  TStringView<wchar_t> TStack_68;
  TStringView<wchar_t> TStack_58;
  
  bVar5 = false;
  auStackX_8[0] = 0;
  pFStackX_10 = param_2;
  pFVar7 = ::FName::ToString(&param_1->Name,&FStack_1d8);
  ::FString::FString(&FStack_450,L"Name");
  FJsonObject::SetStringField(param_2,&FStack_450,pFVar7);
  if (FStack_450.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_450.Data.AllocatorInstance.Data);
  }
  if (FStack_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1d8.Data.AllocatorInstance.Data);
  }
  pwVar8 = EHostType::ToString(param_1->Type);
  pFVar7 = ::FString::FString(&FStack_1c8,pwVar8);
  ::FString::FString(&FStack_440,L"Type");
  FJsonObject::SetStringField(param_2,&FStack_440,pFVar7);
  if (FStack_440.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_440.Data.AllocatorInstance.Data);
  }
  if (FStack_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1c8.Data.AllocatorInstance.Data);
  }
  pwVar8 = ELoadingPhase::ToString(param_1->LoadingPhase);
  pFVar7 = ::FString::FString(&FStack_1b8,pwVar8);
  ::FString::FString(&FStack_430,L"LoadingPhase");
  FJsonObject::SetStringField(param_2,&FStack_430,pFVar7);
  if (FStack_430.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_430.Data.AllocatorInstance.Data);
  }
  if (FStack_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1b8.Data.AllocatorInstance.Data);
  }
  iVar2 = (param_1->PlatformAllowList).ArrayNum;
  if (iVar2 < 1) {
    uStack_400 = 0x11;
    pwStack_408 = L"PlatformAllowList";
    TStack_1a8._12_4_ = uStack_3fc;
    TStack_1a8.Size = 0x11;
    TStack_1a8.DataPtr = L"PlatformAllowList";
    FJsonObject::RemoveField(param_2,&TStack_1a8);
  }
  else {
    pFVar14 = (param_1->PlatformAllowList).AllocatorInstance.Data;
    pFVar13 = pFVar14 + (longlong)iVar2 * 0x10;
    TStack_668.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_668.ArrayNum = 0;
    TStack_668.ArrayMax = 0;
    while( true ) {
      if ((param_1->PlatformAllowList).ArrayNum != iVar2) {
        auStackX_8[0] = auStackX_8[0] & 0xffffff00;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (auStackX_8);
      }
      if (pFVar14 == pFVar13) break;
      pTVar9 = ::operator_new(0x20);
      if (pTVar9 == (TJsonValueString<wchar_t> *)0x0) {
        pTVar9 = (TJsonValueString<wchar_t> *)0x0;
      }
      else {
        FJsonValue::FJsonValue((FJsonValue *)pTVar9);
        pTVar9->_padding_ = (longlong)&___7__TJsonValueString__W__6B_;
        ::FString::FString(&pTVar9->Value,(FString *)pFVar14);
        *(EJson *)&pTVar9->_padding_ = String;
      }
      TStack_4c8.Object = pTVar9;
      TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><TJsonValueString<wchar_t>_>
                (&TStack_5b8,&TStack_4c8);
      if (((TStack_668.AllocatorInstance.Data <= &TStack_5b8) &&
          (&TStack_5b8 <
           (TSharedPtr<FJsonValue,1> *)
           (TStack_668.AllocatorInstance.Data + (longlong)TStack_668.ArrayMax * 0x10))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = TStack_668.ArrayNum;
      if (TStack_668.ArrayNum == TStack_668.ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&TStack_668.AllocatorInstance,&TStack_668.ArrayMax);
      }
      TStack_668.ArrayNum = iVar6 + 1;
      *(FJsonValue **)&TStack_668.AllocatorInstance.Data[(longlong)iVar6 * 0x10].field_0x0 =
           TStack_5b8.Object;
      *(TReferenceControllerBase<1> **)
       (TStack_668.AllocatorInstance.Data + (longlong)iVar6 * 0x10 + 8) =
           TStack_5b8.SharedReferenceCount.ReferenceController;
      TStack_5b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      TStack_5b8.Object = (FJsonValue *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      pFVar14 = pFVar14 + 0x10;
    }
    ::FString::FString(&FStack_420,L"PlatformAllowList");
    param_2 = pFStackX_10;
    FJsonObject::SetArrayField(pFStackX_10,&FStack_420,&TStack_668);
    if (FStack_420.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_420.Data.AllocatorInstance.Data);
    }
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)TStack_668.AllocatorInstance.Data,TStack_668.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)TStack_668.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(TStack_668.AllocatorInstance.Data);
    }
  }
  iVar2 = (param_1->PlatformDenyList).ArrayNum;
  if (iVar2 < 1) {
    uStack_3e0 = 0x10;
    pwStack_3e8 = L"PlatformDenyList";
    TStack_198._12_4_ = uStack_3dc;
    TStack_198.Size = 0x10;
    TStack_198.DataPtr = L"PlatformDenyList";
    FJsonObject::RemoveField(param_2,&TStack_198);
  }
  else {
    pFVar14 = (param_1->PlatformDenyList).AllocatorInstance.Data;
    TStack_658.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar13 = pFVar14 + (longlong)iVar2 * 0x10;
    TStack_658.ArrayNum = 0;
    TStack_658.ArrayMax = 0;
    while( true ) {
      if ((param_1->PlatformDenyList).ArrayNum != iVar2) {
        auStackX_18[0] = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (auStackX_18);
      }
      if (pFVar14 == pFVar13) break;
      pTVar9 = ::operator_new(0x20);
      if (pTVar9 == (TJsonValueString<wchar_t> *)0x0) {
        pTVar9 = (TJsonValueString<wchar_t> *)0x0;
      }
      else {
        FJsonValue::FJsonValue((FJsonValue *)pTVar9);
        pTVar9->_padding_ = (longlong)&___7__TJsonValueString__W__6B_;
        ::FString::FString(&pTVar9->Value,(FString *)pFVar14);
        *(EJson *)&pTVar9->_padding_ = String;
      }
      TStack_4c0.Object = pTVar9;
      TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><TJsonValueString<wchar_t>_>
                (&TStack_5a8,&TStack_4c0);
      if (((TStack_658.AllocatorInstance.Data <= &TStack_5a8) &&
          (&TStack_5a8 <
           (TSharedPtr<FJsonValue,1> *)
           (TStack_658.AllocatorInstance.Data + (longlong)TStack_658.ArrayMax * 0x10))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = TStack_658.ArrayNum;
      if (TStack_658.ArrayNum == TStack_658.ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&TStack_658.AllocatorInstance,&TStack_658.ArrayMax);
      }
      TStack_658.ArrayNum = iVar6 + 1;
      *(FJsonValue **)&TStack_658.AllocatorInstance.Data[(longlong)iVar6 * 0x10].field_0x0 =
           TStack_5a8.Object;
      *(TReferenceControllerBase<1> **)
       (TStack_658.AllocatorInstance.Data + (longlong)iVar6 * 0x10 + 8) =
           TStack_5a8.SharedReferenceCount.ReferenceController;
      TStack_5a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      TStack_5a8.Object = (FJsonValue *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      pFVar14 = pFVar14 + 0x10;
    }
    ::FString::FString(&FStack_3f8,L"PlatformDenyList");
    param_2 = pFStackX_10;
    FJsonObject::SetArrayField(pFStackX_10,&FStack_3f8,&TStack_658);
    if (FStack_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_3f8.Data.AllocatorInstance.Data);
    }
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)TStack_658.AllocatorInstance.Data,TStack_658.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)TStack_658.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(TStack_658.AllocatorInstance.Data);
    }
  }
  if (*(int *)&(param_1->PlatformArchitectureAllowList).field_0x8 -
      *(int *)&(param_1->PlatformArchitectureAllowList).field_0x34 < 1) {
    uStack_3c0 = 0x1d;
    pwStack_3c8 = L"PlatformArchitectureAllowList";
    TStack_188._12_4_ = uStack_3bc;
    TStack_188.Size = 0x1d;
    TStack_188.DataPtr = L"PlatformArchitectureAllowList";
    FJsonObject::RemoveField(param_2,&TStack_188);
  }
  else {
    pTVar10 = `FModuleDescriptor::UpdateJson'::__l2::<lambda_1>::operator()
                        (auStackX_20,&TStack_470,&param_1->PlatformArchitectureAllowList);
    ::FString::FString(&FStack_3d8,L"PlatformArchitectureAllowList");
    FJsonObject::SetArrayField(param_2,&FStack_3d8,pTVar10);
    if (FStack_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_3d8.Data.AllocatorInstance.Data);
    }
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)TStack_470.AllocatorInstance.Data,TStack_470.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)TStack_470.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(TStack_470.AllocatorInstance.Data);
    }
  }
  if (*(int *)&(param_1->PlatformArchitectureDenyList).field_0x8 -
      *(int *)&(param_1->PlatformArchitectureDenyList).field_0x34 < 1) {
    uStack_3a0 = 0x1c;
    pwStack_3a8 = L"PlatformArchitectureDenyList";
    TStack_178._12_4_ = uStack_39c;
    TStack_178.Size = 0x1c;
    TStack_178.DataPtr = L"PlatformArchitectureDenyList";
    FJsonObject::RemoveField(param_2,&TStack_178);
  }
  else {
    pTVar10 = `FModuleDescriptor::UpdateJson'::__l2::<lambda_1>::operator()
                        (auStackX_20,&TStack_460,&param_1->PlatformArchitectureDenyList);
    ::FString::FString(&FStack_3b8,L"PlatformArchitectureDenyList");
    FJsonObject::SetArrayField(param_2,&FStack_3b8,pTVar10);
    if (FStack_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_3b8.Data.AllocatorInstance.Data);
    }
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)TStack_460.AllocatorInstance.Data,TStack_460.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)TStack_460.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(TStack_460.AllocatorInstance.Data);
    }
  }
  iVar2 = (param_1->TargetAllowList).ArrayNum;
  if (iVar2 < 1) {
    uStack_380 = 0xf;
    pwStack_388 = L"TargetAllowList";
    TStack_168._12_4_ = uStack_37c;
    TStack_168.Size = 0xf;
    TStack_168.DataPtr = L"TargetAllowList";
    FJsonObject::RemoveField(param_2,&TStack_168);
  }
  else {
    pFVar13 = (param_1->TargetAllowList).AllocatorInstance.Data;
    TStack_648.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_648.ArrayNum = 0;
    TStack_648.ArrayMax = 0;
    pFVar14 = pFVar13 + iVar2;
    while( true ) {
      if ((param_1->TargetAllowList).ArrayNum != iVar2) {
        uStack_678 = 0;
        `TCheckedPointerIterator<enum_EBuildTargetType_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&uStack_678);
      }
      if (pFVar13 == pFVar14) break;
      FVar1 = *pFVar13;
      pTVar9 = ::operator_new(0x20);
      if (pTVar9 == (TJsonValueString<wchar_t> *)0x0) {
        pTVar9 = (TJsonValueString<wchar_t> *)0x0;
      }
      else {
        pwVar8 = ::LexToString((EBuildTargetType)FVar1);
        ::FString::FString(&FStack_588,pwVar8);
        bVar5 = true;
        FJsonValue::FJsonValue((FJsonValue *)pTVar9);
        pTVar9->_padding_ = (longlong)&___7__TJsonValueString__W__6B_;
        (pTVar9->Value).Data.AllocatorInstance.Data = FStack_588.Data.AllocatorInstance.Data;
        FStack_588.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pTVar9->Value).Data.ArrayNum = FStack_588.Data.ArrayNum;
        (pTVar9->Value).Data.ArrayMax = FStack_588.Data.ArrayMax;
        FStack_588.Data.ArrayNum = 0;
        FStack_588.Data.ArrayMax = 0;
        *(EJson *)&pTVar9->_padding_ = String;
      }
      TStack_4b8.Object = pTVar9;
      TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><TJsonValueString<wchar_t>_>
                (&TStack_598,&TStack_4b8);
      if (((TStack_648.AllocatorInstance.Data <= &TStack_598) &&
          (&TStack_598 <
           (TSharedPtr<FJsonValue,1> *)
           (TStack_648.AllocatorInstance.Data + (longlong)TStack_648.ArrayMax * 0x10))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = TStack_648.ArrayNum;
      if (TStack_648.ArrayNum == TStack_648.ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&TStack_648.AllocatorInstance,&TStack_648.ArrayMax);
      }
      TStack_648.ArrayNum = iVar6 + 1;
      *(FJsonValue **)&TStack_648.AllocatorInstance.Data[(longlong)iVar6 * 0x10].field_0x0 =
           TStack_598.Object;
      *(TReferenceControllerBase<1> **)
       (TStack_648.AllocatorInstance.Data + (longlong)iVar6 * 0x10 + 8) =
           TStack_598.SharedReferenceCount.ReferenceController;
      TStack_598.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      TStack_598.Object = (FJsonValue *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if ((bVar5) &&
         (bVar5 = false, FStack_588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
      {
        FMemory::Free(FStack_588.Data.AllocatorInstance.Data);
      }
      pFVar13 = pFVar13 + 1;
    }
    ::FString::FString(&FStack_398,L"TargetAllowList");
    param_2 = pFStackX_10;
    FJsonObject::SetArrayField(pFStackX_10,&FStack_398,&TStack_648);
    if (FStack_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_398.Data.AllocatorInstance.Data);
    }
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)TStack_648.AllocatorInstance.Data,TStack_648.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)TStack_648.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(TStack_648.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
  iVar2 = (param_1->TargetDenyList).ArrayNum;
  if (iVar2 < 1) {
    uStack_360 = 0xe;
    pwStack_368 = L"TargetDenyList";
    TStack_158._12_4_ = uStack_35c;
    TStack_158.Size = 0xe;
    TStack_158.DataPtr = L"TargetDenyList";
    FJsonObject::RemoveField(param_2,&TStack_158);
  }
  else {
    pFVar13 = (param_1->TargetDenyList).AllocatorInstance.Data;
    TStack_638.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_638.ArrayNum = 0;
    TStack_638.ArrayMax = 0;
    pFVar14 = pFVar13 + iVar2;
    while( true ) {
      if ((param_1->TargetDenyList).ArrayNum != iVar2) {
        uStack_677 = 0;
        `TCheckedPointerIterator<enum_EBuildTargetType_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&uStack_677);
      }
      if (pFVar13 == pFVar14) break;
      FVar1 = *pFVar13;
      pTVar9 = ::operator_new(0x20);
      if (pTVar9 == (TJsonValueString<wchar_t> *)0x0) {
        pTVar9 = (TJsonValueString<wchar_t> *)0x0;
      }
      else {
        pwVar8 = ::LexToString((EBuildTargetType)FVar1);
        ::FString::FString(&FStack_568,pwVar8);
        bVar5 = true;
        FJsonValue::FJsonValue((FJsonValue *)pTVar9);
        pTVar9->_padding_ = (longlong)&___7__TJsonValueString__W__6B_;
        (pTVar9->Value).Data.AllocatorInstance.Data = FStack_568.Data.AllocatorInstance.Data;
        FStack_568.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pTVar9->Value).Data.ArrayNum = FStack_568.Data.ArrayNum;
        (pTVar9->Value).Data.ArrayMax = FStack_568.Data.ArrayMax;
        FStack_568.Data.ArrayNum = 0;
        FStack_568.Data.ArrayMax = 0;
        *(EJson *)&pTVar9->_padding_ = String;
      }
      TStack_4b0.Object = pTVar9;
      TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><TJsonValueString<wchar_t>_>
                (&TStack_578,&TStack_4b0);
      if (((TStack_638.AllocatorInstance.Data <= &TStack_578) &&
          (&TStack_578 <
           (TSharedPtr<FJsonValue,1> *)
           (TStack_638.AllocatorInstance.Data + (longlong)TStack_638.ArrayMax * 0x10))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = TStack_638.ArrayNum;
      if (TStack_638.ArrayNum == TStack_638.ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&TStack_638.AllocatorInstance,&TStack_638.ArrayMax);
      }
      TStack_638.ArrayNum = iVar6 + 1;
      *(FJsonValue **)&TStack_638.AllocatorInstance.Data[(longlong)iVar6 * 0x10].field_0x0 =
           TStack_578.Object;
      *(TReferenceControllerBase<1> **)
       (TStack_638.AllocatorInstance.Data + (longlong)iVar6 * 0x10 + 8) =
           TStack_578.SharedReferenceCount.ReferenceController;
      TStack_578.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      TStack_578.Object = (FJsonValue *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if ((bVar5) &&
         (bVar5 = false, FStack_568.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
      {
        FMemory::Free(FStack_568.Data.AllocatorInstance.Data);
      }
      pFVar13 = pFVar13 + 1;
    }
    ::FString::FString(&FStack_378,L"TargetDenyList");
    param_2 = pFStackX_10;
    FJsonObject::SetArrayField(pFStackX_10,&FStack_378,&TStack_638);
    if (FStack_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_378.Data.AllocatorInstance.Data);
    }
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)TStack_638.AllocatorInstance.Data,TStack_638.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)TStack_638.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(TStack_638.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
  iVar2 = (param_1->TargetConfigurationAllowList).ArrayNum;
  if (iVar2 < 1) {
    uStack_340 = 0x1c;
    pwStack_348 = L"TargetConfigurationAllowList";
    TStack_148._12_4_ = uStack_33c;
    TStack_148.Size = 0x1c;
    TStack_148.DataPtr = L"TargetConfigurationAllowList";
    FJsonObject::RemoveField(param_2,&TStack_148);
  }
  else {
    pFVar13 = (param_1->TargetConfigurationAllowList).AllocatorInstance.Data;
    TStack_5d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_5d8.ArrayNum = 0;
    TStack_5d8.ArrayMax = 0;
    pFVar14 = pFVar13 + iVar2;
    while( true ) {
      if ((param_1->TargetConfigurationAllowList).ArrayNum != iVar2) {
        uStack_676 = 0;
        `TCheckedPointerIterator<enum_EBuildConfiguration_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&uStack_676);
      }
      if (pFVar13 == pFVar14) break;
      FVar1 = *pFVar13;
      pTVar9 = ::operator_new(0x20);
      if (pTVar9 == (TJsonValueString<wchar_t> *)0x0) {
        pTVar9 = (TJsonValueString<wchar_t> *)0x0;
      }
      else {
        pwVar8 = ::LexToString((EBuildConfiguration)FVar1);
        ::FString::FString(&FStack_548,pwVar8);
        bVar5 = true;
        FJsonValue::FJsonValue((FJsonValue *)pTVar9);
        pTVar9->_padding_ = (longlong)&___7__TJsonValueString__W__6B_;
        (pTVar9->Value).Data.AllocatorInstance.Data = FStack_548.Data.AllocatorInstance.Data;
        FStack_548.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pTVar9->Value).Data.ArrayNum = FStack_548.Data.ArrayNum;
        (pTVar9->Value).Data.ArrayMax = FStack_548.Data.ArrayMax;
        FStack_548.Data.ArrayNum = 0;
        FStack_548.Data.ArrayMax = 0;
        *(EJson *)&pTVar9->_padding_ = String;
      }
      TStack_4a8.Object = pTVar9;
      TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><TJsonValueString<wchar_t>_>
                (&TStack_558,&TStack_4a8);
      if (((TStack_5d8.AllocatorInstance.Data <= &TStack_558) &&
          (&TStack_558 <
           (TSharedPtr<FJsonValue,1> *)
           (TStack_5d8.AllocatorInstance.Data + (longlong)TStack_5d8.ArrayMax * 0x10))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = TStack_5d8.ArrayNum;
      if (TStack_5d8.ArrayNum == TStack_5d8.ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&TStack_5d8.AllocatorInstance,&TStack_5d8.ArrayMax);
      }
      TStack_5d8.ArrayNum = iVar6 + 1;
      *(FJsonValue **)&TStack_5d8.AllocatorInstance.Data[(longlong)iVar6 * 0x10].field_0x0 =
           TStack_558.Object;
      *(TReferenceControllerBase<1> **)
       (TStack_5d8.AllocatorInstance.Data + (longlong)iVar6 * 0x10 + 8) =
           TStack_558.SharedReferenceCount.ReferenceController;
      TStack_558.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      TStack_558.Object = (FJsonValue *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if ((bVar5) &&
         (bVar5 = false, FStack_548.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
      {
        FMemory::Free(FStack_548.Data.AllocatorInstance.Data);
      }
      pFVar13 = pFVar13 + 1;
    }
    ::FString::FString(&FStack_358,L"TargetConfigurationAllowList");
    param_2 = pFStackX_10;
    FJsonObject::SetArrayField(pFStackX_10,&FStack_358,&TStack_5d8);
    if (FStack_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_358.Data.AllocatorInstance.Data);
    }
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)TStack_5d8.AllocatorInstance.Data,TStack_5d8.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)TStack_5d8.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(TStack_5d8.AllocatorInstance.Data);
    }
  }
  bVar5 = false;
  iVar2 = (param_1->TargetConfigurationDenyList).ArrayNum;
  if (iVar2 < 1) {
    uStack_320 = 0x1b;
    pwStack_328 = L"TargetConfigurationDenyList";
    TStack_138._12_4_ = uStack_31c;
    TStack_138.Size = 0x1b;
    TStack_138.DataPtr = L"TargetConfigurationDenyList";
    FJsonObject::RemoveField(param_2,&TStack_138);
  }
  else {
    pFVar13 = (param_1->TargetConfigurationDenyList).AllocatorInstance.Data;
    TStack_608.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_608.ArrayNum = 0;
    TStack_608.ArrayMax = 0;
    pFVar14 = pFVar13 + iVar2;
    while( true ) {
      if ((param_1->TargetConfigurationDenyList).ArrayNum != iVar2) {
        uStack_675 = 0;
        `TCheckedPointerIterator<enum_EBuildConfiguration_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&uStack_675);
      }
      if (pFVar13 == pFVar14) break;
      FVar1 = *pFVar13;
      pTVar9 = ::operator_new(0x20);
      if (pTVar9 == (TJsonValueString<wchar_t> *)0x0) {
        pTVar9 = (TJsonValueString<wchar_t> *)0x0;
      }
      else {
        pwVar8 = ::LexToString((EBuildConfiguration)FVar1);
        ::FString::FString(&FStack_528,pwVar8);
        bVar5 = true;
        FJsonValue::FJsonValue((FJsonValue *)pTVar9);
        pTVar9->_padding_ = (longlong)&___7__TJsonValueString__W__6B_;
        (pTVar9->Value).Data.AllocatorInstance.Data = FStack_528.Data.AllocatorInstance.Data;
        FStack_528.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pTVar9->Value).Data.ArrayNum = FStack_528.Data.ArrayNum;
        (pTVar9->Value).Data.ArrayMax = FStack_528.Data.ArrayMax;
        FStack_528.Data.ArrayNum = 0;
        FStack_528.Data.ArrayMax = 0;
        *(EJson *)&pTVar9->_padding_ = String;
      }
      TStack_480.Object = pTVar9;
      TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><TJsonValueString<wchar_t>_>
                (&TStack_538,&TStack_480);
      if (((TStack_608.AllocatorInstance.Data <= &TStack_538) &&
          (&TStack_538 <
           (TSharedPtr<FJsonValue,1> *)
           (TStack_608.AllocatorInstance.Data + (longlong)TStack_608.ArrayMax * 0x10))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = TStack_608.ArrayNum;
      if (TStack_608.ArrayNum == TStack_608.ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&TStack_608.AllocatorInstance,&TStack_608.ArrayMax);
      }
      TStack_608.ArrayNum = iVar6 + 1;
      *(FJsonValue **)&TStack_608.AllocatorInstance.Data[(longlong)iVar6 * 0x10].field_0x0 =
           TStack_538.Object;
      *(TReferenceControllerBase<1> **)
       (TStack_608.AllocatorInstance.Data + (longlong)iVar6 * 0x10 + 8) =
           TStack_538.SharedReferenceCount.ReferenceController;
      TStack_538.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      TStack_538.Object = (FJsonValue *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if ((bVar5) &&
         (bVar5 = false, FStack_528.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
      {
        FMemory::Free(FStack_528.Data.AllocatorInstance.Data);
      }
      pFVar13 = pFVar13 + 1;
    }
    ::FString::FString(&FStack_338,L"TargetConfigurationDenyList");
    param_2 = pFStackX_10;
    FJsonObject::SetArrayField(pFStackX_10,&FStack_338,&TStack_608);
    if (FStack_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_338.Data.AllocatorInstance.Data);
    }
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)TStack_608.AllocatorInstance.Data,TStack_608.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)TStack_608.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(TStack_608.AllocatorInstance.Data);
    }
  }
  iVar2 = (param_1->ProgramAllowList).ArrayNum;
  if (iVar2 < 1) {
    uStack_300 = 0x10;
    pwStack_308 = L"ProgramAllowList";
    TStack_128._12_4_ = uStack_2fc;
    TStack_128.Size = 0x10;
    TStack_128.DataPtr = L"ProgramAllowList";
    FJsonObject::RemoveField(param_2,&TStack_128);
  }
  else {
    pFVar14 = (param_1->ProgramAllowList).AllocatorInstance.Data;
    TStack_5f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar13 = pFVar14 + (longlong)iVar2 * 0x10;
    TStack_5f8.ArrayNum = 0;
    TStack_5f8.ArrayMax = 0;
    while( true ) {
      if ((param_1->ProgramAllowList).ArrayNum != iVar2) {
        uStack_674 = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&uStack_674);
      }
      if (pFVar14 == pFVar13) break;
      pTVar11 = ::operator_new(0x20);
      pTVar9 = (TJsonValueString<wchar_t> *)0x0;
      if (pTVar11 != (TJsonValueString<wchar_t> *)0x0) {
        FJsonValue::FJsonValue((FJsonValue *)pTVar11);
        pTVar11->_padding_ = (longlong)&___7__TJsonValueString__W__6B_;
        ::FString::FString(&pTVar11->Value,(FString *)pFVar14);
        *(EJson *)&pTVar11->_padding_ = String;
        pTVar9 = pTVar11;
      }
      TStack_4a0.Object = pTVar9;
      TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><TJsonValueString<wchar_t>_>
                (&TStack_518,&TStack_4a0);
      if (((TStack_5f8.AllocatorInstance.Data <= &TStack_518) &&
          (&TStack_518 <
           (TSharedPtr<FJsonValue,1> *)
           (TStack_5f8.AllocatorInstance.Data + (longlong)TStack_5f8.ArrayMax * 0x10))) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = TStack_5f8.ArrayNum;
      if (TStack_5f8.ArrayNum == TStack_5f8.ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&TStack_5f8.AllocatorInstance,&TStack_5f8.ArrayMax);
      }
      TStack_5f8.ArrayNum = iVar6 + 1;
      *(FJsonValue **)&TStack_5f8.AllocatorInstance.Data[(longlong)iVar6 * 0x10].field_0x0 =
           TStack_518.Object;
      *(TReferenceControllerBase<1> **)
       (TStack_5f8.AllocatorInstance.Data + (longlong)iVar6 * 0x10 + 8) =
           TStack_518.SharedReferenceCount.ReferenceController;
      TStack_518.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      TStack_518.Object = (FJsonValue *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      pFVar14 = pFVar14 + 0x10;
    }
    ::FString::FString(&FStack_318,L"ProgramAllowList");
    param_2 = pFStackX_10;
    FJsonObject::SetArrayField(pFStackX_10,&FStack_318,&TStack_5f8);
    if (FStack_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_318.Data.AllocatorInstance.Data);
    }
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)TStack_5f8.AllocatorInstance.Data,TStack_5f8.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)TStack_5f8.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(TStack_5f8.AllocatorInstance.Data);
    }
  }
  iVar2 = (param_1->ProgramDenyList).ArrayNum;
  if (iVar2 < 1) {
    uStack_2e0 = 0xf;
    pwStack_2e8 = L"ProgramDenyList";
    TStack_118._12_4_ = uStack_2dc;
    TStack_118.Size = 0xf;
    TStack_118.DataPtr = L"ProgramDenyList";
    FJsonObject::RemoveField(param_2,&TStack_118);
  }
  else {
    pFVar14 = (param_1->ProgramDenyList).AllocatorInstance.Data;
    pFVar13 = pFVar14 + (longlong)iVar2 * 0x10;
    TStack_5e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_5e8.ArrayNum = 0;
    TStack_5e8.ArrayMax = 0;
    while( true ) {
      if ((param_1->ProgramDenyList).ArrayNum != iVar2) {
        uStack_673 = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&uStack_673);
      }
      if (pFVar14 == pFVar13) break;
      pTVar11 = ::operator_new(0x20);
      pTVar9 = (TJsonValueString<wchar_t> *)0x0;
      if (pTVar11 != (TJsonValueString<wchar_t> *)0x0) {
        FJsonValue::FJsonValue((FJsonValue *)pTVar11);
        pTVar11->_padding_ = (longlong)&___7__TJsonValueString__W__6B_;
        ::FString::FString(&pTVar11->Value,(FString *)pFVar14);
        *(EJson *)&pTVar11->_padding_ = String;
        pTVar9 = pTVar11;
      }
      TStack_498.Object = pTVar9;
      TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><TJsonValueString<wchar_t>_>
                (&TStack_508,&TStack_498);
      if (((TStack_5e8.AllocatorInstance.Data <= &TStack_508) &&
          (&TStack_508 <
           (TSharedPtr<FJsonValue,1> *)
           (TStack_5e8.AllocatorInstance.Data + (longlong)TStack_5e8.ArrayMax * 0x10))) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = TStack_5e8.ArrayNum;
      if (TStack_5e8.ArrayNum == TStack_5e8.ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&TStack_5e8.AllocatorInstance,&TStack_5e8.ArrayMax);
      }
      TStack_5e8.ArrayNum = iVar6 + 1;
      *(FJsonValue **)&TStack_5e8.AllocatorInstance.Data[(longlong)iVar6 * 0x10].field_0x0 =
           TStack_508.Object;
      *(TReferenceControllerBase<1> **)
       (TStack_5e8.AllocatorInstance.Data + (longlong)iVar6 * 0x10 + 8) =
           TStack_508.SharedReferenceCount.ReferenceController;
      TStack_508.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      TStack_508.Object = (FJsonValue *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      pFVar14 = pFVar14 + 0x10;
    }
    ::FString::FString(&FStack_2f8,L"ProgramDenyList");
    param_2 = pFStackX_10;
    FJsonObject::SetArrayField(pFStackX_10,&FStack_2f8,&TStack_5e8);
    if (FStack_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_2f8.Data.AllocatorInstance.Data);
    }
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)TStack_5e8.AllocatorInstance.Data,TStack_5e8.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)TStack_5e8.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(TStack_5e8.AllocatorInstance.Data);
    }
  }
  pTVar9 = (TJsonValueString<wchar_t> *)0x0;
  if ((param_1->GameTargetAllowList).ArrayNum < 1) {
    uStack_2c0 = 0x13;
    pwStack_2c8 = L"GameTargetAllowList";
    TStack_108._12_4_ = uStack_2bc;
    TStack_108.Size = 0x13;
    TStack_108.DataPtr = L"GameTargetAllowList";
    FJsonObject::RemoveField(param_2,&TStack_108);
  }
  else {
    iVar2 = (param_1->ProgramAllowList).ArrayNum;
    pFVar14 = (param_1->ProgramAllowList).AllocatorInstance.Data;
    pFVar13 = pFVar14 + (longlong)iVar2 * 0x10;
    TStack_618.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_618.ArrayNum = 0;
    TStack_618.ArrayMax = 0;
    while( true ) {
      if ((param_1->ProgramAllowList).ArrayNum != iVar2) {
        uStack_672 = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&uStack_672);
      }
      if (pFVar14 == pFVar13) break;
      pTVar12 = ::operator_new(0x20);
      pTVar11 = pTVar9;
      if (pTVar12 != (TJsonValueString<wchar_t> *)0x0) {
        FJsonValue::FJsonValue((FJsonValue *)pTVar12);
        pTVar12->_padding_ = (longlong)&___7__TJsonValueString__W__6B_;
        ::FString::FString(&pTVar12->Value,(FString *)pFVar14);
        *(EJson *)&pTVar12->_padding_ = String;
        pTVar11 = pTVar12;
      }
      TStack_490.Object = pTVar11;
      TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><TJsonValueString<wchar_t>_>
                (&TStack_4f8,&TStack_490);
      if (((TStack_618.AllocatorInstance.Data <= &TStack_4f8) &&
          (&TStack_4f8 <
           (TSharedPtr<FJsonValue,1> *)
           (TStack_618.AllocatorInstance.Data + (longlong)TStack_618.ArrayMax * 0x10))) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = TStack_618.ArrayNum;
      if (TStack_618.ArrayNum == TStack_618.ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&TStack_618.AllocatorInstance,&TStack_618.ArrayMax);
      }
      TStack_618.ArrayNum = iVar6 + 1;
      *(FJsonValue **)&TStack_618.AllocatorInstance.Data[(longlong)iVar6 * 0x10].field_0x0 =
           TStack_4f8.Object;
      *(TReferenceControllerBase<1> **)
       (TStack_618.AllocatorInstance.Data + (longlong)iVar6 * 0x10 + 8) =
           TStack_4f8.SharedReferenceCount.ReferenceController;
      TStack_4f8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      TStack_4f8.Object = (FJsonValue *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      pFVar14 = pFVar14 + 0x10;
    }
    ::FString::FString(&FStack_2d8,L"GameTargetAllowList");
    param_2 = pFStackX_10;
    FJsonObject::SetArrayField(pFStackX_10,&FStack_2d8,&TStack_618);
    if (FStack_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_2d8.Data.AllocatorInstance.Data);
    }
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)TStack_618.AllocatorInstance.Data,TStack_618.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)TStack_618.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(TStack_618.AllocatorInstance.Data);
    }
  }
  if ((param_1->GameTargetDenyList).ArrayNum < 1) {
    uStack_2a0 = 0x12;
    pwStack_2a8 = L"GameTargetDenyList";
    TStack_f8._12_4_ = uStack_29c;
    TStack_f8.Size = 0x12;
    TStack_f8.DataPtr = L"GameTargetDenyList";
    FJsonObject::RemoveField(param_2,&TStack_f8);
  }
  else {
    iVar2 = (param_1->ProgramDenyList).ArrayNum;
    pFVar14 = (param_1->ProgramDenyList).AllocatorInstance.Data;
    pFVar13 = pFVar14 + (longlong)iVar2 * 0x10;
    TStack_5c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_5c8.ArrayNum = 0;
    TStack_5c8.ArrayMax = 0;
    while( true ) {
      if ((param_1->ProgramDenyList).ArrayNum != iVar2) {
        uStack_671 = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&uStack_671);
      }
      if (pFVar14 == pFVar13) break;
      pTVar12 = ::operator_new(0x20);
      pTVar11 = pTVar9;
      if (pTVar12 != (TJsonValueString<wchar_t> *)0x0) {
        FJsonValue::FJsonValue((FJsonValue *)pTVar12);
        pTVar12->_padding_ = (longlong)&___7__TJsonValueString__W__6B_;
        ::FString::FString(&pTVar12->Value,(FString *)pFVar14);
        *(EJson *)&pTVar12->_padding_ = String;
        pTVar11 = pTVar12;
      }
      TStack_478.Object = pTVar11;
      TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><TJsonValueString<wchar_t>_>
                (&TStack_4e8,&TStack_478);
      if (((TStack_5c8.AllocatorInstance.Data <= &TStack_4e8) &&
          (&TStack_4e8 <
           (TSharedPtr<FJsonValue,1> *)
           (TStack_5c8.AllocatorInstance.Data + (longlong)TStack_5c8.ArrayMax * 0x10))) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = TStack_5c8.ArrayNum;
      if (TStack_5c8.ArrayNum == TStack_5c8.ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&TStack_5c8.AllocatorInstance,&TStack_5c8.ArrayMax);
      }
      TStack_5c8.ArrayNum = iVar6 + 1;
      *(FJsonValue **)&TStack_5c8.AllocatorInstance.Data[(longlong)iVar6 * 0x10].field_0x0 =
           TStack_4e8.Object;
      *(TReferenceControllerBase<1> **)
       (TStack_5c8.AllocatorInstance.Data + (longlong)iVar6 * 0x10 + 8) =
           TStack_4e8.SharedReferenceCount.ReferenceController;
      TStack_4e8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      TStack_4e8.Object = (FJsonValue *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      pFVar14 = pFVar14 + 0x10;
    }
    ::FString::FString(&FStack_2b8,L"GameTargetDenyList");
    param_2 = pFStackX_10;
    FJsonObject::SetArrayField(pFStackX_10,&FStack_2b8,&TStack_5c8);
    if (FStack_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_2b8.Data.AllocatorInstance.Data);
    }
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)TStack_5c8.AllocatorInstance.Data,TStack_5c8.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)TStack_5c8.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(TStack_5c8.AllocatorInstance.Data);
    }
  }
  iVar2 = (param_1->AdditionalDependencies).ArrayNum;
  if (iVar2 < 1) {
    uStack_280 = 0x16;
    pwStack_288 = L"AdditionalDependencies";
    TStack_e8._12_4_ = uStack_27c;
    TStack_e8.Size = 0x16;
    TStack_e8.DataPtr = L"AdditionalDependencies";
    FJsonObject::RemoveField(param_2,&TStack_e8);
  }
  else {
    pFVar14 = (param_1->AdditionalDependencies).AllocatorInstance.Data;
    TStack_628.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar13 = pFVar14 + (longlong)iVar2 * 0x10;
    TStack_628.ArrayNum = 0;
    TStack_628.ArrayMax = 0;
    while( true ) {
      if ((param_1->AdditionalDependencies).ArrayNum != iVar2) {
        auStack_670[0] = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (auStack_670);
      }
      if (pFVar14 == pFVar13) break;
      pTVar12 = ::operator_new(0x20);
      pTVar11 = pTVar9;
      if (pTVar12 != (TJsonValueString<wchar_t> *)0x0) {
        FJsonValue::FJsonValue((FJsonValue *)pTVar12);
        pTVar12->_padding_ = (longlong)&___7__TJsonValueString__W__6B_;
        ::FString::FString(&pTVar12->Value,(FString *)pFVar14);
        *(EJson *)&pTVar12->_padding_ = String;
        pTVar11 = pTVar12;
      }
      TStack_488.Object = pTVar11;
      TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><TJsonValueString<wchar_t>_>
                (&TStack_4d8,&TStack_488);
      if (((TStack_628.AllocatorInstance.Data <= &TStack_4d8) &&
          (&TStack_4d8 <
           (TSharedPtr<FJsonValue,1> *)
           (TStack_628.AllocatorInstance.Data + (longlong)TStack_628.ArrayMax * 0x10))) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = TStack_628.ArrayNum;
      if (TStack_628.ArrayNum == TStack_628.ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&TStack_628.AllocatorInstance,&TStack_628.ArrayMax);
      }
      TStack_628.ArrayNum = iVar6 + 1;
      *(FJsonValue **)&TStack_628.AllocatorInstance.Data[(longlong)iVar6 * 0x10].field_0x0 =
           TStack_4d8.Object;
      *(TReferenceControllerBase<1> **)
       (TStack_628.AllocatorInstance.Data + (longlong)iVar6 * 0x10 + 8) =
           TStack_4d8.SharedReferenceCount.ReferenceController;
      TStack_4d8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      TStack_4d8.Object = (FJsonValue *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      pFVar14 = pFVar14 + 0x10;
    }
    ::FString::FString(&FStack_298,L"AdditionalDependencies");
    param_2 = pFStackX_10;
    FJsonObject::SetArrayField(pFStackX_10,&FStack_298,&TStack_628);
    if (FStack_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_298.Data.AllocatorInstance.Data);
    }
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)TStack_628.AllocatorInstance.Data,TStack_628.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)TStack_628.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(TStack_628.AllocatorInstance.Data);
    }
  }
  bVar5 = param_1->bHasExplicitPlatforms;
  if (bVar5 == false) {
    uStack_260 = 0x14;
    pwStack_268 = L"HasExplicitPlatforms";
    TStack_d8._12_4_ = uStack_25c;
    TStack_d8.Size = 0x14;
    TStack_d8.DataPtr = L"HasExplicitPlatforms";
    FJsonObject::RemoveField(param_2,&TStack_d8);
  }
  else {
    ::FString::FString(&FStack_278,L"HasExplicitPlatforms");
    FJsonObject::SetBoolField(param_2,&FStack_278,bVar5);
    if (FStack_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_278.Data.AllocatorInstance.Data);
    }
  }
  uStack_250 = 0x12;
  pwStack_258 = L"WhitelistPlatforms";
  TStack_c8._12_4_ = uStack_24c;
  TStack_c8.Size = 0x12;
  TStack_c8.DataPtr = L"WhitelistPlatforms";
  FJsonObject::RemoveField(param_2,&TStack_c8);
  uStack_240 = 0x12;
  pwStack_248 = L"BlacklistPlatforms";
  TStack_b8._12_4_ = uStack_23c;
  TStack_b8.Size = 0x12;
  TStack_b8.DataPtr = L"BlacklistPlatforms";
  FJsonObject::RemoveField(param_2,&TStack_b8);
  uStack_230 = 0x10;
  pwStack_238 = L"WhitelistTargets";
  TStack_a8._12_4_ = uStack_22c;
  TStack_a8.Size = 0x10;
  TStack_a8.DataPtr = L"WhitelistTargets";
  FJsonObject::RemoveField(param_2,&TStack_a8);
  uStack_220 = 0x10;
  pwStack_228 = L"BlacklistTargets";
  TStack_98._12_4_ = uStack_21c;
  TStack_98.Size = 0x10;
  TStack_98.DataPtr = L"BlacklistTargets";
  FJsonObject::RemoveField(param_2,&TStack_98);
  uStack_210 = 0x1d;
  pwStack_218 = L"WhitelistTargetConfigurations";
  TStack_88._12_4_ = uStack_20c;
  TStack_88.Size = 0x1d;
  TStack_88.DataPtr = L"WhitelistTargetConfigurations";
  FJsonObject::RemoveField(param_2,&TStack_88);
  uStack_200 = 0x1d;
  pwStack_208 = L"BlacklistTargetConfigurations";
  TStack_78._12_4_ = uStack_1fc;
  TStack_78.Size = 0x1d;
  TStack_78.DataPtr = L"BlacklistTargetConfigurations";
  FJsonObject::RemoveField(param_2,&TStack_78);
  uStack_1f0 = 0x11;
  pwStack_1f8 = L"WhitelistPrograms";
  TStack_68._12_4_ = uStack_1ec;
  TStack_68.Size = 0x11;
  TStack_68.DataPtr = L"WhitelistPrograms";
  FJsonObject::RemoveField(param_2,&TStack_68);
  uStack_1e0 = 0x11;
  pwStack_1e8 = L"BlacklistPrograms";
  TStack_58._12_4_ = uStack_1dc;
  TStack_58.Size = 0x11;
  TStack_58.DataPtr = L"BlacklistPrograms";
  FJsonObject::RemoveField(param_2,&TStack_58);
  return;
}

// UpdatePluginRefJsonObject @ 141e44710

void __cdecl
PluginDisallowedDescriptor::UpdatePluginRefJsonObject
          (FPluginDisallowedDescriptor *param_1,FJsonObject *param_2)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"Name");
  FJsonObject::SetStringField(param_2,&local_18,&param_1->Name);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// UpdatePluginRefJsonObject @ 141e44770

void __cdecl
PluginReferenceDescriptor::UpdatePluginRefJsonObject
          (FPluginReferenceDescriptor *param_1,FJsonObject *param_2)

{
  FScriptContainerElement FVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  TJsonValueString<wchar_t> *pTVar6;
  wchar_t *pwVar7;
  TJsonValueString<wchar_t> *this;
  int iVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  uint auStackX_8 [2];
  FJsonObject *pFStackX_10;
  undefined1 auStackX_18 [8];
  undefined1 auStackX_20 [8];
  undefined1 uStack_508;
  undefined1 uStack_507;
  undefined1 uStack_506;
  undefined1 auStack_505 [5];
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> TStack_500;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> TStack_4f0;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> TStack_4e0;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> TStack_4d0;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> TStack_4c0;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> TStack_4b0;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> TStack_4a0;
  TSharedPtr<FJsonValue,1> TStack_490;
  TSharedPtr<FJsonValue,1> TStack_480;
  TSharedPtr<FJsonValue,1> TStack_470;
  FString FStack_460;
  TSharedPtr<FJsonValue,1> TStack_450;
  FString FStack_440;
  TSharedPtr<FJsonValue,1> TStack_430;
  FString FStack_420;
  TSharedPtr<FJsonValue,1> TStack_410;
  FString FStack_400;
  TSharedPtr<FJsonValue,1> TStack_3f0;
  TRawPtrProxy<TJsonValueString<wchar_t>_> TStack_3e0;
  TRawPtrProxy<TJsonValueString<wchar_t>_> TStack_3d8;
  TRawPtrProxy<TJsonValueString<wchar_t>_> TStack_3d0;
  TRawPtrProxy<TJsonValueString<wchar_t>_> TStack_3c8;
  TRawPtrProxy<TJsonValueString<wchar_t>_> TStack_3c0;
  TRawPtrProxy<TJsonValueString<wchar_t>_> TStack_3b8;
  TRawPtrProxy<TJsonValueString<wchar_t>_> TStack_3b0;
  FString FStack_3a8;
  FString FStack_398;
  FString FStack_388;
  wchar_t *pwStack_378;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  FString FStack_368;
  wchar_t *pwStack_358;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  FString FStack_348;
  wchar_t *pwStack_338;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  FString FStack_328;
  wchar_t *pwStack_318;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  FString FStack_308;
  wchar_t *pwStack_2f8;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  FString FStack_2e8;
  wchar_t *pwStack_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  FString FStack_2c8;
  wchar_t *pwStack_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  FString FStack_2a8;
  wchar_t *pwStack_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  FString FStack_288;
  wchar_t *pwStack_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  FString FStack_268;
  wchar_t *pwStack_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  FString FStack_248;
  wchar_t *pwStack_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  FString FStack_228;
  wchar_t *pwStack_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  FString FStack_208;
  wchar_t *pwStack_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  wchar_t *pwStack_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  wchar_t *pwStack_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  wchar_t *pwStack_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  wchar_t *pwStack_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  wchar_t *pwStack_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  wchar_t *pwStack_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  TStringView<wchar_t> TStack_188;
  TStringView<wchar_t> TStack_178;
  TStringView<wchar_t> TStack_168;
  TStringView<wchar_t> TStack_158;
  TStringView<wchar_t> TStack_148;
  TStringView<wchar_t> TStack_138;
  TStringView<wchar_t> TStack_128;
  TStringView<wchar_t> TStack_118;
  TStringView<wchar_t> TStack_108;
  TStringView<wchar_t> TStack_f8;
  TStringView<wchar_t> TStack_e8;
  TStringView<wchar_t> TStack_d8;
  TStringView<wchar_t> TStack_c8;
  TStringView<wchar_t> TStack_b8;
  TStringView<wchar_t> TStack_a8;
  TStringView<wchar_t> TStack_98;
  TStringView<wchar_t> TStack_88;
  TStringView<wchar_t> TStack_78;
  TStringView<wchar_t> aTStack_68 [2];
  
  bVar4 = false;
  auStackX_8[0] = 0;
  pFStackX_10 = param_2;
  ::FString::FString(&FStack_3a8,L"Name");
  FJsonObject::SetStringField(param_2,&FStack_3a8,&param_1->Name);
  if (FStack_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3a8.Data.AllocatorInstance.Data);
  }
  bVar3 = param_1->bEnabled;
  ::FString::FString(&FStack_398,L"Enabled");
  FJsonObject::SetBoolField(param_2,&FStack_398,bVar3);
  if (FStack_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_398.Data.AllocatorInstance.Data);
  }
  bVar3 = param_1->bActivate;
  if (bVar3 == false) {
    uStack_370 = 8;
    pwStack_378 = L"Activate";
    TStack_188._12_4_ = uStack_36c;
    TStack_188.Size = 8;
    TStack_188.DataPtr = L"Activate";
    FJsonObject::RemoveField(param_2,&TStack_188);
  }
  else {
    ::FString::FString(&FStack_388,L"Activate");
    FJsonObject::SetBoolField(param_2,&FStack_388,bVar3);
    if (FStack_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_388.Data.AllocatorInstance.Data);
    }
  }
  if ((param_1->bEnabled == false) || (bVar3 = param_1->bOptional, bVar3 == false)) {
    uStack_350 = 8;
    pwStack_358 = L"Optional";
    TStack_178._12_4_ = uStack_34c;
    TStack_178.Size = 8;
    TStack_178.DataPtr = L"Optional";
    FJsonObject::RemoveField(param_2,&TStack_178);
  }
  else {
    ::FString::FString(&FStack_368,L"Optional");
    FJsonObject::SetBoolField(param_2,&FStack_368,bVar3);
    if (FStack_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_368.Data.AllocatorInstance.Data);
    }
  }
  iVar5 = (param_1->Description).Data.ArrayNum;
  iVar8 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar8 = 0;
  }
  if (iVar8 < 1) {
    uStack_330 = 0xb;
    pwStack_338 = L"Description";
    TStack_168._12_4_ = uStack_32c;
    TStack_168.Size = 0xb;
    TStack_168.DataPtr = L"Description";
    FJsonObject::RemoveField(param_2,&TStack_168);
  }
  else {
    ::FString::FString(&FStack_348,L"Description");
    FJsonObject::SetStringField(param_2,&FStack_348,&param_1->Description);
    if (FStack_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_348.Data.AllocatorInstance.Data);
    }
  }
  iVar5 = (param_1->MarketplaceURL).Data.ArrayNum;
  iVar8 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar8 = 0;
  }
  if (iVar8 < 1) {
    uStack_310 = 0xe;
    pwStack_318 = L"MarketplaceURL";
    TStack_158._12_4_ = uStack_30c;
    TStack_158.Size = 0xe;
    TStack_158.DataPtr = L"MarketplaceURL";
    FJsonObject::RemoveField(param_2,&TStack_158);
  }
  else {
    ::FString::FString(&FStack_328,L"MarketplaceURL");
    FJsonObject::SetStringField(param_2,&FStack_328,&param_1->MarketplaceURL);
    if (FStack_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_328.Data.AllocatorInstance.Data);
    }
  }
  iVar8 = (param_1->PlatformAllowList).ArrayNum;
  if (iVar8 < 1) {
    uStack_2f0 = 0x11;
    pwStack_2f8 = L"PlatformAllowList";
    TStack_148._12_4_ = uStack_2ec;
    TStack_148.Size = 0x11;
    TStack_148.DataPtr = L"PlatformAllowList";
    FJsonObject::RemoveField(param_2,&TStack_148);
  }
  else {
    pFVar10 = (param_1->PlatformAllowList).AllocatorInstance.Data;
    TStack_500.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar9 = pFVar10 + (longlong)iVar8 * 0x10;
    TStack_500.ArrayNum = 0;
    TStack_500.ArrayMax = 0;
    while( true ) {
      if ((param_1->PlatformAllowList).ArrayNum != iVar8) {
        auStackX_8[0] = auStackX_8[0] & 0xffffff00;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (auStackX_8);
      }
      if (pFVar10 == pFVar9) break;
      pTVar6 = ::operator_new(0x20);
      if (pTVar6 == (TJsonValueString<wchar_t> *)0x0) {
        pTVar6 = (TJsonValueString<wchar_t> *)0x0;
      }
      else {
        FJsonValue::FJsonValue((FJsonValue *)pTVar6);
        pTVar6->_padding_ = (longlong)&___7__TJsonValueString__W__6B_;
        ::FString::FString(&pTVar6->Value,(FString *)pFVar10);
        *(EJson *)&pTVar6->_padding_ = String;
      }
      TStack_3e0.Object = pTVar6;
      TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><TJsonValueString<wchar_t>_>
                (&TStack_480,&TStack_3e0);
      if (((TStack_500.AllocatorInstance.Data <= &TStack_480) &&
          (&TStack_480 <
           (TSharedPtr<FJsonValue,1> *)
           (TStack_500.AllocatorInstance.Data + (longlong)TStack_500.ArrayMax * 0x10))) &&
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
      iVar5 = TStack_500.ArrayNum;
      if (TStack_500.ArrayNum == TStack_500.ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&TStack_500.AllocatorInstance,&TStack_500.ArrayMax);
      }
      TStack_500.ArrayNum = iVar5 + 1;
      *(FJsonValue **)&TStack_500.AllocatorInstance.Data[(longlong)iVar5 * 0x10].field_0x0 =
           TStack_480.Object;
      *(TReferenceControllerBase<1> **)
       (TStack_500.AllocatorInstance.Data + (longlong)iVar5 * 0x10 + 8) =
           TStack_480.SharedReferenceCount.ReferenceController;
      TStack_480.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      TStack_480.Object = (FJsonValue *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      pFVar10 = pFVar10 + 0x10;
    }
    ::FString::FString(&FStack_308,L"PlatformAllowList");
    param_2 = pFStackX_10;
    FJsonObject::SetArrayField(pFStackX_10,&FStack_308,&TStack_500);
    if (FStack_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_308.Data.AllocatorInstance.Data);
    }
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)TStack_500.AllocatorInstance.Data,TStack_500.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)TStack_500.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(TStack_500.AllocatorInstance.Data);
    }
  }
  iVar8 = (param_1->PlatformDenyList).ArrayNum;
  if (iVar8 < 1) {
    uStack_2d0 = 0x10;
    pwStack_2d8 = L"PlatformDenyList";
    TStack_138._12_4_ = uStack_2cc;
    TStack_138.Size = 0x10;
    TStack_138.DataPtr = L"PlatformDenyList";
    FJsonObject::RemoveField(param_2,&TStack_138);
  }
  else {
    pFVar10 = (param_1->PlatformDenyList).AllocatorInstance.Data;
    pFVar9 = pFVar10 + (longlong)iVar8 * 0x10;
    TStack_4f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_4f0.ArrayNum = 0;
    TStack_4f0.ArrayMax = 0;
    while( true ) {
      if ((param_1->PlatformDenyList).ArrayNum != iVar8) {
        auStackX_18[0] = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (auStackX_18);
      }
      if (pFVar10 == pFVar9) break;
      pTVar6 = ::operator_new(0x20);
      if (pTVar6 == (TJsonValueString<wchar_t> *)0x0) {
        pTVar6 = (TJsonValueString<wchar_t> *)0x0;
      }
      else {
        FJsonValue::FJsonValue((FJsonValue *)pTVar6);
        pTVar6->_padding_ = (longlong)&___7__TJsonValueString__W__6B_;
        ::FString::FString(&pTVar6->Value,(FString *)pFVar10);
        *(EJson *)&pTVar6->_padding_ = String;
      }
      TStack_3d8.Object = pTVar6;
      TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><TJsonValueString<wchar_t>_>
                (&TStack_470,&TStack_3d8);
      if (((TStack_4f0.AllocatorInstance.Data <= &TStack_470) &&
          (&TStack_470 <
           (TSharedPtr<FJsonValue,1> *)
           (TStack_4f0.AllocatorInstance.Data + (longlong)TStack_4f0.ArrayMax * 0x10))) &&
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
      iVar5 = TStack_4f0.ArrayNum;
      if (TStack_4f0.ArrayNum == TStack_4f0.ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&TStack_4f0.AllocatorInstance,&TStack_4f0.ArrayMax);
      }
      TStack_4f0.ArrayNum = iVar5 + 1;
      *(FJsonValue **)&TStack_4f0.AllocatorInstance.Data[(longlong)iVar5 * 0x10].field_0x0 =
           TStack_470.Object;
      *(TReferenceControllerBase<1> **)
       (TStack_4f0.AllocatorInstance.Data + (longlong)iVar5 * 0x10 + 8) =
           TStack_470.SharedReferenceCount.ReferenceController;
      TStack_470.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      TStack_470.Object = (FJsonValue *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      pFVar10 = pFVar10 + 0x10;
    }
    ::FString::FString(&FStack_2e8,L"PlatformDenyList");
    param_2 = pFStackX_10;
    FJsonObject::SetArrayField(pFStackX_10,&FStack_2e8,&TStack_4f0);
    if (FStack_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_2e8.Data.AllocatorInstance.Data);
    }
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)TStack_4f0.AllocatorInstance.Data,TStack_4f0.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)TStack_4f0.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(TStack_4f0.AllocatorInstance.Data);
    }
  }
  iVar8 = (param_1->TargetConfigurationAllowList).ArrayNum;
  if (iVar8 < 1) {
    uStack_2b0 = 0x1c;
    pwStack_2b8 = L"TargetConfigurationAllowList";
    TStack_128._12_4_ = uStack_2ac;
    TStack_128.Size = 0x1c;
    TStack_128.DataPtr = L"TargetConfigurationAllowList";
    FJsonObject::RemoveField(param_2,&TStack_128);
  }
  else {
    pFVar9 = (param_1->TargetConfigurationAllowList).AllocatorInstance.Data;
    TStack_4e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_4e0.ArrayNum = 0;
    TStack_4e0.ArrayMax = 0;
    pFVar10 = pFVar9 + iVar8;
    while( true ) {
      if ((param_1->TargetConfigurationAllowList).ArrayNum != iVar8) {
        auStackX_20[0] = 0;
        `TCheckedPointerIterator<enum_EBuildConfiguration_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(auStackX_20);
      }
      if (pFVar9 == pFVar10) break;
      FVar1 = *pFVar9;
      pTVar6 = ::operator_new(0x20);
      if (pTVar6 == (TJsonValueString<wchar_t> *)0x0) {
        pTVar6 = (TJsonValueString<wchar_t> *)0x0;
      }
      else {
        pwVar7 = ::LexToString((EBuildConfiguration)FVar1);
        ::FString::FString(&FStack_460,pwVar7);
        bVar4 = true;
        FJsonValue::FJsonValue((FJsonValue *)pTVar6);
        pTVar6->_padding_ = (longlong)&___7__TJsonValueString__W__6B_;
        (pTVar6->Value).Data.AllocatorInstance.Data = FStack_460.Data.AllocatorInstance.Data;
        FStack_460.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pTVar6->Value).Data.ArrayNum = FStack_460.Data.ArrayNum;
        (pTVar6->Value).Data.ArrayMax = FStack_460.Data.ArrayMax;
        FStack_460.Data.ArrayNum = 0;
        FStack_460.Data.ArrayMax = 0;
        *(EJson *)&pTVar6->_padding_ = String;
      }
      TStack_3d0.Object = pTVar6;
      TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><TJsonValueString<wchar_t>_>
                (&TStack_490,&TStack_3d0);
      if (((TStack_4e0.AllocatorInstance.Data <= &TStack_490) &&
          (&TStack_490 <
           (TSharedPtr<FJsonValue,1> *)
           (TStack_4e0.AllocatorInstance.Data + (longlong)TStack_4e0.ArrayMax * 0x10))) &&
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
      iVar5 = TStack_4e0.ArrayNum;
      if (TStack_4e0.ArrayNum == TStack_4e0.ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&TStack_4e0.AllocatorInstance,&TStack_4e0.ArrayMax);
      }
      TStack_4e0.ArrayNum = iVar5 + 1;
      *(FJsonValue **)&TStack_4e0.AllocatorInstance.Data[(longlong)iVar5 * 0x10].field_0x0 =
           TStack_490.Object;
      *(TReferenceControllerBase<1> **)
       (TStack_4e0.AllocatorInstance.Data + (longlong)iVar5 * 0x10 + 8) =
           TStack_490.SharedReferenceCount.ReferenceController;
      TStack_490.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      TStack_490.Object = (FJsonValue *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if ((bVar4) &&
         (bVar4 = false, FStack_460.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
      {
        FMemory::Free(FStack_460.Data.AllocatorInstance.Data);
      }
      pFVar9 = pFVar9 + 1;
    }
    ::FString::FString(&FStack_2c8,L"TargetConfigurationAllowList");
    param_2 = pFStackX_10;
    FJsonObject::SetArrayField(pFStackX_10,&FStack_2c8,&TStack_4e0);
    if (FStack_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_2c8.Data.AllocatorInstance.Data);
    }
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)TStack_4e0.AllocatorInstance.Data,TStack_4e0.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)TStack_4e0.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(TStack_4e0.AllocatorInstance.Data);
    }
  }
  bVar4 = false;
  iVar8 = (param_1->TargetConfigurationDenyList).ArrayNum;
  if (iVar8 < 1) {
    uStack_290 = 0x1b;
    pwStack_298 = L"TargetConfigurationDenyList";
    TStack_118._12_4_ = uStack_28c;
    TStack_118.Size = 0x1b;
    TStack_118.DataPtr = L"TargetConfigurationDenyList";
    FJsonObject::RemoveField(param_2,&TStack_118);
  }
  else {
    pFVar9 = (param_1->TargetConfigurationDenyList).AllocatorInstance.Data;
    TStack_4d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_4d0.ArrayNum = 0;
    TStack_4d0.ArrayMax = 0;
    pFVar10 = pFVar9 + iVar8;
    while( true ) {
      if ((param_1->TargetConfigurationDenyList).ArrayNum != iVar8) {
        uStack_508 = 0;
        `TCheckedPointerIterator<enum_EBuildConfiguration_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&uStack_508);
      }
      if (pFVar9 == pFVar10) break;
      FVar1 = *pFVar9;
      pTVar6 = ::operator_new(0x20);
      if (pTVar6 == (TJsonValueString<wchar_t> *)0x0) {
        pTVar6 = (TJsonValueString<wchar_t> *)0x0;
      }
      else {
        pwVar7 = ::LexToString((EBuildConfiguration)FVar1);
        ::FString::FString(&FStack_440,pwVar7);
        bVar4 = true;
        FJsonValue::FJsonValue((FJsonValue *)pTVar6);
        pTVar6->_padding_ = (longlong)&___7__TJsonValueString__W__6B_;
        (pTVar6->Value).Data.AllocatorInstance.Data = FStack_440.Data.AllocatorInstance.Data;
        FStack_440.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pTVar6->Value).Data.ArrayNum = FStack_440.Data.ArrayNum;
        (pTVar6->Value).Data.ArrayMax = FStack_440.Data.ArrayMax;
        FStack_440.Data.ArrayNum = 0;
        FStack_440.Data.ArrayMax = 0;
        *(EJson *)&pTVar6->_padding_ = String;
      }
      TStack_3c8.Object = pTVar6;
      TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><TJsonValueString<wchar_t>_>
                (&TStack_450,&TStack_3c8);
      if (((TStack_4d0.AllocatorInstance.Data <= &TStack_450) &&
          (&TStack_450 <
           (TSharedPtr<FJsonValue,1> *)
           (TStack_4d0.AllocatorInstance.Data + (longlong)TStack_4d0.ArrayMax * 0x10))) &&
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
      iVar5 = TStack_4d0.ArrayNum;
      if (TStack_4d0.ArrayNum == TStack_4d0.ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&TStack_4d0.AllocatorInstance,&TStack_4d0.ArrayMax);
      }
      TStack_4d0.ArrayNum = iVar5 + 1;
      *(FJsonValue **)&TStack_4d0.AllocatorInstance.Data[(longlong)iVar5 * 0x10].field_0x0 =
           TStack_450.Object;
      *(TReferenceControllerBase<1> **)
       (TStack_4d0.AllocatorInstance.Data + (longlong)iVar5 * 0x10 + 8) =
           TStack_450.SharedReferenceCount.ReferenceController;
      TStack_450.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      TStack_450.Object = (FJsonValue *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if ((bVar4) &&
         (bVar4 = false, FStack_440.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
      {
        FMemory::Free(FStack_440.Data.AllocatorInstance.Data);
      }
      pFVar9 = pFVar9 + 1;
    }
    ::FString::FString(&FStack_2a8,L"TargetConfigurationDenyList");
    param_2 = pFStackX_10;
    FJsonObject::SetArrayField(pFStackX_10,&FStack_2a8,&TStack_4d0);
    if (FStack_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_2a8.Data.AllocatorInstance.Data);
    }
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)TStack_4d0.AllocatorInstance.Data,TStack_4d0.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)TStack_4d0.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(TStack_4d0.AllocatorInstance.Data);
    }
  }
  bVar4 = false;
  iVar8 = (param_1->TargetAllowList).ArrayNum;
  if (iVar8 < 1) {
    uStack_270 = 0xf;
    pwStack_278 = L"TargetAllowList";
    TStack_108._12_4_ = uStack_26c;
    TStack_108.Size = 0xf;
    TStack_108.DataPtr = L"TargetAllowList";
    FJsonObject::RemoveField(param_2,&TStack_108);
  }
  else {
    pFVar9 = (param_1->TargetAllowList).AllocatorInstance.Data;
    TStack_4c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_4c0.ArrayNum = 0;
    TStack_4c0.ArrayMax = 0;
    pFVar10 = pFVar9 + iVar8;
    while( true ) {
      if ((param_1->TargetAllowList).ArrayNum != iVar8) {
        uStack_507 = 0;
        `TCheckedPointerIterator<enum_EBuildTargetType_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&uStack_507);
      }
      if (pFVar9 == pFVar10) break;
      FVar1 = *pFVar9;
      pTVar6 = ::operator_new(0x20);
      if (pTVar6 == (TJsonValueString<wchar_t> *)0x0) {
        pTVar6 = (TJsonValueString<wchar_t> *)0x0;
      }
      else {
        pwVar7 = ::LexToString((EBuildTargetType)FVar1);
        ::FString::FString(&FStack_420,pwVar7);
        bVar4 = true;
        FJsonValue::FJsonValue((FJsonValue *)pTVar6);
        pTVar6->_padding_ = (longlong)&___7__TJsonValueString__W__6B_;
        (pTVar6->Value).Data.AllocatorInstance.Data = FStack_420.Data.AllocatorInstance.Data;
        FStack_420.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pTVar6->Value).Data.ArrayNum = FStack_420.Data.ArrayNum;
        (pTVar6->Value).Data.ArrayMax = FStack_420.Data.ArrayMax;
        FStack_420.Data.ArrayNum = 0;
        FStack_420.Data.ArrayMax = 0;
        *(EJson *)&pTVar6->_padding_ = String;
      }
      TStack_3c0.Object = pTVar6;
      TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><TJsonValueString<wchar_t>_>
                (&TStack_430,&TStack_3c0);
      if (((TStack_4c0.AllocatorInstance.Data <= &TStack_430) &&
          (&TStack_430 <
           (TSharedPtr<FJsonValue,1> *)
           (TStack_4c0.AllocatorInstance.Data + (longlong)TStack_4c0.ArrayMax * 0x10))) &&
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
      iVar5 = TStack_4c0.ArrayNum;
      if (TStack_4c0.ArrayNum == TStack_4c0.ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&TStack_4c0.AllocatorInstance,&TStack_4c0.ArrayMax);
      }
      TStack_4c0.ArrayNum = iVar5 + 1;
      *(FJsonValue **)&TStack_4c0.AllocatorInstance.Data[(longlong)iVar5 * 0x10].field_0x0 =
           TStack_430.Object;
      *(TReferenceControllerBase<1> **)
       (TStack_4c0.AllocatorInstance.Data + (longlong)iVar5 * 0x10 + 8) =
           TStack_430.SharedReferenceCount.ReferenceController;
      TStack_430.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      TStack_430.Object = (FJsonValue *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if ((bVar4) &&
         (bVar4 = false, FStack_420.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
      {
        FMemory::Free(FStack_420.Data.AllocatorInstance.Data);
      }
      pFVar9 = pFVar9 + 1;
    }
    ::FString::FString(&FStack_288,L"TargetAllowList");
    param_2 = pFStackX_10;
    FJsonObject::SetArrayField(pFStackX_10,&FStack_288,&TStack_4c0);
    if (FStack_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_288.Data.AllocatorInstance.Data);
    }
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)TStack_4c0.AllocatorInstance.Data,TStack_4c0.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)TStack_4c0.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(TStack_4c0.AllocatorInstance.Data);
    }
  }
  bVar4 = false;
  iVar8 = (param_1->TargetDenyList).ArrayNum;
  if (iVar8 < 1) {
    uStack_250 = 0xe;
    pwStack_258 = L"TargetDenyList";
    TStack_f8._12_4_ = uStack_24c;
    TStack_f8.Size = 0xe;
    TStack_f8.DataPtr = L"TargetDenyList";
    FJsonObject::RemoveField(param_2,&TStack_f8);
  }
  else {
    pFVar9 = (param_1->TargetDenyList).AllocatorInstance.Data;
    TStack_4b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_4b0.ArrayNum = 0;
    TStack_4b0.ArrayMax = 0;
    pFVar10 = pFVar9 + iVar8;
    while( true ) {
      if ((param_1->TargetDenyList).ArrayNum != iVar8) {
        uStack_506 = 0;
        `TCheckedPointerIterator<enum_EBuildTargetType_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&uStack_506);
      }
      if (pFVar9 == pFVar10) break;
      FVar1 = *pFVar9;
      pTVar6 = ::operator_new(0x20);
      if (pTVar6 == (TJsonValueString<wchar_t> *)0x0) {
        pTVar6 = (TJsonValueString<wchar_t> *)0x0;
      }
      else {
        pwVar7 = ::LexToString((EBuildTargetType)FVar1);
        ::FString::FString(&FStack_400,pwVar7);
        bVar4 = true;
        FJsonValue::FJsonValue((FJsonValue *)pTVar6);
        pTVar6->_padding_ = (longlong)&___7__TJsonValueString__W__6B_;
        (pTVar6->Value).Data.AllocatorInstance.Data = FStack_400.Data.AllocatorInstance.Data;
        FStack_400.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pTVar6->Value).Data.ArrayNum = FStack_400.Data.ArrayNum;
        (pTVar6->Value).Data.ArrayMax = FStack_400.Data.ArrayMax;
        FStack_400.Data.ArrayNum = 0;
        FStack_400.Data.ArrayMax = 0;
        *(EJson *)&pTVar6->_padding_ = String;
      }
      TStack_3b8.Object = pTVar6;
      TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><TJsonValueString<wchar_t>_>
                (&TStack_410,&TStack_3b8);
      if (((TStack_4b0.AllocatorInstance.Data <= &TStack_410) &&
          (&TStack_410 <
           (TSharedPtr<FJsonValue,1> *)
           (TStack_4b0.AllocatorInstance.Data + (longlong)TStack_4b0.ArrayMax * 0x10))) &&
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
      iVar5 = TStack_4b0.ArrayNum;
      if (TStack_4b0.ArrayNum == TStack_4b0.ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&TStack_4b0.AllocatorInstance,&TStack_4b0.ArrayMax);
      }
      TStack_4b0.ArrayNum = iVar5 + 1;
      *(FJsonValue **)&TStack_4b0.AllocatorInstance.Data[(longlong)iVar5 * 0x10].field_0x0 =
           TStack_410.Object;
      *(TReferenceControllerBase<1> **)
       (TStack_4b0.AllocatorInstance.Data + (longlong)iVar5 * 0x10 + 8) =
           TStack_410.SharedReferenceCount.ReferenceController;
      TStack_410.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      TStack_410.Object = (FJsonValue *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if ((bVar4) &&
         (bVar4 = false, FStack_400.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
      {
        FMemory::Free(FStack_400.Data.AllocatorInstance.Data);
      }
      pFVar9 = pFVar9 + 1;
    }
    ::FString::FString(&FStack_268,L"TargetDenyList");
    param_2 = pFStackX_10;
    FJsonObject::SetArrayField(pFStackX_10,&FStack_268,&TStack_4b0);
    if (FStack_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_268.Data.AllocatorInstance.Data);
    }
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)TStack_4b0.AllocatorInstance.Data,TStack_4b0.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)TStack_4b0.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(TStack_4b0.AllocatorInstance.Data);
    }
  }
  iVar8 = (param_1->SupportedTargetPlatforms).ArrayNum;
  if (iVar8 < 1) {
    uStack_230 = 0x18;
    pwStack_238 = L"SupportedTargetPlatforms";
    TStack_e8._12_4_ = uStack_22c;
    TStack_e8.Size = 0x18;
    TStack_e8.DataPtr = L"SupportedTargetPlatforms";
    FJsonObject::RemoveField(param_2,&TStack_e8);
  }
  else {
    pFVar10 = (param_1->SupportedTargetPlatforms).AllocatorInstance.Data;
    pFVar9 = pFVar10 + (longlong)iVar8 * 0x10;
    TStack_4a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_4a0.ArrayNum = 0;
    TStack_4a0.ArrayMax = 0;
    while( true ) {
      if ((param_1->SupportedTargetPlatforms).ArrayNum != iVar8) {
        auStack_505[0] = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (auStack_505);
      }
      if (pFVar10 == pFVar9) break;
      this = ::operator_new(0x20);
      pTVar6 = (TJsonValueString<wchar_t> *)0x0;
      if (this != (TJsonValueString<wchar_t> *)0x0) {
        FJsonValue::FJsonValue((FJsonValue *)this);
        this->_padding_ = (longlong)&___7__TJsonValueString__W__6B_;
        ::FString::FString(&this->Value,(FString *)pFVar10);
        *(EJson *)&this->_padding_ = String;
        pTVar6 = this;
      }
      TStack_3b0.Object = pTVar6;
      TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><TJsonValueString<wchar_t>_>
                (&TStack_3f0,&TStack_3b0);
      if (((TStack_4a0.AllocatorInstance.Data <= &TStack_3f0) &&
          (&TStack_3f0 <
           (TSharedPtr<FJsonValue,1> *)
           (TStack_4a0.AllocatorInstance.Data + (longlong)TStack_4a0.ArrayMax * 0x10))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = TStack_4a0.ArrayNum;
      if (TStack_4a0.ArrayNum == TStack_4a0.ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&TStack_4a0.AllocatorInstance,&TStack_4a0.ArrayMax);
      }
      TStack_4a0.ArrayNum = iVar5 + 1;
      *(FJsonValue **)&TStack_4a0.AllocatorInstance.Data[(longlong)iVar5 * 0x10].field_0x0 =
           TStack_3f0.Object;
      *(TReferenceControllerBase<1> **)
       (TStack_4a0.AllocatorInstance.Data + (longlong)iVar5 * 0x10 + 8) =
           TStack_3f0.SharedReferenceCount.ReferenceController;
      TStack_3f0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      TStack_3f0.Object = (FJsonValue *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      pFVar10 = pFVar10 + 0x10;
    }
    ::FString::FString(&FStack_248,L"SupportedTargetPlatforms");
    param_2 = pFStackX_10;
    FJsonObject::SetArrayField(pFStackX_10,&FStack_248,&TStack_4a0);
    if (FStack_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_248.Data.AllocatorInstance.Data);
    }
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)TStack_4a0.AllocatorInstance.Data,TStack_4a0.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)TStack_4a0.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(TStack_4a0.AllocatorInstance.Data);
    }
  }
  bVar4 = param_1->bHasExplicitPlatforms;
  if (bVar4 == false) {
    uStack_210 = 0x14;
    pwStack_218 = L"HasExplicitPlatforms";
    TStack_d8._12_4_ = uStack_20c;
    TStack_d8.Size = 0x14;
    TStack_d8.DataPtr = L"HasExplicitPlatforms";
    FJsonObject::RemoveField(param_2,&TStack_d8);
  }
  else {
    ::FString::FString(&FStack_228,L"HasExplicitPlatforms");
    FJsonObject::SetBoolField(param_2,&FStack_228,bVar4);
    if (FStack_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_228.Data.AllocatorInstance.Data);
    }
  }
  if ((param_1->bEnabled == false) || ((param_1->RequestedVersion).bIsSet == false)) {
    uStack_1f0 = 7;
    pwStack_1f8 = L"Version";
    TStack_c8._12_4_ = uStack_1ec;
    TStack_c8.Size = 7;
    TStack_c8.DataPtr = L"Version";
    FJsonObject::RemoveField(param_2,&TStack_c8);
  }
  else {
    iVar8 = (param_1->RequestedVersion).TypedValue;
    ::FString::FString(&FStack_208,L"Version");
    FJsonObject::SetNumberField(param_2,&FStack_208,(double)iVar8);
    if (FStack_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_208.Data.AllocatorInstance.Data);
    }
  }
  uStack_1e0 = 0x12;
  pwStack_1e8 = L"WhitelistPlatforms";
  TStack_b8._12_4_ = uStack_1dc;
  TStack_b8.Size = 0x12;
  TStack_b8.DataPtr = L"WhitelistPlatforms";
  FJsonObject::RemoveField(param_2,&TStack_b8);
  uStack_1d0 = 0x12;
  pwStack_1d8 = L"BlacklistPlatforms";
  TStack_a8._12_4_ = uStack_1cc;
  TStack_a8.Size = 0x12;
  TStack_a8.DataPtr = L"BlacklistPlatforms";
  FJsonObject::RemoveField(param_2,&TStack_a8);
  uStack_1c0 = 0x1d;
  pwStack_1c8 = L"WhitelistTargetConfigurations";
  TStack_98._12_4_ = uStack_1bc;
  TStack_98.Size = 0x1d;
  TStack_98.DataPtr = L"WhitelistTargetConfigurations";
  FJsonObject::RemoveField(param_2,&TStack_98);
  uStack_1b0 = 0x1d;
  pwStack_1b8 = L"BlacklistTargetConfigurations";
  TStack_88._12_4_ = uStack_1ac;
  TStack_88.Size = 0x1d;
  TStack_88.DataPtr = L"BlacklistTargetConfigurations";
  FJsonObject::RemoveField(param_2,&TStack_88);
  uStack_1a0 = 0x10;
  pwStack_1a8 = L"WhitelistTargets";
  TStack_78._12_4_ = uStack_19c;
  TStack_78.Size = 0x10;
  TStack_78.DataPtr = L"WhitelistTargets";
  FJsonObject::RemoveField(param_2,&TStack_78);
  uStack_190 = 0x10;
  pwStack_198 = L"BlacklistTargets";
  aTStack_68[0]._12_4_ = uStack_18c;
  aTStack_68[0].Size = 0x10;
  aTStack_68[0].DataPtr = L"BlacklistTargets";
  FJsonObject::RemoveField(param_2,aTStack_68);
  return;
}

// VerifySinglePluginForAddOrRemove @ 141e449c0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __cdecl VerifySinglePluginForAddOrRemove(FPluginDescriptor *param_1,FText *param_2)

{
  bool bVar1;
  FText *pFVar2;
  FText *pFVar3;
  FTextFormat *pFVar4;
  FPluginDescriptor *local_res8;
  FText local_48;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  if (param_1->bIsPluginExtension != false) {
    local_res8 = param_1;
    bVar1 = `VerifySinglePluginForAddOrRemove'::__l3::<lambda_1>::operator()(&local_res8);
    if (!bVar1) {
      pFVar2 = FText::FromString(&local_28,&param_1->FriendlyName);
      pFVar3 = FText::AsLocalizable_Advanced_LocText
                         (&local_38,L"PluginManager",L"PluginIsExtension",
                          L"Plugin \'{0}\' is a platform extension");
      pFVar4 = FTextFormat::FTextFormat(&local_18,pFVar3,Default);
      pFVar2 = FText::Format<FText>(&local_48,pFVar4,pFVar2);
      FText::operator=(param_2,pFVar2);
      if (local_48.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
      }
      if (local_38.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
      }
      return false;
    }
  }
  return true;
}

// begin @ 141e47090

GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> * __thiscall
rapidjson::
GenericArray<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
::begin(GenericArray<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
        *this)

{
  code *pcVar1;
  bool bVar2;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *pGVar3;
  
  pGVar3 = this->value_;
  if ((pGVar3->data_).f.flags != 4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsArray()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                       ,0x696,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pGVar3 = (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               (*pcVar1)();
      return pGVar3;
    }
  }
  return (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
         ((ulonglong)(pGVar3->data_).s.str & 0xffffffffffff);
}

// end @ 141e470f0

GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> * __thiscall
rapidjson::
GenericArray<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
::end(GenericArray<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
      *this)

{
  code *pcVar1;
  bool bVar2;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *pGVar3;
  
  pGVar3 = this->value_;
  if ((pGVar3->data_).f.flags != 4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsArray()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                       ,0x699,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pGVar3 = (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               (*pcVar1)();
      return pGVar3;
    }
  }
  return (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
         ((ulonglong)(pGVar3->data_).s.length * 0x10 +
         ((ulonglong)(pGVar3->data_).s.str & 0xffffffffffff));
}

// IMPLEMENT_MODULE_Projects @ 141e47150

void __cdecl IMPLEMENT_MODULE_Projects(void)

{
  return;
}

// AsyncUpdateTask'' @ 15034cd50

void __cdecl `dynamic_atexit_destructor_for_'FProjectEditorRecord::AsyncUpdateTask__(void)

{
  undefined1 *puVar1;
  int iVar2;
  TRefCountPtr<FBaseGraphTask> TVar3;
  
  TVar3.Reference = FProjectEditorRecord::AsyncUpdateTask.Reference;
  if (FProjectEditorRecord::AsyncUpdateTask.Reference != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar1 = &(FProjectEditorRecord::AsyncUpdateTask.Reference)->field_0x30;
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (TVar3.Reference != (FBaseGraphTask *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00015034cd78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)**(undefined8 **)TVar3.Reference)(TVar3.Reference,1);
      return;
    }
  }
  return;
}

// BaseDirProperty'' @ 15034cd90

void __cdecl `dynamic_atexit_destructor_for_'FProjectEditorRecord::BaseDirProperty__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FProjectEditorRecord::BaseDirProperty.Data.AllocatorInstance.Data;
  if (FProjectEditorRecord::BaseDirProperty.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (FProjectEditorRecord::BaseDirProperty.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// CustomPluginDescriptorReaderDelegate'' @ 15034cdb0

void __cdecl
`dynamic_atexit_destructor_for_'FPluginDescriptor::CustomPluginDescriptorReaderDelegate__(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FPluginDescriptor::CustomPluginDescriptorReaderDelegate,(FWriteAccessScope *)&local_28
            );
  if ((FPluginDescriptor::CustomPluginDescriptorReaderDelegate._16_4_ != 0) &&
     (FPluginDescriptor::CustomPluginDescriptorReaderDelegate._8_8_ != 0)) {
    (*(code *)**(undefined8 **)FPluginDescriptor::CustomPluginDescriptorReaderDelegate._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)
               &FPluginDescriptor::CustomPluginDescriptorReaderDelegate.field_0x8,0,0,0x10);
    FPluginDescriptor::CustomPluginDescriptorReaderDelegate._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (FPluginDescriptor::CustomPluginDescriptorReaderDelegate._8_8_ != 0) {
    FMemory::Free((void *)FPluginDescriptor::CustomPluginDescriptorReaderDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &FPluginDescriptor::CustomPluginDescriptorReaderDelegate);
  return;
}

// EngineLocationProperty'' @ 15034ce50

void __cdecl `dynamic_atexit_destructor_for_'FProjectEditorRecord::EngineLocationProperty__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FProjectEditorRecord::EngineLocationProperty.Data.AllocatorInstance.Data;
  if (FProjectEditorRecord::EngineLocationProperty.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (FProjectEditorRecord::EngineLocationProperty.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// EpicAppProperty'' @ 15034ce70

void __cdecl `dynamic_atexit_destructor_for_'FProjectEditorRecord::EpicAppProperty__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FProjectEditorRecord::EpicAppProperty.Data.AllocatorInstance.Data;
  if (FProjectEditorRecord::EpicAppProperty.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (FProjectEditorRecord::EpicAppProperty.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// ProjectsProperty'' @ 15034ce90

void __cdecl `dynamic_atexit_destructor_for_'FProjectEditorRecord::ProjectsProperty__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FProjectEditorRecord::ProjectsProperty.Data.AllocatorInstance.Data;
  if (FProjectEditorRecord::ProjectsProperty.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (FProjectEditorRecord::ProjectsProperty.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// SubProjectProperty'' @ 15034ceb0

void __cdecl `dynamic_atexit_destructor_for_'FProjectEditorRecord::SubProjectProperty__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FProjectEditorRecord::SubProjectProperty.Data.AllocatorInstance.Data;
  if (FProjectEditorRecord::SubProjectProperty.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (FProjectEditorRecord::SubProjectProperty.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// TimestampProperty'' @ 15034ced0

void __cdecl `dynamic_atexit_destructor_for_'FProjectEditorRecord::TimestampProperty__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FProjectEditorRecord::TimestampProperty.Data.AllocatorInstance.Data;
  if (FProjectEditorRecord::TimestampProperty.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (FProjectEditorRecord::TimestampProperty.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'CVarProjectEngineLocationFile'' @ 15034cef0

void __cdecl
ProjectEditorRecords::_dynamic_atexit_destructor_for__CVarProjectEngineLocationFile__(void)

{
  CVarProjectEngineLocationFile._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarProjectEngineLocationFile);
  return;
}

// `dynamic_atexit_destructor_for_'Delegate'' @ 15034cf10

void __cdecl
`FPluginManager::GetExplanationForUnavailablePackageWithPluginInfoDelegate'::__l2::
_dynamic_atexit_destructor_for__Delegate__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)::Delegate._8_8_,
             ::Delegate._16_4_);
  if (::Delegate._8_8_ != 0) {
    FMemory::Free((void *)::Delegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&::Delegate);
  return;
}

// `dynamic_atexit_destructor_for_'EmptyList'' @ 15034cf50

void __cdecl
`FProjectManager::GetAdditionalPluginDirectories'::__l5::_dynamic_atexit_destructor_for__EmptyList__
          (void)

{
  DestructItems<FString,int>((FString *)EmptyList.AllocatorInstance.Data,EmptyList.ArrayNum);
  if (EmptyList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(EmptyList.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Engine'' @ 15034cf90

void __cdecl `EnumToString'::__l2::_dynamic_atexit_destructor_for__Engine__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = Engine.Data.AllocatorInstance.Data;
  if (Engine.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (Engine.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Enterprise'' @ 15034cfb0

void __cdecl `EnumToString'::__l2::_dynamic_atexit_destructor_for__Enterprise__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = Enterprise.Data.AllocatorInstance.Data;
  if (Enterprise.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (Enterprise.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'ErrorString'' @ 15034cfd0

void __cdecl `EnumToString'::__l2::_dynamic_atexit_destructor_for__ErrorString__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ErrorString.Data.AllocatorInstance.Data;
  if (ErrorString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ErrorString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Extension'' @ 15034cff0

void __cdecl
`FPluginDescriptor::GetFileExtension'::__l2::_dynamic_atexit_destructor_for__Extension__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = Extension.Data.AllocatorInstance.Data;
  if (Extension.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (Extension.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'External'' @ 15034d010

void __cdecl `EnumToString'::__l2::_dynamic_atexit_destructor_for__External__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = External.Data.AllocatorInstance.Data;
  if (External.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (External.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'FProjectsLoadingPluginDescriptorTestsInstance'' @ 15034d030

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FProjectsLoadingPluginDescriptorTestsInstance__(void)

{
  if (FProjectsLoadingPluginDescriptorTestsInstance.PrettyNameDotNotation.Data.AllocatorInstance.
      Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FProjectsLoadingPluginDescriptorTestsInstance.PrettyNameDotNotation.Data.
                  AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FProjectsLoadingPluginDescriptorTestsInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FProjectsLoadingProjectDescriptorTestsInstance'' @ 15034d060

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FProjectsLoadingProjectDescriptorTestsInstance__(void)

{
  if (FProjectsLoadingProjectDescriptorTestsInstance.PrettyNameDotNotation.Data.AllocatorInstance.
      Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FProjectsLoadingProjectDescriptorTestsInstance.PrettyNameDotNotation.Data.
                  AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FProjectsLoadingProjectDescriptorTestsInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FProjectsLoadingRapidJsonPluginLoadingInstance'' @ 15034d090

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FProjectsLoadingRapidJsonPluginLoadingInstance__(void)

{
  if (FProjectsLoadingRapidJsonPluginLoadingInstance.PrettyNameDotNotation.Data.AllocatorInstance.
      Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FProjectsLoadingRapidJsonPluginLoadingInstance.PrettyNameDotNotation.Data.
                  AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FProjectsLoadingRapidJsonPluginLoadingInstance);
  return;
}

// `dynamic_atexit_destructor_for_'LogPluginManager'' @ 15034d0c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogPluginManager__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogPluginManager);
  return;
}

// `dynamic_atexit_destructor_for_'LogProjectManager'' @ 15034d0e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogProjectManager__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogProjectManager);
  return;
}

// `dynamic_atexit_destructor_for_'LogRapidJsonPluginLoading'' @ 15034d100

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogRapidJsonPluginLoading__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogRapidJsonPluginLoading);
  return;
}

// `dynamic_atexit_destructor_for_'Mod'' @ 15034d120

void __cdecl `EnumToString'::__l2::_dynamic_atexit_destructor_for__Mod__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = Mod.Data.AllocatorInstance.Data;
  if (Mod.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (Mod.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'PluginManager'' @ 15034d140

void __cdecl `IPluginManager::Get'::__l2::_dynamic_atexit_destructor_for__PluginManager__(void)

{
  FPluginManager::~FPluginManager(&PluginManager);
  return;
}

// `dynamic_atexit_destructor_for_'Project'' @ 15034d160

void __cdecl `EnumToString'::__l2::_dynamic_atexit_destructor_for__Project__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = Project.Data.AllocatorInstance.Data;
  if (Project.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (Project.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'ProjectEngineLocationFile'' @ 15034d180

void __cdecl ProjectEditorRecords::_dynamic_atexit_destructor_for__ProjectEngineLocationFile__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ProjectEngineLocationFile.Data.AllocatorInstance.Data;
  if (ProjectEngineLocationFile.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ProjectEngineLocationFile.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'ProjectExtension'' @ 15034d1a0

void __cdecl
`FProjectDescriptor::GetExtension'::__l2::_dynamic_atexit_destructor_for__ProjectExtension__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ProjectExtension.Data.AllocatorInstance.Data;
  if (ProjectExtension.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ProjectExtension.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'RecentProjectFileName'' @ 15034d1c0

void __cdecl
`FProjectManager::GetAutoLoadProjectFileName'::__l2::
_dynamic_atexit_destructor_for__RecentProjectFileName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = RecentProjectFileName.Data.AllocatorInstance.Data;
  if (RecentProjectFileName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (RecentProjectFileName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// operator() @ 150480fc0

bool __thiscall
`DiscoveredPluginMapUtils::PromotePluginToOfferedVersion'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_8987629764537745065>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<_8987629764537745065>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504810e0

bool __thiscall `VerifySinglePluginForAddOrRemove'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8987629764537744810>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<_8987629764537744810>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

