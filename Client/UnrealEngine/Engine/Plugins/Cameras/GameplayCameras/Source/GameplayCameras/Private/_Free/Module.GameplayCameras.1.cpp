// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 279

// BlendedParameterOverridesEntriesFieldIndex'' @ 1413ce390

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FBlendStackRootCameraDebugBlock::
BlendedParameterOverridesEntriesFieldIndex__(void)

{
  TArray<UE::Cameras::FCameraDebugBlockField_*,TSizedDefaultAllocator<32>_> *pTVar1;
  FName local_res8 [4];
  
  pTVar1 = UE::Cameras::FBlendStackRootCameraDebugBlock::GetStaticFields();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<TArray<FString,TSizedDefaultAllocator<32>_>_>*___ptr64___cdecl_UE::Cameras::FBlendStackRootCameraDebugBlock::GetBlendedParameterOverridesEntriesField(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_struct_UE::Cameras::TCameraDebugBlockField<TArray<FString,TSizedDefaultAllocator<32>_>_>*___ptr64___cdecl_UE::Cameras::FBlendStackRootCameraDebugBlock::GetBlendedParameterOverridesEntriesField(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_struct_UE::Cameras::TCameraDebugBlockField<TArray<FString,TSizedDefaultAllocator<32>_>_>*___ptr64___cdecl_UE::Cameras::FBlendStackRootCameraDebugBlock::GetBlendedParameterOverridesEntriesField(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(local_res8,L"BlendedParameterOverridesEntries");
      _DAT_155362728 = 0x380000;
      _StaticField = &
                     ___7__TCameraDebugBlockField_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Cameras_UE__6B_
      ;
      _DAT_155362720 = local_res8[0];
      atexit(`UE::Cameras::FBlendStackRootCameraDebugBlock::
             GetBlendedParameterOverridesEntriesField'::__l2::
             _dynamic_atexit_destructor_for__StaticField__);
      _Init_thread_footer(&`private:_static_struct_UE::Cameras::TCameraDebugBlockField<TArray<FString,TSizedDefaultAllocator<32>_>_>*___ptr64___cdecl_UE::Cameras::FBlendStackRootCameraDebugBlock::GetBlendedParameterOverridesEntriesField(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  UE::Cameras::FBlendStackRootCameraDebugBlock::BlendedParameterOverridesEntriesFieldIndex =
       UE::Cameras::FCameraDebugBlock::RegisterField
                 ((FCameraDebugBlockField *)
                  &`private:_static_struct_UE::Cameras::TCameraDebugBlockField<TArray<FString,TSizedDefaultAllocator<32>_>_>*___ptr64___cdecl_UE::Cameras::FBlendStackRootCameraDebugBlock::GetBlendedParameterOverridesEntriesField(void)'
                   ::__l2::StaticField,pTVar1);
  return;
}

// CameraRigAssetNameFieldIndex'' @ 1413ce450

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FBlendStackRootCameraDebugBlock::
CameraRigAssetNameFieldIndex__(void)

{
  TArray<UE::Cameras::FCameraDebugBlockField_*,TSizedDefaultAllocator<32>_> *pTVar1;
  FName local_res8 [4];
  
  pTVar1 = UE::Cameras::FBlendStackRootCameraDebugBlock::GetStaticFields();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<FString>*___ptr64___cdecl_UE::Cameras::FBlendStackRootCameraDebugBlock::GetCameraRigAssetNameField(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_struct_UE::Cameras::TCameraDebugBlockField<FString>*___ptr64___cdecl_UE::Cameras::FBlendStackRootCameraDebugBlock::GetCameraRigAssetNameField(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_struct_UE::Cameras::TCameraDebugBlockField<FString>*___ptr64___cdecl_UE::Cameras::FBlendStackRootCameraDebugBlock::GetCameraRigAssetNameField(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(local_res8,L"CameraRigAssetName");
      _DAT_155362708 = 0x280000;
      _StaticField = &___7__TCameraDebugBlockField_VFString___Cameras_UE__6B_;
      _DAT_155362700 = local_res8[0];
      atexit(`UE::Cameras::FBlendStackRootCameraDebugBlock::GetCameraRigAssetNameField'::__l2::
             _dynamic_atexit_destructor_for__StaticField__);
      _Init_thread_footer(&`private:_static_struct_UE::Cameras::TCameraDebugBlockField<FString>*___ptr64___cdecl_UE::Cameras::FBlendStackRootCameraDebugBlock::GetCameraRigAssetNameField(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  UE::Cameras::FBlendStackRootCameraDebugBlock::CameraRigAssetNameFieldIndex =
       UE::Cameras::FCameraDebugBlock::RegisterField
                 ((FCameraDebugBlockField *)
                  &`private:_static_struct_UE::Cameras::TCameraDebugBlockField<FString>*___ptr64___cdecl_UE::Cameras::FBlendStackRootCameraDebugBlock::GetCameraRigAssetNameField(void)'
                   ::__l2::StaticField,pTVar1);
  return;
}

// CameraRigNameFieldIndex'' @ 1413ce510

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FBlendStackEntryCameraDebugBlock::CameraRigNameFieldIndex__
          (void)

{
  TArray<UE::Cameras::FCameraDebugBlockField_*,TSizedDefaultAllocator<32>_> *pTVar1;
  FName local_res8 [4];
  
  pTVar1 = UE::Cameras::FBlendStackEntryCameraDebugBlock::GetStaticFields();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<FString>*___ptr64___cdecl_UE::Cameras::FBlendStackEntryCameraDebugBlock::GetCameraRigNameField(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_struct_UE::Cameras::TCameraDebugBlockField<FString>*___ptr64___cdecl_UE::Cameras::FBlendStackEntryCameraDebugBlock::GetCameraRigNameField(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_struct_UE::Cameras::TCameraDebugBlockField<FString>*___ptr64___cdecl_UE::Cameras::FBlendStackEntryCameraDebugBlock::GetCameraRigNameField(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(local_res8,L"CameraRigName");
      _DAT_155362598 = 0x400000;
      _StaticField = &___7__TCameraDebugBlockField_VFString___Cameras_UE__6B_;
      _DAT_155362590 = local_res8[0];
      atexit(`UE::Cameras::FBlendStackEntryCameraDebugBlock::GetCameraRigNameField'::__l2::
             _dynamic_atexit_destructor_for__StaticField__);
      _Init_thread_footer(&`private:_static_struct_UE::Cameras::TCameraDebugBlockField<FString>*___ptr64___cdecl_UE::Cameras::FBlendStackEntryCameraDebugBlock::GetCameraRigNameField(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  UE::Cameras::FBlendStackEntryCameraDebugBlock::CameraRigNameFieldIndex =
       UE::Cameras::FCameraDebugBlock::RegisterField
                 ((FCameraDebugBlockField *)
                  &`private:_static_struct_UE::Cameras::TCameraDebugBlockField<FString>*___ptr64___cdecl_UE::Cameras::FBlendStackEntryCameraDebugBlock::GetCameraRigNameField(void)'
                   ::__l2::StaticField,pTVar1);
  return;
}

// EntryColorFieldIndex'' @ 1413ce5d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FBlendStackEntryCameraDebugBlock::EntryColorFieldIndex__
          (void)

{
  TArray<UE::Cameras::FCameraDebugBlockField_*,TSizedDefaultAllocator<32>_> *pTVar1;
  FName local_res8 [4];
  
  pTVar1 = UE::Cameras::FBlendStackEntryCameraDebugBlock::GetStaticFields();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<FLinearColor>*___ptr64___cdecl_UE::Cameras::FBlendStackEntryCameraDebugBlock::GetEntryColorField(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_struct_UE::Cameras::TCameraDebugBlockField<FLinearColor>*___ptr64___cdecl_UE::Cameras::FBlendStackEntryCameraDebugBlock::GetEntryColorField(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_struct_UE::Cameras::TCameraDebugBlockField<FLinearColor>*___ptr64___cdecl_UE::Cameras::FBlendStackEntryCameraDebugBlock::GetEntryColorField(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(local_res8,L"EntryColor");
      _DAT_155362558 = 0x2c0000;
      _StaticField = &___7__TCameraDebugBlockField_UFLinearColor___Cameras_UE__6B_;
      _DAT_155362550 = local_res8[0];
      atexit(`UE::Cameras::FBlendStackEntryCameraDebugBlock::GetEntryColorField'::__l2::
             _dynamic_atexit_destructor_for__StaticField__);
      _Init_thread_footer(&`private:_static_struct_UE::Cameras::TCameraDebugBlockField<FLinearColor>*___ptr64___cdecl_UE::Cameras::FBlendStackEntryCameraDebugBlock::GetEntryColorField(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  UE::Cameras::FBlendStackEntryCameraDebugBlock::EntryColorFieldIndex =
       UE::Cameras::FCameraDebugBlock::RegisterField
                 ((FCameraDebugBlockField *)
                  &`private:_static_struct_UE::Cameras::TCameraDebugBlockField<FLinearColor>*___ptr64___cdecl_UE::Cameras::FBlendStackEntryCameraDebugBlock::GetEntryColorField(void)'
                   ::__l2::StaticField,pTVar1);
  return;
}

// EntryIDFieldIndex'' @ 1413ce690

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FBlendStackEntryCameraDebugBlock::EntryIDFieldIndex__(void)

{
  TArray<UE::Cameras::FCameraDebugBlockField_*,TSizedDefaultAllocator<32>_> *pTVar1;
  FName local_res8 [4];
  
  pTVar1 = UE::Cameras::FBlendStackEntryCameraDebugBlock::GetStaticFields();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Cameras::FBlendStackEntryID>*___ptr64___cdecl_UE::Cameras::FBlendStackEntryCameraDebugBlock::GetEntryIDField(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Cameras::FBlendStackEntryID>*___ptr64___cdecl_UE::Cameras::FBlendStackEntryCameraDebugBlock::GetEntryIDField(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Cameras::FBlendStackEntryID>*___ptr64___cdecl_UE::Cameras::FBlendStackEntryCameraDebugBlock::GetEntryIDField(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(local_res8,L"EntryID");
      _DAT_155362578 = 0x3c0000;
      _StaticField = &___7__TCameraDebugBlockField_UFBlendStackEntryID_Cameras_UE___Cameras_UE__6B_;
      _DAT_155362570 = local_res8[0];
      atexit(`UE::Cameras::FBlendStackEntryCameraDebugBlock::GetEntryIDField'::__l2::
             _dynamic_atexit_destructor_for__StaticField__);
      _Init_thread_footer(&`private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Cameras::FBlendStackEntryID>*___ptr64___cdecl_UE::Cameras::FBlendStackEntryCameraDebugBlock::GetEntryIDField(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  UE::Cameras::FBlendStackEntryCameraDebugBlock::EntryIDFieldIndex =
       UE::Cameras::FCameraDebugBlock::RegisterField
                 ((FCameraDebugBlockField *)
                  &`private:_static_struct_UE::Cameras::TCameraDebugBlockField<UE::Cameras::FBlendStackEntryID>*___ptr64___cdecl_UE::Cameras::FBlendStackEntryCameraDebugBlock::GetEntryIDField(void)'
                   ::__l2::StaticField,pTVar1);
  return;
}

// EntryIndexFieldIndex'' @ 1413ce750

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FBlendStackEntryCameraDebugBlock::EntryIndexFieldIndex__
          (void)

{
  TArray<UE::Cameras::FCameraDebugBlockField_*,TSizedDefaultAllocator<32>_> *pTVar1;
  FName local_res8 [4];
  
  pTVar1 = UE::Cameras::FBlendStackEntryCameraDebugBlock::GetStaticFields();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<int>*___ptr64___cdecl_UE::Cameras::FBlendStackEntryCameraDebugBlock::GetEntryIndexField(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_struct_UE::Cameras::TCameraDebugBlockField<int>*___ptr64___cdecl_UE::Cameras::FBlendStackEntryCameraDebugBlock::GetEntryIndexField(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_struct_UE::Cameras::TCameraDebugBlockField<int>*___ptr64___cdecl_UE::Cameras::FBlendStackEntryCameraDebugBlock::GetEntryIndexField(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(local_res8,L"EntryIndex");
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<int>*___ptr64___cdecl_UE::Cameras::FBlendStackEntryCameraDebugBlock::GetEntryIndexField(void)'
      ::__l2::StaticField._16_4_ = 0x280000;
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<int>*___ptr64___cdecl_UE::Cameras::FBlendStackEntryCameraDebugBlock::GetEntryIndexField(void)'
      ::__l2::StaticField._0_8_ = &___7__TCameraDebugBlockField_H_Cameras_UE__6B_;
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<int>*___ptr64___cdecl_UE::Cameras::FBlendStackEntryCameraDebugBlock::GetEntryIndexField(void)'
      ::__l2::StaticField._8_4_ = local_res8[0].ComparisonIndex.Value;
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<int>*___ptr64___cdecl_UE::Cameras::FBlendStackEntryCameraDebugBlock::GetEntryIndexField(void)'
      ::__l2::StaticField._12_4_ = local_res8[0].Number;
      atexit(`UE::Cameras::FBlendStackEntryCameraDebugBlock::GetEntryIndexField'::__l2::
             _dynamic_atexit_destructor_for__StaticField__);
      _Init_thread_footer(&`private:_static_struct_UE::Cameras::TCameraDebugBlockField<int>*___ptr64___cdecl_UE::Cameras::FBlendStackEntryCameraDebugBlock::GetEntryIndexField(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  UE::Cameras::FBlendStackEntryCameraDebugBlock::EntryIndexFieldIndex =
       UE::Cameras::FCameraDebugBlock::RegisterField
                 ((FCameraDebugBlockField *)
                  &`private:_static_struct_UE::Cameras::TCameraDebugBlockField<int>*___ptr64___cdecl_UE::Cameras::FBlendStackEntryCameraDebugBlock::GetEntryIndexField(void)'
                   ::__l2::StaticField,pTVar1);
  return;
}

// PrivateTypeID'' @ 1413ce810

void __cdecl `dynamic_initializer_for_'UE::Cameras::FBlendCameraNodeEvaluator::PrivateTypeID__(void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FBlendCameraNodeEvaluator");
  UE::Cameras::FBlendCameraNodeEvaluator::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FBlendCameraNodeEvaluator>)
       UE::Cameras::FCameraObjectTypeID::RegisterNewID();
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FBlendCameraNodeEvaluator>::StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FBlendCameraNodeEvaluator>::StaticDestructor;
  local_28.Sizeof = 0x20;
  local_28.Alignof = 8;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)UE::Cameras::FBlendCameraNodeEvaluator::PrivateTypeID,
             &local_28);
  return;
}

// PrivateTypeID'' @ 1413ce890

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FBlendStackCameraDebugBlock::PrivateTypeID__(void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FBlendStackCameraDebugBlock");
  UE::Cameras::FBlendStackCameraDebugBlock::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FBlendStackCameraDebugBlock>)
       UE::Cameras::FCameraObjectTypeID::RegisterNewID();
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FBlendStackCameraDebugBlock>::StaticConstructor
  ;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FBlendStackCameraDebugBlock>::StaticDestructor;
  local_28.Sizeof = 0x48;
  local_28.Alignof = 8;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)UE::Cameras::FBlendStackCameraDebugBlock::PrivateTypeID,
             &local_28);
  return;
}

// PrivateTypeID'' @ 1413ce910

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FBlendStackCameraNodeEvaluator::PrivateTypeID__(void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FBlendStackCameraNodeEvaluator");
  UE::Cameras::FBlendStackCameraNodeEvaluator::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FBlendStackCameraNodeEvaluator>)
       UE::Cameras::FCameraObjectTypeID::RegisterNewID();
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FBlendStackCameraNodeEvaluator>::
       StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FBlendStackCameraNodeEvaluator>::
       StaticDestructor;
  local_28.Sizeof = 0x60;
  local_28.Alignof = 8;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)UE::Cameras::FBlendStackCameraNodeEvaluator::PrivateTypeID,
             &local_28);
  return;
}

// PrivateTypeID'' @ 1413ce990

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FBlendStackEntryCameraDebugBlock::PrivateTypeID__(void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FBlendStackEntryCameraDebugBlock");
  UE::Cameras::FBlendStackEntryCameraDebugBlock::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FBlendStackEntryCameraDebugBlock>)
       UE::Cameras::FCameraObjectTypeID::RegisterNewID();
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FBlendStackEntryCameraDebugBlock>::
       StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FBlendStackEntryCameraDebugBlock>::
       StaticDestructor;
  local_28.Sizeof = 0x58;
  local_28.Alignof = 8;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)UE::Cameras::FBlendStackEntryCameraDebugBlock::PrivateTypeID,
             &local_28);
  return;
}

// PrivateTypeID'' @ 1413cea10

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FBlendStackRootCameraDebugBlock::PrivateTypeID__(void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FBlendStackRootCameraDebugBlock");
  UE::Cameras::FBlendStackRootCameraDebugBlock::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FBlendStackRootCameraDebugBlock>)
       UE::Cameras::FCameraObjectTypeID::RegisterNewID();
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FBlendStackRootCameraDebugBlock>::
       StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FBlendStackRootCameraDebugBlock>::
       StaticDestructor;
  local_28.Sizeof = 0x48;
  local_28.Alignof = 8;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)UE::Cameras::FBlendStackRootCameraDebugBlock::PrivateTypeID,
             &local_28);
  return;
}

// PrivateTypeID'' @ 1413cea90

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FBlendStackRootCameraNodeEvaluator::PrivateTypeID__(void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FBlendStackRootCameraNodeEvaluator");
  UE::Cameras::FBlendStackRootCameraNodeEvaluator::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FBlendStackRootCameraNodeEvaluator>)
       UE::Cameras::FCameraObjectTypeID::RegisterNewID();
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FBlendStackRootCameraNodeEvaluator>::
       StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FBlendStackRootCameraNodeEvaluator>::
       StaticDestructor;
  local_28.Sizeof = 0x58;
  local_28.Alignof = 8;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)
                  UE::Cameras::FBlendStackRootCameraNodeEvaluator::PrivateTypeID,&local_28);
  return;
}

// PrivateTypeID'' @ 1413ceb10

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FBlendStackSummaryCameraDebugBlock::PrivateTypeID__(void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FBlendStackSummaryCameraDebugBlock");
  UE::Cameras::FBlendStackSummaryCameraDebugBlock::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FBlendStackSummaryCameraDebugBlock>)
       UE::Cameras::FCameraObjectTypeID::RegisterNewID();
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FBlendStackSummaryCameraDebugBlock>::
       StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FBlendStackSummaryCameraDebugBlock>::
       StaticDestructor;
  local_28.Sizeof = 0x38;
  local_28.Alignof = 8;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)
                  UE::Cameras::FBlendStackSummaryCameraDebugBlock::PrivateTypeID,&local_28);
  return;
}

// PrivateTypeID'' @ 1413ceb90

void __cdecl `dynamic_initializer_for_'UE::Cameras::FCameraDirectorEvaluator::PrivateTypeID__(void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FCameraDirectorEvaluator");
  UE::Cameras::FCameraDirectorEvaluator::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FCameraDirectorEvaluator>)
       UE::Cameras::FCameraObjectTypeID::RegisterNewID();
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FCameraDirectorEvaluator>::StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FCameraDirectorEvaluator>::StaticDestructor;
  local_28.Sizeof = 0x38;
  local_28.Alignof = 8;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)UE::Cameras::FCameraDirectorEvaluator::PrivateTypeID,
             &local_28);
  return;
}

// PrivateTypeID'' @ 1413cec10

void __cdecl `dynamic_initializer_for_'UE::Cameras::FCameraEvaluationContext::PrivateTypeID__(void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FCameraEvaluationContext");
  UE::Cameras::FCameraEvaluationContext::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FCameraEvaluationContext>)
       UE::Cameras::FCameraObjectTypeID::RegisterNewID();
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FCameraEvaluationContext>::StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FCameraEvaluationContext>::StaticDestructor;
  local_28.Sizeof = 0xaf0;
  local_28.Alignof = 0x10;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)UE::Cameras::FCameraEvaluationContext::PrivateTypeID,
             &local_28);
  return;
}

// PrivateTypeID'' @ 1413cec90

void __cdecl `dynamic_initializer_for_'UE::Cameras::FCameraEvaluationService::PrivateTypeID__(void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FCameraEvaluationService");
  UE::Cameras::FCameraEvaluationService::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FCameraEvaluationService>)
       UE::Cameras::FCameraObjectTypeID::RegisterNewID();
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FCameraEvaluationService>::StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FCameraEvaluationService>::StaticDestructor;
  local_28.Sizeof = 0x20;
  local_28.Alignof = 8;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)UE::Cameras::FCameraEvaluationService::PrivateTypeID,
             &local_28);
  return;
}

// PrivateTypeID'' @ 1413ced10

void __cdecl `dynamic_initializer_for_'UE::Cameras::FCameraNodeEvaluator::PrivateTypeID__(void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FCameraNodeEvaluator");
  UE::Cameras::FCameraNodeEvaluator::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)
       UE::Cameras::FCameraObjectTypeID::RegisterNewID();
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>::StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>::StaticDestructor;
  local_28.Sizeof = 0x20;
  local_28.Alignof = 8;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)UE::Cameras::FCameraNodeEvaluator::PrivateTypeID,&local_28);
  return;
}

// SharedTransitionsGraphName'' @ 1413ced90

void __cdecl `dynamic_initializer_for_'UCameraAsset::SharedTransitionsGraphName__(void)

{
  ::FName::FName(&UCameraAsset::SharedTransitionsGraphName,"SharedTransitions");
  return;
}

// bIsFrozenFieldIndex'' @ 1413cedb0

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FBlendStackEntryCameraDebugBlock::bIsFrozenFieldIndex__(void)

{
  TArray<UE::Cameras::FCameraDebugBlockField_*,TSizedDefaultAllocator<32>_> *pTVar1;
  FName local_res8 [4];
  
  pTVar1 = UE::Cameras::FBlendStackEntryCameraDebugBlock::GetStaticFields();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<bool>*___ptr64___cdecl_UE::Cameras::FBlendStackEntryCameraDebugBlock::GetbIsFrozenField(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_struct_UE::Cameras::TCameraDebugBlockField<bool>*___ptr64___cdecl_UE::Cameras::FBlendStackEntryCameraDebugBlock::GetbIsFrozenField(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_struct_UE::Cameras::TCameraDebugBlockField<bool>*___ptr64___cdecl_UE::Cameras::FBlendStackEntryCameraDebugBlock::GetbIsFrozenField(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(local_res8,L"bIsFrozen");
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<bool>*___ptr64___cdecl_UE::Cameras::FBlendStackEntryCameraDebugBlock::GetbIsFrozenField(void)'
      ::__l2::StaticField._16_4_ = 0x500000;
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<bool>*___ptr64___cdecl_UE::Cameras::FBlendStackEntryCameraDebugBlock::GetbIsFrozenField(void)'
      ::__l2::StaticField._0_8_ = &___7__TCameraDebugBlockField__N_Cameras_UE__6B_;
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<bool>*___ptr64___cdecl_UE::Cameras::FBlendStackEntryCameraDebugBlock::GetbIsFrozenField(void)'
      ::__l2::StaticField._8_4_ = local_res8[0].ComparisonIndex.Value;
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<bool>*___ptr64___cdecl_UE::Cameras::FBlendStackEntryCameraDebugBlock::GetbIsFrozenField(void)'
      ::__l2::StaticField._12_4_ = local_res8[0].Number;
      atexit(`UE::Cameras::FBlendStackEntryCameraDebugBlock::GetbIsFrozenField'::__l2::
             _dynamic_atexit_destructor_for__StaticField__);
      _Init_thread_footer(&`private:_static_struct_UE::Cameras::TCameraDebugBlockField<bool>*___ptr64___cdecl_UE::Cameras::FBlendStackEntryCameraDebugBlock::GetbIsFrozenField(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  UE::Cameras::FBlendStackEntryCameraDebugBlock::bIsFrozenFieldIndex =
       UE::Cameras::FCameraDebugBlock::RegisterField
                 ((FCameraDebugBlockField *)
                  &`private:_static_struct_UE::Cameras::TCameraDebugBlockField<bool>*___ptr64___cdecl_UE::Cameras::FBlendStackEntryCameraDebugBlock::GetbIsFrozenField(void)'
                   ::__l2::StaticField,pTVar1);
  return;
}

// `dynamic_initializer_for_'CVarGameplayCamerasDebugBlendStackShowDataIDs'' @ 1413cee70

void __cdecl
UE::Cameras::_dynamic_initializer_for__CVarGameplayCamerasDebugBlendStackShowDataIDs__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGameplayCamerasDebugBlendStackShowDataIDs,
             L"GameplayCameras.Debug.BlendStack.ShowDataIDs",
             &GGameplayCamerasDebugBlendStackShowDataIDs,L"",0);
  atexit(_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugBlendStackShowDataIDs__);
  return;
}

// `dynamic_initializer_for_'CVarGameplayCamerasDebugBlendStackShowUnchanged'' @ 1413ceec0

void __cdecl
UE::Cameras::_dynamic_initializer_for__CVarGameplayCamerasDebugBlendStackShowUnchanged__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGameplayCamerasDebugBlendStackShowUnchanged,
             L"GameplayCameras.Debug.BlendStack.ShowUnchanged",
             &GGameplayCamerasDebugBlendStackShowUnchanged,L"",0);
  atexit(_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugBlendStackShowUnchanged__);
  return;
}

// `dynamic_initializer_for_'CVarGameplayCamerasDebugBlendStackShowVariableIDs'' @ 1413cef10

void __cdecl
UE::Cameras::_dynamic_initializer_for__CVarGameplayCamerasDebugBlendStackShowVariableIDs__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGameplayCamerasDebugBlendStackShowVariableIDs,
             L"GameplayCameras.Debug.BlendStack.ShowVariableIDs",
             &GGameplayCamerasDebugBlendStackShowVariableIDs,L"",0);
  atexit(_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugBlendStackShowVariableIDs__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Private_Core_BlendStackRootCameraNode_h__Script_GameplayCameras_1113765342'' @ 1413cef60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Private_Core_BlendStackRootCameraNode_h__Script_GameplayCameras_1113765342__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Private_Core_BlendStackRootCameraNode_h__Script_GameplayCameras_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Build_CameraBuildStatus_h__Script_GameplayCameras_3937270997'' @ 1413cefa0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Build_CameraBuildStatus_h__Script_GameplayCameras_3937270997__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Build_CameraBuildStatus_h__Script_GameplayCameras_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Build_CameraBuildStatus_h__Script_GameplayCameras_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_BaseCameraObjectReference_h__Script_GameplayCameras_1854768223'' @ 1413ceff0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_BaseCameraObjectReference_h__Script_GameplayCameras_1854768223__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_BaseCameraObjectReference_h__Script_GameplayCameras_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_BaseCameraObject_h__Script_GameplayCameras_2991176296'' @ 1413cf030

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_BaseCameraObject_h__Script_GameplayCameras_2991176296__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_BaseCameraObject_h__Script_GameplayCameras_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_BaseCameraObject_h__Script_GameplayCameras_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_BlendCameraNode_h__Script_GameplayCameras_2922831358'' @ 1413cf080

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_BlendCameraNode_h__Script_GameplayCameras_2922831358__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_BlendCameraNode_h__Script_GameplayCameras_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_BlendStackCameraNode_h__Script_GameplayCameras_3269160696'' @ 1413cf0c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_BlendStackCameraNode_h__Script_GameplayCameras_3269160696__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_BlendStackCameraNode_h__Script_GameplayCameras_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_BlendStackCameraNode_h__Script_GameplayCameras_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_BuiltInCameraVariables_h__Script_GameplayCameras_4125707916'' @ 1413cf110

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_BuiltInCameraVariables_h__Script_GameplayCameras_4125707916__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_BuiltInCameraVariables_h__Script_GameplayCameras_Statics
             ::EnumInfo,3);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraAssetReference_h__Script_GameplayCameras_2604172250'' @ 1413cf160

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraAssetReference_h__Script_GameplayCameras_2604172250__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraAssetReference_h__Script_GameplayCameras_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraAsset_h__Script_GameplayCameras_97952816'' @ 1413cf1a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraAsset_h__Script_GameplayCameras_97952816__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraAsset_h__Script_GameplayCameras_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraAsset_h__Script_GameplayCameras_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraContextDataTableAllocationInfo_h__Script_GameplayCameras_2671952120'' @ 1413cf1f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraContextDataTableAllocationInfo_h__Script_GameplayCameras_2671952120__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraContextDataTableAllocationInfo_h__Script_GameplayCameras_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraContextDataTableFwd_h__Script_GameplayCameras_1434057808'' @ 1413cf230

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraContextDataTableFwd_h__Script_GameplayCameras_1434057808__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraContextDataTableFwd_h__Script_GameplayCameras_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraContextDataTableFwd_h__Script_GameplayCameras_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraDirector_h__Script_GameplayCameras_1684653427'' @ 1413cf280

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraDirector_h__Script_GameplayCameras_1684653427__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraDirector_h__Script_GameplayCameras_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraEvaluationContext_h__Script_GameplayCameras_3419329175'' @ 1413cf2c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraEvaluationContext_h__Script_GameplayCameras_3419329175__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraEvaluationContext_h__Script_GameplayCameras_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraNodeEvaluatorFwd_h__Script_GameplayCameras_1876973360'' @ 1413cf310

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraNodeEvaluatorFwd_h__Script_GameplayCameras_1876973360__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraNodeEvaluatorFwd_h__Script_GameplayCameras_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraNode_h__Script_GameplayCameras_2949251407'' @ 1413cf350

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraNode_h__Script_GameplayCameras_2949251407__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraNode_h__Script_GameplayCameras_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraObjectInterfaceParameterDefinition_h__Script_GameplayCameras_2657214573'' @ 1413cf390

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraObjectInterfaceParameterDefinition_h__Script_GameplayCameras_2657214573__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraObjectInterfaceParameterDefinition_h__Script_GameplayCameras_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraObjectInterfaceParameterDefinition_h__Script_GameplayCameras_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigInstanceID_h__Script_GameplayCameras_1366085290'' @ 1413cf3e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigInstanceID_h__Script_GameplayCameras_1366085290__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigInstanceID_h__Script_GameplayCameras_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigInstanceID_h__Script_GameplayCameras_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigInstanceID_h__Script_GameplayCameras_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraShakeInstanceID_h__Script_GameplayCameras_2602963712'' @ 1413cf430

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraShakeInstanceID_h__Script_GameplayCameras_2602963712__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraShakeInstanceID_h__Script_GameplayCameras_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraVariableTableFwd_h__Script_GameplayCameras_4276240757'' @ 1413cf470

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraVariableTableFwd_h__Script_GameplayCameras_4276240757__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraVariableTableFwd_h__Script_GameplayCameras_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraVariableTableFwd_h__Script_GameplayCameras_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_IAssetReferenceCameraNode_h__Script_GameplayCameras_451494908'' @ 1413cf4c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_IAssetReferenceCameraNode_h__Script_GameplayCameras_451494908__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_IAssetReferenceCameraNode_h__Script_GameplayCameras_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_ObjectTreeGraphObject_h__Script_GameplayCameras_1039572803'' @ 1413cf500

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_ObjectTreeGraphObject_h__Script_GameplayCameras_1039572803__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_ObjectTreeGraphObject_h__Script_GameplayCameras_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_ObjectTreeGraphRootObject_h__Script_GameplayCameras_3525589748'' @ 1413cf540

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_ObjectTreeGraphRootObject_h__Script_GameplayCameras_3525589748__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_ObjectTreeGraphRootObject_h__Script_GameplayCameras_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_CameraNodeTypes_h__Script_GameplayCameras_3291295876'' @ 1413cf580

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_CameraNodeTypes_h__Script_GameplayCameras_3291295876__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Nodes_CameraNodeTypes_h__Script_GameplayCameras_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_GameplayCameras'' @ 1413cf5d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_GameplayCameras__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x3061376e;
  local_res8[0].DeclarationsHash = 0x61eb213f;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_GameplayCameras,L"/Script/GameplayCameras",
             &Z_Registration_Info_UPackage__Script_GameplayCameras,local_res8);
  return;
}

// Z_Construct_UClass_UCameraDirector @ 14d5356d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCameraDirector(void)

{
  if (Z_Registration_Info_UClass_UCameraDirector.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCameraDirector.OuterSingleton,
               &Z_Construct_UClass_UCameraDirector_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCameraDirector.OuterSingleton;
}

// Z_Construct_UClass_UBlendCameraNode @ 14d5357c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UBlendCameraNode(void)

{
  if (Z_Registration_Info_UClass_UBlendCameraNode.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UBlendCameraNode.OuterSingleton,
               &Z_Construct_UClass_UBlendCameraNode_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UBlendCameraNode.OuterSingleton;
}

// Z_Construct_UClass_UCameraNode @ 14d535800

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCameraNode(void)

{
  if (Z_Registration_Info_UClass_UCameraNode.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCameraNode.OuterSingleton,
               &Z_Construct_UClass_UCameraNode_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCameraNode.OuterSingleton;
}

// Z_Construct_UClass_UCameraAsset_NoRegister @ 14d535840

UClass * __cdecl Z_Construct_UClass_UCameraAsset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CameraAsset",
               &Z_Registration_Info_UClass_UCameraAsset.InnerSingleton,
               UCameraAsset::StaticRegisterNativesUCameraAsset,200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCameraAsset>,
               InternalVTableHelperCtorCaller<UCameraAsset>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraAsset.InnerSingleton;
}

// Z_Construct_UClass_UHasCameraBuildStatus @ 14d535c90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UHasCameraBuildStatus(void)

{
  if (Z_Registration_Info_UClass_UHasCameraBuildStatus.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UHasCameraBuildStatus.OuterSingleton,
               &Z_Construct_UClass_UHasCameraBuildStatus_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UHasCameraBuildStatus.OuterSingleton;
}

// Z_Construct_UEnum_GameplayCameras_ECameraBuildStatus @ 14d535cd0

UEnum * __cdecl Z_Construct_UEnum_GameplayCameras_ECameraBuildStatus(void)

{
  if (Z_Registration_Info_UEnum_ECameraBuildStatus.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ECameraBuildStatus.InnerSingleton,
               &Z_Construct_UEnum_GameplayCameras_ECameraBuildStatus_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ECameraBuildStatus.InnerSingleton;
}

// Z_Construct_UPackage__Script_GameplayCameras @ 14d535d10

UPackage * __cdecl Z_Construct_UPackage__Script_GameplayCameras(void)

{
  if (Z_Registration_Info_UPackage__Script_GameplayCameras.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_GameplayCameras.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_GameplayCameras.OuterSingleton;
}

// ECameraBuildStatus_StaticEnum @ 14d535d50

UEnum * __cdecl ECameraBuildStatus_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECameraBuildStatus.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UEnum_ECameraBuildStatus.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GameplayCameras_ECameraBuildStatus,(UObject *)pUVar1,
                       L"ECameraBuildStatus");
  }
  return Z_Registration_Info_UEnum_ECameraBuildStatus.OuterSingleton;
}

// ECameraEvaluationDataCondition_StaticEnum @ 14d535d90

UEnum * __cdecl ECameraEvaluationDataCondition_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECameraEvaluationDataCondition.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UEnum_ECameraEvaluationDataCondition.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GameplayCameras_ECameraEvaluationDataCondition,
                       (UObject *)pUVar1,L"ECameraEvaluationDataCondition");
  }
  return Z_Registration_Info_UEnum_ECameraEvaluationDataCondition.OuterSingleton;
}

// Z_Construct_UEnum_GameplayCameras_ECameraContextDataContainerType @ 14d535e40

UEnum * __cdecl Z_Construct_UEnum_GameplayCameras_ECameraContextDataContainerType(void)

{
  if (Z_Registration_Info_UEnum_ECameraContextDataContainerType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ECameraContextDataContainerType.InnerSingleton,
               &Z_Construct_UEnum_GameplayCameras_ECameraContextDataContainerType_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_ECameraContextDataContainerType.InnerSingleton;
}

// Z_Construct_UEnum_GameplayCameras_ECameraContextDataType @ 14d535e80

UEnum * __cdecl Z_Construct_UEnum_GameplayCameras_ECameraContextDataType(void)

{
  if (Z_Registration_Info_UEnum_ECameraContextDataType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ECameraContextDataType.InnerSingleton,
               &Z_Construct_UEnum_GameplayCameras_ECameraContextDataType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ECameraContextDataType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FCameraContextDataID @ 14d535ec0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCameraContextDataID(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCameraContextDataID.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCameraContextDataID.InnerSingleton,
               &Z_Construct_UScriptStruct_FCameraContextDataID_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCameraContextDataID.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FCameraContextDataID.InnerSingleton;
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

// ECameraContextDataType_StaticEnum @ 14d535f40

UEnum * __cdecl ECameraContextDataType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECameraContextDataType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UEnum_ECameraContextDataType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GameplayCameras_ECameraContextDataType,(UObject *)pUVar1,
                       L"ECameraContextDataType");
  }
  return Z_Registration_Info_UEnum_ECameraContextDataType.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14d535fb0

void * __thiscall
UE::Cameras::FCameraDebugBlockField::_scalar_deleting_destructor_
          (FCameraDebugBlockField *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FCameraDebugBlockField_Cameras_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// ECameraContextDataContainerType_StaticEnum @ 14d535ff0

UEnum * __cdecl ECameraContextDataContainerType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECameraContextDataContainerType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UEnum_ECameraContextDataContainerType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GameplayCameras_ECameraContextDataContainerType,
                       (UObject *)pUVar1,L"ECameraContextDataContainerType");
  }
  return Z_Registration_Info_UEnum_ECameraContextDataContainerType.OuterSingleton;
}

// NewStructOps @ 14d536040

void * __cdecl Z_Construct_UScriptStruct_FCameraContextDataID_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCameraContextDataID,&UE::CoreUObject::Private::Construct<FCameraContextDataID>,&UE::CoreUObject::Private::ConstructForTests<FCameraContextDataID>,&UE::CoreUObject::Private::Destruct<FCameraContextDataID>,&UE::CoreUObject::Private::Copy<FCameraContextDataID>,&UE::CoreUObject::Private::GetStructTypeHash<FCameraContextDataID>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FCameraNodeEvaluatorAllocationInfo @ 14d536160

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCameraNodeEvaluatorAllocationInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCameraNodeEvaluatorAllocationInfo.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCameraNodeEvaluatorAllocationInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FCameraNodeEvaluatorAllocationInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCameraNodeEvaluatorAllocationInfo.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCameraNodeEvaluatorAllocationInfo.InnerSingleton;
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

// NewStructOps @ 14d5361e0

void * __cdecl
Z_Construct_UScriptStruct_FCameraNodeEvaluatorAllocationInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCameraNodeEvaluatorAllocationInfo,&UE::CoreUObject::Private::Construct<FCameraNodeEvaluatorAllocationInfo>,&UE::CoreUObject::Private::ConstructForTests<FCameraNodeEvaluatorAllocationInfo>,&UE::CoreUObject::Private::Destruct<FCameraNodeEvaluatorAllocationInfo>,&UE::CoreUObject::Private::Copy<FCameraNodeEvaluatorAllocationInfo>,&UE::CoreUObject::Private::Identical<FCameraNodeEvaluatorAllocationInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 2;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UCameraAsset @ 14d536220

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCameraAsset(void)

{
  if (Z_Registration_Info_UClass_UCameraAsset.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCameraAsset.OuterSingleton,
               &Z_Construct_UClass_UCameraAsset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCameraAsset.OuterSingleton;
}

// Z_Construct_UScriptStruct_FCameraAssetAllocationInfo @ 14d536260

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCameraAssetAllocationInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCameraAssetAllocationInfo.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCameraAssetAllocationInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FCameraAssetAllocationInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCameraAssetAllocationInfo.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCameraAssetAllocationInfo.InnerSingleton;
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

// NewStructOps @ 14d5362e0

void * __cdecl Z_Construct_UScriptStruct_FCameraAssetAllocationInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCameraAssetAllocationInfo,&UE::CoreUObject::Private::Construct<FCameraAssetAllocationInfo>,&UE::CoreUObject::Private::ConstructForTests<FCameraAssetAllocationInfo>,&UE::CoreUObject::Private::Destruct<FCameraAssetAllocationInfo>,&UE::CoreUObject::Private::Copy<FCameraAssetAllocationInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// ECameraNodeOriginPosition_StaticEnum @ 14d536320

UEnum * __cdecl ECameraNodeOriginPosition_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECameraNodeOriginPosition.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UEnum_ECameraNodeOriginPosition.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GameplayCameras_ECameraNodeOriginPosition,(UObject *)pUVar1
                       ,L"ECameraNodeOriginPosition");
  }
  return Z_Registration_Info_UEnum_ECameraNodeOriginPosition.OuterSingleton;
}

// ECameraNodeSpace_StaticEnum @ 14d536380

UEnum * __cdecl ECameraNodeSpace_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECameraNodeSpace.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UEnum_ECameraNodeSpace.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GameplayCameras_ECameraNodeSpace,(UObject *)pUVar1,
                       L"ECameraNodeSpace");
  }
  return Z_Registration_Info_UEnum_ECameraNodeSpace.OuterSingleton;
}

// Z_Construct_UClass_UBlendStackCameraNode @ 14d5365c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UBlendStackCameraNode(void)

{
  if (Z_Registration_Info_UClass_UBlendStackCameraNode.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UBlendStackCameraNode.OuterSingleton,
               &Z_Construct_UClass_UBlendStackCameraNode_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UBlendStackCameraNode.OuterSingleton;
}

// Z_Construct_UEnum_GameplayCameras_ECameraBlendStackType @ 14d536600

UEnum * __cdecl Z_Construct_UEnum_GameplayCameras_ECameraBlendStackType(void)

{
  if (Z_Registration_Info_UEnum_ECameraBlendStackType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ECameraBlendStackType.InnerSingleton,
               &Z_Construct_UEnum_GameplayCameras_ECameraBlendStackType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ECameraBlendStackType.InnerSingleton;
}

// ECameraBlendStackType_StaticEnum @ 14d536640

UEnum * __cdecl ECameraBlendStackType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECameraBlendStackType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UEnum_ECameraBlendStackType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GameplayCameras_ECameraBlendStackType,(UObject *)pUVar1,
                       L"ECameraBlendStackType");
  }
  return Z_Registration_Info_UEnum_ECameraBlendStackType.OuterSingleton;
}

