// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 504

// AxisActionAngularSpeedGraphFieldIndex'' @ 1413d7b30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FPlayerControlRotationDebugBlock::
AxisActionAngularSpeedGraphFieldIndex__(void)

{
  TArray<UE::Cameras::FCameraDebugBlockField_*,TSizedDefaultAllocator<32>_> *pTVar1;
  FName local_res8 [4];
  
  pTVar1 = UE::Cameras::FPlayerControlRotationDebugBlock::GetStaticFields();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Cameras::TCameraDebugGraph<1>_>*___ptr64___cdecl_UE::Cameras::FPlayerControlRotationDebugBlock::GetAxisActionAngularSpeedGraphField(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Cameras::TCameraDebugGraph<1>_>*___ptr64___cdecl_UE::Cameras::FPlayerControlRotationDebugBlock::GetAxisActionAngularSpeedGraphField(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Cameras::TCameraDebugGraph<1>_>*___ptr64___cdecl_UE::Cameras::FPlayerControlRotationDebugBlock::GetAxisActionAngularSpeedGraphField(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(local_res8,L"AxisActionAngularSpeedGraph");
      _DAT_155366050 = 0xd80000;
      _StaticField = &
                     ___7__TCameraDebugBlockField_V__TCameraDebugGraph__00_Cameras_UE___Cameras_UE__6B_
      ;
      _DAT_155366048 = local_res8[0];
      atexit(`UE::Cameras::FPlayerControlRotationDebugBlock::GetAxisActionAngularSpeedGraphField'::
             __l2::_dynamic_atexit_destructor_for__StaticField__);
      _Init_thread_footer(&`private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Cameras::TCameraDebugGraph<1>_>*___ptr64___cdecl_UE::Cameras::FPlayerControlRotationDebugBlock::GetAxisActionAngularSpeedGraphField(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  UE::Cameras::FPlayerControlRotationDebugBlock::AxisActionAngularSpeedGraphFieldIndex =
       UE::Cameras::FCameraDebugBlock::RegisterField
                 ((FCameraDebugBlockField *)
                  &`private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Cameras::TCameraDebugGraph<1>_>*___ptr64___cdecl_UE::Cameras::FPlayerControlRotationDebugBlock::GetAxisActionAngularSpeedGraphField(void)'
                   ::__l2::StaticField,pTVar1);
  return;
}

// AxisActionValueClockFieldIndex'' @ 1413d7bf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FPlayerControlRotationDebugBlock::
AxisActionValueClockFieldIndex__(void)

{
  TArray<UE::Cameras::FCameraDebugBlockField_*,TSizedDefaultAllocator<32>_> *pTVar1;
  FName local_res8 [4];
  
  pTVar1 = UE::Cameras::FPlayerControlRotationDebugBlock::GetStaticFields();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Cameras::FCameraDebugClock>*___ptr64___cdecl_UE::Cameras::FPlayerControlRotationDebugBlock::GetAxisActionValueClockField(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Cameras::FCameraDebugClock>*___ptr64___cdecl_UE::Cameras::FPlayerControlRotationDebugBlock::GetAxisActionValueClockField(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Cameras::FCameraDebugClock>*___ptr64___cdecl_UE::Cameras::FPlayerControlRotationDebugBlock::GetAxisActionValueClockField(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(local_res8,L"AxisActionValueClock");
      _DAT_155366088 = 0xf00000;
      _StaticField = &___7__TCameraDebugBlockField_VFCameraDebugClock_Cameras_UE___Cameras_UE__6B_;
      _DAT_155366080 = local_res8[0];
      atexit(`UE::Cameras::FPlayerControlRotationDebugBlock::GetAxisActionValueClockField'::__l2::
             _dynamic_atexit_destructor_for__StaticField__);
      _Init_thread_footer(&`private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Cameras::FCameraDebugClock>*___ptr64___cdecl_UE::Cameras::FPlayerControlRotationDebugBlock::GetAxisActionValueClockField(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  UE::Cameras::FPlayerControlRotationDebugBlock::AxisActionValueClockFieldIndex =
       UE::Cameras::FCameraDebugBlock::RegisterField
                 ((FCameraDebugBlockField *)
                  &`private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Cameras::FCameraDebugClock>*___ptr64___cdecl_UE::Cameras::FPlayerControlRotationDebugBlock::GetAxisActionValueClockField(void)'
                   ::__l2::StaticField,pTVar1);
  return;
}

// BlueprintEvaluatorNameFieldIndex'' @ 1413d7cb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FBlueprintCameraDebugBlock::
BlueprintEvaluatorNameFieldIndex__(void)

{
  TArray<UE::Cameras::FCameraDebugBlockField_*,TSizedDefaultAllocator<32>_> *pTVar1;
  FName local_res8 [4];
  
  pTVar1 = UE::Cameras::FBlueprintCameraDebugBlock::GetStaticFields();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<FString>*___ptr64___cdecl_UE::Cameras::FBlueprintCameraDebugBlock::GetBlueprintEvaluatorNameField(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_struct_UE::Cameras::TCameraDebugBlockField<FString>*___ptr64___cdecl_UE::Cameras::FBlueprintCameraDebugBlock::GetBlueprintEvaluatorNameField(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_struct_UE::Cameras::TCameraDebugBlockField<FString>*___ptr64___cdecl_UE::Cameras::FBlueprintCameraDebugBlock::GetBlueprintEvaluatorNameField(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(local_res8,L"BlueprintEvaluatorName");
      _DAT_155365c40 = 0x280000;
      _StaticField = &___7__TCameraDebugBlockField_VFString___Cameras_UE__6B_;
      _DAT_155365c38 = local_res8[0];
      atexit(`UE::Cameras::FBlueprintCameraDebugBlock::GetBlueprintEvaluatorNameField'::__l2::
             _dynamic_atexit_destructor_for__StaticField__);
      _Init_thread_footer(&`private:_static_struct_UE::Cameras::TCameraDebugBlockField<FString>*___ptr64___cdecl_UE::Cameras::FBlueprintCameraDebugBlock::GetBlueprintEvaluatorNameField(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  UE::Cameras::FBlueprintCameraDebugBlock::BlueprintEvaluatorNameFieldIndex =
       UE::Cameras::FCameraDebugBlock::RegisterField
                 ((FCameraDebugBlockField *)
                  &`private:_static_struct_UE::Cameras::TCameraDebugBlockField<FString>*___ptr64___cdecl_UE::Cameras::FBlueprintCameraDebugBlock::GetBlueprintEvaluatorNameField(void)'
                   ::__l2::StaticField,pTVar1);
  return;
}

// CachedControlRotationsFieldIndex'' @ 1413d7d70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FDrivenControlRotationHelperDebugBlock::
CachedControlRotationsFieldIndex__(void)

{
  TArray<UE::Cameras::FCameraDebugBlockField_*,TSizedDefaultAllocator<32>_> *pTVar1;
  FName local_res8 [4];
  
  pTVar1 = UE::Cameras::FDrivenControlRotationHelperDebugBlock::GetStaticFields();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>*___ptr64___cdecl_UE::Cameras::FDrivenControlRotationHelperDebugBlock::GetCachedControlRotationsField(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_struct_UE::Cameras::TCameraDebugBlockField<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>*___ptr64___cdecl_UE::Cameras::FDrivenControlRotationHelperDebugBlock::GetCachedControlRotationsField(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_struct_UE::Cameras::TCameraDebugBlockField<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>*___ptr64___cdecl_UE::Cameras::FDrivenControlRotationHelperDebugBlock::GetCachedControlRotationsField(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(local_res8,L"CachedControlRotations");
      _DAT_155366068 = 0x380000;
      _StaticField = &
                     ___7__TCameraDebugBlockField_V__TArray_U__TRotator_N_Math_UE__V__TSizedDefaultAllocator__0CA______Cameras_UE__6B_
      ;
      _DAT_155366060 = local_res8[0];
      atexit(`UE::Cameras::FDrivenControlRotationHelperDebugBlock::GetCachedControlRotationsField'::
             __l2::_dynamic_atexit_destructor_for__StaticField__);
      _Init_thread_footer(&`private:_static_struct_UE::Cameras::TCameraDebugBlockField<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>*___ptr64___cdecl_UE::Cameras::FDrivenControlRotationHelperDebugBlock::GetCachedControlRotationsField(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  UE::Cameras::FDrivenControlRotationHelperDebugBlock::CachedControlRotationsFieldIndex =
       UE::Cameras::FCameraDebugBlock::RegisterField
                 ((FCameraDebugBlockField *)
                  &`private:_static_struct_UE::Cameras::TCameraDebugBlockField<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>*___ptr64___cdecl_UE::Cameras::FDrivenControlRotationHelperDebugBlock::GetCachedControlRotationsField(void)'
                   ::__l2::StaticField,pTVar1);
  return;
}

// CameraRotationFieldIndex'' @ 1413d7e30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FPlayerControlRotationDebugBlock::CameraRotationFieldIndex__
          (void)

{
  TArray<UE::Cameras::FCameraDebugBlockField_*,TSizedDefaultAllocator<32>_> *pTVar1;
  FName local_res8 [4];
  
  pTVar1 = UE::Cameras::FPlayerControlRotationDebugBlock::GetStaticFields();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Math::TRotator<double>_>*___ptr64___cdecl_UE::Cameras::FPlayerControlRotationDebugBlock::GetCameraRotationField(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Math::TRotator<double>_>*___ptr64___cdecl_UE::Cameras::FPlayerControlRotationDebugBlock::GetCameraRotationField(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Math::TRotator<double>_>*___ptr64___cdecl_UE::Cameras::FPlayerControlRotationDebugBlock::GetCameraRotationField(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(local_res8,L"CameraRotation");
      _DAT_155365fc8 = 0xa80000;
      _StaticField = &___7__TCameraDebugBlockField_U__TRotator_N_Math_UE___Cameras_UE__6B_;
      _DAT_155365fc0 = local_res8[0];
      atexit(`UE::Cameras::FPlayerControlRotationDebugBlock::GetCameraRotationField'::__l2::
             _dynamic_atexit_destructor_for__StaticField__);
      _Init_thread_footer(&`private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Math::TRotator<double>_>*___ptr64___cdecl_UE::Cameras::FPlayerControlRotationDebugBlock::GetCameraRotationField(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  UE::Cameras::FPlayerControlRotationDebugBlock::CameraRotationFieldIndex =
       UE::Cameras::FCameraDebugBlock::RegisterField
                 ((FCameraDebugBlockField *)
                  &`private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Math::TRotator<double>_>*___ptr64___cdecl_UE::Cameras::FPlayerControlRotationDebugBlock::GetCameraRotationField(void)'
                   ::__l2::StaticField,pTVar1);
  return;
}

// ContextNamesFieldIndex'' @ 1413d7ef0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FDrivenControlRotationHelperDebugBlock::
ContextNamesFieldIndex__(void)

{
  TArray<UE::Cameras::FCameraDebugBlockField_*,TSizedDefaultAllocator<32>_> *pTVar1;
  FName local_res8 [4];
  
  pTVar1 = UE::Cameras::FDrivenControlRotationHelperDebugBlock::GetStaticFields();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<TArray<FString,TSizedDefaultAllocator<32>_>_>*___ptr64___cdecl_UE::Cameras::FDrivenControlRotationHelperDebugBlock::GetContextNamesField(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_struct_UE::Cameras::TCameraDebugBlockField<TArray<FString,TSizedDefaultAllocator<32>_>_>*___ptr64___cdecl_UE::Cameras::FDrivenControlRotationHelperDebugBlock::GetContextNamesField(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_struct_UE::Cameras::TCameraDebugBlockField<TArray<FString,TSizedDefaultAllocator<32>_>_>*___ptr64___cdecl_UE::Cameras::FDrivenControlRotationHelperDebugBlock::GetContextNamesField(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(local_res8,L"ContextNames");
      _DAT_155366018 = 0x280000;
      _StaticField = &
                     ___7__TCameraDebugBlockField_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Cameras_UE__6B_
      ;
      _DAT_155366010 = local_res8[0];
      atexit(`UE::Cameras::FDrivenControlRotationHelperDebugBlock::GetContextNamesField'::__l2::
             _dynamic_atexit_destructor_for__StaticField__);
      _Init_thread_footer(&`private:_static_struct_UE::Cameras::TCameraDebugBlockField<TArray<FString,TSizedDefaultAllocator<32>_>_>*___ptr64___cdecl_UE::Cameras::FDrivenControlRotationHelperDebugBlock::GetContextNamesField(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  UE::Cameras::FDrivenControlRotationHelperDebugBlock::ContextNamesFieldIndex =
       UE::Cameras::FCameraDebugBlock::RegisterField
                 ((FCameraDebugBlockField *)
                  &`private:_static_struct_UE::Cameras::TCameraDebugBlockField<TArray<FString,TSizedDefaultAllocator<32>_>_>*___ptr64___cdecl_UE::Cameras::FDrivenControlRotationHelperDebugBlock::GetContextNamesField(void)'
                   ::__l2::StaticField,pTVar1);
  return;
}

// ControlRotationFieldIndex'' @ 1413d7fb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FPlayerControlRotationDebugBlock::ControlRotationFieldIndex__
          (void)

{
  TArray<UE::Cameras::FCameraDebugBlockField_*,TSizedDefaultAllocator<32>_> *pTVar1;
  FName local_res8 [4];
  
  pTVar1 = UE::Cameras::FPlayerControlRotationDebugBlock::GetStaticFields();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Math::TRotator<double>_>*___ptr64___cdecl_UE::Cameras::FPlayerControlRotationDebugBlock::GetControlRotationField(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Math::TRotator<double>_>*___ptr64___cdecl_UE::Cameras::FPlayerControlRotationDebugBlock::GetControlRotationField(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Math::TRotator<double>_>*___ptr64___cdecl_UE::Cameras::FPlayerControlRotationDebugBlock::GetControlRotationField(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(local_res8,L"ControlRotation");
      _DAT_155365fa8 = 0x900000;
      _StaticField = &___7__TCameraDebugBlockField_U__TRotator_N_Math_UE___Cameras_UE__6B_;
      _DAT_155365fa0 = local_res8[0];
      atexit(`UE::Cameras::FPlayerControlRotationDebugBlock::GetControlRotationField'::__l2::
             _dynamic_atexit_destructor_for__StaticField__);
      _Init_thread_footer(&`private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Math::TRotator<double>_>*___ptr64___cdecl_UE::Cameras::FPlayerControlRotationDebugBlock::GetControlRotationField(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  UE::Cameras::FPlayerControlRotationDebugBlock::ControlRotationFieldIndex =
       UE::Cameras::FCameraDebugBlock::RegisterField
                 ((FCameraDebugBlockField *)
                  &`private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Math::TRotator<double>_>*___ptr64___cdecl_UE::Cameras::FPlayerControlRotationDebugBlock::GetControlRotationField(void)'
                   ::__l2::StaticField,pTVar1);
  return;
}

// DollyCorrectionFieldIndex'' @ 1413d8070

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FDollyFramingCameraDebugBlock::DollyCorrectionFieldIndex__
          (void)

{
  TArray<UE::Cameras::FCameraDebugBlockField_*,TSizedDefaultAllocator<32>_> *pTVar1;
  FName local_res8 [4];
  
  pTVar1 = UE::Cameras::FDollyFramingCameraDebugBlock::GetStaticFields();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Math::TVector2<double>_>*___ptr64___cdecl_UE::Cameras::FDollyFramingCameraDebugBlock::GetDollyCorrectionField(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Math::TVector2<double>_>*___ptr64___cdecl_UE::Cameras::FDollyFramingCameraDebugBlock::GetDollyCorrectionField(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Math::TVector2<double>_>*___ptr64___cdecl_UE::Cameras::FDollyFramingCameraDebugBlock::GetDollyCorrectionField(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(local_res8,L"DollyCorrection");
      _DAT_155365a80 = 0x380000;
      _StaticField = &___7__TCameraDebugBlockField_U__TVector2_N_Math_UE___Cameras_UE__6B_;
      _DAT_155365a78 = local_res8[0];
      atexit(`UE::Cameras::FDollyFramingCameraDebugBlock::GetDollyCorrectionField'::__l2::
             _dynamic_atexit_destructor_for__StaticField__);
      _Init_thread_footer(&`private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Math::TVector2<double>_>*___ptr64___cdecl_UE::Cameras::FDollyFramingCameraDebugBlock::GetDollyCorrectionField(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  UE::Cameras::FDollyFramingCameraDebugBlock::DollyCorrectionFieldIndex =
       UE::Cameras::FCameraDebugBlock::RegisterField
                 ((FCameraDebugBlockField *)
                  &`private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Math::TVector2<double>_>*___ptr64___cdecl_UE::Cameras::FDollyFramingCameraDebugBlock::GetDollyCorrectionField(void)'
                   ::__l2::StaticField,pTVar1);
  return;
}

// DollyPositionFieldIndex'' @ 1413d8130

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FDollyFramingCameraDebugBlock::DollyPositionFieldIndex__
          (void)

{
  TArray<UE::Cameras::FCameraDebugBlockField_*,TSizedDefaultAllocator<32>_> *pTVar1;
  FName local_res8 [4];
  
  pTVar1 = UE::Cameras::FDollyFramingCameraDebugBlock::GetStaticFields();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Math::TVector2<double>_>*___ptr64___cdecl_UE::Cameras::FDollyFramingCameraDebugBlock::GetDollyPositionField(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Math::TVector2<double>_>*___ptr64___cdecl_UE::Cameras::FDollyFramingCameraDebugBlock::GetDollyPositionField(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Math::TVector2<double>_>*___ptr64___cdecl_UE::Cameras::FDollyFramingCameraDebugBlock::GetDollyPositionField(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(local_res8,L"DollyPosition");
      _DAT_155365a60 = 0x280000;
      _StaticField = &___7__TCameraDebugBlockField_U__TVector2_N_Math_UE___Cameras_UE__6B_;
      _DAT_155365a58 = local_res8[0];
      atexit(`UE::Cameras::FDollyFramingCameraDebugBlock::GetDollyPositionField'::__l2::
             _dynamic_atexit_destructor_for__StaticField__);
      _Init_thread_footer(&`private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Math::TVector2<double>_>*___ptr64___cdecl_UE::Cameras::FDollyFramingCameraDebugBlock::GetDollyPositionField(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  UE::Cameras::FDollyFramingCameraDebugBlock::DollyPositionFieldIndex =
       UE::Cameras::FCameraDebugBlock::RegisterField
                 ((FCameraDebugBlockField *)
                  &`private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Math::TVector2<double>_>*___ptr64___cdecl_UE::Cameras::FDollyFramingCameraDebugBlock::GetDollyPositionField(void)'
                   ::__l2::StaticField,pTVar1);
  return;
}

// FreezeReasonFieldIndex'' @ 1413d81f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FPlayerControlRotationDebugBlock::FreezeReasonFieldIndex__
          (void)

{
  TArray<UE::Cameras::FCameraDebugBlockField_*,TSizedDefaultAllocator<32>_> *pTVar1;
  FName local_res8 [4];
  
  pTVar1 = UE::Cameras::FPlayerControlRotationDebugBlock::GetStaticFields();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<FString>*___ptr64___cdecl_UE::Cameras::FPlayerControlRotationDebugBlock::GetFreezeReasonField(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_struct_UE::Cameras::TCameraDebugBlockField<FString>*___ptr64___cdecl_UE::Cameras::FPlayerControlRotationDebugBlock::GetFreezeReasonField(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_struct_UE::Cameras::TCameraDebugBlockField<FString>*___ptr64___cdecl_UE::Cameras::FPlayerControlRotationDebugBlock::GetFreezeReasonField(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(local_res8,L"FreezeReason");
      _DAT_155366030 = 0xc80000;
      _StaticField = &___7__TCameraDebugBlockField_VFString___Cameras_UE__6B_;
      _DAT_155366028 = local_res8[0];
      atexit(`UE::Cameras::FPlayerControlRotationDebugBlock::GetFreezeReasonField'::__l2::
             _dynamic_atexit_destructor_for__StaticField__);
      _Init_thread_footer(&`private:_static_struct_UE::Cameras::TCameraDebugBlockField<FString>*___ptr64___cdecl_UE::Cameras::FPlayerControlRotationDebugBlock::GetFreezeReasonField(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  UE::Cameras::FPlayerControlRotationDebugBlock::FreezeReasonFieldIndex =
       UE::Cameras::FCameraDebugBlock::RegisterField
                 ((FCameraDebugBlockField *)
                  &`private:_static_struct_UE::Cameras::TCameraDebugBlockField<FString>*___ptr64___cdecl_UE::Cameras::FPlayerControlRotationDebugBlock::GetFreezeReasonField(void)'
                   ::__l2::StaticField,pTVar1);
  return;
}

// InputValueFieldIndex'' @ 1413d82b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FDrivenControlRotationDebugBlock::InputValueFieldIndex__
          (void)

{
  TArray<UE::Cameras::FCameraDebugBlockField_*,TSizedDefaultAllocator<32>_> *pTVar1;
  FName local_res8 [4];
  
  pTVar1 = UE::Cameras::FDrivenControlRotationDebugBlock::GetStaticFields();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Math::TVector2<double>_>*___ptr64___cdecl_UE::Cameras::FDrivenControlRotationDebugBlock::GetInputValueField(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Math::TVector2<double>_>*___ptr64___cdecl_UE::Cameras::FDrivenControlRotationDebugBlock::GetInputValueField(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Math::TVector2<double>_>*___ptr64___cdecl_UE::Cameras::FDrivenControlRotationDebugBlock::GetInputValueField(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(local_res8,L"InputValue");
      _DAT_1553661a8 = 0x280000;
      _StaticField = &___7__TCameraDebugBlockField_U__TVector2_N_Math_UE___Cameras_UE__6B_;
      _DAT_1553661a0 = local_res8[0];
      atexit(`UE::Cameras::FDrivenControlRotationDebugBlock::GetInputValueField'::__l2::
             _dynamic_atexit_destructor_for__StaticField__);
      _Init_thread_footer(&`private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Math::TVector2<double>_>*___ptr64___cdecl_UE::Cameras::FDrivenControlRotationDebugBlock::GetInputValueField(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  UE::Cameras::FDrivenControlRotationDebugBlock::InputValueFieldIndex =
       UE::Cameras::FCameraDebugBlock::RegisterField
                 ((FCameraDebugBlockField *)
                  &`private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Math::TVector2<double>_>*___ptr64___cdecl_UE::Cameras::FDrivenControlRotationDebugBlock::GetInputValueField(void)'
                   ::__l2::StaticField,pTVar1);
  return;
}

// InterpolationFactorFieldIndex'' @ 1413d8370

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FAutoRotateInput2DCameraDebugBlock::
InterpolationFactorFieldIndex__(void)

{
  TArray<UE::Cameras::FCameraDebugBlockField_*,TSizedDefaultAllocator<32>_> *pTVar1;
  FName local_res8 [4];
  
  pTVar1 = UE::Cameras::FAutoRotateInput2DCameraDebugBlock::GetStaticFields();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<double>*___ptr64___cdecl_UE::Cameras::FAutoRotateInput2DCameraDebugBlock::GetInterpolationFactorField(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_struct_UE::Cameras::TCameraDebugBlockField<double>*___ptr64___cdecl_UE::Cameras::FAutoRotateInput2DCameraDebugBlock::GetInterpolationFactorField(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_struct_UE::Cameras::TCameraDebugBlockField<double>*___ptr64___cdecl_UE::Cameras::FAutoRotateInput2DCameraDebugBlock::GetInterpolationFactorField(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(local_res8,L"InterpolationFactor");
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<double>*___ptr64___cdecl_UE::Cameras::FAutoRotateInput2DCameraDebugBlock::GetInterpolationFactorField(void)'
      ::__l2::StaticField._16_4_ = 0x300000;
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<double>*___ptr64___cdecl_UE::Cameras::FAutoRotateInput2DCameraDebugBlock::GetInterpolationFactorField(void)'
      ::__l2::StaticField._0_8_ = &___7__TCameraDebugBlockField_N_Cameras_UE__6B_;
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<double>*___ptr64___cdecl_UE::Cameras::FAutoRotateInput2DCameraDebugBlock::GetInterpolationFactorField(void)'
      ::__l2::StaticField._8_4_ = local_res8[0].ComparisonIndex.Value;
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<double>*___ptr64___cdecl_UE::Cameras::FAutoRotateInput2DCameraDebugBlock::GetInterpolationFactorField(void)'
      ::__l2::StaticField._12_4_ = local_res8[0].Number;
      atexit(`UE::Cameras::FAutoRotateInput2DCameraDebugBlock::GetInterpolationFactorField'::__l2::
             _dynamic_atexit_destructor_for__StaticField__);
      _Init_thread_footer(&`private:_static_struct_UE::Cameras::TCameraDebugBlockField<double>*___ptr64___cdecl_UE::Cameras::FAutoRotateInput2DCameraDebugBlock::GetInterpolationFactorField(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  UE::Cameras::FAutoRotateInput2DCameraDebugBlock::InterpolationFactorFieldIndex =
       UE::Cameras::FCameraDebugBlock::RegisterField
                 ((FCameraDebugBlockField *)
                  &`private:_static_struct_UE::Cameras::TCameraDebugBlockField<double>*___ptr64___cdecl_UE::Cameras::FAutoRotateInput2DCameraDebugBlock::GetInterpolationFactorField(void)'
                   ::__l2::StaticField,pTVar1);
  return;
}

// InterpolationTargetFieldIndex'' @ 1413d8430

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FAutoRotateInput2DCameraDebugBlock::
InterpolationTargetFieldIndex__(void)

{
  TArray<UE::Cameras::FCameraDebugBlockField_*,TSizedDefaultAllocator<32>_> *pTVar1;
  FName local_res8 [4];
  
  pTVar1 = UE::Cameras::FAutoRotateInput2DCameraDebugBlock::GetStaticFields();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<double>*___ptr64___cdecl_UE::Cameras::FAutoRotateInput2DCameraDebugBlock::GetInterpolationTargetField(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_struct_UE::Cameras::TCameraDebugBlockField<double>*___ptr64___cdecl_UE::Cameras::FAutoRotateInput2DCameraDebugBlock::GetInterpolationTargetField(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_struct_UE::Cameras::TCameraDebugBlockField<double>*___ptr64___cdecl_UE::Cameras::FAutoRotateInput2DCameraDebugBlock::GetInterpolationTargetField(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(local_res8,L"InterpolationTarget");
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<double>*___ptr64___cdecl_UE::Cameras::FAutoRotateInput2DCameraDebugBlock::GetInterpolationTargetField(void)'
      ::__l2::StaticField._16_4_ = 0x380000;
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<double>*___ptr64___cdecl_UE::Cameras::FAutoRotateInput2DCameraDebugBlock::GetInterpolationTargetField(void)'
      ::__l2::StaticField._0_8_ = &___7__TCameraDebugBlockField_N_Cameras_UE__6B_;
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<double>*___ptr64___cdecl_UE::Cameras::FAutoRotateInput2DCameraDebugBlock::GetInterpolationTargetField(void)'
      ::__l2::StaticField._8_4_ = local_res8[0].ComparisonIndex.Value;
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<double>*___ptr64___cdecl_UE::Cameras::FAutoRotateInput2DCameraDebugBlock::GetInterpolationTargetField(void)'
      ::__l2::StaticField._12_4_ = local_res8[0].Number;
      atexit(`UE::Cameras::FAutoRotateInput2DCameraDebugBlock::GetInterpolationTargetField'::__l2::
             _dynamic_atexit_destructor_for__StaticField__);
      _Init_thread_footer(&`private:_static_struct_UE::Cameras::TCameraDebugBlockField<double>*___ptr64___cdecl_UE::Cameras::FAutoRotateInput2DCameraDebugBlock::GetInterpolationTargetField(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  UE::Cameras::FAutoRotateInput2DCameraDebugBlock::InterpolationTargetFieldIndex =
       UE::Cameras::FCameraDebugBlock::RegisterField
                 ((FCameraDebugBlockField *)
                  &`private:_static_struct_UE::Cameras::TCameraDebugBlockField<double>*___ptr64___cdecl_UE::Cameras::FAutoRotateInput2DCameraDebugBlock::GetInterpolationTargetField(void)'
                   ::__l2::StaticField,pTVar1);
  return;
}

// LastDeltaControlRotationFieldIndex'' @ 1413d84f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FDrivenControlRotationDebugBlock::
LastDeltaControlRotationFieldIndex__(void)

{
  TArray<UE::Cameras::FCameraDebugBlockField_*,TSizedDefaultAllocator<32>_> *pTVar1;
  FName local_res8 [4];
  
  pTVar1 = UE::Cameras::FDrivenControlRotationDebugBlock::GetStaticFields();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Math::TRotator<double>_>*___ptr64___cdecl_UE::Cameras::FDrivenControlRotationDebugBlock::GetLastDeltaControlRotationField(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Math::TRotator<double>_>*___ptr64___cdecl_UE::Cameras::FDrivenControlRotationDebugBlock::GetLastDeltaControlRotationField(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Math::TRotator<double>_>*___ptr64___cdecl_UE::Cameras::FDrivenControlRotationDebugBlock::GetLastDeltaControlRotationField(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(local_res8,L"LastDeltaControlRotation");
      _DAT_1553661c8 = 0x380000;
      _StaticField = &___7__TCameraDebugBlockField_U__TRotator_N_Math_UE___Cameras_UE__6B_;
      _DAT_1553661c0 = local_res8[0];
      atexit(`UE::Cameras::FDrivenControlRotationDebugBlock::GetLastDeltaControlRotationField'::__l2
             ::_dynamic_atexit_destructor_for__StaticField__);
      _Init_thread_footer(&`private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Math::TRotator<double>_>*___ptr64___cdecl_UE::Cameras::FDrivenControlRotationDebugBlock::GetLastDeltaControlRotationField(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  UE::Cameras::FDrivenControlRotationDebugBlock::LastDeltaControlRotationFieldIndex =
       UE::Cameras::FCameraDebugBlock::RegisterField
                 ((FCameraDebugBlockField *)
                  &`private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Math::TRotator<double>_>*___ptr64___cdecl_UE::Cameras::FDrivenControlRotationDebugBlock::GetLastDeltaControlRotationField(void)'
                   ::__l2::StaticField,pTVar1);
  return;
}

// MonitoringRequestsFieldIndex'' @ 1413d85b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FDrivenControlRotationHelperDebugBlock::
MonitoringRequestsFieldIndex__(void)

{
  TArray<UE::Cameras::FCameraDebugBlockField_*,TSizedDefaultAllocator<32>_> *pTVar1;
  FName local_res8 [4];
  
  pTVar1 = UE::Cameras::FDrivenControlRotationHelperDebugBlock::GetStaticFields();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>*___ptr64___cdecl_UE::Cameras::FDrivenControlRotationHelperDebugBlock::GetMonitoringRequestsField(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_struct_UE::Cameras::TCameraDebugBlockField<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>*___ptr64___cdecl_UE::Cameras::FDrivenControlRotationHelperDebugBlock::GetMonitoringRequestsField(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_struct_UE::Cameras::TCameraDebugBlockField<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>*___ptr64___cdecl_UE::Cameras::FDrivenControlRotationHelperDebugBlock::GetMonitoringRequestsField(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(local_res8,L"MonitoringRequests");
      _DAT_1553660b8 = 0x480000;
      _StaticField = &
                     ___7__TCameraDebugBlockField_V__TArray_EV__TSizedDefaultAllocator__0CA______Cameras_UE__6B_
      ;
      _DAT_1553660b0 = local_res8[0];
      atexit(`UE::Cameras::FDrivenControlRotationHelperDebugBlock::GetMonitoringRequestsField'::__l2
             ::_dynamic_atexit_destructor_for__StaticField__);
      _Init_thread_footer(&`private:_static_struct_UE::Cameras::TCameraDebugBlockField<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>*___ptr64___cdecl_UE::Cameras::FDrivenControlRotationHelperDebugBlock::GetMonitoringRequestsField(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  UE::Cameras::FDrivenControlRotationHelperDebugBlock::MonitoringRequestsFieldIndex =
       UE::Cameras::FCameraDebugBlock::RegisterField
                 ((FCameraDebugBlockField *)
                  &`private:_static_struct_UE::Cameras::TCameraDebugBlockField<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>*___ptr64___cdecl_UE::Cameras::FDrivenControlRotationHelperDebugBlock::GetMonitoringRequestsField(void)'
                   ::__l2::StaticField,pTVar1);
  return;
}

// NextWorldTargetFieldIndex'' @ 1413d8670

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FDollyFramingCameraDebugBlock::NextWorldTargetFieldIndex__
          (void)

{
  TArray<UE::Cameras::FCameraDebugBlockField_*,TSizedDefaultAllocator<32>_> *pTVar1;
  FName local_res8 [4];
  
  pTVar1 = UE::Cameras::FDollyFramingCameraDebugBlock::GetStaticFields();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Math::TVector<double>_>*___ptr64___cdecl_UE::Cameras::FDollyFramingCameraDebugBlock::GetNextWorldTargetField(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Math::TVector<double>_>*___ptr64___cdecl_UE::Cameras::FDollyFramingCameraDebugBlock::GetNextWorldTargetField(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Math::TVector<double>_>*___ptr64___cdecl_UE::Cameras::FDollyFramingCameraDebugBlock::GetNextWorldTargetField(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(local_res8,L"NextWorldTarget");
      _DAT_155365ac0 = 0x600000;
      _StaticField = &___7__TCameraDebugBlockField_U__TVector_N_Math_UE___Cameras_UE__6B_;
      _DAT_155365ab8 = local_res8[0];
      atexit(`UE::Cameras::FDollyFramingCameraDebugBlock::GetNextWorldTargetField'::__l2::
             _dynamic_atexit_destructor_for__StaticField__);
      _Init_thread_footer(&`private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Math::TVector<double>_>*___ptr64___cdecl_UE::Cameras::FDollyFramingCameraDebugBlock::GetNextWorldTargetField(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  UE::Cameras::FDollyFramingCameraDebugBlock::NextWorldTargetFieldIndex =
       UE::Cameras::FCameraDebugBlock::RegisterField
                 ((FCameraDebugBlockField *)
                  &`private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Math::TVector<double>_>*___ptr64___cdecl_UE::Cameras::FDollyFramingCameraDebugBlock::GetNextWorldTargetField(void)'
                   ::__l2::StaticField,pTVar1);
  return;
}

// NoiseValuesFieldIndex'' @ 1413d8730

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FPerlinNoiseLocationShakeDebugBlock::NoiseValuesFieldIndex__
          (void)

{
  TArray<UE::Cameras::FCameraDebugBlockField_*,TSizedDefaultAllocator<32>_> *pTVar1;
  FName local_res8 [4];
  
  pTVar1 = UE::Cameras::FPerlinNoiseLocationShakeDebugBlock::GetStaticFields();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Cameras::TCameraDebugGraph<3>_>*___ptr64___cdecl_UE::Cameras::FPerlinNoiseLocationShakeDebugBlock::GetNoiseValuesField(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Cameras::TCameraDebugGraph<3>_>*___ptr64___cdecl_UE::Cameras::FPerlinNoiseLocationShakeDebugBlock::GetNoiseValuesField(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Cameras::TCameraDebugGraph<3>_>*___ptr64___cdecl_UE::Cameras::FPerlinNoiseLocationShakeDebugBlock::GetNoiseValuesField(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(local_res8,L"NoiseValues");
      _DAT_155365f50 = 0x280000;
      _StaticField = &
                     ___7__TCameraDebugBlockField_V__TCameraDebugGraph__02_Cameras_UE___Cameras_UE__6B_
      ;
      _DAT_155365f48 = local_res8[0];
      atexit(`UE::Cameras::FPerlinNoiseLocationShakeDebugBlock::GetNoiseValuesField'::__l2::
             _dynamic_atexit_destructor_for__StaticField__);
      _Init_thread_footer(&`private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Cameras::TCameraDebugGraph<3>_>*___ptr64___cdecl_UE::Cameras::FPerlinNoiseLocationShakeDebugBlock::GetNoiseValuesField(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  UE::Cameras::FPerlinNoiseLocationShakeDebugBlock::NoiseValuesFieldIndex =
       UE::Cameras::FCameraDebugBlock::RegisterField
                 ((FCameraDebugBlockField *)
                  &`private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Cameras::TCameraDebugGraph<3>_>*___ptr64___cdecl_UE::Cameras::FPerlinNoiseLocationShakeDebugBlock::GetNoiseValuesField(void)'
                   ::__l2::StaticField,pTVar1);
  return;
}

// NoiseValuesFieldIndex'' @ 1413d87f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FPerlinNoiseRotationShakeDebugBlock::NoiseValuesFieldIndex__
          (void)

{
  TArray<UE::Cameras::FCameraDebugBlockField_*,TSizedDefaultAllocator<32>_> *pTVar1;
  FName local_res8 [4];
  
  pTVar1 = UE::Cameras::FPerlinNoiseRotationShakeDebugBlock::GetStaticFields();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Cameras::TCameraDebugGraph<3>_>*___ptr64___cdecl_UE::Cameras::FPerlinNoiseRotationShakeDebugBlock::GetNoiseValuesField(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Cameras::TCameraDebugGraph<3>_>*___ptr64___cdecl_UE::Cameras::FPerlinNoiseRotationShakeDebugBlock::GetNoiseValuesField(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Cameras::TCameraDebugGraph<3>_>*___ptr64___cdecl_UE::Cameras::FPerlinNoiseRotationShakeDebugBlock::GetNoiseValuesField(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(local_res8,L"NoiseValues");
      _DAT_155366170 = 0x280000;
      _StaticField = &
                     ___7__TCameraDebugBlockField_V__TCameraDebugGraph__02_Cameras_UE___Cameras_UE__6B_
      ;
      _DAT_155366168 = local_res8[0];
      atexit(`UE::Cameras::FPerlinNoiseRotationShakeDebugBlock::GetNoiseValuesField'::__l2::
             _dynamic_atexit_destructor_for__StaticField__);
      _Init_thread_footer(&`private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Cameras::TCameraDebugGraph<3>_>*___ptr64___cdecl_UE::Cameras::FPerlinNoiseRotationShakeDebugBlock::GetNoiseValuesField(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  UE::Cameras::FPerlinNoiseRotationShakeDebugBlock::NoiseValuesFieldIndex =
       UE::Cameras::FCameraDebugBlock::RegisterField
                 ((FCameraDebugBlockField *)
                  &`private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Cameras::TCameraDebugGraph<3>_>*___ptr64___cdecl_UE::Cameras::FPerlinNoiseRotationShakeDebugBlock::GetNoiseValuesField(void)'
                   ::__l2::StaticField,pTVar1);
  return;
}

// PanningCorrectionFieldIndex'' @ 1413d88b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FPanningFramingCameraDebugBlock::
PanningCorrectionFieldIndex__(void)

{
  TArray<UE::Cameras::FCameraDebugBlockField_*,TSizedDefaultAllocator<32>_> *pTVar1;
  FName local_res8 [4];
  
  pTVar1 = UE::Cameras::FPanningFramingCameraDebugBlock::GetStaticFields();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Math::TRotator<double>_>*___ptr64___cdecl_UE::Cameras::FPanningFramingCameraDebugBlock::GetPanningCorrectionField(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Math::TRotator<double>_>*___ptr64___cdecl_UE::Cameras::FPanningFramingCameraDebugBlock::GetPanningCorrectionField(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Math::TRotator<double>_>*___ptr64___cdecl_UE::Cameras::FPanningFramingCameraDebugBlock::GetPanningCorrectionField(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(local_res8,L"PanningCorrection");
      _DAT_155365b78 = 0x400000;
      _StaticField = &___7__TCameraDebugBlockField_U__TRotator_N_Math_UE___Cameras_UE__6B_;
      _DAT_155365b70 = local_res8[0];
      atexit(`UE::Cameras::FPanningFramingCameraDebugBlock::GetPanningCorrectionField'::__l2::
             _dynamic_atexit_destructor_for__StaticField__);
      _Init_thread_footer(&`private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Math::TRotator<double>_>*___ptr64___cdecl_UE::Cameras::FPanningFramingCameraDebugBlock::GetPanningCorrectionField(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  UE::Cameras::FPanningFramingCameraDebugBlock::PanningCorrectionFieldIndex =
       UE::Cameras::FCameraDebugBlock::RegisterField
                 ((FCameraDebugBlockField *)
                  &`private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Math::TRotator<double>_>*___ptr64___cdecl_UE::Cameras::FPanningFramingCameraDebugBlock::GetPanningCorrectionField(void)'
                   ::__l2::StaticField,pTVar1);
  return;
}

// PanningRotationFieldIndex'' @ 1413d8970

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FPanningFramingCameraDebugBlock::PanningRotationFieldIndex__
          (void)

{
  TArray<UE::Cameras::FCameraDebugBlockField_*,TSizedDefaultAllocator<32>_> *pTVar1;
  FName local_res8 [4];
  
  pTVar1 = UE::Cameras::FPanningFramingCameraDebugBlock::GetStaticFields();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Math::TRotator<double>_>*___ptr64___cdecl_UE::Cameras::FPanningFramingCameraDebugBlock::GetPanningRotationField(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Math::TRotator<double>_>*___ptr64___cdecl_UE::Cameras::FPanningFramingCameraDebugBlock::GetPanningRotationField(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Math::TRotator<double>_>*___ptr64___cdecl_UE::Cameras::FPanningFramingCameraDebugBlock::GetPanningRotationField(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(local_res8,L"PanningRotation");
      _DAT_155365b58 = 0x280000;
      _StaticField = &___7__TCameraDebugBlockField_U__TRotator_N_Math_UE___Cameras_UE__6B_;
      _DAT_155365b50 = local_res8[0];
      atexit(`UE::Cameras::FPanningFramingCameraDebugBlock::GetPanningRotationField'::__l2::
             _dynamic_atexit_destructor_for__StaticField__);
      _Init_thread_footer(&`private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Math::TRotator<double>_>*___ptr64___cdecl_UE::Cameras::FPanningFramingCameraDebugBlock::GetPanningRotationField(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  UE::Cameras::FPanningFramingCameraDebugBlock::PanningRotationFieldIndex =
       UE::Cameras::FCameraDebugBlock::RegisterField
                 ((FCameraDebugBlockField *)
                  &`private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Math::TRotator<double>_>*___ptr64___cdecl_UE::Cameras::FPanningFramingCameraDebugBlock::GetPanningRotationField(void)'
                   ::__l2::StaticField,pTVar1);
  return;
}

// PawnTransformFieldIndex'' @ 1413d8a30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FPlayerControlRotationDebugBlock::PawnTransformFieldIndex__
          (void)

{
  TArray<UE::Cameras::FCameraDebugBlockField_*,TSizedDefaultAllocator<32>_> *pTVar1;
  FName local_res8 [4];
  
  pTVar1 = UE::Cameras::FPlayerControlRotationDebugBlock::GetStaticFields();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Math::TTransform<double>_>*___ptr64___cdecl_UE::Cameras::FPlayerControlRotationDebugBlock::GetPawnTransformField(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Math::TTransform<double>_>*___ptr64___cdecl_UE::Cameras::FPlayerControlRotationDebugBlock::GetPawnTransformField(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Math::TTransform<double>_>*___ptr64___cdecl_UE::Cameras::FPlayerControlRotationDebugBlock::GetPawnTransformField(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(local_res8,L"PawnTransform");
      _DAT_155365f88 = 0x300000;
      _StaticField = &___7__TCameraDebugBlockField_U__TTransform_N_Math_UE___Cameras_UE__6B_;
      _DAT_155365f80 = local_res8[0];
      atexit(`UE::Cameras::FPlayerControlRotationDebugBlock::GetPawnTransformField'::__l2::
             _dynamic_atexit_destructor_for__StaticField__);
      _Init_thread_footer(&`private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Math::TTransform<double>_>*___ptr64___cdecl_UE::Cameras::FPlayerControlRotationDebugBlock::GetPawnTransformField(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  UE::Cameras::FPlayerControlRotationDebugBlock::PawnTransformFieldIndex =
       UE::Cameras::FCameraDebugBlock::RegisterField
                 ((FCameraDebugBlockField *)
                  &`private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Math::TTransform<double>_>*___ptr64___cdecl_UE::Cameras::FPlayerControlRotationDebugBlock::GetPawnTransformField(void)'
                   ::__l2::StaticField,pTVar1);
  return;
}

// PrivateTypeID'' @ 1413d8af0

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FAutoRotateInput2DCameraDebugBlock::PrivateTypeID__(void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FAutoRotateInput2DCameraDebugBlock");
  UE::Cameras::FAutoRotateInput2DCameraDebugBlock::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FAutoRotateInput2DCameraDebugBlock>)
       UE::Cameras::FCameraObjectTypeID::RegisterNewID();
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FAutoRotateInput2DCameraDebugBlock>::
       StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FAutoRotateInput2DCameraDebugBlock>::
       StaticDestructor;
  local_28.Sizeof = 0x48;
  local_28.Alignof = 8;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)
                  UE::Cameras::FAutoRotateInput2DCameraDebugBlock::PrivateTypeID,&local_28);
  return;
}

// PrivateTypeID'' @ 1413d8b70

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FAutoRotateInput2DCameraNodeEvaluator::PrivateTypeID__(void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FAutoRotateInput2DCameraNodeEvaluator");
  UE::Cameras::FAutoRotateInput2DCameraNodeEvaluator::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FAutoRotateInput2DCameraNodeEvaluator>)
       UE::Cameras::FCameraObjectTypeID::RegisterNewID();
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FAutoRotateInput2DCameraNodeEvaluator>::
       StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FAutoRotateInput2DCameraNodeEvaluator>::
       StaticDestructor;
  local_28.Sizeof = 0x108;
  local_28.Alignof = 8;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)
                  UE::Cameras::FAutoRotateInput2DCameraNodeEvaluator::PrivateTypeID,&local_28);
  return;
}

// PrivateTypeID'' @ 1413d8bf0

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FBlueprintCameraDebugBlock::PrivateTypeID__(void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FBlueprintCameraDebugBlock");
  UE::Cameras::FBlueprintCameraDebugBlock::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FBlueprintCameraDebugBlock>)
       UE::Cameras::FCameraObjectTypeID::RegisterNewID();
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FBlueprintCameraDebugBlock>::StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FBlueprintCameraDebugBlock>::StaticDestructor;
  local_28.Sizeof = 0x38;
  local_28.Alignof = 8;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)UE::Cameras::FBlueprintCameraDebugBlock::PrivateTypeID,
             &local_28);
  return;
}

// PrivateTypeID'' @ 1413d8c70

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FBlueprintCameraNodeEvaluator::PrivateTypeID__(void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FBlueprintCameraNodeEvaluator");
  UE::Cameras::FBlueprintCameraNodeEvaluator::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FBlueprintCameraNodeEvaluator>)
       UE::Cameras::FCameraObjectTypeID::RegisterNewID();
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FBlueprintCameraNodeEvaluator>::
       StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FBlueprintCameraNodeEvaluator>::
       StaticDestructor;
  local_28.Sizeof = 0x28;
  local_28.Alignof = 8;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)UE::Cameras::FBlueprintCameraNodeEvaluator::PrivateTypeID,
             &local_28);
  return;
}

// PrivateTypeID'' @ 1413d8cf0

void __cdecl `dynamic_initializer_for_'UE::Cameras::FCameraModifierService::PrivateTypeID__(void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FCameraModifierService");
  UE::Cameras::FCameraModifierService::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FCameraModifierService>)
       UE::Cameras::FCameraObjectTypeID::RegisterNewID();
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FCameraModifierService>::StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FCameraModifierService>::StaticDestructor;
  local_28.Sizeof = 0x38;
  local_28.Alignof = 8;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)UE::Cameras::FCameraModifierService::PrivateTypeID,&local_28)
  ;
  return;
}

// PrivateTypeID'' @ 1413d8d70

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FCameraParameterSetterService::PrivateTypeID__(void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FCameraParameterSetterService");
  UE::Cameras::FCameraParameterSetterService::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FCameraParameterSetterService>)
       UE::Cameras::FCameraObjectTypeID::RegisterNewID();
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FCameraParameterSetterService>::
       StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FCameraParameterSetterService>::
       StaticDestructor;
  local_28.Sizeof = 0x68;
  local_28.Alignof = 8;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)UE::Cameras::FCameraParameterSetterService::PrivateTypeID,
             &local_28);
  return;
}

// PrivateTypeID'' @ 1413d8df0

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FCameraRigInput1DSlotEvaluator::PrivateTypeID__(void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FCameraRigInput1DSlotEvaluator");
  UE::Cameras::FCameraRigInput1DSlotEvaluator::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FCameraRigInput1DSlotEvaluator>)
       UE::Cameras::FCameraObjectTypeID::RegisterNewID();
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FCameraRigInput1DSlotEvaluator>::
       StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FCameraRigInput1DSlotEvaluator>::
       StaticDestructor;
  local_28.Sizeof = 0x58;
  local_28.Alignof = 8;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)UE::Cameras::FCameraRigInput1DSlotEvaluator::PrivateTypeID,
             &local_28);
  return;
}

// PrivateTypeID'' @ 1413d8e70

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FCameraRigInput2DSlotEvaluator::PrivateTypeID__(void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FCameraRigInput2DSlotEvaluator");
  UE::Cameras::FCameraRigInput2DSlotEvaluator::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FCameraRigInput2DSlotEvaluator>)
       UE::Cameras::FCameraObjectTypeID::RegisterNewID();
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FCameraRigInput2DSlotEvaluator>::
       StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FCameraRigInput2DSlotEvaluator>::
       StaticDestructor;
  local_28.Sizeof = 0x78;
  local_28.Alignof = 8;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)UE::Cameras::FCameraRigInput2DSlotEvaluator::PrivateTypeID,
             &local_28);
  return;
}

// PrivateTypeID'' @ 1413d8ef0

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FCameraShakeCameraNodeEvaluator::PrivateTypeID__(void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FCameraShakeCameraNodeEvaluator");
  UE::Cameras::FCameraShakeCameraNodeEvaluator::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FCameraShakeCameraNodeEvaluator>)
       UE::Cameras::FCameraObjectTypeID::RegisterNewID();
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FCameraShakeCameraNodeEvaluator>::
       StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FCameraShakeCameraNodeEvaluator>::
       StaticDestructor;
  local_28.Sizeof = 0x40;
  local_28.Alignof = 8;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)UE::Cameras::FCameraShakeCameraNodeEvaluator::PrivateTypeID,
             &local_28);
  return;
}

// PrivateTypeID'' @ 1413d8f70

void __cdecl `dynamic_initializer_for_'UE::Cameras::FCameraShakeService::PrivateTypeID__(void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FCameraShakeService");
  UE::Cameras::FCameraShakeService::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FCameraShakeService>)
       UE::Cameras::FCameraObjectTypeID::RegisterNewID();
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FCameraShakeService>::StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FCameraShakeService>::StaticDestructor;
  local_28.Sizeof = 0x48;
  local_28.Alignof = 8;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)UE::Cameras::FCameraShakeService::PrivateTypeID,&local_28);
  return;
}

// PrivateTypeID'' @ 1413d8ff0

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FCameraShakeServiceCameraNodeEvaluator::PrivateTypeID__(void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FCameraShakeServiceCameraNodeEvaluator");
  UE::Cameras::FCameraShakeServiceCameraNodeEvaluator::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FCameraShakeServiceCameraNodeEvaluator>)
       UE::Cameras::FCameraObjectTypeID::RegisterNewID();
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FCameraShakeServiceCameraNodeEvaluator>::
       StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FCameraShakeServiceCameraNodeEvaluator>::
       StaticDestructor;
  local_28.Sizeof = 0x58;
  local_28.Alignof = 8;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)
                  UE::Cameras::FCameraShakeServiceCameraNodeEvaluator::PrivateTypeID,&local_28);
  return;
}

// PrivateTypeID'' @ 1413d9070

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FCompositeShakeCameraNodeEvaluator::PrivateTypeID__(void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FCompositeShakeCameraNodeEvaluator");
  UE::Cameras::FCompositeShakeCameraNodeEvaluator::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FCompositeShakeCameraNodeEvaluator>)
       UE::Cameras::FCameraObjectTypeID::RegisterNewID();
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FCompositeShakeCameraNodeEvaluator>::
       StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FCompositeShakeCameraNodeEvaluator>::
       StaticDestructor;
  local_28.Sizeof = 0x30;
  local_28.Alignof = 8;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)
                  UE::Cameras::FCompositeShakeCameraNodeEvaluator::PrivateTypeID,&local_28);
  return;
}

// PrivateTypeID'' @ 1413d90f0

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FDollyFramingCameraDebugBlock::PrivateTypeID__(void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FDollyFramingCameraDebugBlock");
  UE::Cameras::FDollyFramingCameraDebugBlock::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FDollyFramingCameraDebugBlock>)
       UE::Cameras::FCameraObjectTypeID::RegisterNewID();
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FDollyFramingCameraDebugBlock>::
       StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FDollyFramingCameraDebugBlock>::
       StaticDestructor;
  local_28.Sizeof = 0x78;
  local_28.Alignof = 8;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)UE::Cameras::FDollyFramingCameraDebugBlock::PrivateTypeID,
             &local_28);
  return;
}

// PrivateTypeID'' @ 1413d9170

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FDollyFramingCameraNodeEvaluator::PrivateTypeID__(void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FDollyFramingCameraNodeEvaluator");
  UE::Cameras::FDollyFramingCameraNodeEvaluator::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FDollyFramingCameraNodeEvaluator>)
       UE::Cameras::FCameraObjectTypeID::RegisterNewID();
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FDollyFramingCameraNodeEvaluator>::
       StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FDollyFramingCameraNodeEvaluator>::
       StaticDestructor;
  local_28.Sizeof = 0x6b0;
  local_28.Alignof = 0x10;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)UE::Cameras::FDollyFramingCameraNodeEvaluator::PrivateTypeID,
             &local_28);
  return;
}

// PrivateTypeID'' @ 1413d91f0

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FDrivenControlRotationCameraNodeEvaluator::PrivateTypeID__
          (void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FDrivenControlRotationCameraNodeEvaluator");
  UE::Cameras::FDrivenControlRotationCameraNodeEvaluator::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FDrivenControlRotationCameraNodeEvaluator>)
       UE::Cameras::FCameraObjectTypeID::RegisterNewID();
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FDrivenControlRotationCameraNodeEvaluator>::
       StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FDrivenControlRotationCameraNodeEvaluator>::
       StaticDestructor;
  local_28.Sizeof = 0x78;
  local_28.Alignof = 8;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)
                  UE::Cameras::FDrivenControlRotationCameraNodeEvaluator::PrivateTypeID,&local_28);
  return;
}

// PrivateTypeID'' @ 1413d9270

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FDrivenControlRotationDebugBlock::PrivateTypeID__(void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FDrivenControlRotationDebugBlock");
  UE::Cameras::FDrivenControlRotationDebugBlock::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FDrivenControlRotationDebugBlock>)
       UE::Cameras::FCameraObjectTypeID::RegisterNewID();
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FDrivenControlRotationDebugBlock>::
       StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FDrivenControlRotationDebugBlock>::
       StaticDestructor;
  local_28.Sizeof = 0x58;
  local_28.Alignof = 8;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)UE::Cameras::FDrivenControlRotationDebugBlock::PrivateTypeID,
             &local_28);
  return;
}

// PrivateTypeID'' @ 1413d92f0

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FDrivenControlRotationHelperDebugBlock::PrivateTypeID__(void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FDrivenControlRotationHelperDebugBlock");
  UE::Cameras::FDrivenControlRotationHelperDebugBlock::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FDrivenControlRotationHelperDebugBlock>)
       UE::Cameras::FCameraObjectTypeID::RegisterNewID();
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FDrivenControlRotationHelperDebugBlock>::
       StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FDrivenControlRotationHelperDebugBlock>::
       StaticDestructor;
  local_28.Sizeof = 0x58;
  local_28.Alignof = 8;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)
                  UE::Cameras::FDrivenControlRotationHelperDebugBlock::PrivateTypeID,&local_28);
  return;
}

// PrivateTypeID'' @ 1413d9370

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FDrivenControlRotationHelperService::PrivateTypeID__(void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FDrivenControlRotationHelperService");
  UE::Cameras::FDrivenControlRotationHelperService::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FDrivenControlRotationHelperService>)
       UE::Cameras::FCameraObjectTypeID::RegisterNewID();
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FDrivenControlRotationHelperService>::
       StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FDrivenControlRotationHelperService>::
       StaticDestructor;
  local_28.Sizeof = 0x70;
  local_28.Alignof = 8;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)
                  UE::Cameras::FDrivenControlRotationHelperService::PrivateTypeID,&local_28);
  return;
}

// PrivateTypeID'' @ 1413d93f0

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FEnvelopeShakeCameraNodeEvaluator::PrivateTypeID__(void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FEnvelopeShakeCameraNodeEvaluator");
  UE::Cameras::FEnvelopeShakeCameraNodeEvaluator::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FEnvelopeShakeCameraNodeEvaluator>)
       UE::Cameras::FCameraObjectTypeID::RegisterNewID();
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FEnvelopeShakeCameraNodeEvaluator>::
       StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FEnvelopeShakeCameraNodeEvaluator>::
       StaticDestructor;
  local_28.Sizeof = 0x38;
  local_28.Alignof = 8;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)UE::Cameras::FEnvelopeShakeCameraNodeEvaluator::PrivateTypeID
             ,&local_28);
  return;
}

// PrivateTypeID'' @ 1413d9470

void __cdecl
`dynamic_initializer_for_'UE::Cameras::Test::FFixedTextCameraDirectorEvaluator::PrivateTypeID__
          (void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FFixedTextCameraDirectorEvaluator");
  UE::Cameras::Test::FFixedTextCameraDirectorEvaluator::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::Test::FFixedTextCameraDirectorEvaluator>)
       UE::Cameras::FCameraObjectTypeID::RegisterNewID();
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::Test::FFixedTextCameraDirectorEvaluator>::
       StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::Test::FFixedTextCameraDirectorEvaluator>::
       StaticDestructor;
  local_28.Sizeof = 0x40;
  local_28.Alignof = 8;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)
                  UE::Cameras::Test::FFixedTextCameraDirectorEvaluator::PrivateTypeID,&local_28);
  return;
}

// PrivateTypeID'' @ 1413d94f0

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FInput1DCameraNodeEvaluator::PrivateTypeID__(void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FInput1DCameraNodeEvaluator");
  UE::Cameras::FInput1DCameraNodeEvaluator::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FInput1DCameraNodeEvaluator>)
       UE::Cameras::FCameraObjectTypeID::RegisterNewID();
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FInput1DCameraNodeEvaluator>::StaticConstructor
  ;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FInput1DCameraNodeEvaluator>::StaticDestructor;
  local_28.Sizeof = 0x28;
  local_28.Alignof = 8;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)UE::Cameras::FInput1DCameraNodeEvaluator::PrivateTypeID,
             &local_28);
  return;
}

// PrivateTypeID'' @ 1413d9570

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FInput2DCameraNodeEvaluator::PrivateTypeID__(void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FInput2DCameraNodeEvaluator");
  UE::Cameras::FInput2DCameraNodeEvaluator::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FInput2DCameraNodeEvaluator>)
       UE::Cameras::FCameraObjectTypeID::RegisterNewID();
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FInput2DCameraNodeEvaluator>::StaticConstructor
  ;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FInput2DCameraNodeEvaluator>::StaticDestructor;
  local_28.Sizeof = 0x30;
  local_28.Alignof = 8;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)UE::Cameras::FInput2DCameraNodeEvaluator::PrivateTypeID,
             &local_28);
  return;
}

// PrivateTypeID'' @ 1413d95f0

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FInputAccumulator2DCameraNodeEvaluator::PrivateTypeID__(void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FInputAccumulator2DCameraNodeEvaluator");
  UE::Cameras::FInputAccumulator2DCameraNodeEvaluator::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FInputAccumulator2DCameraNodeEvaluator>)
       UE::Cameras::FCameraObjectTypeID::RegisterNewID();
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FInputAccumulator2DCameraNodeEvaluator>::
       StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FInputAccumulator2DCameraNodeEvaluator>::
       StaticDestructor;
  local_28.Sizeof = 0x80;
  local_28.Alignof = 8;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)
                  UE::Cameras::FInputAccumulator2DCameraNodeEvaluator::PrivateTypeID,&local_28);
  return;
}

// PrivateTypeID'' @ 1413d9670

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FInputAxisBinding2DCameraNodeEvaluator::PrivateTypeID__(void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FInputAxisBinding2DCameraNodeEvaluator");
  UE::Cameras::FInputAxisBinding2DCameraNodeEvaluator::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FInputAxisBinding2DCameraNodeEvaluator>)
       UE::Cameras::FCameraObjectTypeID::RegisterNewID();
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FInputAxisBinding2DCameraNodeEvaluator>::
       StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FInputAxisBinding2DCameraNodeEvaluator>::
       StaticDestructor;
  local_28.Sizeof = 0xa0;
  local_28.Alignof = 8;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)
                  UE::Cameras::FInputAxisBinding2DCameraNodeEvaluator::PrivateTypeID,&local_28);
  return;
}

// PrivateTypeID'' @ 1413d96f0

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FOrientationInitializationDebugBlock::PrivateTypeID__(void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FOrientationInitializationDebugBlock");
  UE::Cameras::FOrientationInitializationDebugBlock::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FOrientationInitializationDebugBlock>)
       UE::Cameras::FCameraObjectTypeID::RegisterNewID();
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FOrientationInitializationDebugBlock>::
       StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FOrientationInitializationDebugBlock>::
       StaticDestructor;
  local_28.Sizeof = 0x230;
  local_28.Alignof = 8;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)
                  UE::Cameras::FOrientationInitializationDebugBlock::PrivateTypeID,&local_28);
  return;
}

// PrivateTypeID'' @ 1413d9770

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FOrientationInitializationService::PrivateTypeID__(void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FOrientationInitializationService");
  UE::Cameras::FOrientationInitializationService::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FOrientationInitializationService>)
       UE::Cameras::FCameraObjectTypeID::RegisterNewID();
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FOrientationInitializationService>::
       StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FOrientationInitializationService>::
       StaticDestructor;
  local_28.Sizeof = 0x2b8;
  local_28.Alignof = 8;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)UE::Cameras::FOrientationInitializationService::PrivateTypeID
             ,&local_28);
  return;
}

// PrivateTypeID'' @ 1413d97f0

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FPanningFramingCameraDebugBlock::PrivateTypeID__(void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FPanningFramingCameraDebugBlock");
  UE::Cameras::FPanningFramingCameraDebugBlock::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FPanningFramingCameraDebugBlock>)
       UE::Cameras::FCameraObjectTypeID::RegisterNewID();
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FPanningFramingCameraDebugBlock>::
       StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FPanningFramingCameraDebugBlock>::
       StaticDestructor;
  local_28.Sizeof = 0x58;
  local_28.Alignof = 8;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)UE::Cameras::FPanningFramingCameraDebugBlock::PrivateTypeID,
             &local_28);
  return;
}

// PrivateTypeID'' @ 1413d9870

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FPanningFramingCameraNodeEvaluator::PrivateTypeID__(void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FPanningFramingCameraNodeEvaluator");
  UE::Cameras::FPanningFramingCameraNodeEvaluator::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FPanningFramingCameraNodeEvaluator>)
       UE::Cameras::FCameraObjectTypeID::RegisterNewID();
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FPanningFramingCameraNodeEvaluator>::
       StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FPanningFramingCameraNodeEvaluator>::
       StaticDestructor;
  local_28.Sizeof = 0x6a0;
  local_28.Alignof = 0x10;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)
                  UE::Cameras::FPanningFramingCameraNodeEvaluator::PrivateTypeID,&local_28);
  return;
}

// PrivateTypeID'' @ 1413d98f0

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FPerlinNoiseLocationShakeCameraNodeEvaluator::PrivateTypeID__
          (void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FPerlinNoiseLocationShakeCameraNodeEvaluator");
  UE::Cameras::FPerlinNoiseLocationShakeCameraNodeEvaluator::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FPerlinNoiseLocationShakeCameraNodeEvaluator>)
       UE::Cameras::FCameraObjectTypeID::RegisterNewID();
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FPerlinNoiseLocationShakeCameraNodeEvaluator>::
       StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FPerlinNoiseLocationShakeCameraNodeEvaluator>::
       StaticDestructor;
  local_28.Sizeof = 0x170;
  local_28.Alignof = 8;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)
                  UE::Cameras::FPerlinNoiseLocationShakeCameraNodeEvaluator::PrivateTypeID,&local_28
            );
  return;
}

// PrivateTypeID'' @ 1413d9970

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FPerlinNoiseLocationShakeDebugBlock::PrivateTypeID__(void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FPerlinNoiseLocationShakeDebugBlock");
  UE::Cameras::FPerlinNoiseLocationShakeDebugBlock::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FPerlinNoiseLocationShakeDebugBlock>)
       UE::Cameras::FCameraObjectTypeID::RegisterNewID();
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FPerlinNoiseLocationShakeDebugBlock>::
       StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FPerlinNoiseLocationShakeDebugBlock>::
       StaticDestructor;
  local_28.Sizeof = 0x40;
  local_28.Alignof = 8;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)
                  UE::Cameras::FPerlinNoiseLocationShakeDebugBlock::PrivateTypeID,&local_28);
  return;
}

// PrivateTypeID'' @ 1413d99f0

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FPerlinNoiseRotationShakeCameraNodeEvaluator::PrivateTypeID__
          (void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FPerlinNoiseRotationShakeCameraNodeEvaluator");
  UE::Cameras::FPerlinNoiseRotationShakeCameraNodeEvaluator::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FPerlinNoiseRotationShakeCameraNodeEvaluator>)
       UE::Cameras::FCameraObjectTypeID::RegisterNewID();
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FPerlinNoiseRotationShakeCameraNodeEvaluator>::
       StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FPerlinNoiseRotationShakeCameraNodeEvaluator>::
       StaticDestructor;
  local_28.Sizeof = 0x170;
  local_28.Alignof = 8;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)
                  UE::Cameras::FPerlinNoiseRotationShakeCameraNodeEvaluator::PrivateTypeID,&local_28
            );
  return;
}

// PrivateTypeID'' @ 1413d9a70

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FPerlinNoiseRotationShakeDebugBlock::PrivateTypeID__(void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FPerlinNoiseRotationShakeDebugBlock");
  UE::Cameras::FPerlinNoiseRotationShakeDebugBlock::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FPerlinNoiseRotationShakeDebugBlock>)
       UE::Cameras::FCameraObjectTypeID::RegisterNewID();
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FPerlinNoiseRotationShakeDebugBlock>::
       StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FPerlinNoiseRotationShakeDebugBlock>::
       StaticDestructor;
  local_28.Sizeof = 0x40;
  local_28.Alignof = 8;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)
                  UE::Cameras::FPerlinNoiseRotationShakeDebugBlock::PrivateTypeID,&local_28);
  return;
}

// PrivateTypeID'' @ 1413d9af0

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FPlayerControlRotationDebugBlock::PrivateTypeID__(void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FPlayerControlRotationDebugBlock");
  UE::Cameras::FPlayerControlRotationDebugBlock::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FPlayerControlRotationDebugBlock>)
       UE::Cameras::FCameraObjectTypeID::RegisterNewID();
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FPlayerControlRotationDebugBlock>::
       StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FPlayerControlRotationDebugBlock>::
       StaticDestructor;
  local_28.Sizeof = 0x110;
  local_28.Alignof = 0x10;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)UE::Cameras::FPlayerControlRotationDebugBlock::PrivateTypeID,
             &local_28);
  return;
}

