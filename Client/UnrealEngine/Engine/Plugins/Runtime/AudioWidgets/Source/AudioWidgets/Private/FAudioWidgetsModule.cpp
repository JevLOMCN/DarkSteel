// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 3

// StartupModule @ 14d8944c0

void __thiscall FAudioWidgetsModule::StartupModule(FAudioWidgetsModule *this)

{
  FName FVar1;
  FName *pFVar2;
  FModuleManager *this_00;
  TSet<TTuple<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*>,TDefaultMapHashableKeyFuncs<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*,0>,FDefaultSetAllocator>
  *pTVar3;
  TPairInitializer<FName_const_&,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*_const_&>
  local_res10;
  FAudioAnalyzerRackUnitTypeInfo *local_18;
  FAudioAnalyzerRackUnitTypeInfo ***local_10;
  
  FModuleManager::Get();
  pFVar2 = ::FName::FName((FName *)&local_res10,"AdvancedWidgets");
  FVar1 = *pFVar2;
  this_00 = FModuleManager::Get();
  FModuleManager::LoadModuleChecked(this_00,FVar1);
  FAudioWidgetsStyle::Get();
  local_res10.Value =
       (FAudioAnalyzerRackUnitTypeInfo **)&AudioWidgets::FAudioLoudnessMeter::RackUnitTypeInfo;
  pTVar3 = (TSet<TTuple<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*>,TDefaultMapHashableKeyFuncs<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*,0>,FDefaultSetAllocator>
            *)AudioWidgets::FAudioAnalyzerRackUnitRegistry::Get();
  local_10 = &local_res10.Value;
  local_18 = &AudioWidgets::FAudioLoudnessMeter::RackUnitTypeInfo;
  TSet<TTuple<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*>,TDefaultMapHashableKeyFuncs<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FName_const_&,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*_const_&>_>
            (pTVar3,&local_res10,(bool *)&local_18);
  local_res10.Value =
       (FAudioAnalyzerRackUnitTypeInfo **)&AudioWidgets::FAudioMeter::RackUnitTypeInfo;
  pTVar3 = (TSet<TTuple<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*>,TDefaultMapHashableKeyFuncs<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*,0>,FDefaultSetAllocator>
            *)AudioWidgets::FAudioAnalyzerRackUnitRegistry::Get();
  local_10 = &local_res10.Value;
  local_18 = &AudioWidgets::FAudioMeter::RackUnitTypeInfo;
  TSet<TTuple<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*>,TDefaultMapHashableKeyFuncs<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FName_const_&,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*_const_&>_>
            (pTVar3,&local_res10,(bool *)&local_18);
  local_res10.Value =
       (FAudioAnalyzerRackUnitTypeInfo **)&AudioWidgets::FAudioOscilloscope::RackUnitTypeInfo;
  pTVar3 = (TSet<TTuple<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*>,TDefaultMapHashableKeyFuncs<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*,0>,FDefaultSetAllocator>
            *)AudioWidgets::FAudioAnalyzerRackUnitRegistry::Get();
  local_10 = &local_res10.Value;
  local_18 = &AudioWidgets::FAudioOscilloscope::RackUnitTypeInfo;
  TSet<TTuple<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*>,TDefaultMapHashableKeyFuncs<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FName_const_&,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*_const_&>_>
            (pTVar3,&local_res10,(bool *)&local_18);
  local_res10.Value =
       (FAudioAnalyzerRackUnitTypeInfo **)&AudioWidgets::FAudioVectorscope::RackUnitTypeInfo;
  pTVar3 = (TSet<TTuple<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*>,TDefaultMapHashableKeyFuncs<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*,0>,FDefaultSetAllocator>
            *)AudioWidgets::FAudioAnalyzerRackUnitRegistry::Get();
  local_10 = &local_res10.Value;
  local_18 = &AudioWidgets::FAudioVectorscope::RackUnitTypeInfo;
  TSet<TTuple<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*>,TDefaultMapHashableKeyFuncs<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FName_const_&,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*_const_&>_>
            (pTVar3,&local_res10,(bool *)&local_18);
  local_res10.Value =
       (FAudioAnalyzerRackUnitTypeInfo **)&AudioWidgets::FAudioSpectrogram::RackUnitTypeInfo;
  pTVar3 = (TSet<TTuple<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*>,TDefaultMapHashableKeyFuncs<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*,0>,FDefaultSetAllocator>
            *)AudioWidgets::FAudioAnalyzerRackUnitRegistry::Get();
  local_10 = &local_res10.Value;
  local_18 = &AudioWidgets::FAudioSpectrogram::RackUnitTypeInfo;
  TSet<TTuple<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*>,TDefaultMapHashableKeyFuncs<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FName_const_&,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*_const_&>_>
            (pTVar3,&local_res10,(bool *)&local_18);
  local_res10.Value =
       (FAudioAnalyzerRackUnitTypeInfo **)&AudioWidgets::FAudioSpectrumAnalyzer::RackUnitTypeInfo;
  pTVar3 = (TSet<TTuple<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*>,TDefaultMapHashableKeyFuncs<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*,0>,FDefaultSetAllocator>
            *)AudioWidgets::FAudioAnalyzerRackUnitRegistry::Get();
  local_10 = &local_res10.Value;
  local_18 = &AudioWidgets::FAudioSpectrumAnalyzer::RackUnitTypeInfo;
  TSet<TTuple<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*>,TDefaultMapHashableKeyFuncs<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FName_const_&,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*_const_&>_>
            (pTVar3,&local_res10,(bool *)&local_18);
  return;
}