// Z_Construct_UEnum_GameplayCameras_ECameraObjectInterfaceParameterType @ 14d536680

UEnum * __cdecl Z_Construct_UEnum_GameplayCameras_ECameraObjectInterfaceParameterType(void)

{
  if (Z_Registration_Info_UEnum_ECameraObjectInterfaceParameterType.InnerSingleton == (UEnum *)0x0)
  {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ECameraObjectInterfaceParameterType.InnerSingleton,
               &Z_Construct_UEnum_GameplayCameras_ECameraObjectInterfaceParameterType_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_ECameraObjectInterfaceParameterType.InnerSingleton;
}

// Z_Construct_UEnum_GameplayCameras_ECameraVariableType @ 14d5366c0

UEnum * __cdecl Z_Construct_UEnum_GameplayCameras_ECameraVariableType(void)

{
  if (Z_Registration_Info_UEnum_ECameraVariableType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ECameraVariableType.InnerSingleton,
               &Z_Construct_UEnum_GameplayCameras_ECameraVariableType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ECameraVariableType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FCameraObjectInterfaceParameterDefinition @ 14d536700

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCameraObjectInterfaceParameterDefinition(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCameraObjectInterfaceParameterDefinition.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCameraObjectInterfaceParameterDefinition.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FCameraObjectInterfaceParameterDefinition_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCameraObjectInterfaceParameterDefinition.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCameraObjectInterfaceParameterDefinition.
           InnerSingleton;
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

// Z_Construct_UScriptStruct_FCameraVariableID @ 14d536780

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCameraVariableID(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCameraVariableID.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCameraVariableID.InnerSingleton,
               &Z_Construct_UScriptStruct_FCameraVariableID_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCameraVariableID.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCameraVariableID.InnerSingleton;
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

// ECameraObjectInterfaceParameterType_StaticEnum @ 14d536800

UEnum * __cdecl ECameraObjectInterfaceParameterType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECameraObjectInterfaceParameterType.OuterSingleton == (UEnum *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UEnum_ECameraObjectInterfaceParameterType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GameplayCameras_ECameraObjectInterfaceParameterType,
                       (UObject *)pUVar1,L"ECameraObjectInterfaceParameterType");
  }
  return Z_Registration_Info_UEnum_ECameraObjectInterfaceParameterType.OuterSingleton;
}

// Z_Construct_UClass_UBlendCameraNode_NoRegister @ 14d536890

UClass * __cdecl Z_Construct_UClass_UBlendCameraNode_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlendCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"BlendCameraNode",
               &Z_Registration_Info_UClass_UBlendCameraNode.InnerSingleton,
               UBlendCameraNode::StaticRegisterNativesUBlendCameraNode,0x38,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UBlendCameraNode>,
               InternalVTableHelperCtorCaller<UBlendCameraNode>,local_res8,UCameraNode::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlendCameraNode.InnerSingleton;
}

// NewStructOps @ 14d536a40

void * __cdecl
Z_Construct_UScriptStruct_FCameraObjectInterfaceParameterDefinition_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCameraObjectInterfaceParameterDefinition,&UE::CoreUObject::Private::Construct<FCameraObjectInterfaceParameterDefinition>,&UE::CoreUObject::Private::ConstructForTests<FCameraObjectInterfaceParameterDefinition>,&UE::CoreUObject::Private::Destruct<FCameraObjectInterfaceParameterDefinition>,&UE::CoreUObject::Private::Copy<FCameraObjectInterfaceParameterDefinition>,&UE::CoreUObject::Private::Identical<FCameraObjectInterfaceParameterDefinition>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14d536b70

void * __thiscall
UE::Cameras::FBlendCameraNodeEvaluator::_scalar_deleting_destructor_
          (FBlendCameraNodeEvaluator *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UClass_UCameraRigInstanceFunctions @ 14d536ef0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCameraRigInstanceFunctions(void)

{
  if (Z_Registration_Info_UClass_UCameraRigInstanceFunctions.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCameraRigInstanceFunctions.OuterSingleton,
               &Z_Construct_UClass_UCameraRigInstanceFunctions_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCameraRigInstanceFunctions.OuterSingleton;
}

// Z_Construct_UEnum_GameplayCameras_ECameraRigLayer @ 14d536f30

UEnum * __cdecl Z_Construct_UEnum_GameplayCameras_ECameraRigLayer(void)

{
  if (Z_Registration_Info_UEnum_ECameraRigLayer.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ECameraRigLayer.InnerSingleton,
               &Z_Construct_UEnum_GameplayCameras_ECameraRigLayer_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ECameraRigLayer.InnerSingleton;
}

// Z_Construct_UScriptStruct_FCameraRigInstanceID @ 14d536f70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCameraRigInstanceID(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCameraRigInstanceID.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCameraRigInstanceID.InnerSingleton,
               &Z_Construct_UScriptStruct_FCameraRigInstanceID_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCameraRigInstanceID.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FCameraRigInstanceID.InnerSingleton;
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

// NewStructOps @ 14d536ff0

void * __cdecl Z_Construct_UScriptStruct_FCameraAssetReference_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCameraAssetReference,&UE::CoreUObject::Private::Construct<FCameraAssetReference>,&UE::CoreUObject::Private::ConstructForTests<FCameraAssetReference>,&UE::CoreUObject::Private::Destruct<FCameraAssetReference>,&UE::CoreUObject::Private::PostSerialize<FCameraAssetReference>,&UE::CoreUObject::Private::Copy<FCameraAssetReference>,&UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FCameraAssetReference>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// ECameraRigLayer_StaticEnum @ 14d537030

UEnum * __cdecl ECameraRigLayer_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECameraRigLayer.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UEnum_ECameraRigLayer.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GameplayCameras_ECameraRigLayer,(UObject *)pUVar1,
                       L"ECameraRigLayer");
  }
  return Z_Registration_Info_UEnum_ECameraRigLayer.OuterSingleton;
}

// NewStructOps @ 14d537070

void * __cdecl Z_Construct_UScriptStruct_FCameraRigInstanceID_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCameraRigInstanceID,&UE::CoreUObject::Private::Construct<FCameraRigInstanceID>,&UE::CoreUObject::Private::ConstructForTests<FCameraRigInstanceID>,&UE::CoreUObject::Private::Destruct<FCameraRigInstanceID>,&UE::CoreUObject::Private::Copy<FCameraRigInstanceID>,&UE::CoreUObject::Private::GetStructTypeHash<FCameraRigInstanceID>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_ReturnValue_SetBit @ 14d5370b0

void __cdecl
Z_Construct_UFunction_UCameraRigInstanceFunctions_IsValid_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UCameraRigInstanceFunctions_IsValid @ 14d5370e0

UFunction * __cdecl Z_Construct_UFunction_UCameraRigInstanceFunctions_IsValid(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCameraRigInstanceFunctions_IsValid_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UBaseCameraObject @ 14d537190

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UBaseCameraObject(void)

{
  if (Z_Registration_Info_UClass_UBaseCameraObject.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UBaseCameraObject.OuterSingleton,
               &Z_Construct_UClass_UBaseCameraObject_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UBaseCameraObject.OuterSingleton;
}

// Z_Construct_UScriptStruct_FCameraContextDataTableAllocationInfo @ 14d5371d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCameraContextDataTableAllocationInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCameraContextDataTableAllocationInfo.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCameraContextDataTableAllocationInfo.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FCameraContextDataTableAllocationInfo_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCameraContextDataTableAllocationInfo.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCameraContextDataTableAllocationInfo.InnerSingleton;
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

// Z_Construct_UScriptStruct_FCameraObjectAllocationInfo @ 14d537250

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCameraObjectAllocationInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCameraObjectAllocationInfo.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCameraObjectAllocationInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FCameraObjectAllocationInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCameraObjectAllocationInfo.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCameraObjectAllocationInfo.InnerSingleton;
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

// NewStructOps @ 14d5372d0

void * __cdecl Z_Construct_UScriptStruct_FCameraObjectAllocationInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCameraObjectAllocationInfo,&UE::CoreUObject::Private::Construct<FCameraObjectAllocationInfo>,&UE::CoreUObject::Private::ConstructForTests<FCameraObjectAllocationInfo>,&UE::CoreUObject::Private::Destruct<FCameraObjectAllocationInfo>,&UE::CoreUObject::Private::Copy<FCameraObjectAllocationInfo>,&UE::CoreUObject::Private::Identical<FCameraObjectAllocationInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14d537420

void * __thiscall
UE::Cameras::TCameraDebugBlockField<int>::_scalar_deleting_destructor_
          (TCameraDebugBlockField<int> *this,uint param_1)

{
  *(undefined ***)this = &___7FCameraDebugBlockField_Cameras_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d5374a0

void * __thiscall
UE::Cameras::TCameraDebugBlockField<FLinearColor>::_scalar_deleting_destructor_
          (TCameraDebugBlockField<FLinearColor> *this,uint param_1)

{
  *(undefined ***)this = &___7FCameraDebugBlockField_Cameras_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d537550

void * __thiscall
UE::Cameras::TCameraDebugBlockField<UE::Cameras::FBlendStackEntryID>::_scalar_deleting_destructor_
          (TCameraDebugBlockField<UE::Cameras::FBlendStackEntryID> *this,uint param_1)

{
  *(undefined ***)this = &___7FCameraDebugBlockField_Cameras_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d5375e0

void * __thiscall
UE::Cameras::TCameraDebugBlockField<FString>::_scalar_deleting_destructor_
          (TCameraDebugBlockField<FString> *this,uint param_1)

{
  *(undefined ***)this = &___7FCameraDebugBlockField_Cameras_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d537640

void * __thiscall
UE::Cameras::TCameraDebugBlockField<bool>::_scalar_deleting_destructor_
          (TCameraDebugBlockField<bool> *this,uint param_1)

{
  *(undefined ***)this = &___7FCameraDebugBlockField_Cameras_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// NewStructOps @ 14d5377e0

void * __cdecl Z_Construct_UScriptStruct_FCameraShakeInstanceID_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCameraShakeInstanceID,&UE::CoreUObject::Private::Construct<FCameraShakeInstanceID>,&UE::CoreUObject::Private::ConstructForTests<FCameraShakeInstanceID>,&UE::CoreUObject::Private::Destruct<FCameraShakeInstanceID>,&UE::CoreUObject::Private::Copy<FCameraShakeInstanceID>,&UE::CoreUObject::Private::GetStructTypeHash<FCameraShakeInstanceID>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// ECameraVariableType_StaticEnum @ 14d5378e0

UEnum * __cdecl ECameraVariableType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECameraVariableType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UEnum_ECameraVariableType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GameplayCameras_ECameraVariableType,(UObject *)pUVar1,
                       L"ECameraVariableType");
  }
  return Z_Registration_Info_UEnum_ECameraVariableType.OuterSingleton;
}

// Z_Construct_UClass_UAssetReferenceCameraNode @ 14d537920

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAssetReferenceCameraNode(void)

{
  if (Z_Registration_Info_UClass_UAssetReferenceCameraNode.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAssetReferenceCameraNode.OuterSingleton,
               &Z_Construct_UClass_UAssetReferenceCameraNode_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAssetReferenceCameraNode.OuterSingleton;
}

// NewStructOps @ 14d537960

void * __cdecl Z_Construct_UScriptStruct_FCameraVariableID_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCameraVariableID,&UE::CoreUObject::Private::Construct<FCameraVariableID>,&UE::CoreUObject::Private::ConstructForTests<FCameraVariableID>,&UE::CoreUObject::Private::Destruct<FCameraVariableID>,&UE::CoreUObject::Private::Copy<FCameraVariableID>,&UE::CoreUObject::Private::GetStructTypeHash<FCameraVariableID>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UObjectTreeGraphObject @ 14d537a60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UObjectTreeGraphObject(void)

{
  if (Z_Registration_Info_UClass_UObjectTreeGraphObject.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UObjectTreeGraphObject.OuterSingleton,
               &Z_Construct_UClass_UObjectTreeGraphObject_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UObjectTreeGraphObject.OuterSingleton;
}

// Z_Construct_UClass_UObjectTreeGraphRootObject @ 14d537bb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UObjectTreeGraphRootObject(void)

{
  if (Z_Registration_Info_UClass_UObjectTreeGraphRootObject.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UObjectTreeGraphRootObject.OuterSingleton,
               &Z_Construct_UClass_UObjectTreeGraphRootObject_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UObjectTreeGraphRootObject.OuterSingleton;
}

// Z_Construct_UClass_UBlendStackRootCameraNode @ 14d537bf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UBlendStackRootCameraNode(void)

{
  if (Z_Registration_Info_UClass_UBlendStackRootCameraNode.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UBlendStackRootCameraNode.OuterSingleton,
               &Z_Construct_UClass_UBlendStackRootCameraNode_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UBlendStackRootCameraNode.OuterSingleton;
}

// NewProp_bIsEnabled_SetBit @ 14d537c30

void __cdecl Z_Construct_UClass_UCameraNode_Statics::NewProp_bIsEnabled_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// `scalar_deleting_destructor' @ 14d537d50

void * __thiscall
UE::Cameras::TCameraDebugBlockField<TArray<FString,TSizedDefaultAllocator<32>_>_>::
_scalar_deleting_destructor_
          (TCameraDebugBlockField<TArray<FString,TSizedDefaultAllocator<32>_>_> *this,uint param_1)

{
  *(undefined ***)this = &___7FCameraDebugBlockField_Cameras_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d537d90

void * __thiscall
FBaseCameraObjectReference::_scalar_deleting_destructor_
          (FBaseCameraObjectReference *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FBaseCameraObjectReference__6B_;
  pFVar1 = (this->ParameterMetaData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Parameters).OverridenPropertyIDs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FInstancedStruct::Reset((FInstancedStruct *)&this->Parameters);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// Z_Construct_UScriptStruct_FCameraObjectInterfaceParameterMetaData @ 14d537e00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCameraObjectInterfaceParameterMetaData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCameraObjectInterfaceParameterMetaData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCameraObjectInterfaceParameterMetaData.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FCameraObjectInterfaceParameterMetaData_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCameraObjectInterfaceParameterMetaData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCameraObjectInterfaceParameterMetaData.InnerSingleton;
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

// NewProp_bIsOverridden_SetBit @ 14d537e90

void __cdecl
Z_Construct_UScriptStruct_FCameraObjectInterfaceParameterMetaData_Statics::
NewProp_bIsOverridden_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewStructOps @ 14d537ea0

void * __cdecl
Z_Construct_UScriptStruct_FCameraObjectInterfaceParameterMetaData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1c;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCameraObjectInterfaceParameterMetaData,&UE::CoreUObject::Private::Construct<FCameraObjectInterfaceParameterMetaData>,&UE::CoreUObject::Private::ConstructForTests<FCameraObjectInterfaceParameterMetaData>,&UE::CoreUObject::Private::Destruct<FCameraObjectInterfaceParameterMetaData>,&UE::CoreUObject::Private::Copy<FCameraObjectInterfaceParameterMetaData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d537fd0

void * __cdecl Z_Construct_UScriptStruct_FBaseCameraObjectReference_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FBaseCameraObjectReference,&UE::CoreUObject::Private::Construct<FBaseCameraObjectReference>,&UE::CoreUObject::Private::ConstructForTests<FBaseCameraObjectReference>,&UE::CoreUObject::Private::Destruct<FBaseCameraObjectReference>,&UE::CoreUObject::Private::PostSerialize<FBaseCameraObjectReference>,&UE::CoreUObject::Private::Copy<FBaseCameraObjectReference>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UCameraNode_NoRegister @ 14d5382a0

UClass * __cdecl Z_Construct_UClass_UCameraNode_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CameraNode",
               &Z_Registration_Info_UClass_UCameraNode.InnerSingleton,
               UCameraNode::StaticRegisterNativesUCameraNode,0x38,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UCameraNode>,
               InternalVTableHelperCtorCaller<UCameraNode>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraNode.InnerSingleton;
}

// EBuiltInDoubleCameraVariable_StaticEnum @ 14d538480

UEnum * __cdecl EBuiltInDoubleCameraVariable_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EBuiltInDoubleCameraVariable.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UEnum_EBuiltInDoubleCameraVariable.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GameplayCameras_EBuiltInDoubleCameraVariable,
                       (UObject *)pUVar1,L"EBuiltInDoubleCameraVariable");
  }
  return Z_Registration_Info_UEnum_EBuiltInDoubleCameraVariable.OuterSingleton;
}

// EBuiltInVector2dCameraVariable_StaticEnum @ 14d538540

UEnum * __cdecl EBuiltInVector2dCameraVariable_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EBuiltInVector2dCameraVariable.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UEnum_EBuiltInVector2dCameraVariable.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GameplayCameras_EBuiltInVector2dCameraVariable,
                       (UObject *)pUVar1,L"EBuiltInVector2dCameraVariable");
  }
  return Z_Registration_Info_UEnum_EBuiltInVector2dCameraVariable.OuterSingleton;
}

// EBuiltInRotator3dCameraVariable_StaticEnum @ 14d538580

UEnum * __cdecl EBuiltInRotator3dCameraVariable_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EBuiltInRotator3dCameraVariable.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UEnum_EBuiltInRotator3dCameraVariable.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GameplayCameras_EBuiltInRotator3dCameraVariable,
                       (UObject *)pUVar1,L"EBuiltInRotator3dCameraVariable");
  }
  return Z_Registration_Info_UEnum_EBuiltInRotator3dCameraVariable.OuterSingleton;
}

// Z_Construct_UClass_UCameraDirector_NoRegister @ 14d5385c0

UClass * __cdecl Z_Construct_UClass_UCameraDirector_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraDirector.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CameraDirector",
               &Z_Registration_Info_UClass_UCameraDirector.InnerSingleton,
               UCameraDirector::StaticRegisterNativesUCameraDirector,0x40,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UCameraDirector>,InternalVTableHelperCtorCaller<UCameraDirector>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraDirector.InnerSingleton;
}

// Z_Construct_UScriptStruct_FCameraContextDataDefinition @ 14d538670

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCameraContextDataDefinition(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCameraContextDataDefinition.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCameraContextDataDefinition.InnerSingleton,
               &Z_Construct_UScriptStruct_FCameraContextDataDefinition_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCameraContextDataDefinition.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCameraContextDataDefinition.InnerSingleton;
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

// NewProp_bAutoReset_SetBit @ 14d5386f0

void __cdecl
Z_Construct_UScriptStruct_FCameraContextDataDefinition_Statics::NewProp_bAutoReset_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewStructOps @ 14d538700

void * __cdecl Z_Construct_UScriptStruct_FCameraContextDataDefinition_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCameraContextDataDefinition,&UE::CoreUObject::Private::Construct<FCameraContextDataDefinition>,&UE::CoreUObject::Private::ConstructForTests<FCameraContextDataDefinition>,&UE::CoreUObject::Private::Destruct<FCameraContextDataDefinition>,&UE::CoreUObject::Private::Copy<FCameraContextDataDefinition>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d538740

void * __cdecl
Z_Construct_UScriptStruct_FCameraContextDataTableAllocationInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCameraContextDataTableAllocationInfo,&UE::CoreUObject::Private::Construct<FCameraContextDataTableAllocationInfo>,&UE::CoreUObject::Private::ConstructForTests<FCameraContextDataTableAllocationInfo>,&UE::CoreUObject::Private::Destruct<FCameraContextDataTableAllocationInfo>,&UE::CoreUObject::Private::Copy<FCameraContextDataTableAllocationInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// FCameraIKAimIterationDebugInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> @ 14d5389d0

FArchive * __cdecl
operator<<<UE::Cameras::
FCameraIKAimIterationDebugInfo_TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          (FArchive *param_1,
          TArray<UE::Cameras::FCameraIKAimIterationDebugInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  int *piVar1;
  longlong *plVar2;
  ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo> FVar9;
  uint uVar10;
  uint uVar11;
  FCameraIKAimIterationDebugInfo *pFVar12;
  int iVar13;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x70);
  iVar13 = 0;
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
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo>_>
                (0x70,8,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x24925)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar11 = 0;
          uVar10 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar7 = 0;
              if ((int)uVar11 < (int)uVar10) {
                uVar7 = ~uVar11 >> 0x1f;
              }
              if (uVar7 == 0) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar5) {
                  pcVar4 = (code *)swi(3);
                  pFVar8 = (FArchive *)(*pcVar4)();
                  return pFVar8;
                }
              }
              FVar3 = (param_2->AllocatorInstance).SecondaryData;
              FVar9 = (ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo>)param_2;
              if (FVar3 != (ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo>)0x0) {
                FVar9 = FVar3;
              }
              UE::Cameras::operator<<
                        (param_1,(FCameraIKAimIterationDebugInfo *)
                                 ((longlong)(int)uVar11 * 0x70 + (longlong)FVar9));
              uVar10 = param_2->ArrayNum;
              uVar11 = uVar11 + 1;
            } while ((int)uVar11 < (int)uVar10);
          }
        }
        else {
          TArray<UE::Cameras::FCameraIKAimIterationDebugInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          ::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo>_>
                                  (0x870,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              FVar3 = (param_2->AllocatorInstance).SecondaryData;
              FVar9 = (ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo>)param_2;
              if (FVar3 != (ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo>)0x0) {
                FVar9 = FVar3;
              }
              pFVar12 = (FCameraIKAimIterationDebugInfo *)((longlong)iVar6 * 0x70 + (longlong)FVar9)
              ;
              DefaultConstructItems<UE::Cameras::FCameraIKAimIterationDebugInfo,int>(pFVar12,1);
              UE::Cameras::operator<<(param_1,pFVar12);
              iVar13 = iVar13 + 1;
            } while (iVar13 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FArchive *)(*pcVar4)();
        return pFVar8;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// CastChecked<UScriptStruct_const_,UObject_const_> @ 14d539930

UScriptStruct * __cdecl
CastChecked<UScriptStruct_const_,UObject_const_>(TObjectPtr<UObject_const_> *param_1,Type param_2)

{
  bool bVar1;
  UClass *pUVar2;
  FString *pFVar3;
  UScriptStruct *pUVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  if ((param_1->field0_0x0).DebugPtr == (UObject *)0x0) {
    if (param_2 == NullChecked) {
      pFVar3 = GetTypeName<UScriptStruct_const_>(&local_18);
      if ((pFVar3->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar5);
    }
    pUVar4 = (UScriptStruct *)0x0;
  }
  else {
    pUVar2 = Z_Construct_UClass_UScriptStruct_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)param_1,pUVar2);
    if ((!bVar1) ||
       (pUVar4 = (UScriptStruct *)(param_1->field0_0x0).DebugPtr, pUVar4 == (UScriptStruct *)0x0)) {
      pFVar3 = GetTypeName<UScriptStruct_const_>(&local_28);
      pwVar5 = L"";
      if ((pFVar3->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
      pFVar3 = GetFullNameForCastLogError<UObject_const_>(&local_18,(param_1->field0_0x0).DebugPtr);
      if ((pFVar3->Data).ArrayNum != 0) {
        pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar5,pwVar6);
    }
  }
  return pUVar4;
}

// CastChecked<UCameraNode,UObject> @ 14d5399f0

UCameraNode * __cdecl CastChecked<UCameraNode,UObject>(UObject *param_1,Type param_2)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    if (param_2 != NullChecked) {
      return (UCameraNode *)0x0;
    }
    pFVar3 = GetTypeName<UCameraNode>(&local_18);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UCameraNode::StaticClass();
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

// CompareItems<FCameraContextDataDefinition,int> @ 14d53d650

bool __cdecl
CompareItems<FCameraContextDataDefinition,int>
          (FCameraContextDataDefinition *param_1,FCameraContextDataDefinition *param_2,int param_3)

{
  ECameraContextDataContainerType *pEVar1;
  ECameraContextDataContainerType *pEVar2;
  
  if (param_3 != 0) {
    pEVar2 = &param_2->DataContainerType;
    pEVar1 = &param_1->DataContainerType;
    do {
      if (((((((FCameraContextDataDefinition *)(pEVar1 + -2))->DataID).Value !=
             *(uint *)((longlong)pEVar1 + (longlong)param_2 + (-8 - (longlong)param_1))) ||
           (pEVar1[-1] != pEVar2[-1])) || (*pEVar1 != *pEVar2)) ||
         ((((TObjectPtr<UObject_const_>_u_0 *)(pEVar1 + 2))->DebugPtr !=
           ((TObjectPtr<UObject_const_>_u_0 *)(pEVar2 + 2))->DebugPtr ||
          (*(bool *)(pEVar1 + 4) != *(bool *)(pEVar2 + 4))))) {
        return false;
      }
      pEVar2 = pEVar2 + 8;
      pEVar1 = pEVar1 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// CompareItems<FCameraObjectInterfaceParameterDefinition,int> @ 14d53d6b0

bool __cdecl
CompareItems<FCameraObjectInterfaceParameterDefinition,int>
          (FCameraObjectInterfaceParameterDefinition *param_1,
          FCameraObjectInterfaceParameterDefinition *param_2,int param_3)

{
  uint *puVar1;
  uint *puVar2;
  
  if (param_3 != 0) {
    puVar2 = &(param_2->ParameterGuid).C;
    puVar1 = &(param_1->ParameterGuid).C;
    do {
      if ((((((*(longlong *)(puVar1 + -4) !=
               *(longlong *)((longlong)puVar1 + (longlong)param_2 + (-0x10 - (longlong)param_1))) ||
             (((((FGuid *)(puVar2 + -2))->A != ((FGuid *)(puVar1 + -2))->A || puVar2[1] != puVar1[1]
               ) || puVar2[-1] != puVar1[-1]) || *puVar2 != *puVar1)) ||
            ((char)puVar1[2] != (char)puVar2[2])) ||
           ((puVar1[3] != puVar2[3] || (puVar1[4] != puVar2[4])))) ||
          ((*(longlong *)(puVar1 + 6) != *(longlong *)(puVar2 + 6) ||
           ((puVar1[8] != puVar2[8] || (puVar1[9] != puVar2[9])))))) ||
         ((puVar1[10] != puVar2[10] || (*(longlong *)(puVar1 + 0xc) != *(longlong *)(puVar2 + 0xc)))
         )) {
        return false;
      }
      puVar2 = puVar2 + 0x12;
      puVar1 = puVar1 + 0x12;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// CompareItems<FCameraVariableDefinition,int> @ 14d53d770

bool __cdecl
CompareItems<FCameraVariableDefinition,int>
          (FCameraVariableDefinition *param_1,FCameraVariableDefinition *param_2,int param_3)

{
  TObjectPtr<UScriptStruct_const_>_u_0 *pTVar1;
  TObjectPtr<UScriptStruct_const_>_u_0 *pTVar2;
  
  if (param_3 != 0) {
    pTVar2 = &(param_2->BlendableStructType).field0_0x0;
    pTVar1 = &(param_1->BlendableStructType).field0_0x0;
    do {
      if ((((*(int *)&pTVar1[-1].ObjectPtr.field0_0x0 !=
             *(int *)((longlong)pTVar1 + (longlong)param_2 + (-8 - (longlong)param_1))) ||
           (*(ECameraVariableType *)((longlong)pTVar1 + -4) !=
            *(ECameraVariableType *)((longlong)pTVar2 + -4))) ||
          (pTVar1->DebugPtr != pTVar2->DebugPtr)) ||
         (((*(char *)(pTVar1 + 1) != *(char *)(pTVar2 + 1) ||
           (*(char *)((longlong)pTVar1 + 9) != *(char *)((longlong)pTVar2 + 9))) ||
          (*(char *)((longlong)pTVar1 + 10) != *(char *)((longlong)pTVar2 + 10))))) {
        return false;
      }
      pTVar2 = pTVar2 + 3;
      pTVar1 = pTVar1 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// ConstructItems<TObjectPtr<UClass>,UClass_*,int> @ 14d53d7e0

void __cdecl
ConstructItems<TObjectPtr<UClass>,UClass_*,int>(void *param_1,UClass **param_2,int param_3)

{
  UClass *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      pUVar1 = *param_2;
      *(UClass **)(lVar2 + (longlong)param_2) = pUVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FCameraContextDataDefinition,FCameraContextDataDefinition,int> @ 14d53d840

void __cdecl
ConstructItems<FCameraContextDataDefinition,FCameraContextDataDefinition,int>
          (void *param_1,FCameraContextDataDefinition *param_2,int param_3)

{
  bool *pbVar1;
  TObjectPtr<UObject_const_> TVar2;
  ECameraContextDataContainerType *pEVar3;
  ECameraContextDataContainerType *pEVar4;
  
  if (param_3 != 0) {
    pEVar3 = (ECameraContextDataContainerType *)((longlong)param_1 + 8);
    pEVar4 = &param_2->DataContainerType;
    do {
      pEVar3[-2] = *(ECameraContextDataContainerType *)
                    ((longlong)pEVar3 + (longlong)param_2 + (-8 - (longlong)param_1));
      pEVar3[-1] = pEVar4[-1];
      *pEVar3 = *pEVar4;
      TVar2.field0_0x0 =
           (TObjectPtr<UObject_const_>_u_0)
           ((TObjectPtr<UObject_const_>_u_0 *)(pEVar4 + 2))->DebugPtr;
      ((TObjectPtr<UObject_const_>_u_0 *)(pEVar3 + 2))->DebugPtr = (UObject *)TVar2.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar2.field0_0x0 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar2.field0_0x0);
      }
      pbVar1 = (bool *)(pEVar4 + 4);
      pEVar4 = pEVar4 + 8;
      *(bool *)(pEVar3 + 4) = *pbVar1;
      pEVar3 = pEVar3 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FCameraObjectInterfaceParameterDefinition,FCameraObjectInterfaceParameterDefinition,int> @ 14d53d8d0

void __cdecl
ConstructItems<FCameraObjectInterfaceParameterDefinition,FCameraObjectInterfaceParameterDefinition,int>
          (void *param_1,FCameraObjectInterfaceParameterDefinition *param_2,int param_3)

{
  TObjectPtr<UScriptStruct_const_> TVar1;
  TObjectPtr<UObject_const_> TVar2;
  undefined8 uVar3;
  ECameraObjectInterfaceParameterType *pEVar4;
  ECameraObjectInterfaceParameterType *pEVar5;
  
  if (param_3 != 0) {
    pEVar4 = (ECameraObjectInterfaceParameterType *)((longlong)param_1 + 0x18);
    pEVar5 = &param_2->ParameterType;
    do {
      *(undefined8 *)(pEVar4 + -0x18) =
           *(undefined8 *)(pEVar4 + (longlong)param_2 + (-0x18 - (longlong)param_1));
      uVar3 = *(undefined8 *)(pEVar5 + -8);
      *(undefined8 *)(pEVar4 + -0x10) = *(undefined8 *)(pEVar5 + -0x10);
      *(undefined8 *)(pEVar4 + -8) = uVar3;
      *pEVar4 = *pEVar5;
      *(uint *)(pEVar4 + 4) = ((FCameraVariableID *)(pEVar5 + 4))->Value;
      *(ECameraVariableType *)(pEVar4 + 8) = *(ECameraVariableType *)(pEVar5 + 8);
      TVar1.field0_0x0 =
           (TObjectPtr<UScriptStruct_const_>_u_0)
           ((TObjectPtr<UScriptStruct_const_>_u_0 *)(pEVar5 + 0x10))->DebugPtr;
      ((TObjectPtr<UScriptStruct_const_>_u_0 *)(pEVar4 + 0x10))->DebugPtr =
           (UScriptStruct *)TVar1.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.field0_0x0 != (UScriptStruct *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      *(uint *)(pEVar4 + 0x18) = ((FCameraContextDataID *)(pEVar5 + 0x18))->Value;
      *(ECameraContextDataType *)(pEVar4 + 0x1c) = *(ECameraContextDataType *)(pEVar5 + 0x1c);
      *(ECameraContextDataContainerType *)(pEVar4 + 0x20) =
           *(ECameraContextDataContainerType *)(pEVar5 + 0x20);
      TVar2.field0_0x0 =
           (TObjectPtr<UObject_const_>_u_0)
           ((TObjectPtr<UObject_const_>_u_0 *)(pEVar5 + 0x28))->DebugPtr;
      ((TObjectPtr<UObject_const_>_u_0 *)(pEVar4 + 0x28))->DebugPtr = (UObject *)TVar2.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar2.field0_0x0 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar2.field0_0x0);
      }
      pEVar5 = pEVar5 + 0x48;
      pEVar4 = pEVar4 + 0x48;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FCameraRigProxyRedirectTableEntry,FCameraRigProxyRedirectTableEntry,int> @ 14d53d9a0

void __cdecl
ConstructItems<FCameraRigProxyRedirectTableEntry,FCameraRigProxyRedirectTableEntry,int>
          (void *param_1,FCameraRigProxyRedirectTableEntry *param_2,int param_3)

{
  UCameraRigProxyAsset *pUVar1;
  UCameraRigAsset *pUVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_1 - (longlong)param_2;
    do {
      pUVar1 = (param_2->CameraRigProxy).field0_0x0.DebugPtr;
      *(UCameraRigProxyAsset **)(lVar3 + (longlong)param_2) = pUVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 != (UCameraRigProxyAsset *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      pUVar2 = (param_2->CameraRig).field0_0x0.DebugPtr;
      *(UCameraRigAsset **)(lVar3 + 8 + (longlong)param_2) = pUVar2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UCameraRigAsset *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FCameraVariableDefinition,FCameraVariableDefinition,int> @ 14d53da20

void __cdecl
ConstructItems<FCameraVariableDefinition,FCameraVariableDefinition,int>
          (void *param_1,FCameraVariableDefinition *param_2,int param_3)

{
  undefined1 *puVar1;
  TObjectPtr<UScriptStruct_const_> TVar2;
  TObjectPtr<UScriptStruct_const_>_u_0 *pTVar3;
  TObjectPtr<UScriptStruct_const_>_u_0 *pTVar4;
  
  if (param_3 != 0) {
    pTVar3 = (TObjectPtr<UScriptStruct_const_>_u_0 *)((longlong)param_1 + 8);
    pTVar4 = &(param_2->BlendableStructType).field0_0x0;
    do {
      *(undefined4 *)(pTVar3 + -1) =
           *(undefined4 *)((longlong)pTVar3 + (longlong)param_2 + (-8 - (longlong)param_1));
      *(ECameraVariableType *)((longlong)pTVar3 + -4) =
           *(ECameraVariableType *)((longlong)pTVar4 + -4);
      TVar2.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pTVar4->DebugPtr;
      pTVar3->DebugPtr = (UScriptStruct *)TVar2.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar2.field0_0x0 != (UScriptStruct *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar2.field0_0x0);
      }
      *(undefined1 *)(pTVar3 + 1) = *(undefined1 *)(pTVar4 + 1);
      *(undefined1 *)((longlong)pTVar3 + 9) = *(undefined1 *)((longlong)pTVar4 + 9);
      puVar1 = (undefined1 *)((longlong)pTVar4 + 10);
      pTVar4 = pTVar4 + 3;
      *(undefined1 *)((longlong)pTVar3 + 10) = *puVar1;
      pTVar3 = pTVar3 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<UE::Cameras::FCameraContextDataTable::FEntry,UE::Cameras::FCameraContextDataTable::FEntry,int> @ 14d53dac0

void __cdecl
ConstructItems<UE::Cameras::FCameraContextDataTable::FEntry,UE::Cameras::FCameraContextDataTable::FEntry,int>
          (void *param_1,FEntry *param_2,int param_3)

{
  EEntryFlags *pEVar1;
  TObjectPtr<UObject_const_> TVar2;
  ECameraContextDataContainerType *pEVar3;
  ECameraContextDataContainerType *pEVar4;
  
  if (param_3 != 0) {
    pEVar3 = (ECameraContextDataContainerType *)((longlong)param_1 + 8);
    pEVar4 = &param_2->ContainerType;
    do {
      pEVar3[-2] = *(ECameraContextDataContainerType *)
                    ((longlong)pEVar3 + (longlong)param_2 + (-8 - (longlong)param_1));
      pEVar3[-1] = pEVar4[-1];
      *pEVar3 = *pEVar4;
      TVar2.field0_0x0 =
           (TObjectPtr<UObject_const_>_u_0)
           ((TObjectPtr<UObject_const_>_u_0 *)(pEVar4 + 2))->DebugPtr;
      ((TObjectPtr<UObject_const_>_u_0 *)(pEVar3 + 2))->DebugPtr = (UObject *)TVar2.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar2.field0_0x0 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar2.field0_0x0);
      }
      pEVar3[4] = pEVar4[4];
      pEVar1 = (EEntryFlags *)(pEVar4 + 5);
      pEVar4 = pEVar4 + 8;
      *(EEntryFlags *)(pEVar3 + 5) = *pEVar1;
      pEVar3 = pEVar3 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Cameras::FCameraIKAimIterationDebugInfo,int> @ 14d53db60

void __cdecl
DefaultConstructItems<UE::Cameras::FCameraIKAimIterationDebugInfo,int>(void *param_1,int param_2)

{
  TVector2<double> TVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_2 != 0) {
    puVar3 = (undefined8 *)((longlong)param_1 + 0x38);
    do {
      puVar3[-1] = 0;
      *puVar3 = 0;
      uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      puVar3[1] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      puVar3[2] = uVar2;
      puVar3[3] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      TVar1 = UE::Math::TVector2<double>::ZeroVector;
      *(undefined2 *)(puVar3 + 6) = 0;
      *(undefined1 *)((longlong)puVar3 + 0x32) = 0;
      ((TVector2<double>_u_0 *)(puVar3 + 4))->_s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
      param_2 = param_2 + -1;
      puVar3 = puVar3 + 0xe;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Cameras::FBlendStackRootCameraNodeEvaluator::FBlendedParameterOverrides,int> @ 14d53dbc0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
DestructItems<UE::Cameras::FBlendStackRootCameraNodeEvaluator::FBlendedParameterOverrides,int>
          (FBlendedParameterOverrides *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<TObjectPtr<UCameraRigCameraNode_const_>,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->PrefabTrail;
    do {
      UE::Cameras::FCameraNodeEvaluationResult::~FCameraNodeEvaluationResult
                ((FCameraNodeEvaluationResult *)(pTVar2 + 2));
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 0xa3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Cameras::FCameraBuildLogMessage,int> @ 14d53dc10

void __cdecl
DestructItems<UE::Cameras::FCameraBuildLogMessage,int>(FCameraBuildLogMessage *param_1,int param_2)

{
  ITextData *pIVar1;
  FText *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->Text;
    do {
      pIVar1 = (pFVar2->TextData).Reference;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 0x10))();
      }
      pFVar2 = pFVar2 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Cameras::FCameraRigActivationDeactivationRequest,int> @ 14d53dc50

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
DestructItems<UE::Cameras::FCameraRigActivationDeactivationRequest,int>
          (FCameraRigActivationDeactivationRequest *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->EvaluationContext).SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Cameras::FBlendStackCameraNodeEvaluator::FCameraRigEntry,int> @ 14d53dc90

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
DestructItems<UE::Cameras::FBlendStackCameraNodeEvaluator::FCameraRigEntry,int>
          (FCameraRigEntry *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  if (param_2 != 0) {
    puVar4 = (undefined8 *)&(param_1->EvaluatorHierarchy).TaggedRanges.field_0x40;
    do {
      UE::Cameras::FCameraNodeEvaluationResult::~FCameraNodeEvaluationResult
                ((FCameraNodeEvaluationResult *)(puVar4 + 0x142));
      UE::Cameras::FCameraNodeEvaluationResult::~FCameraNodeEvaluationResult
                ((FCameraNodeEvaluationResult *)(puVar4 + 2));
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
                ((TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)(puVar4 + -0xf));
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
      puVar4 = puVar4 + 0x298;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Cameras::FCameraEvaluationContextStack::FContextEntry,int> @ 14d53dd40

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
DestructItems<UE::Cameras::FCameraEvaluationContextStack::FContextEntry,int>
          (FContextEntry *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FWeakReferencer<1> *pFVar4;
  
  if (param_2 != 0) {
    pFVar4 = &(param_1->WeakContext).WeakReferenceCount;
    do {
      pTVar3 = pFVar4->ReferenceController;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar3->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
        }
      }
      pFVar4 = pFVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<UE::Cameras::FCameraEvaluationContext,1>,int> @ 14d53dd90

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
DestructItems<TSharedPtr<UE::Cameras::FCameraEvaluationContext,1>,int>
          (TSharedPtr<UE::Cameras::FCameraEvaluationContext,1> *param_1,int param_2)

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

// ForEachEvaluator<`UE::Cameras::FCameraIKAim::AimTwoBonesCameraRig'::__l2::<lambda_1>_> @ 14d53f570

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraNodeEvaluatorHierarchy::
ForEachEvaluator<_UE::Cameras::FCameraIKAim::AimTwoBonesCameraRig_::__l2::<lambda_1>_>
          (FCameraNodeEvaluatorHierarchy *this,FName param_1,ECameraNodeEvaluatorFlags param_2,
          <lambda_1> *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  
  uVar4 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->TaggedRanges).field_0x8 != *(int *)&(this->TaggedRanges).field_0x34) {
    puVar6 = *(undefined1 **)&(this->TaggedRanges).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->TaggedRanges).field_0x38;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(this->TaggedRanges).field_0x48 - 1U &
                              param_1.Number + uVar4) * 4);
    if (iVar5 != -1) {
      do {
        lVar10 = *(longlong *)&this->TaggedRanges + (longlong)iVar5 * 0x18;
        if (*(FName *)(*(longlong *)&this->TaggedRanges + (longlong)iVar5 * 0x18) == param_1) {
          if (lVar10 == 0) goto LAB_14d53f5ef;
          goto LAB_14d53f615;
        }
        iVar5 = *(int *)(lVar10 + 0x10);
      } while (iVar5 != -1);
    }
  }
  lVar10 = 0;
LAB_14d53f5ef:
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14d53f615:
  uVar8 = (ulonglong)*(int *)(lVar10 + 8);
  if (*(int *)(lVar10 + 8) < *(int *)(lVar10 + 0xc)) {
    lVar9 = uVar8 * 8;
    do {
      uVar7 = (uint)uVar8;
      uVar4 = 0;
      if ((int)uVar7 < (this->FlattenedHierarchy).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      plVar1 = *(longlong **)((this->FlattenedHierarchy).AllocatorInstance.Data + lVar9);
      if (((*(ECameraNodeEvaluatorFlags *)(plVar1 + 3) & param_2) == param_2) &&
         ((plVar1[2] == 0 || (*(char *)(plVar1[2] + 0x30) != '\0')))) {
        (**(code **)(*plVar1 + 0x50))(plVar1,param_3->OperationParams,param_3->Operation);
      }
      uVar8 = (ulonglong)(uVar7 + 1);
      lVar9 = lVar9 + 8;
    } while ((int)(uVar7 + 1) < *(int *)(lVar10 + 0xc));
  }
  return;
}

// GetTypeName<UEnum_const_> @ 14d53fb40

FString * __cdecl GetTypeName<UEnum_const_>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UEnum_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UCameraNode> @ 14d53fb80

FString * __cdecl GetTypeName<UCameraNode>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UCameraNode::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// InternalConstructor<UAssetReferenceCameraNode> @ 14d5400e0

void __cdecl InternalConstructor<UAssetReferenceCameraNode>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UAssetReferenceCameraNode__6B_;
  }
  return;
}

// InternalConstructor<UBaseCameraObject> @ 14d540110

void __cdecl InternalConstructor<UBaseCameraObject>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UBaseCameraObject__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined4 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    FInstancedStruct::FInstancedStruct((FInstancedStruct *)&this[3].field_0x10);
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined8 *)(this + 4) = 0;
  }
  return;
}

// InternalConstructor<UBlendCameraNode> @ 14d5401a0

void __cdecl InternalConstructor<UBlendCameraNode>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    this[1].field_0x8 = 1;
    *(undefined ***)this = &UBlendCameraNode::_vftable__for__UObject__;
    *(undefined ***)(this + 1) = &UBlendCameraNode::_vftable__for__IObjectTreeGraphObject__;
    *(undefined4 *)&this[1].field_0xc = 0;
  }
  return;
}

// InternalConstructor<UBlendStackCameraNode> @ 14d5401f0

void __cdecl InternalConstructor<UBlendStackCameraNode>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    this[1].field_0x8 = 1;
    *(undefined ***)this = &UBlendStackCameraNode::_vftable__for__UObject__;
    *(undefined8 *)&this[1].field_0xc = 0;
    *(undefined ***)(this + 1) = &UBlendStackCameraNode::_vftable__for__IObjectTreeGraphObject__;
    this[1].field_0x14 = 0;
  }
  return;
}

// InternalConstructor<UBlendStackRootCameraNode> @ 14d540240

void __cdecl InternalConstructor<UBlendStackRootCameraNode>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    this[1].field_0x8 = 1;
    *(undefined ***)this = &UBlendStackRootCameraNode::_vftable__for__UObject__;
    *(undefined ***)(this + 1) = &UBlendStackRootCameraNode::_vftable__for__IObjectTreeGraphObject__
    ;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined4 *)&this[1].field_0xc = 1;
  }
  return;
}

// InternalConstructor<UCameraAsset> @ 14d540290

void __cdecl InternalConstructor<UCameraAsset>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    this[2].field_0x20 = 3;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined ***)this = &UCameraAsset::_vftable__for__UObject__;
    *(undefined8 *)(this + 2) = 0;
    *(undefined ***)(this + 1) = &UCameraAsset::_vftable__for__IHasCameraBuildStatus__;
    *(undefined ***)&this[1].field_0x8 = &UCameraAsset::_vftable__for__IObjectTreeGraphObject__;
    *(undefined ***)&this[1].field_0x10 = &UCameraAsset::_vftable__for__IObjectTreeGraphRootObject__
    ;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    FInstancedStruct::FInstancedStruct((FInstancedStruct *)(this + 3));
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined8 *)(this + 4) = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
    *(undefined8 *)&this[4].field_0x10 = 0;
    *(undefined8 *)&this[4].field_0x18 = 0;
    *(undefined8 *)&this[4].field_0x20 = 0;
  }
  return;
}

// InternalConstructor<UCameraDirector> @ 14d540350

void __cdecl InternalConstructor<UCameraDirector>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UCameraDirector__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
  }
  return;
}

// InternalConstructor<UCameraNode> @ 14d540390

void __cdecl InternalConstructor<UCameraNode>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    this[1].field_0x8 = 1;
    *(undefined ***)this = &UCameraNode::_vftable__for__UObject__;
    *(undefined ***)(this + 1) = &UCameraNode::_vftable__for__IObjectTreeGraphObject__;
    *(undefined4 *)&this[1].field_0xc = 0;
  }
  return;
}

// InternalConstructor<UCameraRigInstanceFunctions> @ 14d5403e0

void __cdecl InternalConstructor<UCameraRigInstanceFunctions>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UCameraRigInstanceFunctions__6B_;
  }
  return;
}

// InternalConstructor<UHasCameraBuildStatus> @ 14d540410

void __cdecl InternalConstructor<UHasCameraBuildStatus>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UHasCameraBuildStatus__6B_;
  }
  return;
}