// PrivateTypeID'' @ 1413d9b70

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FPlayerControlRotationEvaluationService::PrivateTypeID__
          (void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FPlayerControlRotationEvaluationService");
  UE::Cameras::FPlayerControlRotationEvaluationService::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FPlayerControlRotationEvaluationService>)
       UE::Cameras::FCameraObjectTypeID::RegisterNewID();
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FPlayerControlRotationEvaluationService>::
       StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FPlayerControlRotationEvaluationService>::
       StaticDestructor;
  local_28.Sizeof = 0x170;
  local_28.Alignof = 0x10;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)
                  UE::Cameras::FPlayerControlRotationEvaluationService::PrivateTypeID,&local_28);
  return;
}

// PrivateTypeID'' @ 1413d9bf0

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FRawInputAxisBinding2DCameraNodeEvaluator::PrivateTypeID__
          (void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FRawInputAxisBinding2DCameraNodeEvaluator");
  UE::Cameras::FRawInputAxisBinding2DCameraNodeEvaluator::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FRawInputAxisBinding2DCameraNodeEvaluator>)
       UE::Cameras::FCameraObjectTypeID::RegisterNewID();
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FRawInputAxisBinding2DCameraNodeEvaluator>::
       StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FRawInputAxisBinding2DCameraNodeEvaluator>::
       StaticDestructor;
  local_28.Sizeof = 0x58;
  local_28.Alignof = 8;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)
                  UE::Cameras::FRawInputAxisBinding2DCameraNodeEvaluator::PrivateTypeID,&local_28);
  return;
}