// ShutdownModule @ 14d894630

void __thiscall FAudioWidgetsModule::ShutdownModule(FAudioWidgetsModule *this)

{
  void *pvVar1;
  TSparseArray<TSparseSetElement<TTuple<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this_00;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_TLazySingleton<class_AudioWidgets::FAudioAnalyzerRackUnitRegistry>&___ptr64___cdecl_TLazySingleton<AudioWidgets::FAudioAnalyzerRackUnitRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_TLazySingleton<class_AudioWidgets::FAudioAnalyzerRackUnitRegistry>&___ptr64___cdecl_TLazySingleton<AudioWidgets::FAudioAnalyzerRackUnitRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_TLazySingleton<class_AudioWidgets::FAudioAnalyzerRackUnitRegistry>&___ptr64___cdecl_TLazySingleton<AudioWidgets::FAudioAnalyzerRackUnitRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      DAT_155371280 =
           (TSparseArray<TSparseSetElement<TTuple<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            *)0x0;
      atexit(`TLazySingleton<AudioWidgets::FAudioAnalyzerRackUnitRegistry>::GetLazy'::__l2::
             _dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&`private:_static_class_TLazySingleton<class_AudioWidgets::FAudioAnalyzerRackUnitRegistry>&___ptr64___cdecl_TLazySingleton<AudioWidgets::FAudioAnalyzerRackUnitRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  this_00 = DAT_155371280;
  if (DAT_155371280 !=
      (TSparseArray<TSparseSetElement<TTuple<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
       *)0x0) {
    *(undefined4 *)&DAT_155371280[1].field_0x10 = 0;
    pvVar1 = *(void **)&this_00[1].field_0x8;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (this_00);
    DAT_155371280 =
         (TSparseArray<TSparseSetElement<TTuple<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *)0x0;
  }
  return;
}

// RegisterAudioAnalyzerRackUnitType @ 14d9627f0

void __thiscall
FAudioWidgetsModule::RegisterAudioAnalyzerRackUnitType
          (FAudioWidgetsModule *this,FAudioAnalyzerRackUnitTypeInfo *param_1)

{
  TSet<TTuple<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*>,TDefaultMapHashableKeyFuncs<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*,0>,FDefaultSetAllocator>
  *this_00;
  TPairInitializer<FName_const_&,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*_const_&>
  local_res10;
  FAudioAnalyzerRackUnitTypeInfo *local_18;
  FAudioAnalyzerRackUnitTypeInfo ***local_10;
  
  local_res10.Value = (FAudioAnalyzerRackUnitTypeInfo **)param_1;
  this_00 = (TSet<TTuple<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*>,TDefaultMapHashableKeyFuncs<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*,0>,FDefaultSetAllocator>
             *)AudioWidgets::FAudioAnalyzerRackUnitRegistry::Get();
  local_10 = &local_res10.Value;
  local_18 = param_1;
  TSet<TTuple<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*>,TDefaultMapHashableKeyFuncs<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FName_const_&,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*_const_&>_>
            (this_00,&local_res10,(bool *)&local_18);
  return;
}