// InternalConstructor<UObjectTreeGraphObject> @ 14d540440

void __cdecl InternalConstructor<UObjectTreeGraphObject>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UObjectTreeGraphObject__6B_;
  }
  return;
}

// InternalConstructor<UObjectTreeGraphRootObject> @ 14d540470

void __cdecl InternalConstructor<UObjectTreeGraphRootObject>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UObjectTreeGraphRootObject__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UAssetReferenceCameraNode> @ 14d5404a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAssetReferenceCameraNode>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAssetReferenceCameraNode::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAssetReferenceCameraNode__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UBaseCameraObject> @ 14d540550

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UBaseCameraObject>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UBaseCameraObject::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UBaseCameraObject__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined4 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    FInstancedStruct::FInstancedStruct((FInstancedStruct *)&pUVar1[3].field_0x10);
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 4) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UBlendCameraNode> @ 14d540650

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UBlendCameraNode>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UBlendCameraNode::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    pUVar1[1].field_0x8 = 1;
    *(undefined ***)pUVar1 = &UBlendCameraNode::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) = &UBlendCameraNode::_vftable__for__IObjectTreeGraphObject__;
    *(undefined4 *)&pUVar1[1].field_0xc = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UBlendStackCameraNode> @ 14d540710

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UBlendStackCameraNode>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UBlendStackCameraNode::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    pUVar1[1].field_0x8 = 1;
    *(undefined ***)pUVar1 = &UBlendStackCameraNode::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) = &UBlendStackCameraNode::_vftable__for__IObjectTreeGraphObject__;
    *(undefined8 *)&pUVar1[1].field_0xc = 0;
    pUVar1[1].field_0x14 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UBlendStackRootCameraNode> @ 14d5407e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UBlendStackRootCameraNode>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UBlendStackRootCameraNode::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    pUVar1[1].field_0x8 = 1;
    *(undefined ***)pUVar1 = &UBlendStackRootCameraNode::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) =
         &UBlendStackRootCameraNode::_vftable__for__IObjectTreeGraphObject__;
    *(undefined4 *)&pUVar1[1].field_0xc = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCameraAsset> @ 14d5408b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UCameraAsset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCameraAsset::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined ***)pUVar1 = &UCameraAsset::_vftable__for__UObject__;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined ***)(pUVar1 + 1) = &UCameraAsset::_vftable__for__IHasCameraBuildStatus__;
    *(undefined ***)&pUVar1[1].field_0x8 = &UCameraAsset::_vftable__for__IObjectTreeGraphObject__;
    *(undefined ***)&pUVar1[1].field_0x10 =
         &UCameraAsset::_vftable__for__IObjectTreeGraphRootObject__;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    pUVar1[2].field_0x20 = 3;
    FInstancedStruct::FInstancedStruct((FInstancedStruct *)(pUVar1 + 3));
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 4) = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    *(undefined8 *)&pUVar1[4].field_0x10 = 0;
    *(undefined8 *)&pUVar1[4].field_0x18 = 0;
    *(undefined8 *)&pUVar1[4].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCameraDirector> @ 14d5409e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UCameraDirector>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCameraDirector::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UCameraDirector__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCameraNode> @ 14d540aa0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UCameraNode>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCameraNode::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    pUVar1[1].field_0x8 = 1;
    *(undefined ***)pUVar1 = &UCameraNode::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) = &UCameraNode::_vftable__for__IObjectTreeGraphObject__;
    *(undefined4 *)&pUVar1[1].field_0xc = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCameraRigInstanceFunctions> @ 14d540b60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UCameraRigInstanceFunctions>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCameraRigInstanceFunctions::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UCameraRigInstanceFunctions__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UHasCameraBuildStatus> @ 14d540c10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UHasCameraBuildStatus>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UHasCameraBuildStatus::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UHasCameraBuildStatus__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UObjectTreeGraphObject> @ 14d540cc0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UObjectTreeGraphObject>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UObjectTreeGraphObject::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UObjectTreeGraphObject__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UObjectTreeGraphRootObject> @ 14d540d70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UObjectTreeGraphRootObject>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UObjectTreeGraphRootObject::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UObjectTreeGraphRootObject__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IsObjectPtrEqual<UCameraRigAsset_const_,UCameraRigAsset_const_*,0> @ 14d540e20

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UCameraRigAsset_const_,UCameraRigAsset_const_*,0>
          (TObjectPtr<UCameraRigAsset_const_> *param_1,UCameraRigAsset **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UCameraRigAsset *)0x0) {
    return *param_2 == (UCameraRigAsset *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<UCameraRigCameraNode_const_,UCameraRigCameraNode_const_*,0> @ 14d540e40

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UCameraRigCameraNode_const_,UCameraRigCameraNode_const_*,0>
          (TObjectPtr<UCameraRigCameraNode_const_> *param_1,UCameraRigCameraNode **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UCameraRigCameraNode *)0x0) {
    return *param_2 == (UCameraRigCameraNode *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<UObject_const_,UEnum_*,0> @ 14d540e60

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UObject_const_,UEnum_*,0>
          (TObjectPtr<UObject_const_> *param_1,UEnum **param_2)

{
  if ((UEnum *)(param_1->field0_0x0).DebugPtr == (UEnum *)0x0) {
    return *param_2 == (UEnum *)0x0;
  }
  return (UEnum *)(param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<UObject_const_,UScriptStruct_const_*,0> @ 14d540e80

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UObject_const_,UScriptStruct_const_*,0>
          (TObjectPtr<UObject_const_> *param_1,UScriptStruct **param_2)

{
  if ((UScriptStruct *)(param_1->field0_0x0).DebugPtr == (UScriptStruct *)0x0) {
    return *param_2 == (UScriptStruct *)0x0;
  }
  return (UScriptStruct *)(param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<UCameraDirector,UCameraDirector_*,0> @ 14d540ea0

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UCameraDirector,UCameraDirector_*,0>
          (TObjectPtr<UCameraDirector> *param_1,UCameraDirector **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UCameraDirector *)0x0) {
    return *param_2 == (UCameraDirector *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// StaticEnum<enum_EBuiltInDoubleCameraVariable> @ 14d5423a0

UEnum * __cdecl StaticEnum<enum_EBuiltInDoubleCameraVariable>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EBuiltInDoubleCameraVariable.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UEnum_EBuiltInDoubleCameraVariable.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GameplayCameras_EBuiltInDoubleCameraVariable,
                       (UObject *)pUVar1,L"EBuiltInDoubleCameraVariable");
  }
  return Z_Registration_Info_UEnum_EBuiltInDoubleCameraVariable.OuterSingleton;
}

// StaticEnum<enum_EBuiltInRotator3dCameraVariable> @ 14d5423e0

UEnum * __cdecl StaticEnum<enum_EBuiltInRotator3dCameraVariable>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EBuiltInRotator3dCameraVariable.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UEnum_EBuiltInRotator3dCameraVariable.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GameplayCameras_EBuiltInRotator3dCameraVariable,
                       (UObject *)pUVar1,L"EBuiltInRotator3dCameraVariable");
  }
  return Z_Registration_Info_UEnum_EBuiltInRotator3dCameraVariable.OuterSingleton;
}

// StaticEnum<enum_EBuiltInVector2dCameraVariable> @ 14d542420

UEnum * __cdecl StaticEnum<enum_EBuiltInVector2dCameraVariable>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EBuiltInVector2dCameraVariable.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UEnum_EBuiltInVector2dCameraVariable.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GameplayCameras_EBuiltInVector2dCameraVariable,
                       (UObject *)pUVar1,L"EBuiltInVector2dCameraVariable");
  }
  return Z_Registration_Info_UEnum_EBuiltInVector2dCameraVariable.OuterSingleton;
}