// PrivateTypeID'' @ 1413d9c70

void __cdecl
`dynamic_initializer_for_'UE::Cameras::Test::FUpdateTrackerCameraNodeEvaluator::PrivateTypeID__
          (void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FUpdateTrackerCameraNodeEvaluator");
  UE::Cameras::Test::FUpdateTrackerCameraNodeEvaluator::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::Test::FUpdateTrackerCameraNodeEvaluator>)
       UE::Cameras::FCameraObjectTypeID::RegisterNewID();
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::Test::FUpdateTrackerCameraNodeEvaluator>::
       StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::Test::FUpdateTrackerCameraNodeEvaluator>::
       StaticDestructor;
  local_28.Sizeof = 0x30;
  local_28.Alignof = 8;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)
                  UE::Cameras::Test::FUpdateTrackerCameraNodeEvaluator::PrivateTypeID,&local_28);
  return;
}

// RemainingWaitTimeFieldIndex'' @ 1413d9cf0

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FAutoRotateInput2DCameraDebugBlock::
RemainingWaitTimeFieldIndex__(void)

{
  TArray<UE::Cameras::FCameraDebugBlockField_*,TSizedDefaultAllocator<32>_> *pTVar1;
  FName local_res8 [4];
  
  pTVar1 = UE::Cameras::FAutoRotateInput2DCameraDebugBlock::GetStaticFields();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<double>*___ptr64___cdecl_UE::Cameras::FAutoRotateInput2DCameraDebugBlock::GetRemainingWaitTimeField(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_struct_UE::Cameras::TCameraDebugBlockField<double>*___ptr64___cdecl_UE::Cameras::FAutoRotateInput2DCameraDebugBlock::GetRemainingWaitTimeField(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_struct_UE::Cameras::TCameraDebugBlockField<double>*___ptr64___cdecl_UE::Cameras::FAutoRotateInput2DCameraDebugBlock::GetRemainingWaitTimeField(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(local_res8,L"RemainingWaitTime");
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<double>*___ptr64___cdecl_UE::Cameras::FAutoRotateInput2DCameraDebugBlock::GetRemainingWaitTimeField(void)'
      ::__l2::StaticField._16_4_ = 0x280000;
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<double>*___ptr64___cdecl_UE::Cameras::FAutoRotateInput2DCameraDebugBlock::GetRemainingWaitTimeField(void)'
      ::__l2::StaticField._0_8_ = &___7__TCameraDebugBlockField_N_Cameras_UE__6B_;
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<double>*___ptr64___cdecl_UE::Cameras::FAutoRotateInput2DCameraDebugBlock::GetRemainingWaitTimeField(void)'
      ::__l2::StaticField._8_4_ = local_res8[0].ComparisonIndex.Value;
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<double>*___ptr64___cdecl_UE::Cameras::FAutoRotateInput2DCameraDebugBlock::GetRemainingWaitTimeField(void)'
      ::__l2::StaticField._12_4_ = local_res8[0].Number;
      atexit(`UE::Cameras::FAutoRotateInput2DCameraDebugBlock::GetRemainingWaitTimeField'::__l2::
             _dynamic_atexit_destructor_for__StaticField__);
      _Init_thread_footer(&`private:_static_struct_UE::Cameras::TCameraDebugBlockField<double>*___ptr64___cdecl_UE::Cameras::FAutoRotateInput2DCameraDebugBlock::GetRemainingWaitTimeField(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  UE::Cameras::FAutoRotateInput2DCameraDebugBlock::RemainingWaitTimeFieldIndex =
       UE::Cameras::FCameraDebugBlock::RegisterField
                 ((FCameraDebugBlockField *)
                  &`private:_static_struct_UE::Cameras::TCameraDebugBlockField<double>*___ptr64___cdecl_UE::Cameras::FAutoRotateInput2DCameraDebugBlock::GetRemainingWaitTimeField(void)'
                   ::__l2::StaticField,pTVar1);
  return;
}

// WorldTargetFieldIndex'' @ 1413d9db0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FDollyFramingCameraDebugBlock::WorldTargetFieldIndex__(void)

{
  TArray<UE::Cameras::FCameraDebugBlockField_*,TSizedDefaultAllocator<32>_> *pTVar1;
  FName local_res8 [4];
  
  pTVar1 = UE::Cameras::FDollyFramingCameraDebugBlock::GetStaticFields();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Math::TVector<double>_>*___ptr64___cdecl_UE::Cameras::FDollyFramingCameraDebugBlock::GetWorldTargetField(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Math::TVector<double>_>*___ptr64___cdecl_UE::Cameras::FDollyFramingCameraDebugBlock::GetWorldTargetField(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Math::TVector<double>_>*___ptr64___cdecl_UE::Cameras::FDollyFramingCameraDebugBlock::GetWorldTargetField(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(local_res8,L"WorldTarget");
      _DAT_155365aa0 = 0x480000;
      _StaticField = &___7__TCameraDebugBlockField_U__TVector_N_Math_UE___Cameras_UE__6B_;
      _DAT_155365a98 = local_res8[0];
      atexit(`UE::Cameras::FDollyFramingCameraDebugBlock::GetWorldTargetField'::__l2::
             _dynamic_atexit_destructor_for__StaticField__);
      _Init_thread_footer(&`private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Math::TVector<double>_>*___ptr64___cdecl_UE::Cameras::FDollyFramingCameraDebugBlock::GetWorldTargetField(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  UE::Cameras::FDollyFramingCameraDebugBlock::WorldTargetFieldIndex =
       UE::Cameras::FCameraDebugBlock::RegisterField
                 ((FCameraDebugBlockField *)
                  &`private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Math::TVector<double>_>*___ptr64___cdecl_UE::Cameras::FDollyFramingCameraDebugBlock::GetWorldTargetField(void)'
                   ::__l2::StaticField,pTVar1);
  return;
}

// bIsAutoRotatingFieldIndex'' @ 1413d9e70

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FAutoRotateInput2DCameraDebugBlock::
bIsAutoRotatingFieldIndex__(void)

{
  TArray<UE::Cameras::FCameraDebugBlockField_*,TSizedDefaultAllocator<32>_> *pTVar1;
  FName local_res8 [4];
  
  pTVar1 = UE::Cameras::FAutoRotateInput2DCameraDebugBlock::GetStaticFields();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<bool>*___ptr64___cdecl_UE::Cameras::FAutoRotateInput2DCameraDebugBlock::GetbIsAutoRotatingField(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_struct_UE::Cameras::TCameraDebugBlockField<bool>*___ptr64___cdecl_UE::Cameras::FAutoRotateInput2DCameraDebugBlock::GetbIsAutoRotatingField(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_struct_UE::Cameras::TCameraDebugBlockField<bool>*___ptr64___cdecl_UE::Cameras::FAutoRotateInput2DCameraDebugBlock::GetbIsAutoRotatingField(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(local_res8,L"bIsAutoRotating");
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<bool>*___ptr64___cdecl_UE::Cameras::FAutoRotateInput2DCameraDebugBlock::GetbIsAutoRotatingField(void)'
      ::__l2::StaticField._16_4_ = 0x400000;
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<bool>*___ptr64___cdecl_UE::Cameras::FAutoRotateInput2DCameraDebugBlock::GetbIsAutoRotatingField(void)'
      ::__l2::StaticField._0_8_ = &___7__TCameraDebugBlockField__N_Cameras_UE__6B_;
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<bool>*___ptr64___cdecl_UE::Cameras::FAutoRotateInput2DCameraDebugBlock::GetbIsAutoRotatingField(void)'
      ::__l2::StaticField._8_4_ = local_res8[0].ComparisonIndex.Value;
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<bool>*___ptr64___cdecl_UE::Cameras::FAutoRotateInput2DCameraDebugBlock::GetbIsAutoRotatingField(void)'
      ::__l2::StaticField._12_4_ = local_res8[0].Number;
      atexit(`UE::Cameras::FAutoRotateInput2DCameraDebugBlock::GetbIsAutoRotatingField'::__l2::
             _dynamic_atexit_destructor_for__StaticField__);
      _Init_thread_footer(&`private:_static_struct_UE::Cameras::TCameraDebugBlockField<bool>*___ptr64___cdecl_UE::Cameras::FAutoRotateInput2DCameraDebugBlock::GetbIsAutoRotatingField(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  UE::Cameras::FAutoRotateInput2DCameraDebugBlock::bIsAutoRotatingFieldIndex =
       UE::Cameras::FCameraDebugBlock::RegisterField
                 ((FCameraDebugBlockField *)
                  &`private:_static_struct_UE::Cameras::TCameraDebugBlockField<bool>*___ptr64___cdecl_UE::Cameras::FAutoRotateInput2DCameraDebugBlock::GetbIsAutoRotatingField(void)'
                   ::__l2::StaticField,pTVar1);
  return;
}

// bIsFrozenFieldIndex'' @ 1413d9f30

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FPlayerControlRotationDebugBlock::bIsFrozenFieldIndex__(void)

{
  TArray<UE::Cameras::FCameraDebugBlockField_*,TSizedDefaultAllocator<32>_> *pTVar1;
  FName local_res8 [4];
  
  pTVar1 = UE::Cameras::FPlayerControlRotationDebugBlock::GetStaticFields();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<bool>*___ptr64___cdecl_UE::Cameras::FPlayerControlRotationDebugBlock::GetbIsFrozenField(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_struct_UE::Cameras::TCameraDebugBlockField<bool>*___ptr64___cdecl_UE::Cameras::FPlayerControlRotationDebugBlock::GetbIsFrozenField(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_struct_UE::Cameras::TCameraDebugBlockField<bool>*___ptr64___cdecl_UE::Cameras::FPlayerControlRotationDebugBlock::GetbIsFrozenField(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(local_res8,L"bIsFrozen");
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<bool>*___ptr64___cdecl_UE::Cameras::FPlayerControlRotationDebugBlock::GetbIsFrozenField(void)'
      ::__l2::StaticField._16_4_ = 0xc00000;
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<bool>*___ptr64___cdecl_UE::Cameras::FPlayerControlRotationDebugBlock::GetbIsFrozenField(void)'
      ::__l2::StaticField._0_8_ = &___7__TCameraDebugBlockField__N_Cameras_UE__6B_;
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<bool>*___ptr64___cdecl_UE::Cameras::FPlayerControlRotationDebugBlock::GetbIsFrozenField(void)'
      ::__l2::StaticField._8_4_ = local_res8[0].ComparisonIndex.Value;
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<bool>*___ptr64___cdecl_UE::Cameras::FPlayerControlRotationDebugBlock::GetbIsFrozenField(void)'
      ::__l2::StaticField._12_4_ = local_res8[0].Number;
      atexit(`UE::Cameras::FPlayerControlRotationDebugBlock::GetbIsFrozenField'::__l2::
             _dynamic_atexit_destructor_for__StaticField__);
      _Init_thread_footer(&`private:_static_struct_UE::Cameras::TCameraDebugBlockField<bool>*___ptr64___cdecl_UE::Cameras::FPlayerControlRotationDebugBlock::GetbIsFrozenField(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  UE::Cameras::FPlayerControlRotationDebugBlock::bIsFrozenFieldIndex =
       UE::Cameras::FCameraDebugBlock::RegisterField
                 ((FCameraDebugBlockField *)
                  &`private:_static_struct_UE::Cameras::TCameraDebugBlockField<bool>*___ptr64___cdecl_UE::Cameras::FPlayerControlRotationDebugBlock::GetbIsFrozenField(void)'
                   ::__l2::StaticField,pTVar1);
  return;
}

// bLastWasActiveCameraRigFieldIndex'' @ 1413d9ff0

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FDrivenControlRotationDebugBlock::
bLastWasActiveCameraRigFieldIndex__(void)

{
  TArray<UE::Cameras::FCameraDebugBlockField_*,TSizedDefaultAllocator<32>_> *pTVar1;
  FName local_res8 [4];
  
  pTVar1 = UE::Cameras::FDrivenControlRotationDebugBlock::GetStaticFields();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<bool>*___ptr64___cdecl_UE::Cameras::FDrivenControlRotationDebugBlock::GetbLastWasActiveCameraRigField(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_struct_UE::Cameras::TCameraDebugBlockField<bool>*___ptr64___cdecl_UE::Cameras::FDrivenControlRotationDebugBlock::GetbLastWasActiveCameraRigField(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_struct_UE::Cameras::TCameraDebugBlockField<bool>*___ptr64___cdecl_UE::Cameras::FDrivenControlRotationDebugBlock::GetbLastWasActiveCameraRigField(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(local_res8,L"bLastWasActiveCameraRig");
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<bool>*___ptr64___cdecl_UE::Cameras::FDrivenControlRotationDebugBlock::GetbLastWasActiveCameraRigField(void)'
      ::__l2::StaticField._16_4_ = 0x500000;
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<bool>*___ptr64___cdecl_UE::Cameras::FDrivenControlRotationDebugBlock::GetbLastWasActiveCameraRigField(void)'
      ::__l2::StaticField._0_8_ = &___7__TCameraDebugBlockField__N_Cameras_UE__6B_;
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<bool>*___ptr64___cdecl_UE::Cameras::FDrivenControlRotationDebugBlock::GetbLastWasActiveCameraRigField(void)'
      ::__l2::StaticField._8_4_ = local_res8[0].ComparisonIndex.Value;
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<bool>*___ptr64___cdecl_UE::Cameras::FDrivenControlRotationDebugBlock::GetbLastWasActiveCameraRigField(void)'
      ::__l2::StaticField._12_4_ = local_res8[0].Number;
      atexit(`UE::Cameras::FDrivenControlRotationDebugBlock::GetbLastWasActiveCameraRigField'::__l2
             ::_dynamic_atexit_destructor_for__StaticField__);
      _Init_thread_footer(&`private:_static_struct_UE::Cameras::TCameraDebugBlockField<bool>*___ptr64___cdecl_UE::Cameras::FDrivenControlRotationDebugBlock::GetbLastWasActiveCameraRigField(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  UE::Cameras::FDrivenControlRotationDebugBlock::bLastWasActiveCameraRigFieldIndex =
       UE::Cameras::FCameraDebugBlock::RegisterField
                 ((FCameraDebugBlockField *)
                  &`private:_static_struct_UE::Cameras::TCameraDebugBlockField<bool>*___ptr64___cdecl_UE::Cameras::FDrivenControlRotationDebugBlock::GetbLastWasActiveCameraRigField(void)'
                   ::__l2::StaticField,pTVar1);
  return;
}

// `dynamic_initializer_for_'CVarGameplayCamerasAutoRotateSnapThreshold'' @ 1413da0b0

void __cdecl
UE::Cameras::_dynamic_initializer_for__CVarGameplayCamerasAutoRotateSnapThreshold__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGameplayCamerasAutoRotateSnapThreshold,L"GameplayCameras.AutoRotate.SnapThreshold"
             ,&GGameplayCamerasAutoRotateSnapThreshold,L"",0);
  atexit(_dynamic_atexit_destructor_for__CVarGameplayCamerasAutoRotateSnapThreshold__);
  return;
}

// `dynamic_initializer_for_'CVarGameplayCamerasControlRotationDebugArrowLength'' @ 1413da100

void __cdecl
UE::Cameras::_dynamic_initializer_for__CVarGameplayCamerasControlRotationDebugArrowLength__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGameplayCamerasControlRotationDebugArrowLength,
             L"GameplayControlRotation.DebugArrowLength",
             &GGameplayCamerasControlRotationDebugArrowLength,L"",0);
  atexit(_dynamic_atexit_destructor_for__CVarGameplayCamerasControlRotationDebugArrowLength__);
  return;
}

// `dynamic_initializer_for_'CVarGameplayCamerasDebugOrientationInitializationShowLastTargetPreservation'' @ 1413da150

void __cdecl
UE::Cameras::
_dynamic_initializer_for__CVarGameplayCamerasDebugOrientationInitializationShowLastTargetPreservation__
          (void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGameplayCamerasDebugOrientationInitializationShowLastTargetPreservation,
             L"GameplayCameras.Debug.OrientationInitialization.ShowLastTargetPreservation",
             &GGameplayCamerasDebugOrientationInitializationShowLastTargetPreservation,L"",0);
  atexit(
        _dynamic_atexit_destructor_for__CVarGameplayCamerasDebugOrientationInitializationShowLastTargetPreservation__
        );
  return;
}

// `dynamic_initializer_for_'FCameraAssetBuilderDefaultParametersCollisionTestAutomationTestInstance'' @ 1413da1a0

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FCameraAssetBuilderDefaultParametersCollisionTestAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FCameraAssetBuilderDefaultParametersCollisionTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FCameraAssetBuilderDefaultParametersCollisionTestAutomationTestInstance,&local_18,
             false);
  FCameraAssetBuilderDefaultParametersCollisionTestAutomationTestInstance._0_8_ =
       &___7FCameraAssetBuilderDefaultParametersCollisionTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FCameraAssetBuilderDefaultParametersCollisionTestAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FCameraAssetBuilderDefaultParametersTestAutomationTestInstance'' @ 1413da200

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FCameraAssetBuilderDefaultParametersTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FCameraAssetBuilderDefaultParametersTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FCameraAssetBuilderDefaultParametersTestAutomationTestInstance,
             &local_18,false);
  FCameraAssetBuilderDefaultParametersTestAutomationTestInstance._0_8_ =
       &___7FCameraAssetBuilderDefaultParametersTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FCameraAssetBuilderDefaultParametersTestAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FCameraRigAssetBuilderDrivenOverridesTestAutomationTestInstance'' @ 1413da260

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FCameraRigAssetBuilderDrivenOverridesTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FCameraRigAssetBuilderDrivenOverridesTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FCameraRigAssetBuilderDrivenOverridesTestAutomationTestInstance
             ,&local_18,false);
  FCameraRigAssetBuilderDrivenOverridesTestAutomationTestInstance._0_8_ =
       &___7FCameraRigAssetBuilderDrivenOverridesTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FCameraRigAssetBuilderDrivenOverridesTestAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FCameraRigAssetBuilderNullTestAutomationTestInstance'' @ 1413da2c0

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FCameraRigAssetBuilderNullTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FCameraRigAssetBuilderNullTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FCameraRigAssetBuilderNullTestAutomationTestInstance,&local_18,
             false);
  FCameraRigAssetBuilderNullTestAutomationTestInstance._0_8_ =
       &___7FCameraRigAssetBuilderNullTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FCameraRigAssetBuilderNullTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FCameraRigAssetBuilderSimpleAllocationTestAutomationTestInstance'' @ 1413da320

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FCameraRigAssetBuilderSimpleAllocationTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FCameraRigAssetBuilderSimpleAllocationTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)
             &FCameraRigAssetBuilderSimpleAllocationTestAutomationTestInstance,&local_18,false);
  FCameraRigAssetBuilderSimpleAllocationTestAutomationTestInstance._0_8_ =
       &___7FCameraRigAssetBuilderSimpleAllocationTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FCameraRigAssetBuilderSimpleAllocationTestAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FCameraRigAssetBuilderSimpleParameterTestAutomationTestInstance'' @ 1413da380

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FCameraRigAssetBuilderSimpleParameterTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FCameraRigAssetBuilderSimpleParameterTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FCameraRigAssetBuilderSimpleParameterTestAutomationTestInstance
             ,&local_18,false);
  FCameraRigAssetBuilderSimpleParameterTestAutomationTestInstance._0_8_ =
       &___7FCameraRigAssetBuilderSimpleParameterTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FCameraRigAssetBuilderSimpleParameterTestAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FCameraSystemFrameFlagsTestAutomationTestInstance'' @ 1413da3e0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FCameraSystemFrameFlagsTestAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FCameraSystemFrameFlagsTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FCameraSystemFrameFlagsTestAutomationTestInstance,&local_18,
             false);
  FCameraSystemFrameFlagsTestAutomationTestInstance._0_8_ = &___7FCameraSystemFrameFlagsTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FCameraSystemFrameFlagsTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FGameplayCamerasCriticalDamperTestAutomationTestInstance'' @ 1413da440

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FGameplayCamerasCriticalDamperTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FGameplayCamerasCriticalDamperTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FGameplayCamerasCriticalDamperTestAutomationTestInstance,
             &local_18,false);
  FGameplayCamerasCriticalDamperTestAutomationTestInstance._0_8_ =
       &___7FGameplayCamerasCriticalDamperTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FGameplayCamerasCriticalDamperTestAutomationTestInstance__)
  ;
  return;
}

// `dynamic_initializer_for_'GOverridablePropertyBagCustomVersion'' @ 1413da4a0

void __cdecl _dynamic_initializer_for__GOverridablePropertyBagCustomVersion__(void)

