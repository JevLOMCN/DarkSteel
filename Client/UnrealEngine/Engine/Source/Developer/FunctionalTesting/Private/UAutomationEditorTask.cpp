// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FunctionalTesting
// Functions: 11

// StaticClass @ 148c72500

UClass * __cdecl UAutomationEditorTask::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAutomationEditorTask.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FunctionalTesting",L"AutomationEditorTask",
               &Z_Registration_Info_UClass_UAutomationEditorTask.InnerSingleton,
               StaticRegisterNativesUAutomationEditorTask,0x30,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UAutomationEditorTask>,
               InternalVTableHelperCtorCaller<UAutomationEditorTask>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAutomationEditorTask.InnerSingleton;
}

// UAutomationEditorTask @ 148c7ffe0

UAutomationEditorTask * __thiscall
UAutomationEditorTask::UAutomationEditorTask(UAutomationEditorTask *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UAutomationEditorTask__6B_;
  (this->Task).Ptr = (FAutomationTaskStatusBase *)0x0;
  return this;
}

// UAutomationEditorTask @ 148c80010

UAutomationEditorTask * __thiscall
UAutomationEditorTask::UAutomationEditorTask
          (UAutomationEditorTask *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UAutomationEditorTask__6B_;
  (this->Task).Ptr = (FAutomationTaskStatusBase *)0x0;
  return this;
}

// ~UAutomationEditorTask @ 148c81140

void __thiscall UAutomationEditorTask::~UAutomationEditorTask(UAutomationEditorTask *this)

{
  FAutomationTaskStatusBase *pFVar1;
  
  pFVar1 = (this->Task).Ptr;
  if (pFVar1 != (FAutomationTaskStatusBase *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// BindTask @ 148c89ed0

void __thiscall
UAutomationEditorTask::BindTask
          (UAutomationEditorTask *this,
          TUniquePtr<FAutomationTaskStatusBase,TDefaultDelete<FAutomationTaskStatusBase>_> param_1)

{
  FAutomationTaskStatusBase *pFVar1;
  undefined8 *puVar2;
  TUniquePtr<FAutomationTaskStatusBase,TDefaultDelete<FAutomationTaskStatusBase>_> *pTVar3;
  
  pTVar3 = &this->Task;
  if ((FAutomationTaskStatusBase *)pTVar3 != param_1.Ptr) {
    pFVar1 = pTVar3->Ptr;
    pTVar3->Ptr = (FAutomationTaskStatusBase *)(param_1.Ptr)->_padding_;
    (param_1.Ptr)->_padding_ = 0;
    if (pFVar1 != (FAutomationTaskStatusBase *)0x0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
  }
  puVar2 = (undefined8 *)(param_1.Ptr)->_padding_;
  if (puVar2 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148c89f19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar2)(puVar2,1);
    return;
  }
  return;
}

// GetPrivateStaticClass @ 148c91800

UClass * __cdecl UAutomationEditorTask::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAutomationEditorTask.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FunctionalTesting",L"AutomationEditorTask",
               &Z_Registration_Info_UClass_UAutomationEditorTask.InnerSingleton,
               StaticRegisterNativesUAutomationEditorTask,0x30,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UAutomationEditorTask>,
               InternalVTableHelperCtorCaller<UAutomationEditorTask>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAutomationEditorTask.InnerSingleton;
}

// IsTaskDone @ 148c94250

bool __thiscall UAutomationEditorTask::IsTaskDone(UAutomationEditorTask *this)

{
  FAutomationTaskStatusBase *pFVar1;
  
  pFVar1 = (this->Task).Ptr;
  if ((pFVar1 != (FAutomationTaskStatusBase *)0x0) && (pFVar1->Done != false)) {
    return true;
  }
  return false;
}

// IsValidTask @ 148c942c0

bool __thiscall UAutomationEditorTask::IsValidTask(UAutomationEditorTask *this)

{
  return (this->Task).Ptr != (FAutomationTaskStatusBase *)0x0;
}

// StaticRegisterNativesUAutomationEditorTask @ 148c9d450

void __cdecl UAutomationEditorTask::StaticRegisterNativesUAutomationEditorTask(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UAutomationEditorTask_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execIsTaskDone @ 148ca9240

void __cdecl UAutomationEditorTask::execIsTaskDone(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*(longlong *)(param_1 + 1) != 0) && (*(char *)(*(longlong *)(param_1 + 1) + 8) != '\0')) {
    *(undefined1 *)param_3 = 1;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execIsValidTask @ 148ca9280

void __cdecl UAutomationEditorTask::execIsValidTask(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = *(longlong *)(param_1 + 1) != 0;
  return;
}