// StaticEnum<enum_ECameraBlendStackType> @ 14d542460

UEnum * __cdecl StaticEnum<enum_ECameraBlendStackType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECameraBlendStackType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UEnum_ECameraBlendStackType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GameplayCameras_ECameraBlendStackType,(UObject *)pUVar1,
                       L"ECameraBlendStackType");
  }
  return Z_Registration_Info_UEnum_ECameraBlendStackType.OuterSingleton;
}

// StaticEnum<enum_ECameraBuildStatus> @ 14d5424a0

UEnum * __cdecl StaticEnum<enum_ECameraBuildStatus>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECameraBuildStatus.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UEnum_ECameraBuildStatus.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GameplayCameras_ECameraBuildStatus,(UObject *)pUVar1,
                       L"ECameraBuildStatus");
  }
  return Z_Registration_Info_UEnum_ECameraBuildStatus.OuterSingleton;
}

// StaticEnum<enum_ECameraContextDataContainerType> @ 14d5424e0

UEnum * __cdecl StaticEnum<enum_ECameraContextDataContainerType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECameraContextDataContainerType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UEnum_ECameraContextDataContainerType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GameplayCameras_ECameraContextDataContainerType,
                       (UObject *)pUVar1,L"ECameraContextDataContainerType");
  }
  return Z_Registration_Info_UEnum_ECameraContextDataContainerType.OuterSingleton;
}