{
  FGuid local_18;
  
  local_18 = FOverridablePropertyBagCustomVersion::GUID;
  FCurrentCustomVersions::Register
            (&local_18,1,L"OverridablePropertyBagCustomVersion",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  atexit(_dynamic_atexit_destructor_for__GOverridablePropertyBagCustomVersion__);
  return;
}

// `dynamic_initializer_for_'NAME_UBlueprintCameraNodeEvaluator_InitializeCameraNode'' @ 1413da4e0

void __cdecl
_dynamic_initializer_for__NAME_UBlueprintCameraNodeEvaluator_InitializeCameraNode__(void)

{
  FName::FName(&NAME_UBlueprintCameraNodeEvaluator_InitializeCameraNode,L"InitializeCameraNode");
  return;
}

// `dynamic_initializer_for_'NAME_UBlueprintCameraNodeEvaluator_TickCameraNode'' @ 1413da500

void __cdecl _dynamic_initializer_for__NAME_UBlueprintCameraNodeEvaluator_TickCameraNode__(void)

{
  FName::FName(&NAME_UBlueprintCameraNodeEvaluator_TickCameraNode,L"TickCameraNode");
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Private_Tests_GameplayCamerasTestObjects_h__Script_GameplayCameras_2718845975'' @ 1413da520

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Private_Tests_GameplayCamerasTestObjects_h__Script_GameplayCameras_2718845975__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Private_Tests_GameplayCamerasTestObjects_h__Script_GameplayCameras_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Framing_CameraActorTargetInfo_h__Script_GameplayCameras_1172804311'' @ 1413da560

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Framing_CameraActorTargetInfo_h__Script_GameplayCameras_1172804311__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Framing_CameraActorTargetInfo_h__Script_GameplayCameras_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Framing_CameraActorTargetInfo_h__Script_GameplayCameras_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Framing_CameraFramingZone_h__Script_GameplayCameras_3767293882'' @ 1413da5b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Framing_CameraFramingZone_h__Script_GameplayCameras_3767293882__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Framing_CameraFramingZone_h__Script_GameplayCameras_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Framing_DollyFramingCameraNode_h__Script_GameplayCameras_2401004366'' @ 1413da5f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Framing_DollyFramingCameraNode_h__Script_GameplayCameras_2401004366__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Framing_DollyFramingCameraNode_h__Script_GameplayCameras_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Framing_PanningFramingCameraNode_h__Script_GameplayCameras_1869328872'' @ 1413da630

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Framing_PanningFramingCameraNode_h__Script_GameplayCameras_1869328872__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Framing_PanningFramingCameraNode_h__Script_GameplayCameras_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_AutoRotateInput2DCameraNode_h__Script_GameplayCameras_3318235108'' @ 1413da670

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_AutoRotateInput2DCameraNode_h__Script_GameplayCameras_3318235108__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_AutoRotateInput2DCameraNode_h__Script_GameplayCameras_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_AutoRotateInput2DCameraNode_h__Script_GameplayCameras_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_CameraRigInput1DSlot_h__Script_GameplayCameras_2292661392'' @ 1413da6c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_CameraRigInput1DSlot_h__Script_GameplayCameras_2292661392__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_CameraRigInput1DSlot_h__Script_GameplayCameras_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_CameraRigInput2DSlot_h__Script_GameplayCameras_3491945855'' @ 1413da700

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_CameraRigInput2DSlot_h__Script_GameplayCameras_3491945855__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_CameraRigInput2DSlot_h__Script_GameplayCameras_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_CameraRigInputSlotTypes_h__Script_GameplayCameras_1771400201'' @ 1413da740

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_CameraRigInputSlotTypes_h__Script_GameplayCameras_1771400201__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_CameraRigInputSlotTypes_h__Script_GameplayCameras_Statics
             ::ScriptStructInfo,3,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_DrivenControlRotationCameraNode_h__Script_GameplayCameras_1274505072'' @ 1413da780

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_DrivenControlRotationCameraNode_h__Script_GameplayCameras_1274505072__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_DrivenControlRotationCameraNode_h__Script_GameplayCameras_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_Input1DCameraNode_h__Script_GameplayCameras_1832205866'' @ 1413da7c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_Input1DCameraNode_h__Script_GameplayCameras_1832205866__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_Input1DCameraNode_h__Script_GameplayCameras_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_Input2DCameraNode_h__Script_GameplayCameras_1882772383'' @ 1413da800

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_Input2DCameraNode_h__Script_GameplayCameras_1882772383__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_Input2DCameraNode_h__Script_GameplayCameras_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_InputAccumulator2DCameraNode_h__Script_GameplayCameras_3877272330'' @ 1413da840

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_InputAccumulator2DCameraNode_h__Script_GameplayCameras_3877272330__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_InputAccumulator2DCameraNode_h__Script_GameplayCameras_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_InputAxisBinding2DCameraNode_h__Script_GameplayCameras_2025717050'' @ 1413da880

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_InputAxisBinding2DCameraNode_h__Script_GameplayCameras_2025717050__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_InputAxisBinding2DCameraNode_h__Script_GameplayCameras_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_RawInputAxisBinding2DCameraNode_h__Script_GameplayCameras_3352649937'' @ 1413da8c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_RawInputAxisBinding2DCameraNode_h__Script_GameplayCameras_3352649937__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Input_RawInputAxisBinding2DCameraNode_h__Script_GameplayCameras_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Shakes_CameraShakeCameraNode_h__Script_GameplayCameras_3079550082'' @ 1413da900

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Shakes_CameraShakeCameraNode_h__Script_GameplayCameras_3079550082__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Shakes_CameraShakeCameraNode_h__Script_GameplayCameras_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Shakes_CameraShakeCameraNode_h__Script_GameplayCameras_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Shakes_CompositeShakeCameraNode_h__Script_GameplayCameras_3384448541'' @ 1413da950

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Shakes_CompositeShakeCameraNode_h__Script_GameplayCameras_3384448541__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Shakes_CompositeShakeCameraNode_h__Script_GameplayCameras_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Shakes_EnvelopeShakeCameraNode_h__Script_GameplayCameras_1432297667'' @ 1413da990

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Shakes_EnvelopeShakeCameraNode_h__Script_GameplayCameras_1432297667__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Shakes_EnvelopeShakeCameraNode_h__Script_GameplayCameras_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Shakes_PerlinNoiseLocationShakeCameraNode_h__Script_GameplayCameras_2526627296'' @ 1413da9d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Shakes_PerlinNoiseLocationShakeCameraNode_h__Script_GameplayCameras_2526627296__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Shakes_PerlinNoiseLocationShakeCameraNode_h__Script_GameplayCameras_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Shakes_PerlinNoiseRotationShakeCameraNode_h__Script_GameplayCameras_567451993'' @ 1413daa10

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Shakes_PerlinNoiseRotationShakeCameraNode_h__Script_GameplayCameras_567451993__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Shakes_PerlinNoiseRotationShakeCameraNode_h__Script_GameplayCameras_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Utility_BlueprintCameraNode_h__Script_GameplayCameras_71743362'' @ 1413daa50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Utility_BlueprintCameraNode_h__Script_GameplayCameras_71743362__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_Utility_BlueprintCameraNode_h__Script_GameplayCameras_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Services_CameraShakeService_h__Script_GameplayCameras_504799307'' @ 1413daa90

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Services_CameraShakeService_h__Script_GameplayCameras_504799307__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Services_CameraShakeService_h__Script_GameplayCameras_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_StructUtils_OverridablePropertyBag_h__Script_GameplayCameras_2208675025'' @ 1413daad0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_StructUtils_OverridablePropertyBag_h__Script_GameplayCameras_2208675025__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_StructUtils_OverridablePropertyBag_h__Script_GameplayCameras_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Transitions_DefaultTransitionConditions_h__Script_GameplayCameras_769063725'' @ 1413dab10

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Transitions_DefaultTransitionConditions_h__Script_GameplayCameras_769063725__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Transitions_DefaultTransitionConditions_h__Script_GameplayCameras_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Transitions_GameplayTagTransitionConditions_h__Script_GameplayCameras_787029234'' @ 1413dab50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Transitions_GameplayTagTransitionConditions_h__Script_GameplayCameras_787029234__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Transitions_GameplayTagTransitionConditions_h__Script_GameplayCameras_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_ValueInterpolators_AccelerationDecelerationValueInterpolator_h__Script_GameplayCameras_706123457'' @ 1413dab90

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_ValueInterpolators_AccelerationDecelerationValueInterpolator_h__Script_GameplayCameras_706123457__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_ValueInterpolators_AccelerationDecelerationValueInterpolator_h__Script_GameplayCameras_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_ValueInterpolators_CriticalDamperValueInterpolator_h__Script_GameplayCameras_4241557518'' @ 1413dabd0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_ValueInterpolators_CriticalDamperValueInterpolator_h__Script_GameplayCameras_4241557518__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_ValueInterpolators_CriticalDamperValueInterpolator_h__Script_GameplayCameras_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_ValueInterpolators_DoubleIIRValueInterpolator_h__Script_GameplayCameras_1584494130'' @ 1413dac10

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_ValueInterpolators_DoubleIIRValueInterpolator_h__Script_GameplayCameras_1584494130__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_ValueInterpolators_DoubleIIRValueInterpolator_h__Script_GameplayCameras_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_ValueInterpolators_IIRValueInterpolator_h__Script_GameplayCameras_1494096724'' @ 1413dac50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_ValueInterpolators_IIRValueInterpolator_h__Script_GameplayCameras_1494096724__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_ValueInterpolators_IIRValueInterpolator_h__Script_GameplayCameras_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// NewStructOps @ 14d641ed0

void * __cdecl
Z_Construct_UScriptStruct_FInstancedOverridablePropertyBag_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FInstancedOverridablePropertyBag,&UE::CoreUObject::Private::Construct<FInstancedOverridablePropertyBag>,&UE::CoreUObject::Private::ConstructForTests<FInstancedOverridablePropertyBag>,&UE::CoreUObject::Private::Destruct<FInstancedOverridablePropertyBag>,&UE::CoreUObject::Private::SerializeArchive<FInstancedOverridablePropertyBag>,&UE::CoreUObject::Private::GetPreloadDependencies<FInstancedOverridablePropertyBag>,&UE::CoreUObject::Private::Copy<FInstancedOverridablePropertyBag>,&UE::CoreUObject::Private::Identical<FInstancedOverridablePropertyBag>,&UE::CoreUObject::Private::AddStructReferencedObjects<FInstancedOverridablePropertyBag>,&UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FInstancedOverridablePropertyBag>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UInputAccumulator2DCameraNode @ 14d641f10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInputAccumulator2DCameraNode(void)

{
  if (Z_Registration_Info_UClass_UInputAccumulator2DCameraNode.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInputAccumulator2DCameraNode.OuterSingleton,
               &Z_Construct_UClass_UInputAccumulator2DCameraNode_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInputAccumulator2DCameraNode.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14d643dd0

void * __thiscall
FCameraAssetBuilderDefaultParametersCollisionTest::_scalar_deleting_destructor_
          (FCameraAssetBuilderDefaultParametersCollisionTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// Z_Construct_UClass_UBlueprintCameraNodeEvaluator_NoRegister @ 14d643e10

UClass * __cdecl Z_Construct_UClass_UBlueprintCameraNodeEvaluator_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlueprintCameraNodeEvaluator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"BlueprintCameraNodeEvaluator",
               &Z_Registration_Info_UClass_UBlueprintCameraNodeEvaluator.InnerSingleton,
               UBlueprintCameraNodeEvaluator::StaticRegisterNativesUBlueprintCameraNodeEvaluator,
               0x110,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UBlueprintCameraNodeEvaluator>,
               InternalVTableHelperCtorCaller<UBlueprintCameraNodeEvaluator>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlueprintCameraNodeEvaluator.InnerSingleton;
}

// Z_Construct_UClass_UDoubleIIRValueInterpolator @ 14d643fb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDoubleIIRValueInterpolator(void)

{
  if (Z_Registration_Info_UClass_UDoubleIIRValueInterpolator.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDoubleIIRValueInterpolator.OuterSingleton,
               &Z_Construct_UClass_UDoubleIIRValueInterpolator_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDoubleIIRValueInterpolator.OuterSingleton;
}

// NewProp_bUseFixedStep_SetBit @ 14d643ff0

void __cdecl
Z_Construct_UClass_UDoubleIIRValueInterpolator_Statics::NewProp_bUseFixedStep_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// Z_Construct_UClass_UDollyFramingCameraNode @ 14d644040

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDollyFramingCameraNode(void)

{
  if (Z_Registration_Info_UClass_UDollyFramingCameraNode.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDollyFramingCameraNode.OuterSingleton,
               &Z_Construct_UClass_UDollyFramingCameraNode_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDollyFramingCameraNode.OuterSingleton;
}

// Z_Construct_UScriptStruct_FCameraFramingZone @ 14d644080

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCameraFramingZone(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCameraFramingZone.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCameraFramingZone.InnerSingleton,
               &Z_Construct_UScriptStruct_FCameraFramingZone_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCameraFramingZone.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCameraFramingZone.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewStructOps @ 14d644100

void * __cdecl Z_Construct_UScriptStruct_FCameraFramingZone_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCameraFramingZone,&UE::CoreUObject::Private::Construct<FCameraFramingZone>,&UE::CoreUObject::Private::ConstructForTests<FCameraFramingZone>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d644200

void * __cdecl Z_Construct_UScriptStruct_FCameraFramingZoneParameter_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCameraFramingZoneParameter,&UE::CoreUObject::Private::Construct<FCameraFramingZoneParameter>,&UE::CoreUObject::Private::ConstructForTests<FCameraFramingZoneParameter>,&UE::CoreUObject::Private::Destruct<FCameraFramingZoneParameter>,&UE::CoreUObject::Private::Copy<FCameraFramingZoneParameter>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UBlueprintCameraNode @ 14d644240

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UBlueprintCameraNode(void)

{
  if (Z_Registration_Info_UClass_UBlueprintCameraNode.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UBlueprintCameraNode.OuterSingleton,
               &Z_Construct_UClass_UBlueprintCameraNode_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UBlueprintCameraNode.OuterSingleton;
}

// Z_Construct_UClass_UBlueprintCameraNodeEvaluator @ 14d644280

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UBlueprintCameraNodeEvaluator(void)

{
  if (Z_Registration_Info_UClass_UBlueprintCameraNodeEvaluator.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UBlueprintCameraNodeEvaluator.OuterSingleton,
               &Z_Construct_UClass_UBlueprintCameraNodeEvaluator_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UBlueprintCameraNodeEvaluator.OuterSingleton;
}

// Z_Construct_UFunction_UBlueprintCameraNodeEvaluator_FindEvaluationContextOwnerActor @ 14d6442c0

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintCameraNodeEvaluator_FindEvaluationContextOwnerActor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraNodeEvaluator_FindEvaluationContextOwnerActor_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintCameraNodeEvaluator_GetCameraPose @ 14d644300

UFunction * __cdecl Z_Construct_UFunction_UBlueprintCameraNodeEvaluator_GetCameraPose(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraNodeEvaluator_GetCameraPose_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintCameraNodeEvaluator_GetCurrentCameraPose @ 14d644410

UFunction * __cdecl Z_Construct_UFunction_UBlueprintCameraNodeEvaluator_GetCurrentCameraPose(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraNodeEvaluator_GetCurrentCameraPose_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintCameraNodeEvaluator_GetPlayerController @ 14d644450

UFunction * __cdecl Z_Construct_UFunction_UBlueprintCameraNodeEvaluator_GetPlayerController(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraNodeEvaluator_GetPlayerController_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintCameraNodeEvaluator_InitializeCameraNode @ 14d6444d0

UFunction * __cdecl Z_Construct_UFunction_UBlueprintCameraNodeEvaluator_InitializeCameraNode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraNodeEvaluator_InitializeCameraNode_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintCameraNodeEvaluator_SetCameraPose @ 14d644510

UFunction * __cdecl Z_Construct_UFunction_UBlueprintCameraNodeEvaluator_SetCameraPose(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraNodeEvaluator_SetCameraPose_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintCameraNodeEvaluator_SetCurrentCameraPose @ 14d644610

UFunction * __cdecl Z_Construct_UFunction_UBlueprintCameraNodeEvaluator_SetCurrentCameraPose(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraNodeEvaluator_SetCurrentCameraPose_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintCameraNodeEvaluator_SetDefaultOwningCameraRigParameters @ 14d644650

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintCameraNodeEvaluator_SetDefaultOwningCameraRigParameters(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraNodeEvaluator_SetDefaultOwningCameraRigParameters_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UPanningFramingCameraNode @ 14d644690

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPanningFramingCameraNode(void)

{
  if (Z_Registration_Info_UClass_UPanningFramingCameraNode.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPanningFramingCameraNode.OuterSingleton,
               &Z_Construct_UClass_UPanningFramingCameraNode_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPanningFramingCameraNode.OuterSingleton;
}

// Z_Construct_UFunction_UBlueprintCameraNodeEvaluator_TickCameraNode @ 14d6446d0

UFunction * __cdecl Z_Construct_UFunction_UBlueprintCameraNodeEvaluator_TickCameraNode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraNodeEvaluator_TickCameraNode_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UIIRValueInterpolator @ 14d644710

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UIIRValueInterpolator(void)

{
  if (Z_Registration_Info_UClass_UIIRValueInterpolator.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UIIRValueInterpolator.OuterSingleton,
               &Z_Construct_UClass_UIIRValueInterpolator_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UIIRValueInterpolator.OuterSingleton;
}

// NewProp_bIsFirstFrame_SetBit @ 14d644750

void __cdecl
Z_Construct_UClass_UBlueprintCameraNodeEvaluator_Statics::NewProp_bIsFirstFrame_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewProp_bIsActiveCameraRig_SetBit @ 14d644760

void __cdecl
Z_Construct_UClass_UBlueprintCameraNodeEvaluator_Statics::NewProp_bIsActiveCameraRig_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x29) = 1;
  return;
}

// NewProp_bUseFixedStep_SetBit @ 14d644770

void __cdecl
Z_Construct_UClass_UIIRValueInterpolator_Statics::NewProp_bUseFixedStep_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
  return;
}

// `scalar_deleting_destructor' @ 14d644ba0

void * __thiscall
FCameraRigAssetBuilderNullTest::_scalar_deleting_destructor_
          (FCameraRigAssetBuilderNullTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d6450c0

void * __thiscall
FCameraRigAssetBuilderSimpleAllocationTest::_scalar_deleting_destructor_
          (FCameraRigAssetBuilderSimpleAllocationTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// Z_Construct_UClass_UInput2DCameraNode_NoRegister @ 14d645100

UClass * __cdecl Z_Construct_UClass_UInput2DCameraNode_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInput2DCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"Input2DCameraNode",
               &Z_Registration_Info_UClass_UInput2DCameraNode.InnerSingleton,
               UInput2DCameraNode::StaticRegisterNativesUInput2DCameraNode,0x38,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInput2DCameraNode>,
               InternalVTableHelperCtorCaller<UInput2DCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInput2DCameraNode.InnerSingleton;
}

// `scalar_deleting_destructor' @ 14d6457e0

void * __thiscall
FCameraRigAssetBuilderSimpleParameterTest::_scalar_deleting_destructor_
          (FCameraRigAssetBuilderSimpleParameterTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d646ed0

void * __thiscall
FCameraRigAssetBuilderDrivenOverridesTest::_scalar_deleting_destructor_
          (FCameraRigAssetBuilderDrivenOverridesTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// Z_Construct_UClass_UAutoRotateInput2DCameraNode @ 14d646f70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAutoRotateInput2DCameraNode(void)

{
  if (Z_Registration_Info_UClass_UAutoRotateInput2DCameraNode.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAutoRotateInput2DCameraNode.OuterSingleton,
               &Z_Construct_UClass_UAutoRotateInput2DCameraNode_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAutoRotateInput2DCameraNode.OuterSingleton;
}

// Z_Construct_UClass_UInput2DCameraNode @ 14d646fb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInput2DCameraNode(void)

{
  if (Z_Registration_Info_UClass_UInput2DCameraNode.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInput2DCameraNode.OuterSingleton,
               &Z_Construct_UClass_UInput2DCameraNode_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInput2DCameraNode.OuterSingleton;
}

// Z_Construct_UEnum_GameplayCameras_ECameraAutoRotateDirection @ 14d646ff0

UEnum * __cdecl Z_Construct_UEnum_GameplayCameras_ECameraAutoRotateDirection(void)

{
  if (Z_Registration_Info_UEnum_ECameraAutoRotateDirection.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ECameraAutoRotateDirection.InnerSingleton,
               &Z_Construct_UEnum_GameplayCameras_ECameraAutoRotateDirection_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ECameraAutoRotateDirection.InnerSingleton;
}

// ECameraAutoRotateDirection_StaticEnum @ 14d647030

UEnum * __cdecl ECameraAutoRotateDirection_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECameraAutoRotateDirection.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UEnum_ECameraAutoRotateDirection.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GameplayCameras_ECameraAutoRotateDirection,
                       (UObject *)pUVar1,L"ECameraAutoRotateDirection");
  }
  return Z_Registration_Info_UEnum_ECameraAutoRotateDirection.OuterSingleton;
}

// Z_Construct_UClass_UCameraShakeCameraNode @ 14d647070

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCameraShakeCameraNode(void)

{
  if (Z_Registration_Info_UClass_UCameraShakeCameraNode.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCameraShakeCameraNode.OuterSingleton,
               &Z_Construct_UClass_UCameraShakeCameraNode_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCameraShakeCameraNode.OuterSingleton;
}

// Z_Construct_UEnum_GameplayCameras_ECameraShakeEvaluationMode @ 14d6470b0

UEnum * __cdecl Z_Construct_UEnum_GameplayCameras_ECameraShakeEvaluationMode(void)

{
  if (Z_Registration_Info_UEnum_ECameraShakeEvaluationMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ECameraShakeEvaluationMode.InnerSingleton,
               &Z_Construct_UEnum_GameplayCameras_ECameraShakeEvaluationMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ECameraShakeEvaluationMode.InnerSingleton;
}

// ECameraShakeEvaluationMode_StaticEnum @ 14d647120

UEnum * __cdecl ECameraShakeEvaluationMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECameraShakeEvaluationMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UEnum_ECameraShakeEvaluationMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GameplayCameras_ECameraShakeEvaluationMode,
                       (UObject *)pUVar1,L"ECameraShakeEvaluationMode");
  }
  return Z_Registration_Info_UEnum_ECameraShakeEvaluationMode.OuterSingleton;
}

// Z_Construct_UClass_UCameraRigInput1DSlot @ 14d6475e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCameraRigInput1DSlot(void)

{
  if (Z_Registration_Info_UClass_UCameraRigInput1DSlot.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCameraRigInput1DSlot.OuterSingleton,
               &Z_Construct_UClass_UCameraRigInput1DSlot_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCameraRigInput1DSlot.OuterSingleton;
}

// Z_Construct_UClass_UInput1DCameraNode @ 14d647620

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInput1DCameraNode(void)

{
  if (Z_Registration_Info_UClass_UInput1DCameraNode.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInput1DCameraNode.OuterSingleton,
               &Z_Construct_UClass_UInput1DCameraNode_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInput1DCameraNode.OuterSingleton;
}

// Z_Construct_UScriptStruct_FCameraParameterClamping @ 14d647660

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCameraParameterClamping(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCameraParameterClamping.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCameraParameterClamping.InnerSingleton,
               &Z_Construct_UScriptStruct_FCameraParameterClamping_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCameraParameterClamping.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCameraParameterClamping.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FCameraParameterNormalization @ 14d6476e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCameraParameterNormalization(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCameraParameterNormalization.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCameraParameterNormalization.InnerSingleton,
               &Z_Construct_UScriptStruct_FCameraParameterNormalization_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCameraParameterNormalization.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCameraParameterNormalization.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FCameraRigInputSlotParameters @ 14d647760

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCameraRigInputSlotParameters(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCameraRigInputSlotParameters.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCameraRigInputSlotParameters.InnerSingleton,
               &Z_Construct_UScriptStruct_FCameraRigInputSlotParameters_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCameraRigInputSlotParameters.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCameraRigInputSlotParameters.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewProp_bIsPreBlended_SetBit @ 14d6477e0

void __cdecl
Z_Construct_UClass_UCameraRigInput1DSlot_Statics::NewProp_bIsPreBlended_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xa0) = 1;
  return;
}

// Z_Construct_UClass_UDrivenControlRotationCameraNode @ 14d647940

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDrivenControlRotationCameraNode(void)

{
  if (Z_Registration_Info_UClass_UDrivenControlRotationCameraNode.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDrivenControlRotationCameraNode.OuterSingleton,
               &Z_Construct_UClass_UDrivenControlRotationCameraNode_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDrivenControlRotationCameraNode.OuterSingleton;
}

// Z_Construct_UClass_UCameraRigInput2DSlot @ 14d647980

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCameraRigInput2DSlot(void)

{
  if (Z_Registration_Info_UClass_UCameraRigInput2DSlot.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCameraRigInput2DSlot.OuterSingleton,
               &Z_Construct_UClass_UCameraRigInput2DSlot_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCameraRigInput2DSlot.OuterSingleton;
}

// NewProp_bIsPreBlended_SetBit @ 14d6479c0

void __cdecl
Z_Construct_UClass_UCameraRigInput2DSlot_Statics::NewProp_bIsPreBlended_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xe0) = 1;
  return;
}

// Z_Construct_UClass_UCompositeShakeCameraNode @ 14d6479d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCompositeShakeCameraNode(void)

{
  if (Z_Registration_Info_UClass_UCompositeShakeCameraNode.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCompositeShakeCameraNode.OuterSingleton,
               &Z_Construct_UClass_UCompositeShakeCameraNode_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCompositeShakeCameraNode.OuterSingleton;
}

// NewProp_bIsAccumulated_SetBit @ 14d647c90

void __cdecl
Z_Construct_UScriptStruct_FCameraRigInputSlotParameters_Statics::NewProp_bIsAccumulated_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bIsPreBlended_SetBit @ 14d647ca0

void __cdecl
Z_Construct_UScriptStruct_FCameraRigInputSlotParameters_Statics::NewProp_bIsPreBlended_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// NewStructOps @ 14d647cb0

void * __cdecl Z_Construct_UScriptStruct_FCameraRigInputSlotParameters_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 2;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCameraRigInputSlotParameters,&UE::CoreUObject::Private::Construct<FCameraRigInputSlotParameters>,&UE::CoreUObject::Private::ConstructForTests<FCameraRigInputSlotParameters>,&UE::CoreUObject::Private::Destruct<FCameraRigInputSlotParameters>,&UE::CoreUObject::Private::Copy<FCameraRigInputSlotParameters>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14d648b00

void * __thiscall
FCameraSystemFrameFlagsTest::_scalar_deleting_destructor_
          (FCameraSystemFrameFlagsTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// NewProp_bClampMin_SetBit @ 14d648b40

void __cdecl
Z_Construct_UScriptStruct_FCameraParameterClamping_Statics::NewProp_bClampMin_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_bClampMax_SetBit @ 14d648b50

void __cdecl
Z_Construct_UScriptStruct_FCameraParameterClamping_Statics::NewProp_bClampMax_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// NewStructOps @ 14d648b60

void * __cdecl Z_Construct_UScriptStruct_FCameraParameterClamping_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCameraParameterClamping,&UE::CoreUObject::Private::Construct<FCameraParameterClamping>,&UE::CoreUObject::Private::ConstructForTests<FCameraParameterClamping>,&UE::CoreUObject::Private::Destruct<FCameraParameterClamping>,&UE::CoreUObject::Private::Copy<FCameraParameterClamping>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bNormalize_SetBit @ 14d648ba0

void __cdecl
Z_Construct_UScriptStruct_FCameraParameterNormalization_Statics::NewProp_bNormalize_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewStructOps @ 14d648bb0

void * __cdecl Z_Construct_UScriptStruct_FCameraParameterNormalization_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCameraParameterNormalization,&UE::CoreUObject::Private::Construct<FCameraParameterNormalization>,&UE::CoreUObject::Private::ConstructForTests<FCameraParameterNormalization>,&UE::CoreUObject::Private::Destruct<FCameraParameterNormalization>,&UE::CoreUObject::Private::Copy<FCameraParameterNormalization>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14d648f10

void * __thiscall
UE::Cameras::FOrientationInitializationDebugBlock::_scalar_deleting_destructor_
          (FOrientationInitializationDebugBlock *this,uint param_1)

{
  ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo> FVar1;
  
  FVar1 = (this->AimDebugInfo).Iterations.AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  this->_padding_ = (longlong)&___7FCameraDebugBlock_Cameras_UE__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x230);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d649a80

void * __thiscall
FGameplayCamerasCriticalDamperTest::_scalar_deleting_destructor_
          (FGameplayCamerasCriticalDamperTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// Z_Construct_UClass_UFixedTestCameraDirector @ 14d649ac0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UFixedTestCameraDirector(void)

{
  if (Z_Registration_Info_UClass_UFixedTestCameraDirector.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UFixedTestCameraDirector.OuterSingleton,
               &Z_Construct_UClass_UFixedTestCameraDirector_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UFixedTestCameraDirector.OuterSingleton;
}

// Z_Construct_UClass_UUpdateTrackerCameraNode @ 14d649b00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UUpdateTrackerCameraNode(void)

{
  if (Z_Registration_Info_UClass_UUpdateTrackerCameraNode.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UUpdateTrackerCameraNode.OuterSingleton,
               &Z_Construct_UClass_UUpdateTrackerCameraNode_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UUpdateTrackerCameraNode.OuterSingleton;
}

// Z_Construct_UClass_UCameraShakeServiceCameraNode @ 14d649b40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCameraShakeServiceCameraNode(void)

{
  if (Z_Registration_Info_UClass_UCameraShakeServiceCameraNode.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCameraShakeServiceCameraNode.OuterSingleton,
               &Z_Construct_UClass_UCameraShakeServiceCameraNode_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCameraShakeServiceCameraNode.OuterSingleton;
}

// Z_Construct_UClass_UEnvelopeShakeCameraNode @ 14d649c40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEnvelopeShakeCameraNode(void)

{
  if (Z_Registration_Info_UClass_UEnvelopeShakeCameraNode.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEnvelopeShakeCameraNode.OuterSingleton,
               &Z_Construct_UClass_UEnvelopeShakeCameraNode_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UEnvelopeShakeCameraNode.OuterSingleton;
}

// Z_Construct_UClass_UInputAxisBinding2DCameraNode @ 14d649e00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInputAxisBinding2DCameraNode(void)

{
  if (Z_Registration_Info_UClass_UInputAxisBinding2DCameraNode.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInputAxisBinding2DCameraNode.OuterSingleton,
               &Z_Construct_UClass_UInputAxisBinding2DCameraNode_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInputAxisBinding2DCameraNode.OuterSingleton;
}

// Z_Construct_UClass_UIsCameraRigTransitionCondition @ 14d649e40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UIsCameraRigTransitionCondition(void)

{
  if (Z_Registration_Info_UClass_UIsCameraRigTransitionCondition.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UIsCameraRigTransitionCondition.OuterSingleton,
               &Z_Construct_UClass_UIsCameraRigTransitionCondition_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UIsCameraRigTransitionCondition.OuterSingleton;
}

// NewProp_bIsAccumulated_SetBit @ 14d649e80

void __cdecl
Z_Construct_UClass_UInputAxisBinding2DCameraNode_Statics::NewProp_bIsAccumulated_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x120) = 1;
  return;
}

// Z_Construct_UClass_UPerlinNoiseLocationShakeCameraNode @ 14d649e90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPerlinNoiseLocationShakeCameraNode(void)

{
  if (Z_Registration_Info_UClass_UPerlinNoiseLocationShakeCameraNode.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPerlinNoiseLocationShakeCameraNode.OuterSingleton,
               &Z_Construct_UClass_UPerlinNoiseLocationShakeCameraNode_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPerlinNoiseLocationShakeCameraNode.OuterSingleton;
}

// Z_Construct_UClass_UGameplayTagTransitionCondition @ 14d649f90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGameplayTagTransitionCondition(void)

{
  if (Z_Registration_Info_UClass_UGameplayTagTransitionCondition.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGameplayTagTransitionCondition.OuterSingleton,
               &Z_Construct_UClass_UGameplayTagTransitionCondition_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGameplayTagTransitionCondition.OuterSingleton;
}

// Z_Construct_UClass_UAccelerationDecelerationValueInterpolator @ 14d64a090

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAccelerationDecelerationValueInterpolator(void)

{
  if (Z_Registration_Info_UClass_UAccelerationDecelerationValueInterpolator.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAccelerationDecelerationValueInterpolator.OuterSingleton
               ,&Z_Construct_UClass_UAccelerationDecelerationValueInterpolator_Statics::ClassParams)
    ;
  }
  return Z_Registration_Info_UClass_UAccelerationDecelerationValueInterpolator.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14d64a1a0

void * __thiscall
UE::Cameras::TCameraDebugBlockField<UE::Cameras::TCameraDebugGraph<3>_>::
_scalar_deleting_destructor_
          (TCameraDebugBlockField<UE::Cameras::TCameraDebugGraph<3>_> *this,uint param_1)

{
  *(undefined ***)this = &___7FCameraDebugBlockField_Cameras_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d64a2b0

void * __thiscall
UE::Cameras::TCameraDebugBlockField<UE::Cameras::TCameraDebugGraph<1>_>::
_scalar_deleting_destructor_
          (TCameraDebugBlockField<UE::Cameras::TCameraDebugGraph<1>_> *this,uint param_1)

{
  *(undefined ***)this = &___7FCameraDebugBlockField_Cameras_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d64a310

void * __thiscall
UE::Cameras::TCameraDebugBlockField<UE::Cameras::FCameraDebugClock>::_scalar_deleting_destructor_
          (TCameraDebugBlockField<UE::Cameras::FCameraDebugClock> *this,uint param_1)

{
  *(undefined ***)this = &___7FCameraDebugBlockField_Cameras_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d64a370

void * __thiscall
UE::Cameras::TCameraDebugBlockField<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
::_scalar_deleting_destructor_
          (TCameraDebugBlockField<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
           *this,uint param_1)

{
  *(undefined ***)this = &___7FCameraDebugBlockField_Cameras_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d64a3d0

void * __thiscall
UE::Cameras::TCameraDebugBlockField<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>::
_scalar_deleting_destructor_
          (TCameraDebugBlockField<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_> *this,
          uint param_1)

{
  *(undefined ***)this = &___7FCameraDebugBlockField_Cameras_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// Z_Construct_UEnum_GameplayCameras_ECameraTargetShape @ 14d64a410

UEnum * __cdecl Z_Construct_UEnum_GameplayCameras_ECameraTargetShape(void)

{
  if (Z_Registration_Info_UEnum_ECameraTargetShape.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ECameraTargetShape.InnerSingleton,
               &Z_Construct_UEnum_GameplayCameras_ECameraTargetShape_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ECameraTargetShape.InnerSingleton;
}

// ECameraTargetShape_StaticEnum @ 14d64a510

UEnum * __cdecl ECameraTargetShape_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECameraTargetShape.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UEnum_ECameraTargetShape.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GameplayCameras_ECameraTargetShape,(UObject *)pUVar1,
                       L"ECameraTargetShape");
  }
  return Z_Registration_Info_UEnum_ECameraTargetShape.OuterSingleton;
}

// NewStructOps @ 14d64a610

void * __cdecl Z_Construct_UScriptStruct_FCameraActorTargetInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCameraActorTargetInfo,&UE::CoreUObject::Private::Construct<FCameraActorTargetInfo>,&UE::CoreUObject::Private::ConstructForTests<FCameraActorTargetInfo>,&UE::CoreUObject::Private::Destruct<FCameraActorTargetInfo>,&UE::CoreUObject::Private::Copy<FCameraActorTargetInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_URawInputAxisBinding2DCameraNode @ 14d64a650

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_URawInputAxisBinding2DCameraNode(void)

{
  if (Z_Registration_Info_UClass_URawInputAxisBinding2DCameraNode.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_URawInputAxisBinding2DCameraNode.OuterSingleton,
               &Z_Construct_UClass_URawInputAxisBinding2DCameraNode_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_URawInputAxisBinding2DCameraNode.OuterSingleton;
}

// Z_Construct_UClass_UPerlinNoiseRotationShakeCameraNode @ 14d64a690

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPerlinNoiseRotationShakeCameraNode(void)

{
  if (Z_Registration_Info_UClass_UPerlinNoiseRotationShakeCameraNode.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPerlinNoiseRotationShakeCameraNode.OuterSingleton,
               &Z_Construct_UClass_UPerlinNoiseRotationShakeCameraNode_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPerlinNoiseRotationShakeCameraNode.OuterSingleton;
}

// Z_Construct_UClass_UCriticalDamperValueInterpolator @ 14d64a8d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCriticalDamperValueInterpolator(void)

{
  if (Z_Registration_Info_UClass_UCriticalDamperValueInterpolator.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCriticalDamperValueInterpolator.OuterSingleton,
               &Z_Construct_UClass_UCriticalDamperValueInterpolator_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCriticalDamperValueInterpolator.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14d64b4c0

void * __thiscall
FCameraAssetBuilderDefaultParametersTest::_scalar_deleting_destructor_
          (FCameraAssetBuilderDefaultParametersTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// TCameraDebugGraphEntry<1>,TSizedDefaultAllocator<32>_> @ 14d64bc20

FArchive * __cdecl
operator<<<UE::Cameras::TCameraDebugGraphEntry<1>_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<UE::Cameras::TCameraDebugGraphEntry<1>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 3);
  iVar9 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x200001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar8 = auStackX_8[0];
          if ((int)auStackX_8[0] < 1) {
            return param_1;
          }
          while( true ) {
            uVar6 = 0;
            if ((int)uVar10 < (int)uVar8) {
              uVar6 = ~uVar10 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) break;
            UE::Cameras::operator<<
                      (param_1,(TCameraDebugGraphEntry<1> *)
                               ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 8));
            uVar10 = uVar10 + 1;
            uVar8 = param_2->ArrayNum;
            if (param_2->ArrayNum <= (int)uVar10) {
              return param_1;
            }
          }
          pcVar3 = (code *)swi(3);
          pFVar7 = (FArchive *)(*pcVar3)();
          return pFVar7;
        }
        TArray<UE::Cameras::TCameraDebugGraphEntry<1>,TSizedDefaultAllocator<32>_>::Empty
                  (param_2,auStackX_8[0]);
        if ((int)auStackX_8[0] < 1) {
          return param_1;
        }
        do {
          iVar5 = param_2->ArrayNum;
          if (iVar5 == *piVar1) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar5 + 1;
          UE::Cameras::operator<<
                    (param_1,(TCameraDebugGraphEntry<1> *)
                             ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 8));
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)auStackX_8[0]);
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// TCameraDebugGraphEntry<3>,TSizedDefaultAllocator<32>_> @ 14d64bc30

FArchive * __cdecl
operator<<<UE::Cameras::TCameraDebugGraphEntry<3>_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<UE::Cameras::TCameraDebugGraphEntry<3>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 4);
  iVar9 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x100001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar8 = auStackX_8[0];
          if ((int)auStackX_8[0] < 1) {
            return param_1;
          }
          while( true ) {
            uVar6 = 0;
            if ((int)uVar10 < (int)uVar8) {
              uVar6 = ~uVar10 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) break;
            UE::Cameras::TCameraDebugGraphEntry<3>::Serialize
                      ((TCameraDebugGraphEntry<3> *)
                       ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x10),param_1);
            uVar10 = uVar10 + 1;
            uVar8 = param_2->ArrayNum;
            if (param_2->ArrayNum <= (int)uVar10) {
              return param_1;
            }
          }
          pcVar3 = (code *)swi(3);
          pFVar7 = (FArchive *)(*pcVar3)();
          return pFVar7;
        }
        TArray<UE::Cameras::TCameraDebugGraphEntry<3>,TSizedDefaultAllocator<32>_>::Empty
                  (param_2,auStackX_8[0]);
        if ((int)auStackX_8[0] < 1) {
          return param_1;
        }
        do {
          iVar5 = param_2->ArrayNum;
          if (iVar5 == *piVar1) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x410,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar5 + 1;
          UE::Cameras::TCameraDebugGraphEntry<3>::Serialize
                    ((TCameraDebugGraphEntry<3> *)
                     ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10),param_1);
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)auStackX_8[0]);
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// AddStructReferencedObjectsOrNot<FInstancedOverridablePropertyBag> @ 14d64bfa0

void __cdecl
AddStructReferencedObjectsOrNot<FInstancedOverridablePropertyBag>
          (void *param_1,FReferenceCollector *param_2)

{
  return;
}

// CastChecked<UArrayCameraNode,UArrayCameraNode> @ 14d64e630

UArrayCameraNode * __cdecl CastChecked<UArrayCameraNode,UArrayCameraNode>(UArrayCameraNode *param_1)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_18;
  
  if (param_1 != (UArrayCameraNode *)0x0) {
    return param_1;
  }
  pFVar1 = GetTypeName<UArrayCameraNode>(&local_18);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// CastChecked<UBlueprintCameraNodeEvaluator,UObject> @ 14d64e670

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UBlueprintCameraNodeEvaluator * __cdecl
CastChecked<UBlueprintCameraNodeEvaluator,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UBlueprintCameraNodeEvaluator>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UBlueprintCameraNodeEvaluator::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UBlueprintCameraNodeEvaluator *)param_1;
  }
  pFVar3 = GetTypeName<UBlueprintCameraNodeEvaluator>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UCameraNode,UObject> @ 14d64e730

UCameraNode * __cdecl CastChecked<UCameraNode,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UCameraNode>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UCameraNode_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UCameraNode *)param_1;
  }
  pFVar3 = GetTypeName<UCameraNode>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<ULensParametersCameraNode,UObject> @ 14d64e7f0

ULensParametersCameraNode * __cdecl CastChecked<ULensParametersCameraNode,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<ULensParametersCameraNode>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_ULensParametersCameraNode_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (ULensParametersCameraNode *)param_1;
  }
  pFVar3 = GetTypeName<ULensParametersCameraNode>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UOffsetCameraNode,UObject> @ 14d64e8b0

UOffsetCameraNode * __cdecl CastChecked<UOffsetCameraNode,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UOffsetCameraNode>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UOffsetCameraNode_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UOffsetCameraNode *)param_1;
  }
  pFVar3 = GetTypeName<UOffsetCameraNode>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CompareItems<FCustomCameraNodeBlendableParameter,int> @ 14d64ed90

bool __cdecl
CompareItems<FCustomCameraNodeBlendableParameter,int>
          (FCustomCameraNodeBlendableParameter *param_1,FCustomCameraNodeBlendableParameter *param_2
          ,int param_3)

{
  TObjectPtr<UScriptStruct_const_>_u_0 *pTVar1;
  TObjectPtr<UScriptStruct_const_>_u_0 *pTVar2;
  
  if (param_3 != 0) {
    pTVar2 = &(param_2->BlendableStructType).field0_0x0;
    pTVar1 = &(param_1->BlendableStructType).field0_0x0;
    do {
      if ((((pTVar1[-2].ObjectPtr.field0_0x0.Handle !=
             *(UObject **)((longlong)param_2 + (-0x10 - (longlong)param_1) + (longlong)pTVar1)) ||
           (*(int *)(pTVar1 + -1) != *(int *)(pTVar2 + -1))) ||
          (pTVar1->DebugPtr != pTVar2->DebugPtr)) ||
         ((*(int *)(pTVar1 + 1) != *(int *)(pTVar2 + 1) ||
          (pTVar1[2].DebugPtr != pTVar2[2].DebugPtr)))) {
        return false;
      }
      pTVar2 = pTVar2 + 5;
      pTVar1 = pTVar1 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// CompareItems<FCustomCameraNodeDataParameter,int> @ 14d64edf0

bool __cdecl
CompareItems<FCustomCameraNodeDataParameter,int>
          (FCustomCameraNodeDataParameter *param_1,FCustomCameraNodeDataParameter *param_2,
          int param_3)

{
  ECameraContextDataContainerType *pEVar1;
  ECameraContextDataContainerType *pEVar2;
  
  if (param_3 != 0) {
    pEVar2 = &param_2->ParameterContainerType;
    pEVar1 = &param_1->ParameterContainerType;
    do {
      if ((((((FCustomCameraNodeDataParameter *)(pEVar1 + -3))->ParameterName !=
             *(FName *)((longlong)pEVar1 + (longlong)param_2 + (-0xc - (longlong)param_1))) ||
           (pEVar1[-1] != pEVar2[-1])) || (*pEVar1 != *pEVar2)) ||
         ((((TObjectPtr<UObject_const_>_u_0 *)(pEVar1 + 1))->DebugPtr !=
           ((TObjectPtr<UObject_const_>_u_0 *)(pEVar2 + 1))->DebugPtr ||
          (((FCameraContextDataID *)(pEVar1 + 3))->Value !=
           ((FCameraContextDataID *)(pEVar2 + 3))->Value)))) {
        return false;
      }
      pEVar2 = pEVar2 + 8;
      pEVar1 = pEVar1 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// ConstructItems<UE::Cameras::FCameraNodeEvaluator_*,UE::Cameras::FShakeCameraNodeEvaluator_*,int> @ 14d64ee50

void __cdecl
ConstructItems<UE::Cameras::FCameraNodeEvaluator_*,UE::Cameras::FShakeCameraNodeEvaluator_*,int>
          (void *param_1,FShakeCameraNodeEvaluator **param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FShakeCameraNodeEvaluator **)(lVar1 + (longlong)param_2) = *param_2;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<UCameraRigAsset_*,TObjectPtr<UCameraRigAsset>,int> @ 14d64ee80

void __cdecl
ConstructItems<UCameraRigAsset_*,TObjectPtr<UCameraRigAsset>,int>
          (void *param_1,TObjectPtr<UCameraRigAsset> *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FObjectPtr_u_0 *)(lVar1 + (longlong)param_2) = *(FObjectPtr_u_0 *)param_2;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Cameras::TCameraDebugGraphEntry<1>,int> @ 14d64eeb0

void __cdecl
DefaultConstructItems<UE::Cameras::TCameraDebugGraphEntry<1>,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<UE::Cameras::TCameraDebugGraphEntry<3>,int> @ 14d64eec0

void __cdecl
DefaultConstructItems<UE::Cameras::TCameraDebugGraphEntry<3>,int>(void *param_1,int param_2)

{
  return;
}

// DefaultConstructItems<UE::Cameras::FCameraActorTargetInfoReader,int> @ 14d64eed0

void __cdecl
DefaultConstructItems<UE::Cameras::FCameraActorTargetInfoReader,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined1 *)(lVar1 + 0xc) = 0;
      *(undefined4 *)(lVar1 + 0x10) = 0x41200000;
      *(undefined4 *)(lVar1 + 0x14) = 0x3f800000;
      *(undefined4 *)(lVar1 + 0x1c) = 0xffffffff;
      *(undefined8 *)(lVar1 + 0x24) = 0;
      *(undefined8 *)(lVar1 + 0x2c) = 0;
      *(undefined8 *)(lVar1 + 0x34) = 0;
      *(undefined1 *)(lVar1 + 0x3c) = 0;
      *(undefined4 *)(lVar1 + 0x40) = 0x41200000;
      *(undefined4 *)(lVar1 + 0x44) = 0x3f800000;
      *(undefined8 *)(lVar1 + 0x4c) = 0;
      *(undefined8 *)(lVar1 + 0x54) = 0;
      *(undefined8 *)(lVar1 + 0x5c) = 0;
      lVar1 = lVar1 + 0x70;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Cameras::FCameraShakeServiceCameraNodeEvaluator::FShakeEntry,int> @ 14d64ef40

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
DestructItems<UE::Cameras::FCameraShakeServiceCameraNodeEvaluator::FShakeEntry,int>
          (FShakeEntry *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  if (param_2 != 0) {
    puVar4 = (undefined8 *)&(param_1->EvaluatorHierarchy).TaggedRanges.field_0x40;
    do {
      if ((void *)puVar4[0x13f] != (void *)0x0) {
        FMemory::Free((void *)puVar4[0x13f]);
      }
      if ((void *)puVar4[0x13b] != (void *)0x0) {
        FMemory::Free((void *)puVar4[0x13b]);
      }
      if ((void *)puVar4[0x4c] != (void *)0x0) {
        FMemory::Free((void *)puVar4[0x4c]);
      }
      UE::Cameras::FCameraContextDataTable::~FCameraContextDataTable
                ((FCameraContextDataTable *)(puVar4 + 0x21));
      UE::Cameras::FCameraVariableTable::~FCameraVariableTable
                ((FCameraVariableTable *)(puVar4 + 0x13));
      *(undefined4 *)(puVar4 + 1) = 0;
      if ((void *)*puVar4 != (void *)0x0) {
        FMemory::Free((void *)*puVar4);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,UE::Cameras::FCameraNodeEvaluatorHierarchy::FTaggedRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Cameras::FCameraNodeEvaluatorHierarchy::FTaggedRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Cameras::FCameraNodeEvaluatorHierarchy::FTaggedRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar4 + -8));
      if ((void *)puVar4[-10] != (void *)0x0) {
        FMemory::Free((void *)puVar4[-10]);
      }
      UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
      ~TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>
                ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)(puVar4 + -0x10));
      plVar3 = (longlong *)puVar4[-0x12];
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
      puVar4 = puVar4 + 0x16a;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// GetFullNameForCastLogError<UArrayCameraNode> @ 14d650230

FString * __cdecl
GetFullNameForCastLogError<UArrayCameraNode>
          (FString *__return_storage_ptr__,UArrayCameraNode *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetTypeHash<UE::Cameras::FCameraEvaluationContext_const_,1> @ 14d650440

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

uint __cdecl
GetTypeHash<UE::Cameras::FCameraEvaluationContext_const_,1>
          (TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> *param_1)

{
  uint uVar1;
  
  uVar1 = ((uint)((ulonglong)param_1->Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->Object >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  return uVar1 >> 0x10 ^ uVar1;
}

// GetTypeName<UArrayCameraNode> @ 14d650470

FString * __cdecl GetTypeName<UArrayCameraNode>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UArrayCameraNode_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UBlueprintCameraNodeEvaluator> @ 14d6504b0

FString * __cdecl GetTypeName<UBlueprintCameraNodeEvaluator>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UBlueprintCameraNodeEvaluator::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<ULensParametersCameraNode> @ 14d6504f0

FString * __cdecl GetTypeName<ULensParametersCameraNode>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_ULensParametersCameraNode_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UOffsetCameraNode> @ 14d650530

FString * __cdecl GetTypeName<UOffsetCameraNode>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UOffsetCameraNode_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// InternalConstructor<UAccelerationDecelerationValueInterpolator> @ 14d650a70

void __cdecl
InternalConstructor<UAccelerationDecelerationValueInterpolator>(FObjectInitializer *param_1)

{
  UCameraValueInterpolator *this;
  
  this = (UCameraValueInterpolator *)param_1->Obj;
  if (this != (UCameraValueInterpolator *)0x0) {
    UCameraValueInterpolator::UCameraValueInterpolator(this,param_1);
    *(undefined4 *)(this + 1) = 0x3f800000;
    *(undefined ***)this = &___7UAccelerationDecelerationValueInterpolator__6B_;
    *(undefined4 *)&this[1].field_0x4 = 0x41200000;
    *(undefined4 *)&this[1].field_0x8 = 0x3f800000;
  }
  return;
}

// InternalConstructor<UAutoRotateInput2DCameraNode> @ 14d650ac0

void __cdecl InternalConstructor<UAutoRotateInput2DCameraNode>(FObjectInitializer *param_1)

{
  UCameraNode *this;
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  FName local_res8;
  
  this = (UCameraNode *)param_1->Obj;
  if (this != (UCameraNode *)0x0) {
    UCameraNode::UCameraNode(this,param_1);
    this->PrivateFlags = this->PrivateFlags | CustomGetChildren;
    this->_padding_ = (longlong)&UAutoRotateInput2DCameraNode::_vftable__for__UObject__;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    this->_padding_ =
         (longlong)&UAutoRotateInput2DCameraNode::_vftable__for__IObjectTreeGraphObject__;
    *(undefined4 *)&this[1]._padding_ = 0x3f800000;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].bIsEnabled = false;
    *(undefined3 *)&this[1].field_0x31 = 0;
    this[1].PrivateFlags = None;
    this[2]._padding_ = 0;
    *(undefined1 *)&this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2].bIsEnabled = false;
    *(undefined3 *)&this[2].field_0x31 = 0;
    this[2].PrivateFlags = None;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0xffffffff;
    *(undefined4 *)&this[1]._padding_ = 0x3c23d70a;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0xffffffff;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0xffffffff;
    *(undefined1 *)&this[2]._padding_ = 1;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0xffffffff;
    *(undefined1 *)&this[2]._padding_ = 1;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0xffffffff;
    *(undefined1 *)&this[3]._padding_ = 1;
    *(undefined4 *)((longlong)&this[3]._padding_ + 4) = 0xffffffff;
    pFVar2 = FName::FName(&local_res8,"Interpolator");
    FVar1 = *pFVar2;
    pUVar3 = UCriticalDamperValueInterpolator::StaticClass();
    pUVar4 = FObjectInitializer::CreateDefaultSubobject
                       (param_1,(UObject *)this,FVar1,pUVar3,pUVar3,true,false);
    *(undefined4 *)(pUVar4 + 1) = 0x41200000;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    this[2]._padding_ = (longlong)pUVar4;
  }
  return;
}

// InternalConstructor<UBlueprintCameraNode> @ 14d650c10

void __cdecl InternalConstructor<UBlueprintCameraNode>(FObjectInitializer *param_1)

{
  UCameraNode *this;
  
  this = (UCameraNode *)param_1->Obj;
  if (this != (UCameraNode *)0x0) {
    UCameraNode::UCameraNode(this,param_1);
    this->_padding_ = (longlong)&UBlueprintCameraNode::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UBlueprintCameraNode::_vftable__for__IObjectTreeGraphObject__;
    this[1]._padding_ = (longlong)&___7UBlueprintCameraNode__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].bIsEnabled = false;
    *(undefined3 *)&this[1].field_0x31 = 0;
    this[1].PrivateFlags = None;
  }
  return;
}

// InternalConstructor<UBlueprintCameraNodeEvaluator> @ 14d650c70

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl InternalConstructor<UBlueprintCameraNodeEvaluator>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined2 *)(this + 1) = 0;
    *(undefined ***)this = &___7UBlueprintCameraNodeEvaluator__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    FBlueprintCameraEvaluationDataRef::FBlueprintCameraEvaluationDataRef
              ((FBlueprintCameraEvaluationDataRef *)&this[1].field_0x10);
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0x408f400000000000;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined4 *)&this[3].field_0x10 = 0xbf800000;
    *(undefined4 *)&this[3].field_0x14 = 0x420c0000;
    *(undefined4 *)&this[3].field_0x18 = 0x44c00000;
    *(undefined4 *)&this[3].field_0x1c = 0x40333333;
    *(undefined4 *)&this[3].field_0x20 = 0x42700000;
    *(undefined4 *)&this[3].field_0x24 = 0xbf800000;
    *(undefined4 *)(this + 4) = 0x41c71eb8;
    *(undefined8 *)&this[4].field_0x4 = 0x41955c29;
    *(undefined4 *)&this[4].field_0xc = 0;
    *(undefined4 *)&this[4].field_0x10 = 0x42c80000;
    *(undefined8 *)&this[4].field_0x14 = 0x3f800000;
    *(undefined4 *)&this[4].field_0x1c = 8;
    *(undefined4 *)&this[4].field_0x20 = 0x41200000;
    *(undefined4 *)&this[4].field_0x24 = 0xbf800000;
    *(undefined8 *)(this + 5) = 0;
    this[5].field_0x8 = 0;
    FBlueprintCameraEvaluationDataRef::FBlueprintCameraEvaluationDataRef
              ((FBlueprintCameraEvaluationDataRef *)&this[5].field_0x10);
    *(undefined8 *)(this + 6) = 0;
    *(undefined8 *)&this[6].field_0x8 = 0;
    *(undefined8 *)&this[6].field_0x10 = 0;
    *(undefined8 *)&this[6].field_0x18 = 0;
  }
  return;
}

// InternalConstructor<UCameraRigInput1DSlot> @ 14d650db0

void __cdecl InternalConstructor<UCameraRigInput1DSlot>(FObjectInitializer *param_1)

{
  UCameraNode *this;
  
  this = (UCameraNode *)param_1->Obj;
  if (this != (UCameraNode *)0x0) {
    UCameraNode::UCameraNode(this,param_1);
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0xffffffff;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UCameraRigInput1DSlot::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UCameraRigInput1DSlot::_vftable__for__IObjectTreeGraphObject__;
    this[1]._padding_ = 0x4076800000000000;
    this[2]._padding_ = 0x3ff0000000000000;
    this[1]._padding_ = 0;
    *(undefined2 *)&this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    this[1].bIsEnabled = false;
    *(undefined3 *)&this[1].field_0x31 = 0;
    this[1].PrivateFlags = None;
    *(undefined4 *)&this[2]._padding_ = 0xffffffff;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 1;
    *(undefined4 *)&this[2]._padding_ = 0xffffffff;
    this[2]._padding_ = 0;
    *(undefined2 *)&this[2].bIsEnabled = 0x101;
    this[2].field_0x32 = 1;
    *(undefined8 *)&this[2].PrivateFlags = 0xffffffffffffffff;
  }
  return;
}

// InternalConstructor<UCameraRigInput2DSlot> @ 14d650e70

void __cdecl InternalConstructor<UCameraRigInput2DSlot>(FObjectInitializer *param_1)

{
  if ((UCameraRigInput2DSlot *)param_1->Obj != (UCameraRigInput2DSlot *)0x0) {
    UCameraRigInput2DSlot::UCameraRigInput2DSlot((UCameraRigInput2DSlot *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UCameraShakeCameraNode> @ 14d650e90

void __cdecl InternalConstructor<UCameraShakeCameraNode>(FObjectInitializer *param_1)

{
  UCameraNode *this;
  
  this = (UCameraNode *)param_1->Obj;
  if (this != (UCameraNode *)0x0) {
    UCameraNode::UCameraNode(this,param_1);
    this->_padding_ = (longlong)&UCameraShakeCameraNode::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UCameraShakeCameraNode::_vftable__for__IObjectTreeGraphObject__;
    this[1]._padding_ = (longlong)&___7UCameraShakeCameraNode__6B_;
    FCameraShakeAssetReference::FCameraShakeAssetReference
              ((FCameraShakeAssetReference *)&this[1]._padding_);
    *(undefined1 *)&this[2]._padding_ = 1;
  }
  return;
}

// InternalConstructor<UCameraShakeServiceCameraNode> @ 14d650ef0

void __cdecl InternalConstructor<UCameraShakeServiceCameraNode>(FObjectInitializer *param_1)

{
  UCameraNode *this;
  
  this = (UCameraNode *)param_1->Obj;
  if (this != (UCameraNode *)0x0) {
    UCameraNode::UCameraNode(this,param_1);
    this->_padding_ = (longlong)&UCameraShakeServiceCameraNode::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UCameraShakeServiceCameraNode::_vftable__for__IObjectTreeGraphObject__;
  }
  return;
}

// InternalConstructor<UCompositeShakeCameraNode> @ 14d650f30

void __cdecl InternalConstructor<UCompositeShakeCameraNode>(FObjectInitializer *param_1)

{
  UShakeCameraNode *this;
  
  this = (UShakeCameraNode *)param_1->Obj;
  if (this != (UShakeCameraNode *)0x0) {
    UShakeCameraNode::UShakeCameraNode(this,param_1);
    *(undefined ***)this = &UCompositeShakeCameraNode::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UCompositeShakeCameraNode::_vftable__for__IObjectTreeGraphObject__;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UCriticalDamperValueInterpolator> @ 14d650f80

void __cdecl InternalConstructor<UCriticalDamperValueInterpolator>(FObjectInitializer *param_1)

{
  UCameraValueInterpolator *this;
  
  this = (UCameraValueInterpolator *)param_1->Obj;
  if (this != (UCameraValueInterpolator *)0x0) {
    UCameraValueInterpolator::UCameraValueInterpolator(this,param_1);
    *(undefined4 *)(this + 1) = 0x3f800000;
    *(undefined ***)this = &___7UCriticalDamperValueInterpolator__6B_;
  }
  return;
}

// InternalConstructor<UDollyFramingCameraNode> @ 14d650fc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<UDollyFramingCameraNode>(FObjectInitializer *param_1)

{
  UBaseFramingCameraNode *this;
  
  this = (UBaseFramingCameraNode *)param_1->Obj;
  if (this != (UBaseFramingCameraNode *)0x0) {
    UBaseFramingCameraNode::UBaseFramingCameraNode(this,param_1);
    this->_padding_ = (longlong)&UDollyFramingCameraNode::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UDollyFramingCameraNode::_vftable__for__IObjectTreeGraphObject__;
    this->_padding_ = (longlong)&___7UDollyFramingCameraNode__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0xffffffff;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0xffffffff;
    *(undefined1 *)&this[1]._padding_ = 1;
    *(undefined1 *)&this[1]._padding_ = 1;
  }
  return;
}

// InternalConstructor<UDoubleIIRValueInterpolator> @ 14d651040

void __cdecl InternalConstructor<UDoubleIIRValueInterpolator>(FObjectInitializer *param_1)

{
  UCameraValueInterpolator *this;
  
  this = (UCameraValueInterpolator *)param_1->Obj;
  if (this != (UCameraValueInterpolator *)0x0) {
    UCameraValueInterpolator::UCameraValueInterpolator(this,param_1);
    *(undefined4 *)(this + 1) = 0x3f800000;
    *(undefined ***)this = &___7UDoubleIIRValueInterpolator__6B_;
    *(undefined4 *)&this[1].field_0x4 = 0x3f800000;
    this[1].field_0x8 = 1;
  }
  return;
}

// InternalConstructor<UDrivenControlRotationCameraNode> @ 14d651090

void __cdecl InternalConstructor<UDrivenControlRotationCameraNode>(FObjectInitializer *param_1)

{
  UCameraNode *this;
  
  this = (UCameraNode *)param_1->Obj;
  if (this != (UCameraNode *)0x0) {
    UCameraNode::UCameraNode(this,param_1);
    this->_padding_ = (longlong)&UDrivenControlRotationCameraNode::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UDrivenControlRotationCameraNode::_vftable__for__IObjectTreeGraphObject__;
  }
  return;
}

// InternalConstructor<UEnvelopeShakeCameraNode> @ 14d6510d0

void __cdecl InternalConstructor<UEnvelopeShakeCameraNode>(FObjectInitializer *param_1)

{
  UShakeCameraNode *this;
  
  this = (UShakeCameraNode *)param_1->Obj;
  if (this != (UShakeCameraNode *)0x0) {
    UShakeCameraNode::UShakeCameraNode(this,param_1);
    *(undefined ***)this = &UEnvelopeShakeCameraNode::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UEnvelopeShakeCameraNode::_vftable__for__IObjectTreeGraphObject__;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)&this[1].field_0x30 = 0;
    *(undefined4 *)(this + 1) = 0x3e4ccccd;
    *(undefined4 *)&this[1].field_0x4 = 0xffffffff;
    *(undefined4 *)&this[1].field_0x10 = 0x3e4ccccd;
    *(undefined4 *)&this[1].field_0x14 = 0xffffffff;
    *(undefined4 *)&this[1].field_0x20 = 0x3f800000;
    *(undefined4 *)&this[1].field_0x24 = 0xffffffff;
  }
  return;
}

// InternalConstructor<UFixedTestCameraDirector> @ 14d651150

void __cdecl InternalConstructor<UFixedTestCameraDirector>(FObjectInitializer *param_1)

{
  UCameraDirector *this;
  
  this = (UCameraDirector *)param_1->Obj;
  if (this != (UCameraDirector *)0x0) {
    UCameraDirector::UCameraDirector(this,param_1);
    this->_padding_ = (longlong)&___7UFixedTestCameraDirector__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UGameplayTagTransitionCondition> @ 14d6511a0

void __cdecl InternalConstructor<UGameplayTagTransitionCondition>(FObjectInitializer *param_1)

{
  UCameraRigTransitionCondition *this;
  
  this = (UCameraRigTransitionCondition *)param_1->Obj;
  if (this != (UCameraRigTransitionCondition *)0x0) {
    UCameraRigTransitionCondition::UCameraRigTransitionCondition(this,param_1);
    *(undefined ***)this = &UGameplayTagTransitionCondition::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UGameplayTagTransitionCondition::_vftable__for__IObjectTreeGraphObject__;
    FGameplayTagQuery::FGameplayTagQuery((FGameplayTagQuery *)(this + 1));
    FGameplayTagQuery::FGameplayTagQuery((FGameplayTagQuery *)&this[2].field_0x18);
    return;
  }
  return;
}

// InternalConstructor<UIIRValueInterpolator> @ 14d651200

void __cdecl InternalConstructor<UIIRValueInterpolator>(FObjectInitializer *param_1)

{
  UCameraValueInterpolator *this;
  
  this = (UCameraValueInterpolator *)param_1->Obj;
  if (this != (UCameraValueInterpolator *)0x0) {
    UCameraValueInterpolator::UCameraValueInterpolator(this,param_1);
    *(undefined4 *)(this + 1) = 0x3f800000;
    *(undefined ***)this = &___7UIIRValueInterpolator__6B_;
    this[1].field_0x4 = 1;
  }
  return;
}

// InternalConstructor<UInput1DCameraNode> @ 14d651240

void __cdecl InternalConstructor<UInput1DCameraNode>(FObjectInitializer *param_1)

{
  UCameraNode *this;
  
  this = (UCameraNode *)param_1->Obj;
  if (this != (UCameraNode *)0x0) {
    UCameraNode::UCameraNode(this,param_1);
    this->_padding_ = (longlong)&UInput1DCameraNode::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UInput1DCameraNode::_vftable__for__IObjectTreeGraphObject__;
  }
  return;
}

// InternalConstructor<UInput2DCameraNode> @ 14d651280

void __cdecl InternalConstructor<UInput2DCameraNode>(FObjectInitializer *param_1)

{
  UCameraNode *this;
  
  this = (UCameraNode *)param_1->Obj;
  if (this != (UCameraNode *)0x0) {
    UCameraNode::UCameraNode(this,param_1);
    this->_padding_ = (longlong)&UInput2DCameraNode::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UInput2DCameraNode::_vftable__for__IObjectTreeGraphObject__;
  }
  return;
}

// InternalConstructor<UInputAccumulator2DCameraNode> @ 14d6512c0

void __cdecl InternalConstructor<UInputAccumulator2DCameraNode>(FObjectInitializer *param_1)

{
  UCameraRigInput2DSlot *this;
  
  this = (UCameraRigInput2DSlot *)param_1->Obj;
  if (this != (UCameraRigInput2DSlot *)0x0) {
    UCameraRigInput2DSlot::UCameraRigInput2DSlot(this,param_1);
    this->_padding_ = (longlong)&UInputAccumulator2DCameraNode::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UInputAccumulator2DCameraNode::_vftable__for__IObjectTreeGraphObject__;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UInputAxisBinding2DCameraNode> @ 14d651310

void __cdecl InternalConstructor<UInputAxisBinding2DCameraNode>(FObjectInitializer *param_1)

{
  UCameraRigInput2DSlot *this;
  
  this = (UCameraRigInput2DSlot *)param_1->Obj;
  if (this != (UCameraRigInput2DSlot *)0x0) {
    UCameraRigInput2DSlot::UCameraRigInput2DSlot(this,param_1);
    this->_padding_ = (longlong)&UInputAxisBinding2DCameraNode::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UInputAxisBinding2DCameraNode::_vftable__for__IObjectTreeGraphObject__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0x3ff0000000000000;
    this[1]._padding_ = 0x3ff0000000000000;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 1;
  }
  return;
}

// InternalConstructor<UIsCameraRigTransitionCondition> @ 14d651390

void __cdecl InternalConstructor<UIsCameraRigTransitionCondition>(FObjectInitializer *param_1)

{
  UCameraRigTransitionCondition *this;
  
  this = (UCameraRigTransitionCondition *)param_1->Obj;
  if (this != (UCameraRigTransitionCondition *)0x0) {
    UCameraRigTransitionCondition::UCameraRigTransitionCondition(this,param_1);
    *(undefined ***)this = &UIsCameraRigTransitionCondition::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UIsCameraRigTransitionCondition::_vftable__for__IObjectTreeGraphObject__;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UPanningFramingCameraNode> @ 14d6513e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<UPanningFramingCameraNode>(FObjectInitializer *param_1)

{
  UBaseFramingCameraNode *this;
  
  this = (UBaseFramingCameraNode *)param_1->Obj;
  if (this != (UBaseFramingCameraNode *)0x0) {
    UBaseFramingCameraNode::UBaseFramingCameraNode(this,param_1);
    this->_padding_ = (longlong)&UPanningFramingCameraNode::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UPanningFramingCameraNode::_vftable__for__IObjectTreeGraphObject__;
    this->_padding_ = (longlong)&___7UPanningFramingCameraNode__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0xffffffff;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0xffffffff;
    *(undefined1 *)&this[1]._padding_ = 1;
    *(undefined1 *)&this[1]._padding_ = 1;
  }
  return;
}

// InternalConstructor<UPerlinNoiseLocationShakeCameraNode> @ 14d651460

void __cdecl InternalConstructor<UPerlinNoiseLocationShakeCameraNode>(FObjectInitializer *param_1)

{
  UShakeCameraNode *this;
  
  this = (UShakeCameraNode *)param_1->Obj;
  if (this != (UShakeCameraNode *)0x0) {
    UShakeCameraNode::UShakeCameraNode(this,param_1);
    *(undefined ***)this = &UPerlinNoiseLocationShakeCameraNode::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UPerlinNoiseLocationShakeCameraNode::_vftable__for__IObjectTreeGraphObject__;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined4 *)(this + 1) = 0x3f800000;
    *(undefined4 *)&this[1].field_0x4 = 0xffffffff;
    *(undefined4 *)&this[1].field_0x10 = 0x3f800000;
    *(undefined4 *)&this[1].field_0x14 = 0xffffffff;
    *(undefined4 *)&this[1].field_0x20 = 1;
    *(undefined4 *)&this[1].field_0x24 = 0xffffffff;
    *(undefined4 *)&this[1].field_0x30 = 0x3f800000;
    *(undefined4 *)&this[1].field_0x34 = 0x3f800000;
    *(undefined4 *)(this + 2) = 0x3f800000;
    *(undefined4 *)&this[2].field_0x4 = 0x3f800000;
    *(undefined4 *)&this[2].field_0x8 = 0x3f800000;
    *(undefined4 *)&this[2].field_0xc = 0x3f800000;
  }
  return;
}

// InternalConstructor<UPerlinNoiseRotationShakeCameraNode> @ 14d651500

void __cdecl InternalConstructor<UPerlinNoiseRotationShakeCameraNode>(FObjectInitializer *param_1)

{
  UShakeCameraNode *this;
  
  this = (UShakeCameraNode *)param_1->Obj;
  if (this != (UShakeCameraNode *)0x0) {
    UShakeCameraNode::UShakeCameraNode(this,param_1);
    *(undefined ***)this = &UPerlinNoiseRotationShakeCameraNode::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UPerlinNoiseRotationShakeCameraNode::_vftable__for__IObjectTreeGraphObject__;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined4 *)(this + 1) = 0x3f800000;
    *(undefined4 *)&this[1].field_0x4 = 0xffffffff;
    *(undefined4 *)&this[1].field_0x10 = 0x3f800000;
    *(undefined4 *)&this[1].field_0x14 = 0xffffffff;
    *(undefined4 *)&this[1].field_0x20 = 1;
    *(undefined4 *)&this[1].field_0x24 = 0xffffffff;
    *(undefined4 *)&this[1].field_0x30 = 0x3f800000;
    *(undefined4 *)&this[1].field_0x34 = 0x3f800000;
    *(undefined4 *)(this + 2) = 0x3f800000;
    *(undefined4 *)&this[2].field_0x4 = 0x3f800000;
    *(undefined4 *)&this[2].field_0x8 = 0x3f800000;
    *(undefined4 *)&this[2].field_0xc = 0x3f800000;
  }
  return;
}

// InternalConstructor<URawInputAxisBinding2DCameraNode> @ 14d6515a0

void __cdecl InternalConstructor<URawInputAxisBinding2DCameraNode>(FObjectInitializer *param_1)

{
  UCameraNode *this;
  
  this = (UCameraNode *)param_1->Obj;
  if (this != (UCameraNode *)0x0) {
    UCameraNode::UCameraNode(this,param_1);
    this->_padding_ = (longlong)&URawInputAxisBinding2DCameraNode::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&URawInputAxisBinding2DCameraNode::_vftable__for__IObjectTreeGraphObject__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0x3ff0000000000000;
    this[1]._padding_ = 0x3ff0000000000000;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UUpdateTrackerCameraNode> @ 14d651610

void __cdecl InternalConstructor<UUpdateTrackerCameraNode>(FObjectInitializer *param_1)

{
  UCameraNode *this;
  
  this = (UCameraNode *)param_1->Obj;
  if (this != (UCameraNode *)0x0) {
    UCameraNode::UCameraNode(this,param_1);
    this->_padding_ = (longlong)&UUpdateTrackerCameraNode::_vftable__for__UObject__;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    this->_padding_ = (longlong)&UUpdateTrackerCameraNode::_vftable__for__IObjectTreeGraphObject__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FVector3dCameraParameter::FVector3dCameraParameter
              ((FVector3dCameraParameter *)&this[1]._padding_);
    return;
  }
  return;
}

// InternalVTableHelperCtorCaller<UAccelerationDecelerationValueInterpolator> @ 14d651670

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAccelerationDecelerationValueInterpolator>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAccelerationDecelerationValueInterpolator::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UCameraValueInterpolator::UCameraValueInterpolator((UCameraValueInterpolator *)pUVar1,param_1);
    *(undefined4 *)(pUVar1 + 1) = 0x3f800000;
    *(undefined ***)pUVar1 = &___7UAccelerationDecelerationValueInterpolator__6B_;
    *(undefined4 *)&pUVar1[1].field_0x4 = 0x41200000;
    *(undefined4 *)&pUVar1[1].field_0x8 = 0x3f800000;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAutoRotateInput2DCameraNode> @ 14d651730

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAutoRotateInput2DCameraNode>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UCameraNode *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAutoRotateInput2DCameraNode::GetPrivateStaticClass();
  this = (UCameraNode *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UCameraNode *)0x0) {
    UCameraNode::UCameraNode(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    this->_padding_ = (longlong)&UAutoRotateInput2DCameraNode::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UAutoRotateInput2DCameraNode::_vftable__for__IObjectTreeGraphObject__;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0x3f800000;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0xffffffff;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0x3c23d70a;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0xffffffff;
    this[1].bIsEnabled = false;
    *(undefined3 *)&this[1].field_0x31 = 0;
    this[1].PrivateFlags = None;
    this[2]._padding_ = 0;
    *(undefined1 *)&this[2]._padding_ = 0;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0xffffffff;
    this[2]._padding_ = 0;
    *(undefined1 *)&this[2]._padding_ = 1;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0xffffffff;
    this[2]._padding_ = 0;
    *(undefined1 *)&this[2]._padding_ = 1;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0xffffffff;
    this[2].bIsEnabled = false;
    *(undefined3 *)&this[2].field_0x31 = 0;
    this[2].PrivateFlags = None;
    *(undefined1 *)&this[3]._padding_ = 1;
    *(undefined4 *)((longlong)&this[3]._padding_ + 4) = 0xffffffff;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UBlueprintCameraNode> @ 14d651880

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UBlueprintCameraNode>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UCameraNode *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UBlueprintCameraNode::GetPrivateStaticClass();
  this = (UCameraNode *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UCameraNode *)0x0) {
    UCameraNode::UCameraNode(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UBlueprintCameraNode::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UBlueprintCameraNode::_vftable__for__IObjectTreeGraphObject__;
    this[1]._padding_ = (longlong)&___7UBlueprintCameraNode__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].bIsEnabled = false;
    *(undefined3 *)&this[1].field_0x31 = 0;
    this[1].PrivateFlags = None;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UBlueprintCameraNodeEvaluator> @ 14d651960

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UBlueprintCameraNodeEvaluator>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UBlueprintCameraNodeEvaluator::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined2 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UBlueprintCameraNodeEvaluator__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    FBlueprintCameraEvaluationDataRef::FBlueprintCameraEvaluationDataRef
              ((FBlueprintCameraEvaluationDataRef *)&pUVar1[1].field_0x10);
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0x408f400000000000;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined4 *)&pUVar1[3].field_0x10 = 0xbf800000;
    *(undefined4 *)&pUVar1[3].field_0x14 = 0x420c0000;
    *(undefined4 *)&pUVar1[3].field_0x18 = 0x44c00000;
    *(undefined4 *)&pUVar1[3].field_0x1c = 0x40333333;
    *(undefined4 *)&pUVar1[3].field_0x20 = 0x42700000;
    *(undefined4 *)&pUVar1[3].field_0x24 = 0xbf800000;
    *(undefined4 *)(pUVar1 + 4) = 0x41c71eb8;
    *(undefined8 *)&pUVar1[4].field_0x4 = 0x41955c29;
    *(undefined4 *)&pUVar1[4].field_0xc = 0;
    *(undefined4 *)&pUVar1[4].field_0x10 = 0x42c80000;
    *(undefined8 *)&pUVar1[4].field_0x14 = 0x3f800000;
    *(undefined4 *)&pUVar1[4].field_0x1c = 8;
    *(undefined4 *)&pUVar1[4].field_0x20 = 0x41200000;
    *(undefined4 *)&pUVar1[4].field_0x24 = 0xbf800000;
    *(undefined8 *)(pUVar1 + 5) = 0;
    pUVar1[5].field_0x8 = 0;
    FBlueprintCameraEvaluationDataRef::FBlueprintCameraEvaluationDataRef
              ((FBlueprintCameraEvaluationDataRef *)&pUVar1[5].field_0x10);
    *(undefined8 *)(pUVar1 + 6) = 0;
    *(undefined8 *)&pUVar1[6].field_0x8 = 0;
    *(undefined8 *)&pUVar1[6].field_0x10 = 0;
    *(undefined8 *)&pUVar1[6].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCameraRigInput1DSlot> @ 14d651b10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UCameraRigInput1DSlot>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UCameraNode *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCameraRigInput1DSlot::GetPrivateStaticClass();
  this = (UCameraNode *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UCameraNode *)0x0) {
    UCameraNode::UCameraNode(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UCameraRigInput1DSlot::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UCameraRigInput1DSlot::_vftable__for__IObjectTreeGraphObject__;
    this[1]._padding_ = 0x4076800000000000;
    this[2]._padding_ = 0x3ff0000000000000;
    this[1]._padding_ = 0;
    *(undefined2 *)&this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0xffffffff;
    this[1].bIsEnabled = false;
    *(undefined3 *)&this[1].field_0x31 = 0;
    this[1].PrivateFlags = None;
    *(undefined4 *)&this[2]._padding_ = 0xffffffff;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 1;
    *(undefined4 *)&this[2]._padding_ = 0xffffffff;
    this[2]._padding_ = 0;
    *(undefined2 *)&this[2].bIsEnabled = 0x101;
    this[2].field_0x32 = 1;
    *(undefined8 *)&this[2].PrivateFlags = 0xffffffffffffffff;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCameraRigInput2DSlot> @ 14d651c50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UCameraRigInput2DSlot>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UCameraRigInput2DSlot *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCameraRigInput2DSlot::GetPrivateStaticClass();
  pUVar3 = (UCameraRigInput2DSlot *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UCameraRigInput2DSlot *)0x0) {
    pUVar3 = UCameraRigInput2DSlot::UCameraRigInput2DSlot(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCameraShakeCameraNode> @ 14d651cf0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UCameraShakeCameraNode>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UCameraNode *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCameraShakeCameraNode::GetPrivateStaticClass();
  this = (UCameraNode *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UCameraNode *)0x0) {
    UCameraNode::UCameraNode(this,param_1);
    this->_padding_ = (longlong)&UCameraShakeCameraNode::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UCameraShakeCameraNode::_vftable__for__IObjectTreeGraphObject__;
    this[1]._padding_ = (longlong)&___7UCameraShakeCameraNode__6B_;
    FCameraShakeAssetReference::FCameraShakeAssetReference
              ((FCameraShakeAssetReference *)&this[1]._padding_);
    *(undefined1 *)&this[2]._padding_ = 1;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCameraShakeServiceCameraNode> @ 14d651dc0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UCameraShakeServiceCameraNode>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UCameraNode *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCameraShakeServiceCameraNode::GetPrivateStaticClass();
  this = (UCameraNode *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UCameraNode *)0x0) {
    UCameraNode::UCameraNode(this,param_1);
    this->_padding_ = (longlong)&UCameraShakeServiceCameraNode::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UCameraShakeServiceCameraNode::_vftable__for__IObjectTreeGraphObject__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCompositeShakeCameraNode> @ 14d651e80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UCompositeShakeCameraNode>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UShakeCameraNode *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCompositeShakeCameraNode::GetPrivateStaticClass();
  this = (UShakeCameraNode *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UShakeCameraNode *)0x0) {
    UShakeCameraNode::UShakeCameraNode(this,param_1);
    *(undefined ***)this = &UCompositeShakeCameraNode::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UCompositeShakeCameraNode::_vftable__for__IObjectTreeGraphObject__;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCriticalDamperValueInterpolator> @ 14d651f40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UCriticalDamperValueInterpolator>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCriticalDamperValueInterpolator::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UCameraValueInterpolator::UCameraValueInterpolator((UCameraValueInterpolator *)pUVar1,param_1);
    *(undefined4 *)(pUVar1 + 1) = 0x3f800000;
    *(undefined ***)pUVar1 = &___7UCriticalDamperValueInterpolator__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDollyFramingCameraNode> @ 14d652000

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDollyFramingCameraNode>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UBaseFramingCameraNode *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDollyFramingCameraNode::GetPrivateStaticClass();
  this = (UBaseFramingCameraNode *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UBaseFramingCameraNode *)0x0) {
    UBaseFramingCameraNode::UBaseFramingCameraNode(this,param_1);
    this->_padding_ = (longlong)&UDollyFramingCameraNode::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UDollyFramingCameraNode::_vftable__for__IObjectTreeGraphObject__;
    this->_padding_ = (longlong)&___7UDollyFramingCameraNode__6B_;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0xffffffff;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0xffffffff;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDoubleIIRValueInterpolator> @ 14d6520f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UDoubleIIRValueInterpolator>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDoubleIIRValueInterpolator::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UCameraValueInterpolator::UCameraValueInterpolator((UCameraValueInterpolator *)pUVar1,param_1);
    *(undefined4 *)(pUVar1 + 1) = 0x3f800000;
    *(undefined ***)pUVar1 = &___7UDoubleIIRValueInterpolator__6B_;
    *(undefined4 *)&pUVar1[1].field_0x4 = 0x3f800000;
    pUVar1[1].field_0x8 = 1;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDrivenControlRotationCameraNode> @ 14d6521b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UDrivenControlRotationCameraNode>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UCameraNode *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDrivenControlRotationCameraNode::GetPrivateStaticClass();
  this = (UCameraNode *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UCameraNode *)0x0) {
    UCameraNode::UCameraNode(this,param_1);
    this->_padding_ = (longlong)&UDrivenControlRotationCameraNode::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UDrivenControlRotationCameraNode::_vftable__for__IObjectTreeGraphObject__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UEnvelopeShakeCameraNode> @ 14d652270

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UEnvelopeShakeCameraNode>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UShakeCameraNode *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UEnvelopeShakeCameraNode::GetPrivateStaticClass();
  this = (UShakeCameraNode *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UShakeCameraNode *)0x0) {
    UShakeCameraNode::UShakeCameraNode(this,param_1);
    *(undefined ***)this = &UEnvelopeShakeCameraNode::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UEnvelopeShakeCameraNode::_vftable__for__IObjectTreeGraphObject__;
    *(undefined4 *)(this + 1) = 0x3e4ccccd;
    *(undefined4 *)&this[1].field_0x4 = 0xffffffff;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined4 *)&this[1].field_0x10 = 0x3e4ccccd;
    *(undefined4 *)&this[1].field_0x14 = 0xffffffff;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined4 *)&this[1].field_0x20 = 0x3f800000;
    *(undefined4 *)&this[1].field_0x24 = 0xffffffff;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)&this[1].field_0x30 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UFixedTestCameraDirector> @ 14d652360

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UFixedTestCameraDirector>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UCameraDirector *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UFixedTestCameraDirector::GetPrivateStaticClass();
  this = (UCameraDirector *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UCameraDirector *)0x0) {
    UCameraDirector::UCameraDirector(this,param_1);
    this->_padding_ = (longlong)&___7UFixedTestCameraDirector__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGameplayTagTransitionCondition> @ 14d652420

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UGameplayTagTransitionCondition>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UCameraRigTransitionCondition *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGameplayTagTransitionCondition::GetPrivateStaticClass();
  this = (UCameraRigTransitionCondition *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UCameraRigTransitionCondition *)0x0) {
    UCameraRigTransitionCondition::UCameraRigTransitionCondition(this,param_1);
    *(undefined ***)this = &UGameplayTagTransitionCondition::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UGameplayTagTransitionCondition::_vftable__for__IObjectTreeGraphObject__;
    FGameplayTagQuery::FGameplayTagQuery((FGameplayTagQuery *)(this + 1));
    FGameplayTagQuery::FGameplayTagQuery((FGameplayTagQuery *)&this[2].field_0x18);
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UIIRValueInterpolator> @ 14d6524f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UIIRValueInterpolator>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UIIRValueInterpolator::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UCameraValueInterpolator::UCameraValueInterpolator((UCameraValueInterpolator *)pUVar1,param_1);
    *(undefined4 *)(pUVar1 + 1) = 0x3f800000;
    *(undefined ***)pUVar1 = &___7UIIRValueInterpolator__6B_;
    pUVar1[1].field_0x4 = 1;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInput1DCameraNode> @ 14d6525b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UInput1DCameraNode>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UCameraNode *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInput1DCameraNode::GetPrivateStaticClass();
  this = (UCameraNode *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UCameraNode *)0x0) {
    UCameraNode::UCameraNode(this,param_1);
    this->_padding_ = (longlong)&UInput1DCameraNode::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UInput1DCameraNode::_vftable__for__IObjectTreeGraphObject__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInput2DCameraNode> @ 14d652670

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UInput2DCameraNode>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UCameraNode *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInput2DCameraNode::GetPrivateStaticClass();
  this = (UCameraNode *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UCameraNode *)0x0) {
    UCameraNode::UCameraNode(this,param_1);
    this->_padding_ = (longlong)&UInput2DCameraNode::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UInput2DCameraNode::_vftable__for__IObjectTreeGraphObject__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInputAccumulator2DCameraNode> @ 14d652730

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UInputAccumulator2DCameraNode>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UCameraRigInput2DSlot *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInputAccumulator2DCameraNode::GetPrivateStaticClass();
  this = (UCameraRigInput2DSlot *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UCameraRigInput2DSlot *)0x0) {
    UCameraRigInput2DSlot::UCameraRigInput2DSlot(this,param_1);
    this->_padding_ = (longlong)&UInputAccumulator2DCameraNode::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UInputAccumulator2DCameraNode::_vftable__for__IObjectTreeGraphObject__;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInputAxisBinding2DCameraNode> @ 14d6527f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UInputAxisBinding2DCameraNode>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UCameraRigInput2DSlot *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInputAxisBinding2DCameraNode::GetPrivateStaticClass();
  this = (UCameraRigInput2DSlot *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UCameraRigInput2DSlot *)0x0) {
    UCameraRigInput2DSlot::UCameraRigInput2DSlot(this,param_1);
    this->_padding_ = (longlong)&UInputAxisBinding2DCameraNode::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UInputAxisBinding2DCameraNode::_vftable__for__IObjectTreeGraphObject__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0x3ff0000000000000;
    this[1]._padding_ = 0x3ff0000000000000;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 1;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UIsCameraRigTransitionCondition> @ 14d6528f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UIsCameraRigTransitionCondition>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UCameraRigTransitionCondition *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UIsCameraRigTransitionCondition::GetPrivateStaticClass();
  this = (UCameraRigTransitionCondition *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UCameraRigTransitionCondition *)0x0) {
    UCameraRigTransitionCondition::UCameraRigTransitionCondition(this,param_1);
    *(undefined ***)this = &UIsCameraRigTransitionCondition::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UIsCameraRigTransitionCondition::_vftable__for__IObjectTreeGraphObject__;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPanningFramingCameraNode> @ 14d6529b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPanningFramingCameraNode>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UBaseFramingCameraNode *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPanningFramingCameraNode::GetPrivateStaticClass();
  this = (UBaseFramingCameraNode *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UBaseFramingCameraNode *)0x0) {
    UBaseFramingCameraNode::UBaseFramingCameraNode(this,param_1);
    this->_padding_ = (longlong)&UPanningFramingCameraNode::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UPanningFramingCameraNode::_vftable__for__IObjectTreeGraphObject__;
    this->_padding_ = (longlong)&___7UPanningFramingCameraNode__6B_;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0xffffffff;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0xffffffff;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPerlinNoiseLocationShakeCameraNode> @ 14d652aa0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPerlinNoiseLocationShakeCameraNode>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UShakeCameraNode *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPerlinNoiseLocationShakeCameraNode::GetPrivateStaticClass();
  this = (UShakeCameraNode *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UShakeCameraNode *)0x0) {
    UShakeCameraNode::UShakeCameraNode(this,param_1);
    *(undefined ***)this = &UPerlinNoiseLocationShakeCameraNode::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UPerlinNoiseLocationShakeCameraNode::_vftable__for__IObjectTreeGraphObject__;
    *(undefined4 *)(this + 1) = 0x3f800000;
    *(undefined4 *)&this[1].field_0x4 = 0xffffffff;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined4 *)&this[1].field_0x10 = 0x3f800000;
    *(undefined4 *)&this[1].field_0x14 = 0xffffffff;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined4 *)&this[1].field_0x20 = 1;
    *(undefined4 *)&this[1].field_0x24 = 0xffffffff;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined4 *)&this[1].field_0x30 = 0x3f800000;
    *(undefined4 *)&this[1].field_0x34 = 0x3f800000;
    *(undefined4 *)(this + 2) = 0x3f800000;
    *(undefined4 *)&this[2].field_0x4 = 0x3f800000;
    *(undefined4 *)&this[2].field_0x8 = 0x3f800000;
    *(undefined4 *)&this[2].field_0xc = 0x3f800000;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPerlinNoiseRotationShakeCameraNode> @ 14d652bc0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPerlinNoiseRotationShakeCameraNode>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UShakeCameraNode *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPerlinNoiseRotationShakeCameraNode::GetPrivateStaticClass();
  this = (UShakeCameraNode *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UShakeCameraNode *)0x0) {
    UShakeCameraNode::UShakeCameraNode(this,param_1);
    *(undefined ***)this = &UPerlinNoiseRotationShakeCameraNode::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UPerlinNoiseRotationShakeCameraNode::_vftable__for__IObjectTreeGraphObject__;
    *(undefined4 *)(this + 1) = 0x3f800000;
    *(undefined4 *)&this[1].field_0x4 = 0xffffffff;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined4 *)&this[1].field_0x10 = 0x3f800000;
    *(undefined4 *)&this[1].field_0x14 = 0xffffffff;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined4 *)&this[1].field_0x20 = 1;
    *(undefined4 *)&this[1].field_0x24 = 0xffffffff;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined4 *)&this[1].field_0x30 = 0x3f800000;
    *(undefined4 *)&this[1].field_0x34 = 0x3f800000;
    *(undefined4 *)(this + 2) = 0x3f800000;
    *(undefined4 *)&this[2].field_0x4 = 0x3f800000;
    *(undefined4 *)&this[2].field_0x8 = 0x3f800000;
    *(undefined4 *)&this[2].field_0xc = 0x3f800000;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<URawInputAxisBinding2DCameraNode> @ 14d652ce0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<URawInputAxisBinding2DCameraNode>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UCameraNode *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = URawInputAxisBinding2DCameraNode::GetPrivateStaticClass();
  this = (UCameraNode *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UCameraNode *)0x0) {
    UCameraNode::UCameraNode(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&URawInputAxisBinding2DCameraNode::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&URawInputAxisBinding2DCameraNode::_vftable__for__IObjectTreeGraphObject__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0x3ff0000000000000;
    this[1]._padding_ = 0x3ff0000000000000;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UUpdateTrackerCameraNode> @ 14d652dc0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UUpdateTrackerCameraNode>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UCameraNode *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UUpdateTrackerCameraNode::GetPrivateStaticClass();
  this = (UCameraNode *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UCameraNode *)0x0) {
    UCameraNode::UCameraNode(this,param_1);
    this->_padding_ = (longlong)&UUpdateTrackerCameraNode::_vftable__for__UObject__;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UUpdateTrackerCameraNode::_vftable__for__IObjectTreeGraphObject__;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    this[1]._padding_ = 0;
    FVector3dCameraParameter::FVector3dCameraParameter
              ((FVector3dCameraParameter *)&this[1]._padding_);
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// IsObjectPtrEqual<UCameraShakeAsset_const_,UCameraShakeAsset_const_*,0> @ 14d652e90

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UCameraShakeAsset_const_,UCameraShakeAsset_const_*,0>
          (TObjectPtr<UCameraShakeAsset_const_> *param_1,UCameraShakeAsset **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UCameraShakeAsset *)0x0) {
    return *param_2 == (UCameraShakeAsset *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<UCameraRigAsset,UCameraRigAsset_*,0> @ 14d652eb0

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UCameraRigAsset,UCameraRigAsset_*,0>
          (TObjectPtr<UCameraRigAsset> *param_1,UCameraRigAsset **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UCameraRigAsset *)0x0) {
    return *param_2 == (UCameraRigAsset *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<UCameraRigAsset,UCameraRigAsset_const_*,0> @ 14d652ed0

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UCameraRigAsset,UCameraRigAsset_const_*,0>
          (TObjectPtr<UCameraRigAsset> *param_1,UCameraRigAsset **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UCameraRigAsset *)0x0) {
    return *param_2 == (UCameraRigAsset *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// MakeStridedView<TArray<UE::Cameras::TCameraDebugGraphEntry<1>,TSizedDefaultAllocator<32>_>_&,float,UE::Cameras::TCameraDebugGraphEntry<1>,0,0> @ 14d6531e0

TStridedView<float,int> * __cdecl
MakeStridedView<TArray<UE::Cameras::TCameraDebugGraphEntry<1>,TSizedDefaultAllocator<32>_>_&,float,UE::Cameras::TCameraDebugGraphEntry<1>,0,0>
          (TStridedView<float,int> *__return_storage_ptr__,
          TArray<UE::Cameras::TCameraDebugGraphEntry<1>,TSizedDefaultAllocator<32>_> *param_1,
          pdm_934c215e param_2)

{
  TStridedView<float,int>::TStridedView<float,int><float>
            (__return_storage_ptr__,8,(float *)((param_1->AllocatorInstance).Data + (int)param_2),
             param_1->ArrayNum);
  return __return_storage_ptr__;
}

// MakeStridedView<TArray<UE::Cameras::TCameraDebugGraphEntry<3>,TSizedDefaultAllocator<32>_>_&,float,UE::Cameras::TCameraDebugGraphEntry<3>,0,0> @ 14d653210

TStridedView<float,int> * __cdecl
MakeStridedView<TArray<UE::Cameras::TCameraDebugGraphEntry<3>,TSizedDefaultAllocator<32>_>_&,float,UE::Cameras::TCameraDebugGraphEntry<3>,0,0>
          (TStridedView<float,int> *__return_storage_ptr__,
          TArray<UE::Cameras::TCameraDebugGraphEntry<3>,TSizedDefaultAllocator<32>_> *param_1,
          pdm_94a5789c param_2)

{
  TStridedView<float,int>::TStridedView<float,int><float>
            (__return_storage_ptr__,0x10,(float *)((param_1->AllocatorInstance).Data + (int)param_2)
             ,param_1->ArrayNum);
  return __return_storage_ptr__;
}

// NewObject<UArrayCameraNode> @ 14d653780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UArrayCameraNode * __cdecl NewObject<UArrayCameraNode>(UObject *param_1)

{
  UClass *pUVar1;
  UArrayCameraNode *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UArrayCameraNode_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UArrayCameraNode *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UBlueprintCameraNodeEvaluator> @ 14d653820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UBlueprintCameraNodeEvaluator * __cdecl
NewObject<UBlueprintCameraNodeEvaluator>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UBlueprintCameraNodeEvaluator *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = UBlueprintCameraNodeEvaluator::StaticClass();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (UBlueprintCameraNodeEvaluator *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UCameraObjectInterfaceBlendableParameter> @ 14d653920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UCameraObjectInterfaceBlendableParameter * __cdecl
NewObject<UCameraObjectInterfaceBlendableParameter>(UObject *param_1)

{
  UClass *pUVar1;
  UCameraObjectInterfaceBlendableParameter *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UCameraObjectInterfaceBlendableParameter_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UCameraObjectInterfaceBlendableParameter *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UCameraRigCameraNode> @ 14d6539c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UCameraRigCameraNode * __cdecl NewObject<UCameraRigCameraNode>(UObject *param_1)

{
  UClass *pUVar1;
  UCameraRigCameraNode *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UCameraRigCameraNode_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UCameraRigCameraNode *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UCameraShakeServiceCameraNode> @ 14d653a60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UCameraShakeServiceCameraNode * __cdecl
NewObject<UCameraShakeServiceCameraNode>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UCameraShakeServiceCameraNode *pUVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (param_2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = UCameraShakeServiceCameraNode::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UCameraShakeServiceCameraNode *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar3 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UFixedTestCameraDirector> @ 14d653b50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UFixedTestCameraDirector * __cdecl NewObject<UFixedTestCameraDirector>(UObject *param_1)

{
  UClass *pUVar1;
  UFixedTestCameraDirector *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UFixedTestCameraDirector::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UFixedTestCameraDirector *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<ULensParametersCameraNode> @ 14d653bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

ULensParametersCameraNode * __cdecl NewObject<ULensParametersCameraNode>(UObject *param_1)

{
  UClass *pUVar1;
  ULensParametersCameraNode *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_ULensParametersCameraNode_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (ULensParametersCameraNode *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UOffsetCameraNode> @ 14d653c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UOffsetCameraNode * __cdecl NewObject<UOffsetCameraNode>(UObject *param_1)

{
  UClass *pUVar1;
  UOffsetCameraNode *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UOffsetCameraNode_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UOffsetCameraNode *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UUpdateTrackerCameraNode> @ 14d653d30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UUpdateTrackerCameraNode * __cdecl NewObject<UUpdateTrackerCameraNode>(UObject *param_1)

{
  UClass *pUVar1;
  UUpdateTrackerCameraNode *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UUpdateTrackerCameraNode::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UUpdateTrackerCameraNode *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// StaticEnum<enum_ECameraAutoRotateDirection> @ 14d6549d0

UEnum * __cdecl StaticEnum<enum_ECameraAutoRotateDirection>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECameraAutoRotateDirection.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UEnum_ECameraAutoRotateDirection.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GameplayCameras_ECameraAutoRotateDirection,
                       (UObject *)pUVar1,L"ECameraAutoRotateDirection");
  }
  return Z_Registration_Info_UEnum_ECameraAutoRotateDirection.OuterSingleton;
}

// StaticEnum<enum_ECameraShakeEvaluationMode> @ 14d654a10

UEnum * __cdecl StaticEnum<enum_ECameraShakeEvaluationMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECameraShakeEvaluationMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UEnum_ECameraShakeEvaluationMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GameplayCameras_ECameraShakeEvaluationMode,
                       (UObject *)pUVar1,L"ECameraShakeEvaluationMode");
  }
  return Z_Registration_Info_UEnum_ECameraShakeEvaluationMode.OuterSingleton;
}

// StaticEnum<enum_ECameraTargetShape> @ 14d654a50

UEnum * __cdecl StaticEnum<enum_ECameraTargetShape>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECameraTargetShape.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UEnum_ECameraTargetShape.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GameplayCameras_ECameraTargetShape,(UObject *)pUVar1,
                       L"ECameraTargetShape");
  }
  return Z_Registration_Info_UEnum_ECameraTargetShape.OuterSingleton;
}

// ~TFunction_OwnedObject<`FCameraRigAssetBuilderDrivenOverridesTest::RunTest'::__l2::<lambda_1>,0,0> @ 14d657cf0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCameraRigAssetBuilderDrivenOverridesTest::RunTest'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FCameraRigAssetBuilderDrivenOverridesTest::RunTest_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FCameraRigAssetBuilderDrivenOverridesTest::RunTest'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FCameraRigAssetBuilderDrivenOverridesTest::RunTest'::__l2::<lambda_2>,0,0> @ 14d657d10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCameraRigAssetBuilderDrivenOverridesTest::RunTest'::__l2::<lambda_2>,0,0>::
~TFunction_OwnedObject<_FCameraRigAssetBuilderDrivenOverridesTest::RunTest_::__l2::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FCameraRigAssetBuilderDrivenOverridesTest::RunTest'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  return;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d658ec4

/* [thunk]:public: virtual void * __ptr64 __cdecl UAutoRotateInput2DCameraNode::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UAutoRotateInput2DCameraNode::_vector_deleting_destructor__adjustor_40__
          (UAutoRotateInput2DCameraNode *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UAutoRotateInput2DCameraNode *)&this[-1].AutoRotateYaw,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d658ed4

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UBlueprintCameraNode::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UBlueprintCameraNode::_vector_deleting_destructor__adjustor_40__
          (UBlueprintCameraNode *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UBlueprintCameraNode *)&this[-1].CameraNodeEvaluatorOverrides,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{56}' @ 14d658ee4

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UBlueprintCameraNode::`vector deleting
   destructor'`adjustor{56}' (unsigned int) __ptr64 */

void * __thiscall
UBlueprintCameraNode::_vector_deleting_destructor__adjustor_56__
          (UBlueprintCameraNode *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UBlueprintCameraNode *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d658ef4

/* [thunk]:public: virtual void * __ptr64 __cdecl UCameraRigInput1DSlot::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UCameraRigInput1DSlot::_vector_deleting_destructor__adjustor_40__
          (UCameraRigInput1DSlot *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UCameraRigInput1DSlot *)&this[-1].BuiltInVariable,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d658f04

/* [thunk]:public: virtual void * __ptr64 __cdecl UCameraRigInput2DSlot::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UCameraRigInput2DSlot::_vector_deleting_destructor__adjustor_40__
          (UCameraRigInput2DSlot *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UCameraRigInput2DSlot *)&this[-1].BuiltInVariable,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d658f14

/* [thunk]:public: virtual void * __ptr64 __cdecl UCameraShakeCameraNode::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UCameraShakeCameraNode::_vector_deleting_destructor__adjustor_40__
          (UCameraShakeCameraNode *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UCameraShakeCameraNode *)&this[-1].CameraShakeReference._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{56}' @ 14d658f24

/* [thunk]:public: virtual void * __ptr64 __cdecl UCameraShakeCameraNode::`vector deleting
   destructor'`adjustor{56}' (unsigned int) __ptr64 */

void * __thiscall
UCameraShakeCameraNode::_vector_deleting_destructor__adjustor_56__
          (UCameraShakeCameraNode *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UCameraShakeCameraNode *)&this[-1].CameraShakeReference._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d658f34

/* [thunk]:public: virtual void * __ptr64 __cdecl UCameraShakeServiceCameraNode::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UCameraShakeServiceCameraNode::_vector_deleting_destructor__adjustor_40__
          (UCameraShakeServiceCameraNode *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UCameraShakeServiceCameraNode *)&this[-1].field_0x10,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d658f44

/* [thunk]:public: virtual void * __ptr64 __cdecl UCompositeShakeCameraNode::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UCompositeShakeCameraNode::_vector_deleting_destructor__adjustor_40__
          (UCompositeShakeCameraNode *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UCompositeShakeCameraNode *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d658f54

/* [thunk]:public: virtual void * __ptr64 __cdecl UDollyFramingCameraNode::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UDollyFramingCameraNode::_vector_deleting_destructor__adjustor_40__
          (UDollyFramingCameraNode *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UDollyFramingCameraNode *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{56}' @ 14d658f64

/* [thunk]:public: virtual void * __ptr64 __cdecl UDollyFramingCameraNode::`vector deleting
   destructor'`adjustor{56}' (unsigned int) __ptr64 */

void * __thiscall
UDollyFramingCameraNode::_vector_deleting_destructor__adjustor_56__
          (UDollyFramingCameraNode *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UDollyFramingCameraNode *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d658f74

/* [thunk]:public: virtual void * __ptr64 __cdecl UDrivenControlRotationCameraNode::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UDrivenControlRotationCameraNode::_vector_deleting_destructor__adjustor_40__
          (UDrivenControlRotationCameraNode *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UDrivenControlRotationCameraNode *)&this[-1].field_0x10,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d658f84

/* [thunk]:public: virtual void * __ptr64 __cdecl UEnvelopeShakeCameraNode::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UEnvelopeShakeCameraNode::_vector_deleting_destructor__adjustor_40__
          (UEnvelopeShakeCameraNode *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UEnvelopeShakeCameraNode *)&this[-1].EaseOutTime,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d658f94

/* [thunk]:public: virtual void * __ptr64 __cdecl UGameplayTagTransitionCondition::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UGameplayTagTransitionCondition::_vector_deleting_destructor__adjustor_40__
          (UGameplayTagTransitionCondition *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UGameplayTagTransitionCondition *)
                      &this[-1].NextGameplayTagQuery.QueryTokenStream.ArrayNum,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d658fa4

/* [thunk]:public: virtual void * __ptr64 __cdecl UInput1DCameraNode::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UInput1DCameraNode::_vector_deleting_destructor__adjustor_40__
          (UInput1DCameraNode *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UInput1DCameraNode *)&this[-1].field_0x10,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d658fb4

/* [thunk]:public: virtual void * __ptr64 __cdecl UInput2DCameraNode::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UInput2DCameraNode::_vector_deleting_destructor__adjustor_40__
          (UInput2DCameraNode *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UInput2DCameraNode *)&this[-1].field_0x10,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d658fc4

/* [thunk]:public: virtual void * __ptr64 __cdecl UInputAccumulator2DCameraNode::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UInputAccumulator2DCameraNode::_vector_deleting_destructor__adjustor_40__
          (UInputAccumulator2DCameraNode *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UInputAccumulator2DCameraNode *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d658fd4

/* [thunk]:public: virtual void * __ptr64 __cdecl UInputAxisBinding2DCameraNode::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UInputAxisBinding2DCameraNode::_vector_deleting_destructor__adjustor_40__
          (UInputAxisBinding2DCameraNode *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UInputAxisBinding2DCameraNode *)&this[-1].Multiplier,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d658fe4

/* [thunk]:public: virtual void * __ptr64 __cdecl UIsCameraRigTransitionCondition::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UIsCameraRigTransitionCondition::_vector_deleting_destructor__adjustor_40__
          (UIsCameraRigTransitionCondition *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UIsCameraRigTransitionCondition *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d658ff4

/* [thunk]:public: virtual void * __ptr64 __cdecl UPanningFramingCameraNode::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UPanningFramingCameraNode::_vector_deleting_destructor__adjustor_40__
          (UPanningFramingCameraNode *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UPanningFramingCameraNode *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{56}' @ 14d659004

/* [thunk]:public: virtual void * __ptr64 __cdecl UPanningFramingCameraNode::`vector deleting
   destructor'`adjustor{56}' (unsigned int) __ptr64 */

void * __thiscall
UPanningFramingCameraNode::_vector_deleting_destructor__adjustor_56__
          (UPanningFramingCameraNode *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UPanningFramingCameraNode *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d659014

/* [thunk]:public: virtual void * __ptr64 __cdecl UPerlinNoiseLocationShakeCameraNode::`vector
   deleting destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UPerlinNoiseLocationShakeCameraNode::_vector_deleting_destructor__adjustor_40__
          (UPerlinNoiseLocationShakeCameraNode *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPerlinNoiseLocationShakeCameraNode *)&this[-1].Octaves,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d659024

/* [thunk]:public: virtual void * __ptr64 __cdecl UPerlinNoiseRotationShakeCameraNode::`vector
   deleting destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UPerlinNoiseRotationShakeCameraNode::_vector_deleting_destructor__adjustor_40__
          (UPerlinNoiseRotationShakeCameraNode *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPerlinNoiseRotationShakeCameraNode *)&this[-1].Octaves,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d659034

/* [thunk]:public: virtual void * __ptr64 __cdecl URawInputAxisBinding2DCameraNode::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
URawInputAxisBinding2DCameraNode::_vector_deleting_destructor__adjustor_40__
          (URawInputAxisBinding2DCameraNode *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((URawInputAxisBinding2DCameraNode *)&this[-1].AxisActions.ArrayNum,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d659044

/* [thunk]:public: virtual void * __ptr64 __cdecl UUpdateTrackerCameraNode::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UUpdateTrackerCameraNode::_vector_deleting_destructor__adjustor_40__
          (UUpdateTrackerCameraNode *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UUpdateTrackerCameraNode *)&this[-1].VectorParameter,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14d659060

void * __thiscall
UE::Cameras::TAccelerationDecelerationValueInterpolator<double>::_scalar_deleting_destructor_
          (TAccelerationDecelerationValueInterpolator<double> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7__TCameraValueInterpolator_N_Cameras_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d6590a0

void * __thiscall
UE::Cameras::TAccelerationDecelerationValueInterpolator<UE::Math::TVector2<double>_>::
_scalar_deleting_destructor_
          (TAccelerationDecelerationValueInterpolator<UE::Math::TVector2<double>_> *this,
          uint param_1)

{
  this->_padding_ =
       (longlong)&___7__TCameraValueInterpolator_U__TVector2_N_Math_UE___Cameras_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d6590e0

void * __thiscall
UE::Cameras::TAccelerationDecelerationValueInterpolator<UE::Math::TVector<double>_>::
_scalar_deleting_destructor_
          (TAccelerationDecelerationValueInterpolator<UE::Math::TVector<double>_> *this,uint param_1
          )

{
  this->_padding_ = (longlong)&___7__TCameraValueInterpolator_U__TVector_N_Math_UE___Cameras_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d659120

void * __thiscall
UE::Cameras::Test::
TCameraDirectorTestBuilder<UE::Cameras::Test::FCameraAssetTestBuilder,UFixedTestCameraDirector,void>
::_scalar_deleting_destructor_
          (TCameraDirectorTestBuilder<UE::Cameras::Test::FCameraAssetTestBuilder,UFixedTestCameraDirector,void>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IHasNamedObjectRegistry_Test_Cameras_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d659160

void * __thiscall
UE::Cameras::Test::
TCameraDirectorTestBuilder<UE::Cameras::Test::FCameraEvaluationContextTestBuilder,USingleCameraDirector,void>
::_scalar_deleting_destructor_
          (TCameraDirectorTestBuilder<UE::Cameras::Test::FCameraEvaluationContextTestBuilder,USingleCameraDirector,void>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IHasNamedObjectRegistry_Test_Cameras_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d6591a0

void * __thiscall
UE::Cameras::Test::
TCameraNodeTestBuilder<UE::Cameras::Test::TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UArrayCameraNode,void>,ULensParametersCameraNode,void>
::_scalar_deleting_destructor_
          (TCameraNodeTestBuilder<UE::Cameras::Test::TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UArrayCameraNode,void>,ULensParametersCameraNode,void>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IHasNamedObjectRegistry_Test_Cameras_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d6591e0

void * __thiscall
UE::Cameras::Test::
TCameraNodeTestBuilder<UE::Cameras::Test::TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UArrayCameraNode,void>,UOffsetCameraNode,void>
::_scalar_deleting_destructor_
          (TCameraNodeTestBuilder<UE::Cameras::Test::TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UArrayCameraNode,void>,UOffsetCameraNode,void>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IHasNamedObjectRegistry_Test_Cameras_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d659220

void * __thiscall
UE::Cameras::Test::
TCameraNodeTestBuilder<UE::Cameras::Test::TScopedCameraRigAssetTestBuilder<UE::Cameras::Test::FCameraEvaluationContextTestBuilder>,UUpdateTrackerCameraNode,void>
::_scalar_deleting_destructor_
          (TCameraNodeTestBuilder<UE::Cameras::Test::TScopedCameraRigAssetTestBuilder<UE::Cameras::Test::FCameraEvaluationContextTestBuilder>,UUpdateTrackerCameraNode,void>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IHasNamedObjectRegistry_Test_Cameras_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d659260

void * __thiscall
UE::Cameras::Test::
TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UArrayCameraNode,void>::
_scalar_deleting_destructor_
          (TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UArrayCameraNode,void>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IHasNamedObjectRegistry_Test_Cameras_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d6592a0

void * __thiscall
UE::Cameras::Test::
TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UCameraRigCameraNode,void>::
_scalar_deleting_destructor_
          (TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UCameraRigCameraNode,void>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IHasNamedObjectRegistry_Test_Cameras_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d6592e0

void * __thiscall
UE::Cameras::Test::
TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,ULensParametersCameraNode,void>
::_scalar_deleting_destructor_
          (TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,ULensParametersCameraNode,void>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IHasNamedObjectRegistry_Test_Cameras_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d659320

void * __thiscall
UE::Cameras::Test::
TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UOffsetCameraNode,void>::
_scalar_deleting_destructor_
          (TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UOffsetCameraNode,void>
           *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IHasNamedObjectRegistry_Test_Cameras_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d659360

void * __thiscall
UE::Cameras::Test::
TCameraRigAssetTestBuilderBase<UE::Cameras::Test::TScopedCameraRigAssetTestBuilder<UE::Cameras::Test::FCameraEvaluationContextTestBuilder>_>
::_scalar_deleting_destructor_
          (TCameraRigAssetTestBuilderBase<UE::Cameras::Test::TScopedCameraRigAssetTestBuilder<UE::Cameras::Test::FCameraEvaluationContextTestBuilder>_>
           *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->NamedObjectRegistry).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7IHasNamedObjectRegistry_Test_Cameras_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d6593b0

void * __thiscall
UE::Cameras::Test::TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder>::
_scalar_deleting_destructor_
          (TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder> *this,
          uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->NamedObjectRegistry).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7IHasNamedObjectRegistry_Test_Cameras_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d659400

void * __thiscall
UE::Cameras::TCriticalDamperValueInterpolator<double>::_scalar_deleting_destructor_
          (TCriticalDamperValueInterpolator<double> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7__TCameraValueInterpolator_N_Cameras_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d659440

void * __thiscall
UE::Cameras::TCriticalDamperValueInterpolator<UE::Math::TVector2<double>_>::
_scalar_deleting_destructor_
          (TCriticalDamperValueInterpolator<UE::Math::TVector2<double>_> *this,uint param_1)

{
  this->_padding_ =
       (longlong)&___7__TCameraValueInterpolator_U__TVector2_N_Math_UE___Cameras_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d659480

void * __thiscall
UE::Cameras::TCriticalDamperValueInterpolator<UE::Math::TVector<double>_>::
_scalar_deleting_destructor_
          (TCriticalDamperValueInterpolator<UE::Math::TVector<double>_> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7__TCameraValueInterpolator_U__TVector_N_Math_UE___Cameras_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d6594c0

void * __thiscall
UE::Cameras::TDoubleIIRValueInterpolator<double>::_scalar_deleting_destructor_
          (TDoubleIIRValueInterpolator<double> *this,uint param_1)

{
  (this->PrimaryInterpolator)._padding_ =
       (longlong)&___7__TCameraValueInterpolator_N_Cameras_UE__6B_;
  (this->IntermediateInterpolator)._padding_ =
       (longlong)&___7__TCameraValueInterpolator_N_Cameras_UE__6B_;
  this->_padding_ = (longlong)&___7__TCameraValueInterpolator_N_Cameras_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d659500

void * __thiscall
UE::Cameras::TDoubleIIRValueInterpolator<UE::Math::TVector2<double>_>::_scalar_deleting_destructor_
          (TDoubleIIRValueInterpolator<UE::Math::TVector2<double>_> *this,uint param_1)

{
  (this->PrimaryInterpolator)._padding_ =
       (longlong)&___7__TCameraValueInterpolator_U__TVector2_N_Math_UE___Cameras_UE__6B_;
  (this->IntermediateInterpolator)._padding_ =
       (longlong)&___7__TCameraValueInterpolator_U__TVector2_N_Math_UE___Cameras_UE__6B_;
  this->_padding_ =
       (longlong)&___7__TCameraValueInterpolator_U__TVector2_N_Math_UE___Cameras_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d659540

void * __thiscall
UE::Cameras::TDoubleIIRValueInterpolator<UE::Math::TVector<double>_>::_scalar_deleting_destructor_
          (TDoubleIIRValueInterpolator<UE::Math::TVector<double>_> *this,uint param_1)

{
  (this->PrimaryInterpolator)._padding_ =
       (longlong)&___7__TCameraValueInterpolator_U__TVector_N_Math_UE___Cameras_UE__6B_;
  (this->IntermediateInterpolator)._padding_ =
       (longlong)&___7__TCameraValueInterpolator_U__TVector_N_Math_UE___Cameras_UE__6B_;
  this->_padding_ = (longlong)&___7__TCameraValueInterpolator_U__TVector_N_Math_UE___Cameras_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x178);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d659580

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(USingleCameraDirector_*,UE::Cameras::Test::FNamedObjectRegistry_*),0,0>
::_scalar_deleting_destructor_
          (TFunction_OwnedObject<void_(__cdecl*)(USingleCameraDirector_*,UE::Cameras::Test::FNamedObjectRegistry_*),0,0>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXPEAVUSingleCameraDirector__PEAVFNamedObjectRegistry_Test_Cameras_UE___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d6595c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCameraRigAssetBuilderDrivenOverridesTest::RunTest'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FCameraRigAssetBuilderDrivenOverridesTest::RunTest'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d659600

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCameraRigAssetBuilderDrivenOverridesTest::RunTest'::__l2::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FCameraRigAssetBuilderDrivenOverridesTest::RunTest'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d659640

void * __thiscall
UE::Cameras::TIIRValueInterpolator<double>::_scalar_deleting_destructor_
          (TIIRValueInterpolator<double> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7__TCameraValueInterpolator_N_Cameras_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d659680

void * __thiscall
UE::Cameras::TIIRValueInterpolator<UE::Math::TVector2<double>_>::_scalar_deleting_destructor_
          (TIIRValueInterpolator<UE::Math::TVector2<double>_> *this,uint param_1)

{
  this->_padding_ =
       (longlong)&___7__TCameraValueInterpolator_U__TVector2_N_Math_UE___Cameras_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d6596c0

void * __thiscall
UE::Cameras::TIIRValueInterpolator<UE::Math::TVector<double>_>::_scalar_deleting_destructor_
          (TIIRValueInterpolator<UE::Math::TVector<double>_> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7__TCameraValueInterpolator_U__TVector_N_Math_UE___Cameras_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d659700

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Cameras::FDrivenControlRotationHelperService,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Cameras::FDrivenControlRotationHelperService,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d659740

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Cameras::Test::FFixedTextCameraDirectorEvaluator,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Cameras::Test::FFixedTextCameraDirectorEvaluator,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d659780

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Cameras::Test::FNamedObjectRegistry,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Cameras::Test::FNamedObjectRegistry,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d6597c0

void * __thiscall
UE::Cameras::Test::
TScopedCameraRigAssetTestBuilder<UE::Cameras::Test::FCameraEvaluationContextTestBuilder>::
_scalar_deleting_destructor_
          (TScopedCameraRigAssetTestBuilder<UE::Cameras::Test::FCameraEvaluationContextTestBuilder>
           *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x20);
  *(undefined ***)this = &___7IHasNamedObjectRegistry_Test_Cameras_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d659810

void * __thiscall
UE::Cameras::FAutoRotateInput2DCameraDebugBlock::_scalar_deleting_destructor_
          (FAutoRotateInput2DCameraDebugBlock *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FCameraDebugBlock_Cameras_UE__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d659870

void * __thiscall
UE::Cameras::FAutoRotateInput2DCameraNodeEvaluator::_scalar_deleting_destructor_
          (FAutoRotateInput2DCameraNodeEvaluator *this,uint param_1)

{
  TCameraValueInterpolator<double> *pTVar1;
  
  pTVar1 = (this->Interpolator).Ptr;
  if (pTVar1 != (TCameraValueInterpolator<double> *)0x0) {
    (**(code **)pTVar1->_padding_)(pTVar1,1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d6598c0

void * __thiscall
UE::Cameras::FBlueprintCameraDebugBlock::_scalar_deleting_destructor_
          (FBlueprintCameraDebugBlock *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->BlueprintEvaluatorName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FCameraDebugBlock_Cameras_UE__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d659930

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void * __thiscall
UE::Cameras::FBlueprintCameraNodeEvaluator::_scalar_deleting_destructor_
          (FBlueprintCameraNodeEvaluator *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d659960

void * __thiscall
UE::Cameras::Test::FCameraAssetTestBuilder::_scalar_deleting_destructor_
          (FCameraAssetTestBuilder *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->NamedObjectRegistry).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7IHasNamedObjectRegistry_Test_Cameras_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d6599b0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void * __thiscall
UE::Cameras::Test::FCameraEvaluationContextTestBuilder::_scalar_deleting_destructor_
          (FCameraEvaluationContextTestBuilder *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->NamedObjectRegistry).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->EvaluationContext).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7IHasNamedObjectRegistry_Test_Cameras_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d659a10

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void * __thiscall
UE::Cameras::FCameraParameterSetterService::_scalar_deleting_destructor_
          (FCameraParameterSetterService *this,uint param_1)

{
  TSparseArray<UE::Cameras::FCameraParameterSetterService::FVariableSetterEntry,FDefaultSparseArrayAllocator>
  ::
  ~TSparseArray<UE::Cameras::FCameraParameterSetterService::FVariableSetterEntry,FDefaultSparseArrayAllocator>
            (&this->VariableSetters);
  FCameraEvaluationService::~FCameraEvaluationService((FCameraEvaluationService *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d659a60

void * __thiscall
UE::Cameras::Test::FCameraRigAssetTestBuilder::_scalar_deleting_destructor_
          (FCameraRigAssetTestBuilder *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x20);
  *(undefined ***)this = &___7IHasNamedObjectRegistry_Test_Cameras_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d659ab0

void * __thiscall
UE::Cameras::FCameraRigInput1DSlotEvaluator::_scalar_deleting_destructor_
          (FCameraRigInput1DSlotEvaluator *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d659ae0

void * __thiscall
UE::Cameras::FCameraRigInput2DSlotEvaluator::_scalar_deleting_destructor_
          (FCameraRigInput2DSlotEvaluator *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d659b10

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void * __thiscall
UE::Cameras::FCameraShakeCameraNodeEvaluator::_scalar_deleting_destructor_
          (FCameraShakeCameraNodeEvaluator *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CameraShakeService).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d659b50

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void * __thiscall
UE::Cameras::FCameraShakeServiceCameraNodeEvaluator::_scalar_deleting_destructor_
          (FCameraShakeServiceCameraNodeEvaluator *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<UE::Cameras::FCameraShakeServiceCameraNodeEvaluator::FShakeEntry,int>
            ((FShakeEntry *)(this->Entries).AllocatorInstance.Data,(this->Entries).ArrayNum);
  pFVar1 = (this->Entries).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ShakeContext).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d659bb0

void * __thiscall
UE::Cameras::FCompositeShakeCameraNodeEvaluator::_scalar_deleting_destructor_
          (FCompositeShakeCameraNodeEvaluator *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ShakeEvaluators).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d659c00

void * __thiscall
UE::Cameras::FDollyFramingCameraDebugBlock::_scalar_deleting_destructor_
          (FDollyFramingCameraDebugBlock *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FCameraDebugBlock_Cameras_UE__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d659c60

void * __thiscall
UE::Cameras::FDollyFramingCameraNodeEvaluator::_scalar_deleting_destructor_
          (FDollyFramingCameraNodeEvaluator *this,uint param_1)

{
  if (*(void **)&this->field_0x640 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x640);
  }
  if (*(void **)&this->field_0x520 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x520);
  }
  if (*(void **)&this->field_0x268 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x268);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x6b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d659ce0

void * __thiscall
UE::Cameras::FDrivenControlRotationCameraNodeEvaluator::_scalar_deleting_destructor_
          (FDrivenControlRotationCameraNodeEvaluator *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->HelperService).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d659d20

void * __thiscall
UE::Cameras::FDrivenControlRotationDebugBlock::_scalar_deleting_destructor_
          (FDrivenControlRotationDebugBlock *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FCameraDebugBlock_Cameras_UE__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d659d80

void * __thiscall
UE::Cameras::FDrivenControlRotationHelperDebugBlock::_scalar_deleting_destructor_
          (FDrivenControlRotationHelperDebugBlock *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->MonitoringRequests).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedControlRotations).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->ContextNames).AllocatorInstance.Data,(this->ContextNames).ArrayNum);
  pFVar1 = (this->ContextNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FCameraDebugBlock_Cameras_UE__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d659e20

void * __thiscall
UE::Cameras::FDrivenControlRotationHelperService::_scalar_deleting_destructor_
          (FDrivenControlRotationHelperService *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->MonitoredContexts).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MonitoredContexts).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1>,UE::Cameras::FDrivenControlRotationHelperService::FMonitoredContext>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MonitoredContexts);
  FCameraEvaluationService::~FCameraEvaluationService((FCameraEvaluationService *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d659e90

void * __thiscall
UE::Cameras::FEnvelopeShakeCameraNodeEvaluator::_scalar_deleting_destructor_
          (FEnvelopeShakeCameraNodeEvaluator *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d659ec0

void * __thiscall
UE::Cameras::Test::FFixedTextCameraDirectorEvaluator::_scalar_deleting_destructor_
          (FFixedTextCameraDirectorEvaluator *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7FCameraDirectorEvaluator_Cameras_UE__6B_;
  plVar3 = (longlong *)this->_padding_;
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
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d659f30

void * __thiscall
UE::Cameras::FInput1DCameraNodeEvaluator::_scalar_deleting_destructor_
          (FInput1DCameraNodeEvaluator *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d659f60

void * __thiscall
UE::Cameras::FInput2DCameraNodeEvaluator::_scalar_deleting_destructor_
          (FInput2DCameraNodeEvaluator *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d659f90

void * __thiscall
UE::Cameras::FInputAccumulator2DCameraNodeEvaluator::_scalar_deleting_destructor_
          (FInputAccumulator2DCameraNodeEvaluator *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d659fc0

void * __thiscall
UE::Cameras::FInputAxisBinding2DCameraNodeEvaluator::_scalar_deleting_destructor_
          (FInputAxisBinding2DCameraNodeEvaluator *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->AxisValueBindings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d65a010

void * __thiscall
UE::Cameras::FPanningFramingCameraDebugBlock::_scalar_deleting_destructor_
          (FPanningFramingCameraDebugBlock *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FCameraDebugBlock_Cameras_UE__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d65a070

void * __thiscall
UE::Cameras::FPanningFramingCameraNodeEvaluator::_scalar_deleting_destructor_
          (FPanningFramingCameraNodeEvaluator *this,uint param_1)

{
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x6a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d65a0f0

void * __thiscall
UE::Cameras::FPerlinNoiseLocationShakeCameraNodeEvaluator::_scalar_deleting_destructor_
          (FPerlinNoiseLocationShakeCameraNodeEvaluator *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->NoiseValues).Entries.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x170);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d65a140

void * __thiscall
UE::Cameras::FPerlinNoiseLocationShakeDebugBlock::_scalar_deleting_destructor_
          (FPerlinNoiseLocationShakeDebugBlock *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->NoiseValues).Entries.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FCameraDebugBlock_Cameras_UE__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d65a1b0

void * __thiscall
UE::Cameras::FPerlinNoiseRotationShakeCameraNodeEvaluator::_scalar_deleting_destructor_
          (FPerlinNoiseRotationShakeCameraNodeEvaluator *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->NoiseValues).Entries.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x170);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d65a200

void * __thiscall
UE::Cameras::FPerlinNoiseRotationShakeDebugBlock::_scalar_deleting_destructor_
          (FPerlinNoiseRotationShakeDebugBlock *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->NoiseValues).Entries.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FCameraDebugBlock_Cameras_UE__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d65a270

void * __thiscall
UE::Cameras::FPlayerControlRotationDebugBlock::_scalar_deleting_destructor_
          (FPlayerControlRotationDebugBlock *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->AxisActionAngularSpeedGraph).Entries.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FreezeReason).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FCameraDebugBlock_Cameras_UE__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d65a2f0

void * __thiscall
UE::Cameras::FPlayerControlRotationEvaluationService::_scalar_deleting_destructor_
          (FPlayerControlRotationEvaluationService *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->AxisActionAngularSpeedGraph).Entries.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DebugFreezeReason).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AxisBindings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ServiceParams).AxisActions.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FCameraEvaluationService::~FCameraEvaluationService((FCameraEvaluationService *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x170);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d65a370

void * __thiscall
UE::Cameras::FRawInputAxisBinding2DCameraNodeEvaluator::_scalar_deleting_destructor_
          (FRawInputAxisBinding2DCameraNodeEvaluator *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->AxisValueBindings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d65a3c0

void * __thiscall
UE::Cameras::Test::FUpdateTrackerCameraNodeEvaluator::_scalar_deleting_destructor_
          (FUpdateTrackerCameraNodeEvaluator *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ReceivedUpdates).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d65a410

void * __thiscall
UE::Cameras::Test::IHasNamedObjectRegistry::_scalar_deleting_destructor_
          (IHasNamedObjectRegistry *this,uint param_1)

{
  *this = (IHasNamedObjectRegistry)&___7IHasNamedObjectRegistry_Test_Cameras_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d65a450

void * __thiscall
UAccelerationDecelerationValueInterpolator::_scalar_deleting_destructor_
          (UAccelerationDecelerationValueInterpolator *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UAccelerationDecelerationValueInterpolator__6B_;
  UCameraValueInterpolator::~UCameraValueInterpolator((UCameraValueInterpolator *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d65a4b0

void * __thiscall
UAutoRotateInput2DCameraNode::_scalar_deleting_destructor_
          (UAutoRotateInput2DCameraNode *this,uint param_1)

{
  this->_padding_ = (longlong)&UInput2DCameraNode::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UInput2DCameraNode::_vftable__for__IObjectTreeGraphObject__;
  UCameraNode::~UCameraNode((UCameraNode *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d65a520

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void * __thiscall
UBlueprintCameraNode::_scalar_deleting_destructor_(UBlueprintCameraNode *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  this->_padding_ = (longlong)&___7UBlueprintCameraNode__6B_;
  pFVar1 = (this->CameraNodeEvaluatorOverrides).DataParameters.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CameraNodeEvaluatorOverrides).BlendableParameters.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7ICustomCameraNodeParameterProvider__6B_;
  UCameraNode::~UCameraNode((UCameraNode *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d65a5c0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void * __thiscall
UBlueprintCameraNodeEvaluator::_scalar_deleting_destructor_
          (UBlueprintCameraNodeEvaluator *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UBlueprintCameraNodeEvaluator__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CurrentContext).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->VariableTable).SharedResult.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CameraData).SharedResult.SharedReferenceCount.ReferenceController);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d65a650

void * __thiscall
UCameraRigInput1DSlot::_scalar_deleting_destructor_(UCameraRigInput1DSlot *this,uint param_1)

{
  this->_padding_ = (longlong)&UInput1DCameraNode::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UInput1DCameraNode::_vftable__for__IObjectTreeGraphObject__;
  UCameraNode::~UCameraNode((UCameraNode *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d65a6c0

void * __thiscall
UCameraRigInput2DSlot::_scalar_deleting_destructor_(UCameraRigInput2DSlot *this,uint param_1)

{
  this->_padding_ = (longlong)&UInput2DCameraNode::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UInput2DCameraNode::_vftable__for__IObjectTreeGraphObject__;
  UCameraNode::~UCameraNode((UCameraNode *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d65a730

void * __thiscall
UCameraShakeCameraNode::_scalar_deleting_destructor_(UCameraShakeCameraNode *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  this->_padding_ = (longlong)&___7UCameraShakeCameraNode__6B_;
  (this->CameraShakeReference)._padding_ = (longlong)&___7FBaseCameraObjectReference__6B_;
  pvVar1 = (void *)(this->CameraShakeReference)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = (void *)(this->CameraShakeReference)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FInstancedStruct::Reset((FInstancedStruct *)&(this->CameraShakeReference)._padding_);
  this->_padding_ = (longlong)&___7ICustomCameraNodeParameterProvider__6B_;
  UCameraNode::~UCameraNode((UCameraNode *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d65a800

void * __thiscall
UCameraShakeServiceCameraNode::_scalar_deleting_destructor_
          (UCameraShakeServiceCameraNode *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IObjectTreeGraphObject__;
  UCameraNode::~UCameraNode((UCameraNode *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d65a870

void * __thiscall
UCompositeShakeCameraNode::_scalar_deleting_destructor_
          (UCompositeShakeCameraNode *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  pFVar1 = (this->Shakes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UShakeCameraNode::~UShakeCameraNode((UShakeCameraNode *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d65a8f0

void * __thiscall
UCriticalDamperValueInterpolator::_scalar_deleting_destructor_
          (UCriticalDamperValueInterpolator *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UCriticalDamperValueInterpolator__6B_;
  UCameraValueInterpolator::~UCameraValueInterpolator((UCameraValueInterpolator *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d65a950

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
UDollyFramingCameraNode::_scalar_deleting_destructor_(UDollyFramingCameraNode *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  this->_padding_ = (longlong)&___7UDollyFramingCameraNode__6B_;
  UBaseFramingCameraNode::~UBaseFramingCameraNode((UBaseFramingCameraNode *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,400);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d65a9d0

void * __thiscall
UDoubleIIRValueInterpolator::_scalar_deleting_destructor_
          (UDoubleIIRValueInterpolator *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UDoubleIIRValueInterpolator__6B_;
  UCameraValueInterpolator::~UCameraValueInterpolator((UCameraValueInterpolator *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d65aa30

void * __thiscall
UDrivenControlRotationCameraNode::_scalar_deleting_destructor_
          (UDrivenControlRotationCameraNode *this,uint param_1)

{
  *(undefined ***)this = &UInput2DCameraNode::_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &UInput2DCameraNode::_vftable__for__IObjectTreeGraphObject__;
  UCameraNode::~UCameraNode((UCameraNode *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d65aaa0

void * __thiscall
UEnvelopeShakeCameraNode::_scalar_deleting_destructor_(UEnvelopeShakeCameraNode *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  UShakeCameraNode::~UShakeCameraNode((UShakeCameraNode *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d65ab10

void * __thiscall
UFixedTestCameraDirector::_scalar_deleting_destructor_(UFixedTestCameraDirector *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UFixedTestCameraDirector__6B_;
  pFVar1 = (this->CameraRigNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CameraRigs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UCameraDirector::~UCameraDirector((UCameraDirector *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d65ab90

void * __thiscall
UGameplayTagTransitionCondition::_scalar_deleting_destructor_
          (UGameplayTagTransitionCondition *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  pFVar1 = (this->NextGameplayTagQuery).AutoDescription.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NextGameplayTagQuery).UserDescription.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NextGameplayTagQuery).QueryTokenStream.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NextGameplayTagQuery).TagDictionary.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PreviousGameplayTagQuery).AutoDescription.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PreviousGameplayTagQuery).UserDescription.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PreviousGameplayTagQuery).QueryTokenStream.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PreviousGameplayTagQuery).TagDictionary.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UCameraRigTransitionCondition::~UCameraRigTransitionCondition
            ((UCameraRigTransitionCondition *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d65ac80

void * __thiscall
UIIRValueInterpolator::_scalar_deleting_destructor_(UIIRValueInterpolator *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UIIRValueInterpolator__6B_;
  UCameraValueInterpolator::~UCameraValueInterpolator((UCameraValueInterpolator *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d65ace0

void * __thiscall
UInput1DCameraNode::_scalar_deleting_destructor_(UInput1DCameraNode *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IObjectTreeGraphObject__;
  UCameraNode::~UCameraNode((UCameraNode *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d65ad50

void * __thiscall
UInput2DCameraNode::_scalar_deleting_destructor_(UInput2DCameraNode *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IObjectTreeGraphObject__;
  UCameraNode::~UCameraNode((UCameraNode *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d65adc0

void * __thiscall
UInputAccumulator2DCameraNode::_scalar_deleting_destructor_
          (UInputAccumulator2DCameraNode *this,uint param_1)

{
  this->_padding_ = (longlong)&UInput2DCameraNode::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UInput2DCameraNode::_vftable__for__IObjectTreeGraphObject__;
  UCameraNode::~UCameraNode((UCameraNode *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xf8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d65ae30

void * __thiscall
UInputAxisBinding2DCameraNode::_scalar_deleting_destructor_
          (UInputAxisBinding2DCameraNode *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  pFVar1 = (this->AxisActions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&UInput2DCameraNode::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UInput2DCameraNode::_vftable__for__IObjectTreeGraphObject__;
  UCameraNode::~UCameraNode((UCameraNode *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x128);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d65aed0

void * __thiscall
UIsCameraRigTransitionCondition::_scalar_deleting_destructor_
          (UIsCameraRigTransitionCondition *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  UCameraRigTransitionCondition::~UCameraRigTransitionCondition
            ((UCameraRigTransitionCondition *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d65af40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
UPanningFramingCameraNode::_scalar_deleting_destructor_
          (UPanningFramingCameraNode *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  this->_padding_ = (longlong)&___7UPanningFramingCameraNode__6B_;
  UBaseFramingCameraNode::~UBaseFramingCameraNode((UBaseFramingCameraNode *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,400);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d65afc0

void * __thiscall
UPerlinNoiseLocationShakeCameraNode::_scalar_deleting_destructor_
          (UPerlinNoiseLocationShakeCameraNode *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  UShakeCameraNode::~UShakeCameraNode((UShakeCameraNode *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d65b030

void * __thiscall
UPerlinNoiseRotationShakeCameraNode::_scalar_deleting_destructor_
          (UPerlinNoiseRotationShakeCameraNode *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  UShakeCameraNode::~UShakeCameraNode((UShakeCameraNode *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d65b0a0

void * __thiscall
URawInputAxisBinding2DCameraNode::_scalar_deleting_destructor_
          (URawInputAxisBinding2DCameraNode *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  pFVar1 = (this->AxisActions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&UInput2DCameraNode::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UInput2DCameraNode::_vftable__for__IObjectTreeGraphObject__;
  UCameraNode::~UCameraNode((UCameraNode *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d65b130

void * __thiscall
UUpdateTrackerCameraNode::_scalar_deleting_destructor_(UUpdateTrackerCameraNode *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  UCameraNode::~UCameraNode((UCameraNode *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeAccelerationDecelerationValueInterpolator @ 14d65ed30

void __cdecl EmptyLinkFunctionForGeneratedCodeAccelerationDecelerationValueInterpolator(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAutoRotateInput2DCameraNode @ 14d65ed40

void __cdecl EmptyLinkFunctionForGeneratedCodeAutoRotateInput2DCameraNode(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeBlueprintCameraNode @ 14d65ed50

void __cdecl EmptyLinkFunctionForGeneratedCodeBlueprintCameraNode(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCameraActorTargetInfo @ 14d65ed60

void __cdecl EmptyLinkFunctionForGeneratedCodeCameraActorTargetInfo(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCameraFramingZone @ 14d65ed70

void __cdecl EmptyLinkFunctionForGeneratedCodeCameraFramingZone(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCameraRigInput1DSlot @ 14d65ed80

void __cdecl EmptyLinkFunctionForGeneratedCodeCameraRigInput1DSlot(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCameraRigInput2DSlot @ 14d65ed90

void __cdecl EmptyLinkFunctionForGeneratedCodeCameraRigInput2DSlot(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCameraRigInputSlotTypes @ 14d65eda0

void __cdecl EmptyLinkFunctionForGeneratedCodeCameraRigInputSlotTypes(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCameraShakeCameraNode @ 14d65edb0

void __cdecl EmptyLinkFunctionForGeneratedCodeCameraShakeCameraNode(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCameraShakeService @ 14d65edc0

void __cdecl EmptyLinkFunctionForGeneratedCodeCameraShakeService(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCompositeShakeCameraNode @ 14d65edd0

void __cdecl EmptyLinkFunctionForGeneratedCodeCompositeShakeCameraNode(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCriticalDamperValueInterpolator @ 14d65ede0

void __cdecl EmptyLinkFunctionForGeneratedCodeCriticalDamperValueInterpolator(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDefaultTransitionConditions @ 14d65edf0

void __cdecl EmptyLinkFunctionForGeneratedCodeDefaultTransitionConditions(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDollyFramingCameraNode @ 14d65ee00

void __cdecl EmptyLinkFunctionForGeneratedCodeDollyFramingCameraNode(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDoubleIIRValueInterpolator @ 14d65ee10

void __cdecl EmptyLinkFunctionForGeneratedCodeDoubleIIRValueInterpolator(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDrivenControlRotationCameraNode @ 14d65ee20

void __cdecl EmptyLinkFunctionForGeneratedCodeDrivenControlRotationCameraNode(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeEnvelopeShakeCameraNode @ 14d65ee30

void __cdecl EmptyLinkFunctionForGeneratedCodeEnvelopeShakeCameraNode(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGameplayCamerasTestObjects @ 14d65ee40

void __cdecl EmptyLinkFunctionForGeneratedCodeGameplayCamerasTestObjects(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGameplayTagTransitionConditions @ 14d65ee50

void __cdecl EmptyLinkFunctionForGeneratedCodeGameplayTagTransitionConditions(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeIIRValueInterpolator @ 14d65ee60

void __cdecl EmptyLinkFunctionForGeneratedCodeIIRValueInterpolator(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInput1DCameraNode @ 14d65ee70

void __cdecl EmptyLinkFunctionForGeneratedCodeInput1DCameraNode(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInput2DCameraNode @ 14d65ee80

void __cdecl EmptyLinkFunctionForGeneratedCodeInput2DCameraNode(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInputAccumulator2DCameraNode @ 14d65ee90

void __cdecl EmptyLinkFunctionForGeneratedCodeInputAccumulator2DCameraNode(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInputAxisBinding2DCameraNode @ 14d65eea0

void __cdecl EmptyLinkFunctionForGeneratedCodeInputAxisBinding2DCameraNode(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeOverridablePropertyBag @ 14d65eeb0

void __cdecl EmptyLinkFunctionForGeneratedCodeOverridablePropertyBag(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePanningFramingCameraNode @ 14d65eec0

void __cdecl EmptyLinkFunctionForGeneratedCodePanningFramingCameraNode(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePerlinNoiseLocationShakeCameraNode @ 14d65eed0

void __cdecl EmptyLinkFunctionForGeneratedCodePerlinNoiseLocationShakeCameraNode(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePerlinNoiseRotationShakeCameraNode @ 14d65eee0

void __cdecl EmptyLinkFunctionForGeneratedCodePerlinNoiseRotationShakeCameraNode(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRawInputAxisBinding2DCameraNode @ 14d65eef0

void __cdecl EmptyLinkFunctionForGeneratedCodeRawInputAxisBinding2DCameraNode(void)

{
  return;
}

// Z_Construct_UClass_UAccelerationDecelerationValueInterpolator_NoRegister @ 14d675020

UClass * __cdecl Z_Construct_UClass_UAccelerationDecelerationValueInterpolator_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAccelerationDecelerationValueInterpolator.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"AccelerationDecelerationValueInterpolator",
               &Z_Registration_Info_UClass_UAccelerationDecelerationValueInterpolator.InnerSingleton
               ,UAccelerationDecelerationValueInterpolator::
                StaticRegisterNativesUAccelerationDecelerationValueInterpolator,0x38,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAccelerationDecelerationValueInterpolator>,
               InternalVTableHelperCtorCaller<UAccelerationDecelerationValueInterpolator>,local_res8
               ,UCameraValueInterpolator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAccelerationDecelerationValueInterpolator.InnerSingleton;
}

// Z_Construct_UClass_UAutoRotateInput2DCameraNode_NoRegister @ 14d6750e0

UClass * __cdecl Z_Construct_UClass_UAutoRotateInput2DCameraNode_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAutoRotateInput2DCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"AutoRotateInput2DCameraNode",
               &Z_Registration_Info_UClass_UAutoRotateInput2DCameraNode.InnerSingleton,
               UAutoRotateInput2DCameraNode::StaticRegisterNativesUAutoRotateInput2DCameraNode,0xc0,
               8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAutoRotateInput2DCameraNode>,
               InternalVTableHelperCtorCaller<UAutoRotateInput2DCameraNode>,local_res8,
               UInput2DCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAutoRotateInput2DCameraNode.InnerSingleton;
}

// Z_Construct_UClass_UBlueprintCameraNode_NoRegister @ 14d6751a0

UClass * __cdecl Z_Construct_UClass_UBlueprintCameraNode_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlueprintCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"BlueprintCameraNode",
               &Z_Registration_Info_UClass_UBlueprintCameraNode.InnerSingleton,
               UBlueprintCameraNode::StaticRegisterNativesUBlueprintCameraNode,0x70,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UBlueprintCameraNode>,
               InternalVTableHelperCtorCaller<UBlueprintCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlueprintCameraNode.InnerSingleton;
}

// Z_Construct_UClass_UCameraRigInput1DSlot_NoRegister @ 14d675260

UClass * __cdecl Z_Construct_UClass_UCameraRigInput1DSlot_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraRigInput1DSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CameraRigInput1DSlot",
               &Z_Registration_Info_UClass_UCameraRigInput1DSlot.InnerSingleton,
               UCameraRigInput1DSlot::StaticRegisterNativesUCameraRigInput1DSlot,0xb0,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UCameraRigInput1DSlot>,
               InternalVTableHelperCtorCaller<UCameraRigInput1DSlot>,local_res8,
               UInput1DCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraRigInput1DSlot.InnerSingleton;
}

// Z_Construct_UClass_UCameraRigInput2DSlot_NoRegister @ 14d675320

UClass * __cdecl Z_Construct_UClass_UCameraRigInput2DSlot_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraRigInput2DSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CameraRigInput2DSlot",
               &Z_Registration_Info_UClass_UCameraRigInput2DSlot.InnerSingleton,
               UCameraRigInput2DSlot::StaticRegisterNativesUCameraRigInput2DSlot,0xf0,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UCameraRigInput2DSlot>,
               InternalVTableHelperCtorCaller<UCameraRigInput2DSlot>,local_res8,
               UInput2DCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraRigInput2DSlot.InnerSingleton;
}

// Z_Construct_UClass_UCameraShakeCameraNode_NoRegister @ 14d6753e0

UClass * __cdecl Z_Construct_UClass_UCameraShakeCameraNode_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraShakeCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CameraShakeCameraNode",
               &Z_Registration_Info_UClass_UCameraShakeCameraNode.InnerSingleton,
               UCameraShakeCameraNode::StaticRegisterNativesUCameraShakeCameraNode,0x88,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UCameraShakeCameraNode>,
               InternalVTableHelperCtorCaller<UCameraShakeCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraShakeCameraNode.InnerSingleton;
}

// Z_Construct_UClass_UCameraShakeServiceCameraNode_NoRegister @ 14d6754a0

UClass * __cdecl Z_Construct_UClass_UCameraShakeServiceCameraNode_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraShakeServiceCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CameraShakeServiceCameraNode",
               &Z_Registration_Info_UClass_UCameraShakeServiceCameraNode.InnerSingleton,
               UCameraShakeServiceCameraNode::StaticRegisterNativesUCameraShakeServiceCameraNode,
               0x38,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UCameraShakeServiceCameraNode>,
               InternalVTableHelperCtorCaller<UCameraShakeServiceCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraShakeServiceCameraNode.InnerSingleton;
}

// Z_Construct_UClass_UCompositeShakeCameraNode_NoRegister @ 14d675560

UClass * __cdecl Z_Construct_UClass_UCompositeShakeCameraNode_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCompositeShakeCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CompositeShakeCameraNode",
               &Z_Registration_Info_UClass_UCompositeShakeCameraNode.InnerSingleton,
               UCompositeShakeCameraNode::StaticRegisterNativesUCompositeShakeCameraNode,0x48,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UCompositeShakeCameraNode>,
               InternalVTableHelperCtorCaller<UCompositeShakeCameraNode>,local_res8,
               UShakeCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCompositeShakeCameraNode.InnerSingleton;
}

// Z_Construct_UClass_UCriticalDamperValueInterpolator_NoRegister @ 14d675620

UClass * __cdecl Z_Construct_UClass_UCriticalDamperValueInterpolator_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCriticalDamperValueInterpolator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CriticalDamperValueInterpolator",
               &Z_Registration_Info_UClass_UCriticalDamperValueInterpolator.InnerSingleton,
               UCriticalDamperValueInterpolator::
               StaticRegisterNativesUCriticalDamperValueInterpolator,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCriticalDamperValueInterpolator>,
               InternalVTableHelperCtorCaller<UCriticalDamperValueInterpolator>,local_res8,
               UCameraValueInterpolator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCriticalDamperValueInterpolator.InnerSingleton;
}

// Z_Construct_UClass_UDollyFramingCameraNode_NoRegister @ 14d6756e0

UClass * __cdecl Z_Construct_UClass_UDollyFramingCameraNode_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDollyFramingCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"DollyFramingCameraNode",
               &Z_Registration_Info_UClass_UDollyFramingCameraNode.InnerSingleton,
               UDollyFramingCameraNode::StaticRegisterNativesUDollyFramingCameraNode,400,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UDollyFramingCameraNode>
               ,InternalVTableHelperCtorCaller<UDollyFramingCameraNode>,local_res8,
               UBaseFramingCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDollyFramingCameraNode.InnerSingleton;
}

// Z_Construct_UClass_UDoubleIIRValueInterpolator_NoRegister @ 14d6757a0

UClass * __cdecl Z_Construct_UClass_UDoubleIIRValueInterpolator_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDoubleIIRValueInterpolator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"DoubleIIRValueInterpolator",
               &Z_Registration_Info_UClass_UDoubleIIRValueInterpolator.InnerSingleton,
               UDoubleIIRValueInterpolator::StaticRegisterNativesUDoubleIIRValueInterpolator,0x38,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDoubleIIRValueInterpolator>,
               InternalVTableHelperCtorCaller<UDoubleIIRValueInterpolator>,local_res8,
               UCameraValueInterpolator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDoubleIIRValueInterpolator.InnerSingleton;
}

// Z_Construct_UClass_UDrivenControlRotationCameraNode_NoRegister @ 14d675860

UClass * __cdecl Z_Construct_UClass_UDrivenControlRotationCameraNode_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDrivenControlRotationCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"DrivenControlRotationCameraNode",
               &Z_Registration_Info_UClass_UDrivenControlRotationCameraNode.InnerSingleton,
               UDrivenControlRotationCameraNode::
               StaticRegisterNativesUDrivenControlRotationCameraNode,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDrivenControlRotationCameraNode>,
               InternalVTableHelperCtorCaller<UDrivenControlRotationCameraNode>,local_res8,
               UInput2DCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDrivenControlRotationCameraNode.InnerSingleton;
}

// Z_Construct_UClass_UEnvelopeShakeCameraNode_NoRegister @ 14d675920

UClass * __cdecl Z_Construct_UClass_UEnvelopeShakeCameraNode_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvelopeShakeCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"EnvelopeShakeCameraNode",
               &Z_Registration_Info_UClass_UEnvelopeShakeCameraNode.InnerSingleton,
               UEnvelopeShakeCameraNode::StaticRegisterNativesUEnvelopeShakeCameraNode,0x70,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEnvelopeShakeCameraNode>,
               InternalVTableHelperCtorCaller<UEnvelopeShakeCameraNode>,local_res8,
               UShakeCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvelopeShakeCameraNode.InnerSingleton;
}

// Z_Construct_UClass_UFixedTestCameraDirector_NoRegister @ 14d6759e0

UClass * __cdecl Z_Construct_UClass_UFixedTestCameraDirector_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFixedTestCameraDirector.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"FixedTestCameraDirector",
               &Z_Registration_Info_UClass_UFixedTestCameraDirector.InnerSingleton,
               UFixedTestCameraDirector::StaticRegisterNativesUFixedTestCameraDirector,0x60,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UFixedTestCameraDirector>,
               InternalVTableHelperCtorCaller<UFixedTestCameraDirector>,local_res8,
               UCameraDirector::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFixedTestCameraDirector.InnerSingleton;
}

// Z_Construct_UClass_UGameplayTagTransitionCondition_NoRegister @ 14d675aa0

UClass * __cdecl Z_Construct_UClass_UGameplayTagTransitionCondition_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayTagTransitionCondition.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"GameplayTagTransitionCondition",
               &Z_Registration_Info_UClass_UGameplayTagTransitionCondition.InnerSingleton,
               UGameplayTagTransitionCondition::StaticRegisterNativesUGameplayTagTransitionCondition
               ,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGameplayTagTransitionCondition>,
               InternalVTableHelperCtorCaller<UGameplayTagTransitionCondition>,local_res8,
               UCameraRigTransitionCondition::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayTagTransitionCondition.InnerSingleton;
}

// Z_Construct_UClass_UIIRValueInterpolator_NoRegister @ 14d675b60

UClass * __cdecl Z_Construct_UClass_UIIRValueInterpolator_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIIRValueInterpolator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"IIRValueInterpolator",
               &Z_Registration_Info_UClass_UIIRValueInterpolator.InnerSingleton,
               UIIRValueInterpolator::StaticRegisterNativesUIIRValueInterpolator,0x30,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UIIRValueInterpolator>,
               InternalVTableHelperCtorCaller<UIIRValueInterpolator>,local_res8,
               UCameraValueInterpolator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIIRValueInterpolator.InnerSingleton;
}

// Z_Construct_UClass_UInput1DCameraNode_NoRegister @ 14d675c20

UClass * __cdecl Z_Construct_UClass_UInput1DCameraNode_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInput1DCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"Input1DCameraNode",
               &Z_Registration_Info_UClass_UInput1DCameraNode.InnerSingleton,
               UInput1DCameraNode::StaticRegisterNativesUInput1DCameraNode,0x38,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInput1DCameraNode>,
               InternalVTableHelperCtorCaller<UInput1DCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInput1DCameraNode.InnerSingleton;
}

// Z_Construct_UClass_UInputAccumulator2DCameraNode_NoRegister @ 14d675ce0

UClass * __cdecl Z_Construct_UClass_UInputAccumulator2DCameraNode_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputAccumulator2DCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"InputAccumulator2DCameraNode",
               &Z_Registration_Info_UClass_UInputAccumulator2DCameraNode.InnerSingleton,
               UInputAccumulator2DCameraNode::StaticRegisterNativesUInputAccumulator2DCameraNode,
               0xf8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UInputAccumulator2DCameraNode>,
               InternalVTableHelperCtorCaller<UInputAccumulator2DCameraNode>,local_res8,
               UCameraRigInput2DSlot::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputAccumulator2DCameraNode.InnerSingleton;
}

// Z_Construct_UClass_UInputAxisBinding2DCameraNode_NoRegister @ 14d675da0

UClass * __cdecl Z_Construct_UClass_UInputAxisBinding2DCameraNode_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputAxisBinding2DCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"InputAxisBinding2DCameraNode",
               &Z_Registration_Info_UClass_UInputAxisBinding2DCameraNode.InnerSingleton,
               UInputAxisBinding2DCameraNode::StaticRegisterNativesUInputAxisBinding2DCameraNode,
               0x128,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UInputAxisBinding2DCameraNode>,
               InternalVTableHelperCtorCaller<UInputAxisBinding2DCameraNode>,local_res8,
               UCameraRigInput2DSlot::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputAxisBinding2DCameraNode.InnerSingleton;
}

// Z_Construct_UClass_UIsCameraRigTransitionCondition_NoRegister @ 14d675e60

UClass * __cdecl Z_Construct_UClass_UIsCameraRigTransitionCondition_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIsCameraRigTransitionCondition.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"IsCameraRigTransitionCondition",
               &Z_Registration_Info_UClass_UIsCameraRigTransitionCondition.InnerSingleton,
               UIsCameraRigTransitionCondition::StaticRegisterNativesUIsCameraRigTransitionCondition
               ,0x40,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UIsCameraRigTransitionCondition>,
               InternalVTableHelperCtorCaller<UIsCameraRigTransitionCondition>,local_res8,
               UCameraRigTransitionCondition::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIsCameraRigTransitionCondition.InnerSingleton;
}

// Z_Construct_UClass_UPanningFramingCameraNode_NoRegister @ 14d675f20

UClass * __cdecl Z_Construct_UClass_UPanningFramingCameraNode_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPanningFramingCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"PanningFramingCameraNode",
               &Z_Registration_Info_UClass_UPanningFramingCameraNode.InnerSingleton,
               UPanningFramingCameraNode::StaticRegisterNativesUPanningFramingCameraNode,400,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPanningFramingCameraNode>,
               InternalVTableHelperCtorCaller<UPanningFramingCameraNode>,local_res8,
               UBaseFramingCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPanningFramingCameraNode.InnerSingleton;
}

// Z_Construct_UClass_UPerlinNoiseLocationShakeCameraNode_NoRegister @ 14d675fe0

UClass * __cdecl Z_Construct_UClass_UPerlinNoiseLocationShakeCameraNode_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPerlinNoiseLocationShakeCameraNode.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"PerlinNoiseLocationShakeCameraNode",
               &Z_Registration_Info_UClass_UPerlinNoiseLocationShakeCameraNode.InnerSingleton,
               UPerlinNoiseLocationShakeCameraNode::
               StaticRegisterNativesUPerlinNoiseLocationShakeCameraNode,0x80,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPerlinNoiseLocationShakeCameraNode>,
               InternalVTableHelperCtorCaller<UPerlinNoiseLocationShakeCameraNode>,local_res8,
               UShakeCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPerlinNoiseLocationShakeCameraNode.InnerSingleton;
}

// Z_Construct_UClass_UPerlinNoiseRotationShakeCameraNode_NoRegister @ 14d6760a0

UClass * __cdecl Z_Construct_UClass_UPerlinNoiseRotationShakeCameraNode_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPerlinNoiseRotationShakeCameraNode.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"PerlinNoiseRotationShakeCameraNode",
               &Z_Registration_Info_UClass_UPerlinNoiseRotationShakeCameraNode.InnerSingleton,
               UPerlinNoiseRotationShakeCameraNode::
               StaticRegisterNativesUPerlinNoiseRotationShakeCameraNode,0x80,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPerlinNoiseRotationShakeCameraNode>,
               InternalVTableHelperCtorCaller<UPerlinNoiseRotationShakeCameraNode>,local_res8,
               UShakeCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPerlinNoiseRotationShakeCameraNode.InnerSingleton;
}

// Z_Construct_UClass_URawInputAxisBinding2DCameraNode_NoRegister @ 14d676160

UClass * __cdecl Z_Construct_UClass_URawInputAxisBinding2DCameraNode_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URawInputAxisBinding2DCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"RawInputAxisBinding2DCameraNode",
               &Z_Registration_Info_UClass_URawInputAxisBinding2DCameraNode.InnerSingleton,
               URawInputAxisBinding2DCameraNode::
               StaticRegisterNativesURawInputAxisBinding2DCameraNode,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<URawInputAxisBinding2DCameraNode>,
               InternalVTableHelperCtorCaller<URawInputAxisBinding2DCameraNode>,local_res8,
               UInput2DCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URawInputAxisBinding2DCameraNode.InnerSingleton;
}

// Z_Construct_UClass_UUpdateTrackerCameraNode_NoRegister @ 14d676220

UClass * __cdecl Z_Construct_UClass_UUpdateTrackerCameraNode_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUpdateTrackerCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"UpdateTrackerCameraNode",
               &Z_Registration_Info_UClass_UUpdateTrackerCameraNode.InnerSingleton,
               UUpdateTrackerCameraNode::StaticRegisterNativesUUpdateTrackerCameraNode,0x78,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UUpdateTrackerCameraNode>,
               InternalVTableHelperCtorCaller<UUpdateTrackerCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUpdateTrackerCameraNode.InnerSingleton;
}

// Z_Construct_UScriptStruct_FCameraActorTargetInfo @ 14d6762e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCameraActorTargetInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCameraActorTargetInfo.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCameraActorTargetInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FCameraActorTargetInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCameraActorTargetInfo.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCameraActorTargetInfo.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FCameraFramingZoneParameter @ 14d676360

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCameraFramingZoneParameter(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCameraFramingZoneParameter.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCameraFramingZoneParameter.InnerSingleton,
               &Z_Construct_UScriptStruct_FCameraFramingZoneParameter_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCameraFramingZoneParameter.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCameraFramingZoneParameter.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FInstancedOverridablePropertyBag @ 14d6763e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInstancedOverridablePropertyBag(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FInstancedOverridablePropertyBag.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FInstancedOverridablePropertyBag.InnerSingleton,
               &Z_Construct_UScriptStruct_FInstancedOverridablePropertyBag_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FInstancedOverridablePropertyBag.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FInstancedOverridablePropertyBag.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// `dynamic_atexit_destructor_for_'CVarGameplayCamerasAutoRotateSnapThreshold'' @ 150458190

void __cdecl
UE::Cameras::_dynamic_atexit_destructor_for__CVarGameplayCamerasAutoRotateSnapThreshold__(void)

{
  CVarGameplayCamerasAutoRotateSnapThreshold._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarGameplayCamerasAutoRotateSnapThreshold);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGameplayCamerasControlRotationDebugArrowLength'' @ 1504581b0

void __cdecl
UE::Cameras::_dynamic_atexit_destructor_for__CVarGameplayCamerasControlRotationDebugArrowLength__
          (void)

{
  CVarGameplayCamerasControlRotationDebugArrowLength._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarGameplayCamerasControlRotationDebugArrowLength);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGameplayCamerasDebugOrientationInitializationShowLastTargetPreservation'' @ 1504581d0

void __cdecl
UE::Cameras::
_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugOrientationInitializationShowLastTargetPreservation__
          (void)

{
  CVarGameplayCamerasDebugOrientationInitializationShowLastTargetPreservation._0_8_ =
       &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)
             &CVarGameplayCamerasDebugOrientationInitializationShowLastTargetPreservation);
  return;
}

// `dynamic_atexit_destructor_for_'FCameraAssetBuilderDefaultParametersCollisionTestAutomationTestInstance'' @ 1504581f0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FCameraAssetBuilderDefaultParametersCollisionTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FCameraAssetBuilderDefaultParametersCollisionTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FCameraAssetBuilderDefaultParametersTestAutomationTestInstance'' @ 150458210

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FCameraAssetBuilderDefaultParametersTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FCameraAssetBuilderDefaultParametersTestAutomationTestInstance)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'FCameraRigAssetBuilderDrivenOverridesTestAutomationTestInstance'' @ 150458230

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FCameraRigAssetBuilderDrivenOverridesTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FCameraRigAssetBuilderDrivenOverridesTestAutomationTestInstance
            );
  return;
}

// `dynamic_atexit_destructor_for_'FCameraRigAssetBuilderNullTestAutomationTestInstance'' @ 150458250

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FCameraRigAssetBuilderNullTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FCameraRigAssetBuilderNullTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FCameraRigAssetBuilderSimpleAllocationTestAutomationTestInstance'' @ 150458270

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FCameraRigAssetBuilderSimpleAllocationTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)
             &FCameraRigAssetBuilderSimpleAllocationTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FCameraRigAssetBuilderSimpleParameterTestAutomationTestInstance'' @ 150458290

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FCameraRigAssetBuilderSimpleParameterTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FCameraRigAssetBuilderSimpleParameterTestAutomationTestInstance
            );
  return;
}

// `dynamic_atexit_destructor_for_'FCameraSystemFrameFlagsTestAutomationTestInstance'' @ 1504582b0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FCameraSystemFrameFlagsTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FCameraSystemFrameFlagsTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FGameplayCamerasCriticalDamperTestAutomationTestInstance'' @ 1504582d0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FGameplayCamerasCriticalDamperTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FGameplayCamerasCriticalDamperTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'GOverridablePropertyBagCustomVersion'' @ 1504582f0

void __cdecl _dynamic_atexit_destructor_for__GOverridablePropertyBagCustomVersion__(void)

{
  FCurrentCustomVersions::Unregister(&GOverridablePropertyBagCustomVersion.Key);
  return;
}

// `dynamic_atexit_destructor_for_'StaticField'' @ 150458310

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`UE::Cameras::FPlayerControlRotationDebugBlock::GetAxisActionAngularSpeedGraphField'::__l2::
_dynamic_atexit_destructor_for__StaticField__(void)

{
  _StaticField = &___7FCameraDebugBlockField_Cameras_UE__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'StaticField'' @ 150458330

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`UE::Cameras::FPlayerControlRotationDebugBlock::GetAxisActionValueClockField'::__l2::
_dynamic_atexit_destructor_for__StaticField__(void)

{
  _StaticField = &___7FCameraDebugBlockField_Cameras_UE__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'StaticField'' @ 150458350

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`UE::Cameras::FBlueprintCameraDebugBlock::GetBlueprintEvaluatorNameField'::__l2::
_dynamic_atexit_destructor_for__StaticField__(void)

{
  _StaticField = &___7FCameraDebugBlockField_Cameras_UE__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'StaticField'' @ 150458370

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`UE::Cameras::FDrivenControlRotationHelperDebugBlock::GetCachedControlRotationsField'::__l2::
_dynamic_atexit_destructor_for__StaticField__(void)

{
  _StaticField = &___7FCameraDebugBlockField_Cameras_UE__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'StaticField'' @ 150458390

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`UE::Cameras::FPlayerControlRotationDebugBlock::GetCameraRotationField'::__l2::
_dynamic_atexit_destructor_for__StaticField__(void)

{
  _StaticField = &___7FCameraDebugBlockField_Cameras_UE__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'StaticField'' @ 1504583b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`UE::Cameras::FDrivenControlRotationHelperDebugBlock::GetContextNamesField'::__l2::
_dynamic_atexit_destructor_for__StaticField__(void)

{
  _StaticField = &___7FCameraDebugBlockField_Cameras_UE__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'StaticField'' @ 1504583d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`UE::Cameras::FPlayerControlRotationDebugBlock::GetControlRotationField'::__l2::
_dynamic_atexit_destructor_for__StaticField__(void)

{
  _StaticField = &___7FCameraDebugBlockField_Cameras_UE__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'StaticField'' @ 1504583f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`UE::Cameras::FDollyFramingCameraDebugBlock::GetDollyCorrectionField'::__l2::
_dynamic_atexit_destructor_for__StaticField__(void)

{
  _StaticField = &___7FCameraDebugBlockField_Cameras_UE__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'StaticField'' @ 150458410

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`UE::Cameras::FDollyFramingCameraDebugBlock::GetDollyPositionField'::__l2::
_dynamic_atexit_destructor_for__StaticField__(void)

{
  _StaticField = &___7FCameraDebugBlockField_Cameras_UE__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'StaticField'' @ 150458430

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`UE::Cameras::FPlayerControlRotationDebugBlock::GetFreezeReasonField'::__l2::
_dynamic_atexit_destructor_for__StaticField__(void)

{
  _StaticField = &___7FCameraDebugBlockField_Cameras_UE__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'StaticField'' @ 150458450

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`UE::Cameras::FDrivenControlRotationDebugBlock::GetInputValueField'::__l2::
_dynamic_atexit_destructor_for__StaticField__(void)

{
  _StaticField = &___7FCameraDebugBlockField_Cameras_UE__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'StaticField'' @ 150458470

void __cdecl
`UE::Cameras::FAutoRotateInput2DCameraDebugBlock::GetInterpolationFactorField'::__l2::
_dynamic_atexit_destructor_for__StaticField__(void)

{
  `private:_static_struct_UE::Cameras::TCameraDebugBlockField<double>*___ptr64___cdecl_UE::Cameras::FAutoRotateInput2DCameraDebugBlock::GetInterpolationFactorField(void)'
  ::__l2::StaticField._0_8_ = &___7FCameraDebugBlockField_Cameras_UE__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'StaticField'' @ 150458490

void __cdecl
`UE::Cameras::FAutoRotateInput2DCameraDebugBlock::GetInterpolationTargetField'::__l2::
_dynamic_atexit_destructor_for__StaticField__(void)

{
  `private:_static_struct_UE::Cameras::TCameraDebugBlockField<double>*___ptr64___cdecl_UE::Cameras::FAutoRotateInput2DCameraDebugBlock::GetInterpolationTargetField(void)'
  ::__l2::StaticField._0_8_ = &___7FCameraDebugBlockField_Cameras_UE__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'StaticField'' @ 1504584b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`UE::Cameras::FDrivenControlRotationDebugBlock::GetLastDeltaControlRotationField'::__l2::
_dynamic_atexit_destructor_for__StaticField__(void)

{
  _StaticField = &___7FCameraDebugBlockField_Cameras_UE__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'StaticField'' @ 1504584d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`UE::Cameras::FDrivenControlRotationHelperDebugBlock::GetMonitoringRequestsField'::__l2::
_dynamic_atexit_destructor_for__StaticField__(void)

{
  _StaticField = &___7FCameraDebugBlockField_Cameras_UE__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'StaticField'' @ 1504584f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`UE::Cameras::FDollyFramingCameraDebugBlock::GetNextWorldTargetField'::__l2::
_dynamic_atexit_destructor_for__StaticField__(void)

{
  _StaticField = &___7FCameraDebugBlockField_Cameras_UE__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'StaticField'' @ 150458510

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`UE::Cameras::FPerlinNoiseLocationShakeDebugBlock::GetNoiseValuesField'::__l2::
_dynamic_atexit_destructor_for__StaticField__(void)

{
  _StaticField = &___7FCameraDebugBlockField_Cameras_UE__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'StaticField'' @ 150458530

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`UE::Cameras::FPerlinNoiseRotationShakeDebugBlock::GetNoiseValuesField'::__l2::
_dynamic_atexit_destructor_for__StaticField__(void)

{
  _StaticField = &___7FCameraDebugBlockField_Cameras_UE__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'StaticField'' @ 150458550

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`UE::Cameras::FPanningFramingCameraDebugBlock::GetPanningCorrectionField'::__l2::
_dynamic_atexit_destructor_for__StaticField__(void)

{
  _StaticField = &___7FCameraDebugBlockField_Cameras_UE__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'StaticField'' @ 150458570

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`UE::Cameras::FPanningFramingCameraDebugBlock::GetPanningRotationField'::__l2::
_dynamic_atexit_destructor_for__StaticField__(void)

{
  _StaticField = &___7FCameraDebugBlockField_Cameras_UE__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'StaticField'' @ 150458590

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`UE::Cameras::FPlayerControlRotationDebugBlock::GetPawnTransformField'::__l2::
_dynamic_atexit_destructor_for__StaticField__(void)

{
  _StaticField = &___7FCameraDebugBlockField_Cameras_UE__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'StaticField'' @ 1504585b0

void __cdecl
`UE::Cameras::FAutoRotateInput2DCameraDebugBlock::GetRemainingWaitTimeField'::__l2::
_dynamic_atexit_destructor_for__StaticField__(void)

{
  `private:_static_struct_UE::Cameras::TCameraDebugBlockField<double>*___ptr64___cdecl_UE::Cameras::FAutoRotateInput2DCameraDebugBlock::GetRemainingWaitTimeField(void)'
  ::__l2::StaticField._0_8_ = &___7FCameraDebugBlockField_Cameras_UE__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'StaticField'' @ 1504585d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`UE::Cameras::FDollyFramingCameraDebugBlock::GetWorldTargetField'::__l2::
_dynamic_atexit_destructor_for__StaticField__(void)

{
  _StaticField = &___7FCameraDebugBlockField_Cameras_UE__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'StaticField'' @ 1504585f0

void __cdecl
`UE::Cameras::FAutoRotateInput2DCameraDebugBlock::GetbIsAutoRotatingField'::__l2::
_dynamic_atexit_destructor_for__StaticField__(void)

{
  `private:_static_struct_UE::Cameras::TCameraDebugBlockField<bool>*___ptr64___cdecl_UE::Cameras::FAutoRotateInput2DCameraDebugBlock::GetbIsAutoRotatingField(void)'
  ::__l2::StaticField._0_8_ = &___7FCameraDebugBlockField_Cameras_UE__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'StaticField'' @ 150458610

void __cdecl
`UE::Cameras::FPlayerControlRotationDebugBlock::GetbIsFrozenField'::__l2::
_dynamic_atexit_destructor_for__StaticField__(void)

{
  `private:_static_struct_UE::Cameras::TCameraDebugBlockField<bool>*___ptr64___cdecl_UE::Cameras::FPlayerControlRotationDebugBlock::GetbIsFrozenField(void)'
  ::__l2::StaticField._0_8_ = &___7FCameraDebugBlockField_Cameras_UE__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'StaticField'' @ 150458630

void __cdecl
`UE::Cameras::FDrivenControlRotationDebugBlock::GetbLastWasActiveCameraRigField'::__l2::
_dynamic_atexit_destructor_for__StaticField__(void)

{
  `private:_static_struct_UE::Cameras::TCameraDebugBlockField<bool>*___ptr64___cdecl_UE::Cameras::FDrivenControlRotationDebugBlock::GetbLastWasActiveCameraRigField(void)'
  ::__l2::StaticField._0_8_ = &___7FCameraDebugBlockField_Cameras_UE__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'StaticFields'' @ 150458650

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`UE::Cameras::FAutoRotateInput2DCameraDebugBlock::GetStaticFields'::__l2::
_dynamic_atexit_destructor_for__StaticFields__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = _StaticFields;
  if (_StaticFields == (void *)0x0) {
    return;
  }
  if (_StaticFields != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// `dynamic_atexit_destructor_for_'StaticFields'' @ 150458670

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`UE::Cameras::FBlueprintCameraDebugBlock::GetStaticFields'::__l2::
_dynamic_atexit_destructor_for__StaticFields__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = _StaticFields;
  if (_StaticFields == (void *)0x0) {
    return;
  }
  if (_StaticFields != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// `dynamic_atexit_destructor_for_'StaticFields'' @ 150458690

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`UE::Cameras::FDollyFramingCameraDebugBlock::GetStaticFields'::__l2::
_dynamic_atexit_destructor_for__StaticFields__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = _StaticFields;
  if (_StaticFields == (void *)0x0) {
    return;
  }
  if (_StaticFields != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// `dynamic_atexit_destructor_for_'StaticFields'' @ 1504586b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`UE::Cameras::FDrivenControlRotationDebugBlock::GetStaticFields'::__l2::
_dynamic_atexit_destructor_for__StaticFields__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = _StaticFields;
  if (_StaticFields == (void *)0x0) {
    return;
  }
  if (_StaticFields != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// `dynamic_atexit_destructor_for_'StaticFields'' @ 1504586d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`UE::Cameras::FDrivenControlRotationHelperDebugBlock::GetStaticFields'::__l2::
_dynamic_atexit_destructor_for__StaticFields__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = _StaticFields;
  if (_StaticFields == (void *)0x0) {
    return;
  }
  if (_StaticFields != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// `dynamic_atexit_destructor_for_'StaticFields'' @ 1504586f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`UE::Cameras::FPanningFramingCameraDebugBlock::GetStaticFields'::__l2::
_dynamic_atexit_destructor_for__StaticFields__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = _StaticFields;
  if (_StaticFields == (void *)0x0) {
    return;
  }
  if (_StaticFields != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// `dynamic_atexit_destructor_for_'StaticFields'' @ 150458710

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`UE::Cameras::FPerlinNoiseLocationShakeDebugBlock::GetStaticFields'::__l2::
_dynamic_atexit_destructor_for__StaticFields__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = _StaticFields;
  if (_StaticFields == (void *)0x0) {
    return;
  }
  if (_StaticFields != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// `dynamic_atexit_destructor_for_'StaticFields'' @ 150458730

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`UE::Cameras::FPerlinNoiseRotationShakeDebugBlock::GetStaticFields'::__l2::
_dynamic_atexit_destructor_for__StaticFields__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = _StaticFields;
  if (_StaticFields == (void *)0x0) {
    return;
  }
  if (_StaticFields != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// `dynamic_atexit_destructor_for_'StaticFields'' @ 150458750

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`UE::Cameras::FPlayerControlRotationDebugBlock::GetStaticFields'::__l2::
_dynamic_atexit_destructor_for__StaticFields__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = _StaticFields;
  if (_StaticFields == (void *)0x0) {
    return;
  }
  if (_StaticFields != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// `dynamic_atexit_destructor_for_'ThisDefaults'' @ 150458770

void __cdecl
`FInstancedOverridablePropertyBag::Serialize'::__l5::_dynamic_atexit_destructor_for__ThisDefaults__
          (void)

{
  if (ThisDefaults.OverridenPropertyIDs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(ThisDefaults.OverridenPropertyIDs.AllocatorInstance.Data);
  }
  FInstancedStruct::Reset((FInstancedStruct *)&ThisDefaults);
  return;
}

