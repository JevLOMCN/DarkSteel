// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InstallBundleManager
// Functions: 2

// FInstallBundleWork @ 148bc2ff0

FInstallBundleWork * __thiscall
InstallBundleUtil::FInstallBundleWork::FInstallBundleWork
          (FInstallBundleWork *this,TUniqueFunction<void___cdecl(void)> *param_1,
          TUniqueFunction<void___cdecl(void)> *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  *(undefined8 *)&this->WorkFunc = *(undefined8 *)param_1;
  *(undefined8 *)&(this->WorkFunc).field_0x28 = *(undefined8 *)&param_1->field_0x28;
  *(undefined8 *)&param_1->field_0x28 = 0;
  uVar4 = *(undefined8 *)&param_1->field_0x18;
  *(undefined8 *)&(this->WorkFunc).field_0x10 = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)&(this->WorkFunc).field_0x18 = uVar4;
  *(undefined8 *)&(this->WorkFunc).field_0x20 = *(undefined8 *)&param_1->field_0x20;
  if (*(longlong *)&this->WorkFunc != 0) {
    *(undefined8 *)param_1 = 0;
  }
  *(undefined8 *)&this->OnCompleteFunc = *(undefined8 *)param_2;
  *(undefined8 *)&(this->OnCompleteFunc).field_0x28 = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  uVar1 = *(undefined4 *)&param_2->field_0x14;
  uVar2 = *(undefined4 *)&param_2->field_0x18;
  uVar3 = *(undefined4 *)&param_2->field_0x1c;
  *(undefined4 *)&(this->OnCompleteFunc).field_0x10 = *(undefined4 *)&param_2->field_0x10;
  *(undefined4 *)&(this->OnCompleteFunc).field_0x14 = uVar1;
  *(undefined4 *)&(this->OnCompleteFunc).field_0x18 = uVar2;
  *(undefined4 *)&(this->OnCompleteFunc).field_0x1c = uVar3;
  *(undefined8 *)&(this->OnCompleteFunc).field_0x20 = *(undefined8 *)&param_2->field_0x20;
  if (*(longlong *)&this->OnCompleteFunc != 0) {
    *(undefined8 *)param_2 = 0;
  }
  if (*(longlong *)param_1 != 0) {
    plVar5 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar5 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (*(longlong *)param_2 != 0) {
    plVar5 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar5 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  return this;
}

// GetStatId @ 148bcca90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall InstallBundleUtil::FInstallBundleWork::GetStatId(FInstallBundleWork *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res10;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_struct_TStatId___cdecl_InstallBundleUtil::FInstallBundleWork::GetStatId(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_struct_TStatId___cdecl_InstallBundleUtil::FInstallBundleWork::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_struct_TStatId___cdecl_InstallBundleUtil::FInstallBundleWork::GetStatId(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_FInstallBundleWork = (TAtomic<FMinimalName>)0x0;
    pFVar1 = ::FName::FName(&local_res10,"FInstallBundleWork");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_struct_TStatId___cdecl_InstallBundleUtil::FInstallBundleWork::GetStatId(void)const___ptr64'
                ::__l2::StatPtr_FInstallBundleWork,*pFVar1,L"FInstallBundleWork",
               "STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced",L"ThreadPool Async Tasks",true,
               true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_struct_TStatId___cdecl_InstallBundleUtil::FInstallBundleWork::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  TVar2 = _StatPtr_FInstallBundleWork;
  if (_StatPtr_FInstallBundleWork == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res10,"FInstallBundleWork");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &`public:_struct_TStatId___cdecl_InstallBundleUtil::FInstallBundleWork::GetStatId(void)const___ptr64'
                        ::__l2::StatPtr_FInstallBundleWork,*pFVar1,L"FInstallBundleWork",
                       "STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced",L"ThreadPool Async Tasks"
                       ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  in_RDX->Name = TVar2;
  return (TStatId)in_RDX;
}