// StaticEnum<enum_ECameraContextDataType> @ 14d542520

UEnum * __cdecl StaticEnum<enum_ECameraContextDataType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECameraContextDataType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UEnum_ECameraContextDataType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GameplayCameras_ECameraContextDataType,(UObject *)pUVar1,
                       L"ECameraContextDataType");
  }
  return Z_Registration_Info_UEnum_ECameraContextDataType.OuterSingleton;
}

// StaticEnum<enum_ECameraEvaluationDataCondition> @ 14d542560

UEnum * __cdecl StaticEnum<enum_ECameraEvaluationDataCondition>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECameraEvaluationDataCondition.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UEnum_ECameraEvaluationDataCondition.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GameplayCameras_ECameraEvaluationDataCondition,
                       (UObject *)pUVar1,L"ECameraEvaluationDataCondition");
  }
  return Z_Registration_Info_UEnum_ECameraEvaluationDataCondition.OuterSingleton;
}

// StaticEnum<enum_ECameraNodeOriginPosition> @ 14d5425a0

UEnum * __cdecl StaticEnum<enum_ECameraNodeOriginPosition>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECameraNodeOriginPosition.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UEnum_ECameraNodeOriginPosition.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GameplayCameras_ECameraNodeOriginPosition,(UObject *)pUVar1
                       ,L"ECameraNodeOriginPosition");
  }
  return Z_Registration_Info_UEnum_ECameraNodeOriginPosition.OuterSingleton;
}

