// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InstallBundleManager
// Functions: 4

// FAsyncTask<InstallBundleUtil::FInstallBundleWork><TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(void)>_> @ 148bbc7c0

FAsyncTask<InstallBundleUtil::FInstallBundleWork> * __thiscall
FAsyncTask<InstallBundleUtil::FInstallBundleWork>::
FAsyncTask<InstallBundleUtil::FInstallBundleWork><TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(void)>_>
          (FAsyncTask<InstallBundleUtil::FInstallBundleWork> *this,
          TUniqueFunction<void___cdecl(void)> *param_1,TUniqueFunction<void___cdecl(void)> *param_2)

{
  TStatId TVar1;
  TUniqueFunction<void___cdecl(void)> local_68;
  TUniqueFunction<void___cdecl(void)> local_38;
  
  *(undefined2 *)&this->_padding_ = 3;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FAsyncTaskBase__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&TStatId::TStatId_NAME_None;
  this->_padding_ = (longlong)&___7__FAsyncTask_VFInstallBundleWork_InstallBundleUtil____6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = -1;
  this->_padding_ = 0;
  local_68._0_8_ = *(undefined8 *)param_2;
  local_68._40_8_ = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  local_68._32_8_ = *(undefined8 *)&param_2->field_0x20;
  local_68._16_8_ = *(undefined8 *)&param_2->field_0x10;
  local_68._24_8_ = *(undefined8 *)&param_2->field_0x18;
  if (local_68._0_8_ != 0) {
    *(undefined8 *)param_2 = 0;
  }
  local_38._0_8_ = *(undefined8 *)param_1;
  local_38._40_8_ = *(undefined8 *)&param_1->field_0x28;
  *(undefined8 *)&param_1->field_0x28 = 0;
  local_38._32_8_ = *(undefined8 *)&param_1->field_0x20;
  local_38._16_8_ = *(undefined8 *)&param_1->field_0x10;
  local_38._24_8_ = *(undefined8 *)&param_1->field_0x18;
  if (local_38._0_8_ != 0) {
    *(undefined8 *)param_1 = 0;
  }
  InstallBundleUtil::FInstallBundleWork::FInstallBundleWork(&this->Task,&local_38,&local_68);
  TVar1 = InstallBundleUtil::FInstallBundleWork::GetStatId(&this->Task);
  this->_padding_ = (longlong)(TVar1.StatIdPtr)->Name;
  return this;
}

// DoTaskWork @ 148bc7f60

void __thiscall
FAsyncTask<InstallBundleUtil::FInstallBundleWork>::DoTaskWork
          (FAsyncTask<InstallBundleUtil::FInstallBundleWork> *this)

{
  void *pvVar1;
  code *pcVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  pvVar1 = *(void **)&(this->Task).WorkFunc;
  if (pvVar1 != (void *)0x0) {
    UE::Core::Private::Function::CheckCallable(pvVar1);
    pcVar2 = *(code **)&(this->Task).WorkFunc;
    plVar3 = *(longlong **)&(this->Task).WorkFunc.field_0x28;
    plVar5 = (longlong *)&(this->Task).WorkFunc.field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar5 = plVar3;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    (*pcVar2)(uVar4);
  }
  return;
}

// MarkAsCanceled @ 148bd0fc0

void __thiscall
FAsyncTask<InstallBundleUtil::FInstallBundleWork>::MarkAsCanceled
          (FAsyncTask<InstallBundleUtil::FInstallBundleWork> *this)

{
  return;
}

// TryAbandonTask @ 148bdb8a0

bool __thiscall
FAsyncTask<InstallBundleUtil::FInstallBundleWork>::TryAbandonTask
          (FAsyncTask<InstallBundleUtil::FInstallBundleWork> *this)

{
  return false;
}