// StaticEnum<enum_ECameraNodeSpace> @ 14d5425e0

UEnum * __cdecl StaticEnum<enum_ECameraNodeSpace>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECameraNodeSpace.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UEnum_ECameraNodeSpace.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GameplayCameras_ECameraNodeSpace,(UObject *)pUVar1,
                       L"ECameraNodeSpace");
  }
  return Z_Registration_Info_UEnum_ECameraNodeSpace.OuterSingleton;
}

// StaticEnum<enum_ECameraObjectInterfaceParameterType> @ 14d542620

UEnum * __cdecl StaticEnum<enum_ECameraObjectInterfaceParameterType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECameraObjectInterfaceParameterType.OuterSingleton == (UEnum *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UEnum_ECameraObjectInterfaceParameterType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GameplayCameras_ECameraObjectInterfaceParameterType,
                       (UObject *)pUVar1,L"ECameraObjectInterfaceParameterType");
  }
  return Z_Registration_Info_UEnum_ECameraObjectInterfaceParameterType.OuterSingleton;
}

// StaticEnum<enum_ECameraRigLayer> @ 14d542660

UEnum * __cdecl StaticEnum<enum_ECameraRigLayer>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECameraRigLayer.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UEnum_ECameraRigLayer.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GameplayCameras_ECameraRigLayer,(UObject *)pUVar1,
                       L"ECameraRigLayer");
  }
  return Z_Registration_Info_UEnum_ECameraRigLayer.OuterSingleton;
}

// StaticEnum<enum_ECameraVariableType> @ 14d5426a0

UEnum * __cdecl StaticEnum<enum_ECameraVariableType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECameraVariableType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UEnum_ECameraVariableType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GameplayCameras_ECameraVariableType,(UObject *)pUVar1,
                       L"ECameraVariableType");
  }
  return Z_Registration_Info_UEnum_ECameraVariableType.OuterSingleton;
}

// operator== @ 14d545150

bool __cdecl operator==(FCameraAssetAllocationInfo *param_1,FCameraAssetAllocationInfo *param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = (param_1->VariableTableInfo).VariableDefinitions.ArrayNum;
  if (iVar1 == (param_2->VariableTableInfo).VariableDefinitions.ArrayNum) {
    bVar2 = CompareItems<FCameraVariableDefinition,int>
                      ((FCameraVariableDefinition *)
                       (param_1->VariableTableInfo).VariableDefinitions.AllocatorInstance.Data,
                       (FCameraVariableDefinition *)
                       (param_2->VariableTableInfo).VariableDefinitions.AllocatorInstance.Data,iVar1
                      );
    if ((bVar2) &&
       (iVar1 = (param_1->ContextDataTableInfo).DataDefinitions.ArrayNum,
       iVar1 == (param_2->ContextDataTableInfo).DataDefinitions.ArrayNum)) {
      bVar2 = CompareItems<FCameraContextDataDefinition,int>
                        ((FCameraContextDataDefinition *)
                         (param_1->ContextDataTableInfo).DataDefinitions.AllocatorInstance.Data,
                         (FCameraContextDataDefinition *)
                         (param_2->ContextDataTableInfo).DataDefinitions.AllocatorInstance.Data,
                         iVar1);
      if (bVar2) {
        return true;
      }
    }
  }
  return false;
}

// `vcall'{8,{flat}}'_}' @ 14d545380

/* [thunk]: __cdecl UE::Cameras::ICameraAssetEventHandler::`vcall'{8,{flat}}' }' */

void __thiscall
UE::Cameras::ICameraAssetEventHandler::_vcall__8__flat______(ICameraAssetEventHandler *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014d545383. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this + 8))();
  return;
}

// `vcall'{16,{flat}}'_}' @ 14d54538c

/* [thunk]: __cdecl UE::Cameras::ICameraAssetEventHandler::`vcall'{16,{flat}}' }' */

void __thiscall
UE::Cameras::ICameraAssetEventHandler::_vcall__16__flat______(ICameraAssetEventHandler *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014d54538f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this + 0x10))();
  return;
}

// `vcall'{24,{flat}}'_}' @ 14d545398

/* [thunk]: __cdecl UE::Cameras::ICameraAssetEventHandler::`vcall'{24,{flat}}' }' */

void __thiscall
UE::Cameras::ICameraAssetEventHandler::_vcall__24__flat______(ICameraAssetEventHandler *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014d54539b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this + 0x18))();
  return;
}

// `vcall'{8,{flat}}'_}' @ 14d5453a4

/* [thunk]: __cdecl UE::Cameras::ICameraRigAssetEventHandler::`vcall'{8,{flat}}' }' */

void __thiscall
UE::Cameras::ICameraRigAssetEventHandler::_vcall__8__flat______(ICameraRigAssetEventHandler *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014d5453a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this + 8))();
  return;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d5453b0

/* [thunk]:public: virtual void * __ptr64 __cdecl UBlendCameraNode::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UBlendCameraNode::_vector_deleting_destructor__adjustor_40__(UBlendCameraNode *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UBlendCameraNode *)&this[-1].field_0x10,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d5453c0

/* [thunk]:public: virtual void * __ptr64 __cdecl UBlendStackCameraNode::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UBlendStackCameraNode::_vector_deleting_destructor__adjustor_40__
          (UBlendStackCameraNode *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UBlendStackCameraNode *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d5453d0

/* [thunk]:public: virtual void * __ptr64 __cdecl UBlendStackRootCameraNode::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UBlendStackRootCameraNode::_vector_deleting_destructor__adjustor_40__
          (UBlendStackRootCameraNode *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UBlendStackRootCameraNode *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d5453e0

/* [thunk]:public: virtual void * __ptr64 __cdecl UCameraAsset::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UCameraAsset::_vector_deleting_destructor__adjustor_40__(UCameraAsset *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UCameraAsset *)
                      &this[-1].AllocationInfo.VariableTableInfo.VariableDefinitions.ArrayNum,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 14d5453f0

/* [thunk]:public: virtual void * __ptr64 __cdecl UCameraAsset::`vector deleting
   destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
UCameraAsset::_vector_deleting_destructor__adjustor_48__(UCameraAsset *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UCameraAsset *)&this[-1].AllocationInfo,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{56}' @ 14d545400

/* [thunk]:public: virtual void * __ptr64 __cdecl UCameraAsset::`vector deleting
   destructor'`adjustor{56}' (unsigned int) __ptr64 */

void * __thiscall
UCameraAsset::_vector_deleting_destructor__adjustor_56__(UCameraAsset *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UCameraAsset *)&this[-1].ParameterDefinitions.ArrayNum,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d545410

/* [thunk]:public: virtual void * __ptr64 __cdecl UCameraNode::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UCameraNode::_vector_deleting_destructor__adjustor_40__(UCameraNode *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UCameraNode *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14d545420

void * __thiscall
UE::Cameras::TCameraNodeEvaluator<UBlendStackCameraNode>::_scalar_deleting_destructor_
          (TCameraNodeEvaluator<UBlendStackCameraNode> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d545450

void * __thiscall
UE::Cameras::FBlendStackCameraDebugBlock::_scalar_deleting_destructor_
          (FBlendStackCameraDebugBlock *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14d5454b0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void * __thiscall
UE::Cameras::FBlendStackCameraNodeEvaluator::_scalar_deleting_destructor_
          (FBlendStackCameraNodeEvaluator *this,uint param_1)

{
  ~FBlendStackCameraNodeEvaluator(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d5454f0

void * __thiscall
UE::Cameras::FBlendStackEntryCameraDebugBlock::_scalar_deleting_destructor_
          (FBlendStackEntryCameraDebugBlock *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->CameraRigName).Data.AllocatorInstance.Data;
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

// `scalar_deleting_destructor' @ 14d545560

void * __thiscall
UE::Cameras::FBlendStackRootCameraDebugBlock::_scalar_deleting_destructor_
          (FBlendStackRootCameraDebugBlock *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FString,int>
            ((FString *)(this->BlendedParameterOverridesEntries).AllocatorInstance.Data,
             (this->BlendedParameterOverridesEntries).ArrayNum);
  pFVar1 = (this->BlendedParameterOverridesEntries).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CameraRigAssetName).Data.AllocatorInstance.Data;
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
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d5455f0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void * __thiscall
UE::Cameras::FBlendStackRootCameraNodeEvaluator::_scalar_deleting_destructor_
          (FBlendStackRootCameraNodeEvaluator *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->CameraRigAssetName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<UE::Cameras::FBlendStackRootCameraNodeEvaluator::FBlendedParameterOverrides,int>
            ((FBlendedParameterOverrides *)
             (this->BlendedParameterOverridesStack).AllocatorInstance.Data,
             (this->BlendedParameterOverridesStack).ArrayNum);
  pFVar1 = (this->BlendedParameterOverridesStack).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d545650

void * __thiscall
UE::Cameras::FBlendStackSummaryCameraDebugBlock::_scalar_deleting_destructor_
          (FBlendStackSummaryCameraDebugBlock *this,uint param_1)

{
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

// `scalar_deleting_destructor' @ 14d5456b0

void * __thiscall
UE::Cameras::FCameraDebugBlock::_scalar_deleting_destructor_(FCameraDebugBlock *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FCameraDebugBlock_Cameras_UE__6B_;
  pFVar1 = (this->Children).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Attachments).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d545710

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void * __thiscall
UE::Cameras::FCameraDirectorEvaluator::_scalar_deleting_destructor_
          (FCameraDirectorEvaluator *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this->_padding_ = (longlong)&___7FCameraDirectorEvaluator_Cameras_UE__6B_;
  pTVar3 = (this->WeakOwnerContext).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d545780

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void * __thiscall
UE::Cameras::FCameraEvaluationContext::_scalar_deleting_destructor_
          (FCameraEvaluationContext *this,uint param_1)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  void *pvVar5;
  FScriptContainerElement *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  longlong *plVar8;
  
  *(undefined4 *)&(this->ConditionalResults).field_0x48 = 0;
  *(undefined ***)this = &___7FCameraEvaluationContext_Cameras_UE__6B_;
  pvVar5 = *(void **)&(this->ConditionalResults).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_ECameraEvaluationDataCondition,UE::Cameras::FCameraNodeEvaluationResult>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_ECameraEvaluationDataCondition,UE::Cameras::FCameraNodeEvaluationResult>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->ConditionalResults);
  DestructItems<TSharedPtr<UE::Cameras::FCameraEvaluationContext,1>,int>
            ((TSharedPtr<UE::Cameras::FCameraEvaluationContext,1> *)
             (this->ChildrenContexts).AllocatorInstance.Data,(this->ChildrenContexts).ArrayNum);
  pFVar6 = (this->ChildrenContexts).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pTVar7 = (this->WeakParent).WeakReferenceCount.ReferenceController;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar7->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DirectorEvaluatorStorage).Evaluator.SharedReferenceCount.ReferenceController);
  FCameraNodeEvaluationResult::~FCameraNodeEvaluationResult(&this->InitialResult);
  plVar8 = *(longlong **)&this->field_0x18;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar8 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar8 + 8))(plVar8,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xaf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d545870

void * __thiscall
UE::Cameras::FCameraEvaluationService::_scalar_deleting_destructor_
          (FCameraEvaluationService *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7FCameraEvaluationService_Cameras_UE__6B_;
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
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d5458e0

void * __thiscall
UE::Cameras::FCameraNodeEvaluator::_scalar_deleting_destructor_
          (FCameraNodeEvaluator *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d545910

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void * __thiscall
UE::Cameras::FPersistentBlendStackCameraNodeEvaluator::_scalar_deleting_destructor_
          (FPersistentBlendStackCameraNodeEvaluator *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->EntryExtraInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FBlendStackCameraNodeEvaluator::~FBlendStackCameraNodeEvaluator
            ((FBlendStackCameraNodeEvaluator *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d545960

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void * __thiscall
UE::Cameras::FTransientBlendStackCameraNodeEvaluator::_scalar_deleting_destructor_
          (FTransientBlendStackCameraNodeEvaluator *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ParameterSetterService).SharedReferenceCount.ReferenceController);
  FCameraVariableTable::~FCameraVariableTable(&this->PreBlendVariableTable);
  pFVar1 = (this->EntryExtraInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FBlendStackCameraNodeEvaluator::~FBlendStackCameraNodeEvaluator
            ((FBlendStackCameraNodeEvaluator *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d5459d0

void * __thiscall
IHasCameraBuildStatus::_scalar_deleting_destructor_(IHasCameraBuildStatus *this,uint param_1)

{
  *this = (IHasCameraBuildStatus)&___7IHasCameraBuildStatus__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d545a10

void * __thiscall
IObjectTreeGraphObject::_scalar_deleting_destructor_(IObjectTreeGraphObject *this,uint param_1)

{
  *this = (IObjectTreeGraphObject)&___7IObjectTreeGraphObject__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d545a50

void * __thiscall
IObjectTreeGraphRootObject::_scalar_deleting_destructor_
          (IObjectTreeGraphRootObject *this,uint param_1)

{
  *this = (IObjectTreeGraphRootObject)&___7IObjectTreeGraphRootObject__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d545a90

void * __thiscall
UAssetReferenceCameraNode::_scalar_deleting_destructor_
          (UAssetReferenceCameraNode *this,uint param_1)

{
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d545af0

void * __thiscall
UBaseCameraObject::_scalar_deleting_destructor_(UBaseCameraObject *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UBaseCameraObject__6B_;
  pFVar1 = (this->ParameterDefinitions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FInstancedStruct::Reset(&(this->DefaultParameters).Value);
  pFVar1 = (this->AllocationInfo).ContextDataTableInfo.DataDefinitions.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AllocationInfo).VariableTableInfo.VariableDefinitions.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Interface).DisplayName_DEPRECATED.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Interface).DataParameters.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Interface).BlendableParameters.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d545bc0

void * __thiscall
UBlendCameraNode::_scalar_deleting_destructor_(UBlendCameraNode *this,uint param_1)

{
  *(undefined ***)this = &UCameraNode::_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &___7IObjectTreeGraphObject__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d545c30

void * __thiscall
UBlendStackCameraNode::_scalar_deleting_destructor_(UBlendStackCameraNode *this,uint param_1)

{
  this->_padding_ = (longlong)&UCameraNode::_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IObjectTreeGraphObject__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d545ca0

void * __thiscall
UBlendStackRootCameraNode::_scalar_deleting_destructor_
          (UBlendStackRootCameraNode *this,uint param_1)

{
  this->_padding_ = (longlong)&UCameraNode::_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IObjectTreeGraphObject__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d545d10

void * __thiscall UCameraAsset::_scalar_deleting_destructor_(UCameraAsset *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IHasCameraBuildStatus__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphRootObject__;
  pFVar1 = (this->CameraRigs_DEPRECATED).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AllocationInfo).ContextDataTableInfo.DataDefinitions.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AllocationInfo).VariableTableInfo.VariableDefinitions.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ParameterDefinitions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FInstancedStruct::Reset(&(this->DefaultParameters).Value);
  pFVar1 = (this->ExitTransitions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EnterTransitions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IObjectTreeGraphRootObject__6B_;
  this->_padding_ = (longlong)&___7IObjectTreeGraphObject__6B_;
  this->_padding_ = (longlong)&___7IHasCameraBuildStatus__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d545e20

void * __thiscall UCameraDirector::_scalar_deleting_destructor_(UCameraDirector *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UCameraDirector__6B_;
  pFVar1 = (this->CameraRigProxyRedirectTable).Entries.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d545e90

void * __thiscall UCameraNode::_scalar_deleting_destructor_(UCameraNode *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IObjectTreeGraphObject__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d545f00

void * __thiscall
UCameraRigInstanceFunctions::_scalar_deleting_destructor_
          (UCameraRigInstanceFunctions *this,uint param_1)

{
  *(undefined ***)this = &___7UCameraRigInstanceFunctions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d545f60

void * __thiscall
UHasCameraBuildStatus::_scalar_deleting_destructor_(UHasCameraBuildStatus *this,uint param_1)

{
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d545fc0

void * __thiscall
UObjectTreeGraphObject::_scalar_deleting_destructor_(UObjectTreeGraphObject *this,uint param_1)

{
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d546020

void * __thiscall
UObjectTreeGraphRootObject::_scalar_deleting_destructor_
          (UObjectTreeGraphRootObject *this,uint param_1)

{
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeBaseCameraObject @ 14d553580

void __cdecl EmptyLinkFunctionForGeneratedCodeBaseCameraObject(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeBaseCameraObjectReference @ 14d553590

void __cdecl EmptyLinkFunctionForGeneratedCodeBaseCameraObjectReference(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeBlendCameraNode @ 14d5535a0

void __cdecl EmptyLinkFunctionForGeneratedCodeBlendCameraNode(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeBlendStackCameraNode @ 14d5535b0

void __cdecl EmptyLinkFunctionForGeneratedCodeBlendStackCameraNode(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeBlendStackRootCameraNode @ 14d5535c0

void __cdecl EmptyLinkFunctionForGeneratedCodeBlendStackRootCameraNode(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeBuiltInCameraVariables @ 14d5535d0

void __cdecl EmptyLinkFunctionForGeneratedCodeBuiltInCameraVariables(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCameraAsset @ 14d5535e0

void __cdecl EmptyLinkFunctionForGeneratedCodeCameraAsset(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCameraAssetReference @ 14d5535f0

void __cdecl EmptyLinkFunctionForGeneratedCodeCameraAssetReference(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCameraBuildStatus @ 14d553600

void __cdecl EmptyLinkFunctionForGeneratedCodeCameraBuildStatus(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCameraContextDataTableAllocationInfo @ 14d553610

void __cdecl EmptyLinkFunctionForGeneratedCodeCameraContextDataTableAllocationInfo(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCameraContextDataTableFwd @ 14d553620

void __cdecl EmptyLinkFunctionForGeneratedCodeCameraContextDataTableFwd(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCameraDirector @ 14d553630

void __cdecl EmptyLinkFunctionForGeneratedCodeCameraDirector(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCameraEvaluationContext @ 14d553640

void __cdecl EmptyLinkFunctionForGeneratedCodeCameraEvaluationContext(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCameraNode @ 14d553650

void __cdecl EmptyLinkFunctionForGeneratedCodeCameraNode(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCameraNodeEvaluatorFwd @ 14d553660

void __cdecl EmptyLinkFunctionForGeneratedCodeCameraNodeEvaluatorFwd(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCameraNodeTypes @ 14d553670

void __cdecl EmptyLinkFunctionForGeneratedCodeCameraNodeTypes(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCameraObjectInterfaceParameterDefinition @ 14d553680

void __cdecl EmptyLinkFunctionForGeneratedCodeCameraObjectInterfaceParameterDefinition(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCameraRigInstanceID @ 14d553690

void __cdecl EmptyLinkFunctionForGeneratedCodeCameraRigInstanceID(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCameraShakeInstanceID @ 14d5536a0

void __cdecl EmptyLinkFunctionForGeneratedCodeCameraShakeInstanceID(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCameraVariableTableFwd @ 14d5536b0

void __cdecl EmptyLinkFunctionForGeneratedCodeCameraVariableTableFwd(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGameplayCameras_init @ 14d5536c0

void __cdecl EmptyLinkFunctionForGeneratedCodeGameplayCameras_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeIAssetReferenceCameraNode @ 14d5536d0

void __cdecl EmptyLinkFunctionForGeneratedCodeIAssetReferenceCameraNode(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeObjectTreeGraphObject @ 14d5536e0

void __cdecl EmptyLinkFunctionForGeneratedCodeObjectTreeGraphObject(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeObjectTreeGraphRootObject @ 14d5536f0

void __cdecl EmptyLinkFunctionForGeneratedCodeObjectTreeGraphRootObject(void)

{
  return;
}

// Z_Construct_UClass_UAssetReferenceCameraNode_NoRegister @ 14d56a3c0

UClass * __cdecl Z_Construct_UClass_UAssetReferenceCameraNode_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAssetReferenceCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"AssetReferenceCameraNode",
               &Z_Registration_Info_UClass_UAssetReferenceCameraNode.InnerSingleton,
               UAssetReferenceCameraNode::StaticRegisterNativesUAssetReferenceCameraNode,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAssetReferenceCameraNode>,
               InternalVTableHelperCtorCaller<UAssetReferenceCameraNode>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAssetReferenceCameraNode.InnerSingleton;
}

// Z_Construct_UClass_UBaseCameraObject_NoRegister @ 14d56a480

UClass * __cdecl Z_Construct_UClass_UBaseCameraObject_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBaseCameraObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"BaseCameraObject",
               &Z_Registration_Info_UClass_UBaseCameraObject.InnerSingleton,
               UBaseCameraObject::StaticRegisterNativesUBaseCameraObject,0xa8,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UBaseCameraObject>,
               InternalVTableHelperCtorCaller<UBaseCameraObject>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBaseCameraObject.InnerSingleton;
}

// Z_Construct_UClass_UBlendStackCameraNode_NoRegister @ 14d56a530

UClass * __cdecl Z_Construct_UClass_UBlendStackCameraNode_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlendStackCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"BlendStackCameraNode",
               &Z_Registration_Info_UClass_UBlendStackCameraNode.InnerSingleton,
               UBlendStackCameraNode::StaticRegisterNativesUBlendStackCameraNode,0x40,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UBlendStackCameraNode>,
               InternalVTableHelperCtorCaller<UBlendStackCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlendStackCameraNode.InnerSingleton;
}

// Z_Construct_UClass_UBlendStackRootCameraNode_NoRegister @ 14d56a5f0

UClass * __cdecl Z_Construct_UClass_UBlendStackRootCameraNode_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlendStackRootCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"BlendStackRootCameraNode",
               &Z_Registration_Info_UClass_UBlendStackRootCameraNode.InnerSingleton,
               UBlendStackRootCameraNode::StaticRegisterNativesUBlendStackRootCameraNode,0x48,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UBlendStackRootCameraNode>,
               InternalVTableHelperCtorCaller<UBlendStackRootCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlendStackRootCameraNode.InnerSingleton;
}

// Z_Construct_UClass_UCameraRigInstanceFunctions_NoRegister @ 14d56a6b0

UClass * __cdecl Z_Construct_UClass_UCameraRigInstanceFunctions_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraRigInstanceFunctions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CameraRigInstanceFunctions",
               &Z_Registration_Info_UClass_UCameraRigInstanceFunctions.InnerSingleton,
               UCameraRigInstanceFunctions::StaticRegisterNativesUCameraRigInstanceFunctions,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UCameraRigInstanceFunctions>,
               InternalVTableHelperCtorCaller<UCameraRigInstanceFunctions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraRigInstanceFunctions.InnerSingleton;
}

// Z_Construct_UClass_UHasCameraBuildStatus_NoRegister @ 14d56a770

UClass * __cdecl Z_Construct_UClass_UHasCameraBuildStatus_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UHasCameraBuildStatus.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"HasCameraBuildStatus",
               &Z_Registration_Info_UClass_UHasCameraBuildStatus.InnerSingleton,
               UHasCameraBuildStatus::StaticRegisterNativesUHasCameraBuildStatus,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UHasCameraBuildStatus>,
               InternalVTableHelperCtorCaller<UHasCameraBuildStatus>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UHasCameraBuildStatus.InnerSingleton;
}

// Z_Construct_UClass_UObjectTreeGraphObject_NoRegister @ 14d56a830

UClass * __cdecl Z_Construct_UClass_UObjectTreeGraphObject_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObjectTreeGraphObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"ObjectTreeGraphObject",
               &Z_Registration_Info_UClass_UObjectTreeGraphObject.InnerSingleton,
               UObjectTreeGraphObject::StaticRegisterNativesUObjectTreeGraphObject,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UObjectTreeGraphObject>,
               InternalVTableHelperCtorCaller<UObjectTreeGraphObject>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectTreeGraphObject.InnerSingleton;
}

// Z_Construct_UClass_UObjectTreeGraphRootObject_NoRegister @ 14d56a8f0

UClass * __cdecl Z_Construct_UClass_UObjectTreeGraphRootObject_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObjectTreeGraphRootObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"ObjectTreeGraphRootObject",
               &Z_Registration_Info_UClass_UObjectTreeGraphRootObject.InnerSingleton,
               UObjectTreeGraphRootObject::StaticRegisterNativesUObjectTreeGraphRootObject,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UObjectTreeGraphRootObject>,
               InternalVTableHelperCtorCaller<UObjectTreeGraphRootObject>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectTreeGraphRootObject.InnerSingleton;
}

// Z_Construct_UEnum_GameplayCameras_EBuiltInDoubleCameraVariable @ 14d56a9b0

UEnum * __cdecl Z_Construct_UEnum_GameplayCameras_EBuiltInDoubleCameraVariable(void)

{
  if (Z_Registration_Info_UEnum_EBuiltInDoubleCameraVariable.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EBuiltInDoubleCameraVariable.InnerSingleton,
               &Z_Construct_UEnum_GameplayCameras_EBuiltInDoubleCameraVariable_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EBuiltInDoubleCameraVariable.InnerSingleton;
}

// Z_Construct_UEnum_GameplayCameras_EBuiltInRotator3dCameraVariable @ 14d56a9f0

UEnum * __cdecl Z_Construct_UEnum_GameplayCameras_EBuiltInRotator3dCameraVariable(void)

{
  if (Z_Registration_Info_UEnum_EBuiltInRotator3dCameraVariable.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EBuiltInRotator3dCameraVariable.InnerSingleton,
               &Z_Construct_UEnum_GameplayCameras_EBuiltInRotator3dCameraVariable_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EBuiltInRotator3dCameraVariable.InnerSingleton;
}

// Z_Construct_UEnum_GameplayCameras_EBuiltInVector2dCameraVariable @ 14d56aa30

UEnum * __cdecl Z_Construct_UEnum_GameplayCameras_EBuiltInVector2dCameraVariable(void)

{
  if (Z_Registration_Info_UEnum_EBuiltInVector2dCameraVariable.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EBuiltInVector2dCameraVariable.InnerSingleton,
               &Z_Construct_UEnum_GameplayCameras_EBuiltInVector2dCameraVariable_Statics::EnumParams
              );
  }
  return Z_Registration_Info_UEnum_EBuiltInVector2dCameraVariable.InnerSingleton;
}

// Z_Construct_UEnum_GameplayCameras_ECameraEvaluationDataCondition @ 14d56aa70

UEnum * __cdecl Z_Construct_UEnum_GameplayCameras_ECameraEvaluationDataCondition(void)

{
  if (Z_Registration_Info_UEnum_ECameraEvaluationDataCondition.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ECameraEvaluationDataCondition.InnerSingleton,
               &Z_Construct_UEnum_GameplayCameras_ECameraEvaluationDataCondition_Statics::EnumParams
              );
  }
  return Z_Registration_Info_UEnum_ECameraEvaluationDataCondition.InnerSingleton;
}

// Z_Construct_UEnum_GameplayCameras_ECameraNodeOriginPosition @ 14d56aab0

UEnum * __cdecl Z_Construct_UEnum_GameplayCameras_ECameraNodeOriginPosition(void)

{
  if (Z_Registration_Info_UEnum_ECameraNodeOriginPosition.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ECameraNodeOriginPosition.InnerSingleton,
               &Z_Construct_UEnum_GameplayCameras_ECameraNodeOriginPosition_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ECameraNodeOriginPosition.InnerSingleton;
}

// Z_Construct_UEnum_GameplayCameras_ECameraNodeSpace @ 14d56aaf0

UEnum * __cdecl Z_Construct_UEnum_GameplayCameras_ECameraNodeSpace(void)

{
  if (Z_Registration_Info_UEnum_ECameraNodeSpace.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ECameraNodeSpace.InnerSingleton,
               &Z_Construct_UEnum_GameplayCameras_ECameraNodeSpace_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ECameraNodeSpace.InnerSingleton;
}

// Z_Construct_UScriptStruct_FBaseCameraObjectReference @ 14d56ab30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBaseCameraObjectReference(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FBaseCameraObjectReference.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FBaseCameraObjectReference.InnerSingleton,
               &Z_Construct_UScriptStruct_FBaseCameraObjectReference_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FBaseCameraObjectReference.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FBaseCameraObjectReference.InnerSingleton;
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

// Z_Construct_UScriptStruct_FCameraAssetReference @ 14d56abb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCameraAssetReference(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCameraAssetReference.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCameraAssetReference.InnerSingleton,
               &Z_Construct_UScriptStruct_FCameraAssetReference_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCameraAssetReference.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FCameraAssetReference.InnerSingleton;
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

// Z_Construct_UScriptStruct_FCameraShakeInstanceID @ 14d56ac30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCameraShakeInstanceID(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCameraShakeInstanceID.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCameraShakeInstanceID.InnerSingleton,
               &Z_Construct_UScriptStruct_FCameraShakeInstanceID_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCameraShakeInstanceID.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCameraShakeInstanceID.InnerSingleton;
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

// `dynamic_atexit_destructor_for_'CVarGameplayCamerasDebugBlendStackShowDataIDs'' @ 150456af0

void __cdecl
UE::Cameras::_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugBlendStackShowDataIDs__(void)

{
  CVarGameplayCamerasDebugBlendStackShowDataIDs._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarGameplayCamerasDebugBlendStackShowDataIDs);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGameplayCamerasDebugBlendStackShowUnchanged'' @ 150456b10

void __cdecl
UE::Cameras::_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugBlendStackShowUnchanged__(void)

{
  CVarGameplayCamerasDebugBlendStackShowUnchanged._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarGameplayCamerasDebugBlendStackShowUnchanged);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGameplayCamerasDebugBlendStackShowVariableIDs'' @ 150456b30

void __cdecl
UE::Cameras::_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugBlendStackShowVariableIDs__
          (void)

{
  CVarGameplayCamerasDebugBlendStackShowVariableIDs._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarGameplayCamerasDebugBlendStackShowVariableIDs);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultValue'' @ 150456b50

void __cdecl
`UE::Cameras::FCameraContextDataTable::GetStringData'::__l2::
_dynamic_atexit_destructor_for__DefaultValue__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ::DefaultValue.Data.AllocatorInstance.Data;
  if (::DefaultValue.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (::DefaultValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'StaticField'' @ 150456b70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`UE::Cameras::FBlendStackRootCameraDebugBlock::GetBlendedParameterOverridesEntriesField'::__l2::
_dynamic_atexit_destructor_for__StaticField__(void)

{
  _StaticField = &___7FCameraDebugBlockField_Cameras_UE__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'StaticField'' @ 150456b90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`UE::Cameras::FBlendStackRootCameraDebugBlock::GetCameraRigAssetNameField'::__l2::
_dynamic_atexit_destructor_for__StaticField__(void)

{
  _StaticField = &___7FCameraDebugBlockField_Cameras_UE__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'StaticField'' @ 150456bb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`UE::Cameras::FBlendStackEntryCameraDebugBlock::GetCameraRigNameField'::__l2::
_dynamic_atexit_destructor_for__StaticField__(void)

{
  _StaticField = &___7FCameraDebugBlockField_Cameras_UE__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'StaticField'' @ 150456bd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`UE::Cameras::FBlendStackEntryCameraDebugBlock::GetEntryColorField'::__l2::
_dynamic_atexit_destructor_for__StaticField__(void)

{
  _StaticField = &___7FCameraDebugBlockField_Cameras_UE__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'StaticField'' @ 150456bf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`UE::Cameras::FBlendStackEntryCameraDebugBlock::GetEntryIDField'::__l2::
_dynamic_atexit_destructor_for__StaticField__(void)

{
  _StaticField = &___7FCameraDebugBlockField_Cameras_UE__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'StaticField'' @ 150456c10

void __cdecl
`UE::Cameras::FBlendStackEntryCameraDebugBlock::GetEntryIndexField'::__l2::
_dynamic_atexit_destructor_for__StaticField__(void)

{
  `private:_static_struct_UE::Cameras::TCameraDebugBlockField<int>*___ptr64___cdecl_UE::Cameras::FBlendStackEntryCameraDebugBlock::GetEntryIndexField(void)'
  ::__l2::StaticField._0_8_ = &___7FCameraDebugBlockField_Cameras_UE__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'StaticField'' @ 150456c30

void __cdecl
`UE::Cameras::FBlendStackEntryCameraDebugBlock::GetbIsFrozenField'::__l2::
_dynamic_atexit_destructor_for__StaticField__(void)

{
  `private:_static_struct_UE::Cameras::TCameraDebugBlockField<bool>*___ptr64___cdecl_UE::Cameras::FBlendStackEntryCameraDebugBlock::GetbIsFrozenField(void)'
  ::__l2::StaticField._0_8_ = &___7FCameraDebugBlockField_Cameras_UE__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'StaticFields'' @ 150456c50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`UE::Cameras::FBlendStackEntryCameraDebugBlock::GetStaticFields'::__l2::
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

// `dynamic_atexit_destructor_for_'StaticFields'' @ 150456c70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`UE::Cameras::FBlendStackRootCameraDebugBlock::GetStaticFields'::__l2::
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

