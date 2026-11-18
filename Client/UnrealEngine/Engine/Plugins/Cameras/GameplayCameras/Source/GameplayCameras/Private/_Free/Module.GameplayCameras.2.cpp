// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 924

// BlendStacks'' @ 1413cf610

void __cdecl `dynamic_initializer_for_'UE::Cameras::FCameraDebugCategories::BlendStacks__(void)

{
  ::FString::FString(&UE::Cameras::FCameraDebugCategories::BlendStacks,"blendstacks");
  atexit(`dynamic_atexit_destructor_for_'UE::Cameras::FCameraDebugCategories::BlendStacks__);
  return;
}

// CachedBlendableStructs'' @ 1413cf640

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FCameraVariableTable::CachedBlendableStructs__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UE::Cameras::FCameraVariableTable::CachedBlendableStructs__
        );
  return;
}

// CameraRigIndexFieldIndex'' @ 1413cf660

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FCombinedCameraRigCameraDebugBlock::
CameraRigIndexFieldIndex__(void)

{
  TArray<UE::Cameras::FCameraDebugBlockField_*,TSizedDefaultAllocator<32>_> *pTVar1;
  FName local_res8 [4];
  
  pTVar1 = UE::Cameras::FCombinedCameraRigCameraDebugBlock::GetStaticFields();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<int>*___ptr64___cdecl_UE::Cameras::FCombinedCameraRigCameraDebugBlock::GetCameraRigIndexField(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_struct_UE::Cameras::TCameraDebugBlockField<int>*___ptr64___cdecl_UE::Cameras::FCombinedCameraRigCameraDebugBlock::GetCameraRigIndexField(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_struct_UE::Cameras::TCameraDebugBlockField<int>*___ptr64___cdecl_UE::Cameras::FCombinedCameraRigCameraDebugBlock::GetCameraRigIndexField(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(local_res8,L"CameraRigIndex");
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<int>*___ptr64___cdecl_UE::Cameras::FCombinedCameraRigCameraDebugBlock::GetCameraRigIndexField(void)'
      ::__l2::StaticField._16_4_ = 0x280000;
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<int>*___ptr64___cdecl_UE::Cameras::FCombinedCameraRigCameraDebugBlock::GetCameraRigIndexField(void)'
      ::__l2::StaticField._0_8_ = &___7__TCameraDebugBlockField_H_Cameras_UE__6B_;
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<int>*___ptr64___cdecl_UE::Cameras::FCombinedCameraRigCameraDebugBlock::GetCameraRigIndexField(void)'
      ::__l2::StaticField._8_4_ = local_res8[0].ComparisonIndex.Value;
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<int>*___ptr64___cdecl_UE::Cameras::FCombinedCameraRigCameraDebugBlock::GetCameraRigIndexField(void)'
      ::__l2::StaticField._12_4_ = local_res8[0].Number;
      atexit(`UE::Cameras::FCombinedCameraRigCameraDebugBlock::GetCameraRigIndexField'::__l2::
             _dynamic_atexit_destructor_for__StaticField__);
      _Init_thread_footer(&`private:_static_struct_UE::Cameras::TCameraDebugBlockField<int>*___ptr64___cdecl_UE::Cameras::FCombinedCameraRigCameraDebugBlock::GetCameraRigIndexField(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  UE::Cameras::FCombinedCameraRigCameraDebugBlock::CameraRigIndexFieldIndex =
       UE::Cameras::FCameraDebugBlock::RegisterField
                 ((FCameraDebugBlockField *)
                  &`private:_static_struct_UE::Cameras::TCameraDebugBlockField<int>*___ptr64___cdecl_UE::Cameras::FCombinedCameraRigCameraDebugBlock::GetCameraRigIndexField(void)'
                   ::__l2::StaticField,pTVar1);
  return;
}

// CameraRigNameFieldIndex'' @ 1413cf720

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FCombinedCameraRigCameraDebugBlock::CameraRigNameFieldIndex__
          (void)

{
  TArray<UE::Cameras::FCameraDebugBlockField_*,TSizedDefaultAllocator<32>_> *pTVar1;
  FName local_res8 [4];
  
  pTVar1 = UE::Cameras::FCombinedCameraRigCameraDebugBlock::GetStaticFields();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_struct_UE::Cameras::TCameraDebugBlockField<FString>*___ptr64___cdecl_UE::Cameras::FCombinedCameraRigCameraDebugBlock::GetCameraRigNameField(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_struct_UE::Cameras::TCameraDebugBlockField<FString>*___ptr64___cdecl_UE::Cameras::FCombinedCameraRigCameraDebugBlock::GetCameraRigNameField(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_struct_UE::Cameras::TCameraDebugBlockField<FString>*___ptr64___cdecl_UE::Cameras::FCombinedCameraRigCameraDebugBlock::GetCameraRigNameField(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(local_res8,L"CameraRigName");
      _DAT_155362c40 = 0x300000;
      _StaticField = &___7__TCameraDebugBlockField_VFString___Cameras_UE__6B_;
      _DAT_155362c38 = local_res8[0];
      atexit(`UE::Cameras::FCombinedCameraRigCameraDebugBlock::GetCameraRigNameField'::__l2::
             _dynamic_atexit_destructor_for__StaticField__);
      _Init_thread_footer(&`private:_static_struct_UE::Cameras::TCameraDebugBlockField<FString>*___ptr64___cdecl_UE::Cameras::FCombinedCameraRigCameraDebugBlock::GetCameraRigNameField(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  UE::Cameras::FCombinedCameraRigCameraDebugBlock::CameraRigNameFieldIndex =
       UE::Cameras::FCameraDebugBlock::RegisterField
                 ((FCameraDebugBlockField *)
                  &`private:_static_struct_UE::Cameras::TCameraDebugBlockField<FString>*___ptr64___cdecl_UE::Cameras::FCombinedCameraRigCameraDebugBlock::GetCameraRigNameField(void)'
                   ::__l2::StaticField,pTVar1);
  return;
}

// ChannelName'' @ 1413cf7e0

void __cdecl `dynamic_initializer_for_'UE::Cameras::FCameraSystemTrace::ChannelName__(void)

{
  ::FString::FString(&UE::Cameras::FCameraSystemTrace::ChannelName,"CameraSystemChannel");
  atexit(`dynamic_atexit_destructor_for_'UE::Cameras::FCameraSystemTrace::ChannelName__);
  return;
}

// ColorMap'' @ 1413cf810

void __cdecl `dynamic_initializer_for_'UE::Cameras::FCameraDebugColors::ColorMap__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UE::Cameras::FCameraDebugColors::ColorMap__);
  return;
}

// ColorSchemes'' @ 1413cf830

void __cdecl `dynamic_initializer_for_'UE::Cameras::FCameraDebugColors::ColorSchemes__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UE::Cameras::FCameraDebugColors::ColorSchemes__);
  return;
}

// ContextOwner'' @ 1413cf850

void __cdecl `dynamic_initializer_for_'UE::Cameras::FStateTreeContextDataNames::ContextOwner__(void)

{
  ::FName::FName(&UE::Cameras::FStateTreeContextDataNames::ContextOwner,L"ContextOwner");
  return;
}

// CurrentColorSchemeName'' @ 1413cf870

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FCameraDebugColors::CurrentColorSchemeName__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UE::Cameras::FCameraDebugColors::CurrentColorSchemeName__);
  return;
}

// DirectorTree'' @ 1413cf890

void __cdecl `dynamic_initializer_for_'UE::Cameras::FCameraDebugCategories::DirectorTree__(void)

{
  ::FString::FString(&UE::Cameras::FCameraDebugCategories::DirectorTree,"directortree");
  atexit(`dynamic_atexit_destructor_for_'UE::Cameras::FCameraDebugCategories::DirectorTree__);
  return;
}

// EvaluationEventName'' @ 1413cf8c0

void __cdecl `dynamic_initializer_for_'UE::Cameras::FCameraSystemTrace::EvaluationEventName__(void)

{
  ::FString::FString(&UE::Cameras::FCameraSystemTrace::EvaluationEventName,"CameraSystemEvaluation")
  ;
  atexit(`dynamic_atexit_destructor_for_'UE::Cameras::FCameraSystemTrace::EvaluationEventName__);
  return;
}

// FeatureName'' @ 1413cf8f0

void __cdecl `dynamic_initializer_for_'IMotionController::FeatureName__(void)

{
  ::FName::FName(&IMotionController::FeatureName,L"MotionController");
  return;
}

// GlobalCameraPoseLabel'' @ 1413cf910

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FCameraPoseDebugBlock::GlobalCameraPoseLabel__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UE::Cameras::FCameraPoseDebugBlock::GlobalCameraPoseLabel__
        );
  return;
}

// GlobalCameraPoseLineColor'' @ 1413cf930

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FCameraPoseDebugBlock::GlobalCameraPoseLineColor__(void)

{
  UE::Cameras::FCameraPoseDebugBlock::GlobalCameraPoseLineColor.field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[FColorList::SlateBlue.field0_0x0._s_0.R];
  UE::Cameras::FCameraPoseDebugBlock::GlobalCameraPoseLineColor.field0_0x0._s_0.G =
       FLinearColor::sRGBToLinearTable[FColorList::SlateBlue.field0_0x0._s_0.G];
  UE::Cameras::FCameraPoseDebugBlock::GlobalCameraPoseLineColor.field0_0x0._s_0.B =
       FLinearColor::sRGBToLinearTable[FColorList::SlateBlue.field0_0x0._s_0.B];
  UE::Cameras::FCameraPoseDebugBlock::GlobalCameraPoseLineColor.field0_0x0._s_0.A =
       (float)FColorList::SlateBlue.field0_0x0._3_1_ * __real_3b808081;
  return;
}

// LoggerName'' @ 1413cf9a0

void __cdecl `dynamic_initializer_for_'UE::Cameras::FCameraSystemTrace::LoggerName__(void)

{
  ::FString::FString(&UE::Cameras::FCameraSystemTrace::LoggerName,"CameraSystem");
  atexit(`dynamic_atexit_destructor_for_'UE::Cameras::FCameraSystemTrace::LoggerName__);
  return;
}

// NodeTree'' @ 1413cf9d0

void __cdecl `dynamic_initializer_for_'UE::Cameras::FCameraDebugCategories::NodeTree__(void)

{
  ::FString::FString(&UE::Cameras::FCameraDebugCategories::NodeTree,"nodetree");
  atexit(`dynamic_atexit_destructor_for_'UE::Cameras::FCameraDebugCategories::NodeTree__);
  return;
}

// NodeTreeGraphName'' @ 1413cfa00

void __cdecl `dynamic_initializer_for_'UCameraRigAsset::NodeTreeGraphName__(void)

{
  ::FName::FName(&UCameraRigAsset::NodeTreeGraphName,L"NodeTree");
  return;
}

// PoseStats'' @ 1413cfa20

void __cdecl `dynamic_initializer_for_'UE::Cameras::FCameraDebugCategories::PoseStats__(void)

{
  ::FString::FString(&UE::Cameras::FCameraDebugCategories::PoseStats,"posestats");
  atexit(`dynamic_atexit_destructor_for_'UE::Cameras::FCameraDebugCategories::PoseStats__);
  return;
}

// PrivateTypeID'' @ 1413cfa50

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FActorCameraEvaluationContext::PrivateTypeID__(void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FActorCameraEvaluationContext");
  UE::Cameras::FActorCameraEvaluationContext::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FActorCameraEvaluationContext>)ID;
  local_28.Sizeof = 0xaf0;
  local_28.Alignof = 0x10;
  ID = ID + 1;
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FActorCameraEvaluationContext>::
       StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FActorCameraEvaluationContext>::
       StaticDestructor;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)UE::Cameras::FActorCameraEvaluationContext::PrivateTypeID,
             &local_28);
  return;
}

// PrivateTypeID'' @ 1413cfad0

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FBlendStacksCameraDebugBlock::PrivateTypeID__(void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FBlendStacksCameraDebugBlock");
  UE::Cameras::FBlendStacksCameraDebugBlock::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FBlendStacksCameraDebugBlock>)ID;
  local_28.Sizeof = 0x38;
  local_28.Alignof = 8;
  ID = ID + 1;
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FBlendStacksCameraDebugBlock>::
       StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FBlendStacksCameraDebugBlock>::StaticDestructor
  ;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)UE::Cameras::FBlendStacksCameraDebugBlock::PrivateTypeID,
             &local_28);
  return;
}

// PrivateTypeID'' @ 1413cfb50

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FBlueprintCameraDirectorEvaluator::PrivateTypeID__(void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FBlueprintCameraDirectorEvaluator");
  UE::Cameras::FBlueprintCameraDirectorEvaluator::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FBlueprintCameraDirectorEvaluator>)ID;
  local_28.Sizeof = 0x48;
  local_28.Alignof = 8;
  ID = ID + 1;
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FBlueprintCameraDirectorEvaluator>::
       StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FBlueprintCameraDirectorEvaluator>::
       StaticDestructor;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)UE::Cameras::FBlueprintCameraDirectorEvaluator::PrivateTypeID
             ,&local_28);
  return;
}

// PrivateTypeID'' @ 1413cfbd0

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FCalcCameraActorCameraNodeEvaluator::PrivateTypeID__(void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FCalcCameraActorCameraNodeEvaluator");
  UE::Cameras::FCalcCameraActorCameraNodeEvaluator::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FCalcCameraActorCameraNodeEvaluator>)ID;
  local_28.Sizeof = 0x20;
  local_28.Alignof = 8;
  ID = ID + 1;
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FCalcCameraActorCameraNodeEvaluator>::
       StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FCalcCameraActorCameraNodeEvaluator>::
       StaticDestructor;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)
                  UE::Cameras::FCalcCameraActorCameraNodeEvaluator::PrivateTypeID,&local_28);
  return;
}

// PrivateTypeID'' @ 1413cfc50

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FCameraComponentCameraNodeEvaluator::PrivateTypeID__(void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FCameraComponentCameraNodeEvaluator");
  UE::Cameras::FCameraComponentCameraNodeEvaluator::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FCameraComponentCameraNodeEvaluator>)ID;
  local_28.Sizeof = 0x20;
  local_28.Alignof = 8;
  ID = ID + 1;
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FCameraComponentCameraNodeEvaluator>::
       StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FCameraComponentCameraNodeEvaluator>::
       StaticDestructor;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)
                  UE::Cameras::FCameraComponentCameraNodeEvaluator::PrivateTypeID,&local_28);
  return;
}

// PrivateTypeID'' @ 1413cfcd0

void __cdecl `dynamic_initializer_for_'UE::Cameras::FCameraDebugBlock::PrivateTypeID__(void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FCameraDebugBlock");
  UE::Cameras::FCameraDebugBlock::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FCameraDebugBlock>)ID;
  local_28.Sizeof = 0x28;
  local_28.Alignof = 8;
  ID = ID + 1;
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FCameraDebugBlock>::StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FCameraDebugBlock>::StaticDestructor;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)UE::Cameras::FCameraDebugBlock::PrivateTypeID,&local_28);
  return;
}

// PrivateTypeID'' @ 1413cfd50

void __cdecl `dynamic_initializer_for_'UE::Cameras::FCameraDirectorDebugBlock::PrivateTypeID__(void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FCameraDirectorDebugBlock");
  UE::Cameras::FCameraDirectorDebugBlock::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FCameraDirectorDebugBlock>)ID;
  local_28.Sizeof = 0xd0;
  local_28.Alignof = 0x10;
  ID = ID + 1;
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FCameraDirectorDebugBlock>::StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FCameraDirectorDebugBlock>::StaticDestructor;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)UE::Cameras::FCameraDirectorDebugBlock::PrivateTypeID,
             &local_28);
  return;
}

// PrivateTypeID'' @ 1413cfdd0

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FCameraDirectorTreeDebugBlock::PrivateTypeID__(void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FCameraDirectorTreeDebugBlock");
  UE::Cameras::FCameraDirectorTreeDebugBlock::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FCameraDirectorTreeDebugBlock>)ID;
  local_28.Sizeof = 0x28;
  local_28.Alignof = 8;
  ID = ID + 1;
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FCameraDirectorTreeDebugBlock>::
       StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FCameraDirectorTreeDebugBlock>::
       StaticDestructor;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)UE::Cameras::FCameraDirectorTreeDebugBlock::PrivateTypeID,
             &local_28);
  return;
}

// PrivateTypeID'' @ 1413cfe50

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FCameraEvaluationServiceDebugBlock::PrivateTypeID__(void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FCameraEvaluationServiceDebugBlock");
  UE::Cameras::FCameraEvaluationServiceDebugBlock::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FCameraEvaluationServiceDebugBlock>)ID;
  local_28.Sizeof = 0x38;
  local_28.Alignof = 8;
  ID = ID + 1;
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FCameraEvaluationServiceDebugBlock>::
       StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FCameraEvaluationServiceDebugBlock>::
       StaticDestructor;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)
                  UE::Cameras::FCameraEvaluationServiceDebugBlock::PrivateTypeID,&local_28);
  return;
}

// PrivateTypeID'' @ 1413cfed0

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FCameraNodeEvaluationResultDebugBlock::PrivateTypeID__(void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FCameraNodeEvaluationResultDebugBlock");
  UE::Cameras::FCameraNodeEvaluationResultDebugBlock::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluationResultDebugBlock>)ID;
  local_28.Sizeof = 0x30;
  local_28.Alignof = 8;
  ID = ID + 1;
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluationResultDebugBlock>::
       StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluationResultDebugBlock>::
       StaticDestructor;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)
                  UE::Cameras::FCameraNodeEvaluationResultDebugBlock::PrivateTypeID,&local_28);
  return;
}

// PrivateTypeID'' @ 1413cff50

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FCameraNodeEvaluatorDebugBlock::PrivateTypeID__(void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FCameraNodeEvaluatorDebugBlock");
  UE::Cameras::FCameraNodeEvaluatorDebugBlock::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluatorDebugBlock>)ID;
  local_28.Sizeof = 0x38;
  local_28.Alignof = 8;
  ID = ID + 1;
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluatorDebugBlock>::
       StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluatorDebugBlock>::
       StaticDestructor;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)UE::Cameras::FCameraNodeEvaluatorDebugBlock::PrivateTypeID,
             &local_28);
  return;
}

// PrivateTypeID'' @ 1413cffd0

void __cdecl `dynamic_initializer_for_'UE::Cameras::FCameraPoseDebugBlock::PrivateTypeID__(void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FCameraPoseDebugBlock");
  UE::Cameras::FCameraPoseDebugBlock::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FCameraPoseDebugBlock>)ID;
  local_28.Sizeof = 200;
  local_28.Alignof = 8;
  ID = ID + 1;
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FCameraPoseDebugBlock>::StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FCameraPoseDebugBlock>::StaticDestructor;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)UE::Cameras::FCameraPoseDebugBlock::PrivateTypeID,&local_28);
  return;
}

// PrivateTypeID'' @ 1413d0050

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FCameraPoseLocationTrailDebugBlock::PrivateTypeID__(void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FCameraPoseLocationTrailDebugBlock");
  UE::Cameras::FCameraPoseLocationTrailDebugBlock::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FCameraPoseLocationTrailDebugBlock>)ID;
  local_28.Sizeof = 0x38;
  local_28.Alignof = 8;
  ID = ID + 1;
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FCameraPoseLocationTrailDebugBlock>::
       StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FCameraPoseLocationTrailDebugBlock>::
       StaticDestructor;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)
                  UE::Cameras::FCameraPoseLocationTrailDebugBlock::PrivateTypeID,&local_28);
  return;
}

// PrivateTypeID'' @ 1413d00d0

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FCameraRigJointsDebugBlock::PrivateTypeID__(void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FCameraRigJointsDebugBlock");
  UE::Cameras::FCameraRigJointsDebugBlock::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FCameraRigJointsDebugBlock>)ID;
  local_28.Sizeof = 200;
  local_28.Alignof = 8;
  ID = ID + 1;
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FCameraRigJointsDebugBlock>::StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FCameraRigJointsDebugBlock>::StaticDestructor;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)UE::Cameras::FCameraRigJointsDebugBlock::PrivateTypeID,
             &local_28);
  return;
}

// PrivateTypeID'' @ 1413d0150

void __cdecl `dynamic_initializer_for_'UE::Cameras::FCategoryTitleDebugBlock::PrivateTypeID__(void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FCategoryTitleDebugBlock");
  UE::Cameras::FCategoryTitleDebugBlock::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FCategoryTitleDebugBlock>)ID;
  local_28.Sizeof = 0x50;
  local_28.Alignof = 8;
  ID = ID + 1;
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FCategoryTitleDebugBlock>::StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FCategoryTitleDebugBlock>::StaticDestructor;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)UE::Cameras::FCategoryTitleDebugBlock::PrivateTypeID,
             &local_28);
  return;
}

// PrivateTypeID'' @ 1413d01d0

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FCombinedCameraRigCameraDebugBlock::PrivateTypeID__(void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FCombinedCameraRigCameraDebugBlock");
  UE::Cameras::FCombinedCameraRigCameraDebugBlock::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FCombinedCameraRigCameraDebugBlock>)ID;
  local_28.Sizeof = 0x40;
  local_28.Alignof = 8;
  ID = ID + 1;
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FCombinedCameraRigCameraDebugBlock>::
       StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FCombinedCameraRigCameraDebugBlock>::
       StaticDestructor;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)
                  UE::Cameras::FCombinedCameraRigCameraDebugBlock::PrivateTypeID,&local_28);
  return;
}

// PrivateTypeID'' @ 1413d0250

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FCombinedCameraRigsCameraNodeEvaluator::PrivateTypeID__(void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FCombinedCameraRigsCameraNodeEvaluator");
  UE::Cameras::FCombinedCameraRigsCameraNodeEvaluator::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FCombinedCameraRigsCameraNodeEvaluator>)ID;
  local_28.Sizeof = 0x30;
  local_28.Alignof = 8;
  ID = ID + 1;
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FCombinedCameraRigsCameraNodeEvaluator>::
       StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FCombinedCameraRigsCameraNodeEvaluator>::
       StaticDestructor;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)
                  UE::Cameras::FCombinedCameraRigsCameraNodeEvaluator::PrivateTypeID,&local_28);
  return;
}

// PrivateTypeID'' @ 1413d02d0

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FContextDataTableDebugBlock::PrivateTypeID__(void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FContextDataTableDebugBlock");
  UE::Cameras::FContextDataTableDebugBlock::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FContextDataTableDebugBlock>)ID;
  local_28.Sizeof = 0x48;
  local_28.Alignof = 8;
  ID = ID + 1;
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FContextDataTableDebugBlock>::StaticConstructor
  ;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FContextDataTableDebugBlock>::StaticDestructor;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)UE::Cameras::FContextDataTableDebugBlock::PrivateTypeID,
             &local_28);
  return;
}

// PrivateTypeID'' @ 1413d0350

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FDefaultRootCameraNodeEvaluator::PrivateTypeID__(void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FDefaultRootCameraNodeEvaluator");
  UE::Cameras::FDefaultRootCameraNodeEvaluator::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FDefaultRootCameraNodeEvaluator>)ID;
  local_28.Sizeof = 0xa80;
  local_28.Alignof = 0x10;
  ID = ID + 1;
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FDefaultRootCameraNodeEvaluator>::
       StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FDefaultRootCameraNodeEvaluator>::
       StaticDestructor;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)UE::Cameras::FDefaultRootCameraNodeEvaluator::PrivateTypeID,
             &local_28);
  return;
}

// PrivateTypeID'' @ 1413d03d0

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FDefaultRootCameraNodeEvaluatorDebugBlock::PrivateTypeID__
          (void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FDefaultRootCameraNodeEvaluatorDebugBlock");
  UE::Cameras::FDefaultRootCameraNodeEvaluatorDebugBlock::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FDefaultRootCameraNodeEvaluatorDebugBlock>)ID;
  local_28.Sizeof = 0x28;
  local_28.Alignof = 8;
  ID = ID + 1;
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FDefaultRootCameraNodeEvaluatorDebugBlock>::
       StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FDefaultRootCameraNodeEvaluatorDebugBlock>::
       StaticDestructor;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)
                  UE::Cameras::FDefaultRootCameraNodeEvaluatorDebugBlock::PrivateTypeID,&local_28);
  return;
}

// PrivateTypeID'' @ 1413d0450

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FPersistentBlendStackCameraNodeEvaluator::PrivateTypeID__
          (void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FPersistentBlendStackCameraNodeEvaluator");
  UE::Cameras::FPersistentBlendStackCameraNodeEvaluator::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FPersistentBlendStackCameraNodeEvaluator>)ID;
  local_28.Sizeof = 0x70;
  local_28.Alignof = 8;
  ID = ID + 1;
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FPersistentBlendStackCameraNodeEvaluator>::
       StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FPersistentBlendStackCameraNodeEvaluator>::
       StaticDestructor;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)
                  UE::Cameras::FPersistentBlendStackCameraNodeEvaluator::PrivateTypeID,&local_28);
  return;
}

// PrivateTypeID'' @ 1413d04d0

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FPlayerControllersDebugBlock::PrivateTypeID__(void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FPlayerControllersDebugBlock");
  UE::Cameras::FPlayerControllersDebugBlock::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FPlayerControllersDebugBlock>)ID;
  local_28.Sizeof = 0x40;
  local_28.Alignof = 8;
  ID = ID + 1;
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FPlayerControllersDebugBlock>::
       StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FPlayerControllersDebugBlock>::StaticDestructor
  ;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)UE::Cameras::FPlayerControllersDebugBlock::PrivateTypeID,
             &local_28);
  return;
}

// PrivateTypeID'' @ 1413d0550

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FPostProcessSettingsDebugBlock::PrivateTypeID__(void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FPostProcessSettingsDebugBlock");
  UE::Cameras::FPostProcessSettingsDebugBlock::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FPostProcessSettingsDebugBlock>)ID;
  local_28.Sizeof = 0x7a0;
  local_28.Alignof = 0x10;
  ID = ID + 1;
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FPostProcessSettingsDebugBlock>::
       StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FPostProcessSettingsDebugBlock>::
       StaticDestructor;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)UE::Cameras::FPostProcessSettingsDebugBlock::PrivateTypeID,
             &local_28);
  return;
}

// PrivateTypeID'' @ 1413d05d0

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FPriorityQueueCameraDirectorEvaluator::PrivateTypeID__(void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FPriorityQueueCameraDirectorEvaluator");
  UE::Cameras::FPriorityQueueCameraDirectorEvaluator::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FPriorityQueueCameraDirectorEvaluator>)ID;
  local_28.Sizeof = 0x48;
  local_28.Alignof = 8;
  ID = ID + 1;
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FPriorityQueueCameraDirectorEvaluator>::
       StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FPriorityQueueCameraDirectorEvaluator>::
       StaticDestructor;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)
                  UE::Cameras::FPriorityQueueCameraDirectorEvaluator::PrivateTypeID,&local_28);
  return;
}

// PrivateTypeID'' @ 1413d0650

void __cdecl `dynamic_initializer_for_'UE::Cameras::FRootCameraDebugBlock::PrivateTypeID__(void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FRootCameraDebugBlock");
  UE::Cameras::FRootCameraDebugBlock::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FRootCameraDebugBlock>)ID;
  local_28.Sizeof = 0x30;
  local_28.Alignof = 8;
  ID = ID + 1;
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FRootCameraDebugBlock>::StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FRootCameraDebugBlock>::StaticDestructor;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)UE::Cameras::FRootCameraDebugBlock::PrivateTypeID,&local_28);
  return;
}

// PrivateTypeID'' @ 1413d06d0

void __cdecl `dynamic_initializer_for_'UE::Cameras::FShakeCameraNodeEvaluator::PrivateTypeID__(void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FShakeCameraNodeEvaluator");
  UE::Cameras::FShakeCameraNodeEvaluator::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FShakeCameraNodeEvaluator>)ID;
  local_28.Sizeof = 0x20;
  local_28.Alignof = 8;
  ID = ID + 1;
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FShakeCameraNodeEvaluator>::StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FShakeCameraNodeEvaluator>::StaticDestructor;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)UE::Cameras::FShakeCameraNodeEvaluator::PrivateTypeID,
             &local_28);
  return;
}

// PrivateTypeID'' @ 1413d0750

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FSingleCameraDirectorEvaluator::PrivateTypeID__(void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FSingleCameraDirectorEvaluator");
  UE::Cameras::FSingleCameraDirectorEvaluator::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FSingleCameraDirectorEvaluator>)ID;
  local_28.Sizeof = 0x38;
  local_28.Alignof = 8;
  ID = ID + 1;
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FSingleCameraDirectorEvaluator>::
       StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FSingleCameraDirectorEvaluator>::
       StaticDestructor;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)UE::Cameras::FSingleCameraDirectorEvaluator::PrivateTypeID,
             &local_28);
  return;
}

// PrivateTypeID'' @ 1413d07d0

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FStateTreeCameraDirectorEvaluator::PrivateTypeID__(void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FStateTreeCameraDirectorEvaluator");
  UE::Cameras::FStateTreeCameraDirectorEvaluator::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FStateTreeCameraDirectorEvaluator>)ID;
  local_28.Sizeof = 0x68;
  local_28.Alignof = 8;
  ID = ID + 1;
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FStateTreeCameraDirectorEvaluator>::
       StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FStateTreeCameraDirectorEvaluator>::
       StaticDestructor;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)UE::Cameras::FStateTreeCameraDirectorEvaluator::PrivateTypeID
             ,&local_28);
  return;
}

// PrivateTypeID'' @ 1413d0850

void __cdecl
`dynamic_initializer_for_'UE::Cameras::FTransientBlendStackCameraNodeEvaluator::PrivateTypeID__
          (void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FTransientBlendStackCameraNodeEvaluator");
  UE::Cameras::FTransientBlendStackCameraNodeEvaluator::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FTransientBlendStackCameraNodeEvaluator>)ID;
  local_28.Sizeof = 0xf0;
  local_28.Alignof = 8;
  ID = ID + 1;
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FTransientBlendStackCameraNodeEvaluator>::
       StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FTransientBlendStackCameraNodeEvaluator>::
       StaticDestructor;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)
                  UE::Cameras::FTransientBlendStackCameraNodeEvaluator::PrivateTypeID,&local_28);
  return;
}

// PrivateTypeID'' @ 1413d08d0

void __cdecl `dynamic_initializer_for_'UE::Cameras::FVariableTableDebugBlock::PrivateTypeID__(void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FVariableTableDebugBlock");
  UE::Cameras::FVariableTableDebugBlock::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FVariableTableDebugBlock>)ID;
  local_28.Sizeof = 0x48;
  local_28.Alignof = 8;
  ID = ID + 1;
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FVariableTableDebugBlock>::StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FVariableTableDebugBlock>::StaticDestructor;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)UE::Cameras::FVariableTableDebugBlock::PrivateTypeID,
             &local_28);
  return;
}

// PrivateTypeID'' @ 1413d0950

void __cdecl `dynamic_initializer_for_'UE::Cameras::FViewfinderDebugBlock::PrivateTypeID__(void)

{
  FCameraObjectTypeRegistry *this;
  FName local_res8 [4];
  FCameraObjectTypeInfo local_28;
  
  ::FName::FName(local_res8,"FViewfinderDebugBlock");
  UE::Cameras::FViewfinderDebugBlock::PrivateTypeID =
       (TCameraObjectTypeID<UE::Cameras::FViewfinderDebugBlock>)ID;
  local_28.Sizeof = 0x28;
  local_28.Alignof = 8;
  ID = ID + 1;
  local_28.TypeName = local_res8[0];
  local_28.Constructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FViewfinderDebugBlock>::StaticConstructor;
  local_28.Destructor =
       UE::Cameras::TCameraObjectTypeID<UE::Cameras::FViewfinderDebugBlock>::StaticDestructor;
  this = UE::Cameras::FCameraObjectTypeRegistry::Get();
  UE::Cameras::FCameraObjectTypeRegistry::RegisterType
            (this,(FCameraObjectTypeID)UE::Cameras::FViewfinderDebugBlock::PrivateTypeID,&local_28);
  return;
}

// Services'' @ 1413d09d0

void __cdecl `dynamic_initializer_for_'UE::Cameras::FCameraDebugCategories::Services__(void)

{
  ::FString::FString(&UE::Cameras::FCameraDebugCategories::Services,"services");
  atexit(`dynamic_atexit_destructor_for_'UE::Cameras::FCameraDebugCategories::Services__);
  return;
}

// TransitionsGraphName'' @ 1413d0a00

void __cdecl `dynamic_initializer_for_'UCameraRigAsset::TransitionsGraphName__(void)

{
  ::FName::FName(&UCameraRigAsset::TransitionsGraphName,L"Transitions");
  return;
}

// Viewfinder'' @ 1413d0a20

void __cdecl `dynamic_initializer_for_'UE::Cameras::FCameraDebugCategories::Viewfinder__(void)

{
  ::FString::FString(&UE::Cameras::FCameraDebugCategories::Viewfinder,"viewfinder");
  atexit(`dynamic_atexit_destructor_for_'UE::Cameras::FCameraDebugCategories::Viewfinder__);
  return;
}

// `dynamic_initializer_for_'CVarGameplayCamerasDebugBackgroundDepthSortKey'' @ 1413d0a50

void __cdecl
UE::Cameras::_dynamic_initializer_for__CVarGameplayCamerasDebugBackgroundDepthSortKey__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGameplayCamerasDebugBackgroundDepthSortKey,
             L"GameplayCameras.Debug.BackgroundDepthSortKey",
             &GGameplayCamerasDebugBackgroundDepthSortKey,
             L"Default: 1. The sort key for drawing the background behind debug text and debug cards."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugBackgroundDepthSortKey__);
  return;
}

// `dynamic_initializer_for_'CVarGameplayCamerasDebugBackgroundOpacity'' @ 1413d0aa0

void __cdecl
UE::Cameras::_dynamic_initializer_for__CVarGameplayCamerasDebugBackgroundOpacity__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGameplayCamerasDebugBackgroundOpacity,L"GameplayCameras.Debug.BackgroundOpacity",
             &GGameplayCamerasDebugBackgroundOpacity,L"",0);
  atexit(_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugBackgroundOpacity__);
  return;
}

// `dynamic_initializer_for_'CVarGameplayCamerasDebugBlendStacksFilter'' @ 1413d0af0

void __cdecl
UE::Cameras::_dynamic_initializer_for__CVarGameplayCamerasDebugBlendStacksFilter__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGameplayCamerasDebugBlendStacksFilter,L"GameplayCameras.Debug.BlendStacks.Filter",
             &GGameplayCamerasDebugBlendStacksFilter,L"",0);
  atexit(_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugBlendStacksFilter__);
  return;
}

// `dynamic_initializer_for_'CVarGameplayCamerasDebugCameraPoseLabelWorldOffset'' @ 1413d0b40

void __cdecl
UE::Cameras::_dynamic_initializer_for__CVarGameplayCamerasDebugCameraPoseLabelWorldOffset__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGameplayCamerasDebugCameraPoseLabelWorldOffset,
             L"GameplayCameras.Debug.CameraPose.LabelWorldOffset",
             &GGameplayCamerasDebugCameraPoseLabelWorldOffset,L"",0);
  atexit(_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugCameraPoseLabelWorldOffset__);
  return;
}

// `dynamic_initializer_for_'CVarGameplayCamerasDebugCardGap'' @ 1413d0b90

void __cdecl UE::Cameras::_dynamic_initializer_for__CVarGameplayCamerasDebugCardGap__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGameplayCamerasDebugCardGap,L"GameplayCameras.Debug.CardGap",
             &GGameplayCamerasDebugCardGap,
             L"Default: 10px. The gap between the debug cards (e.g. graphs, clocks, etc.)",0);
  atexit(_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugCardGap__);
  return;
}

// `dynamic_initializer_for_'CVarGameplayCamerasDebugCardHeight'' @ 1413d0be0

void __cdecl UE::Cameras::_dynamic_initializer_for__CVarGameplayCamerasDebugCardHeight__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGameplayCamerasDebugCardHeight,L"GameplayCameras.Debug.CardHeight",
             &GGameplayCamerasDebugCardHeight,
             L"Default: 250px. The height of the debug cards (e.g. graphs, clocks, etc.)",0);
  atexit(_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugCardHeight__);
  return;
}

// `dynamic_initializer_for_'CVarGameplayCamerasDebugCardWidth'' @ 1413d0c30

void __cdecl UE::Cameras::_dynamic_initializer_for__CVarGameplayCamerasDebugCardWidth__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGameplayCamerasDebugCardWidth,L"GameplayCameras.Debug.CardWidth",
             &GGameplayCamerasDebugCardWidth,
             L"Default: 200px. The width of the debug cards (e.g. graphs, clocks, etc.)",0);
  atexit(_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugCardWidth__);
  return;
}

// `dynamic_initializer_for_'CVarGameplayCamerasDebugCategories'' @ 1413d0c80

void __cdecl UE::Cameras::_dynamic_initializer_for__CVarGameplayCamerasDebugCategories__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGameplayCamerasDebugCategories,L"GameplayCameras.Debug.Categories",
             &GGameplayCamerasDebugCategories,
             L"(Default: nodes. Specifies which debug categories to display the GameplayCameras system."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugCategories__);
  return;
}

// `dynamic_initializer_for_'CVarGameplayCamerasDebugClockArrowThickness'' @ 1413d0cd0

void __cdecl
UE::Cameras::_dynamic_initializer_for__CVarGameplayCamerasDebugClockArrowThickness__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGameplayCamerasDebugClockArrowThickness,
             L"GameplayCameras.DebugClock.ArrowThickness",&GGameplayCamerasDebugClockArrowThickness,
             L"Default: 3px. The thickness of the clock arrow.",0);
  atexit(_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugClockArrowThickness__);
  return;
}

// `dynamic_initializer_for_'CVarGameplayCamerasDebugClockPadding'' @ 1413d0d20

void __cdecl UE::Cameras::_dynamic_initializer_for__CVarGameplayCamerasDebugClockPadding__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGameplayCamerasDebugClockPadding,L"GameplayCameras.DebugClock.Margin",
             &GGameplayCamerasDebugClockPadding,
             L"Default: 10px. The uniform padding inside the debug clock card.",0);
  atexit(_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugClockPadding__);
  return;
}

// `dynamic_initializer_for_'CVarGameplayCamerasDebugColorScheme'' @ 1413d0d70

void __cdecl UE::Cameras::_dynamic_initializer_for__CVarGameplayCamerasDebugColorScheme__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGameplayCamerasDebugColorScheme,L"GameplayCameras.Debug.ColorScheme",
             &GGameplayCamerasDebugColorScheme,L"",0);
  atexit(_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugColorScheme__);
  return;
}

// `dynamic_initializer_for_'CVarGameplayCamerasDebugContextInitialResultShowCoordinateSystem'' @ 1413d0dc0

void __cdecl
UE::Cameras::
_dynamic_initializer_for__CVarGameplayCamerasDebugContextInitialResultShowCoordinateSystem__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGameplayCamerasDebugContextInitialResultShowCoordinateSystem,
             L"GameplayCameras.Debug.ContextInitialResult.ShowCoordinateSystem",
             &GGameplayCamerasDebugContextInitialResultShowCoordinateSystem,L"",0);
  atexit(
        _dynamic_atexit_destructor_for__CVarGameplayCamerasDebugContextInitialResultShowCoordinateSystem__
        );
  return;
}

// `dynamic_initializer_for_'CVarGameplayCamerasDebugContextInitialResultShowDataIDs'' @ 1413d0e10

void __cdecl
UE::Cameras::_dynamic_initializer_for__CVarGameplayCamerasDebugContextInitialResultShowDataIDs__
          (void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGameplayCamerasDebugContextInitialResultShowDataIDs,
             L"GameplayCameras.Debug.ContextInitialResult.ShowDataIDs",
             &GGameplayCamerasDebugContextInitialResultShowDataIDs,L"",0);
  atexit(_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugContextInitialResultShowDataIDs__);
  return;
}

// `dynamic_initializer_for_'CVarGameplayCamerasDebugContextInitialResultShowUnchanged'' @ 1413d0e60

void __cdecl
UE::Cameras::_dynamic_initializer_for__CVarGameplayCamerasDebugContextInitialResultShowUnchanged__
          (void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGameplayCamerasDebugContextInitialResultShowUnchanged,
             L"GameplayCameras.Debug.ContextInitialResult.ShowUnchanged",
             &GGameplayCamerasDebugContextInitialResultShowUnchanged,L"",0);
  atexit(_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugContextInitialResultShowUnchanged__
        );
  return;
}

// `dynamic_initializer_for_'CVarGameplayCamerasDebugContextInitialResultShowVariableIDs'' @ 1413d0eb0

void __cdecl
UE::Cameras::_dynamic_initializer_for__CVarGameplayCamerasDebugContextInitialResultShowVariableIDs__
          (void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGameplayCamerasDebugContextInitialResultShowVariableIDs,
             L"GameplayCameras.Debug.ContextInitialResult.ShowVariableIDs",
             &GGameplayCamerasDebugContextInitialResultShowVariableIDs,L"",0);
  atexit(
        _dynamic_atexit_destructor_for__CVarGameplayCamerasDebugContextInitialResultShowVariableIDs__
        );
  return;
}

// `dynamic_initializer_for_'CVarGameplayCamerasDebugDefaultCameraSize'' @ 1413d0f00

void __cdecl
UE::Cameras::_dynamic_initializer_for__CVarGameplayCamerasDebugDefaultCameraSize__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGameplayCamerasDebugDefaultCameraSize,L"GameplayCameras.Debug.DefaultCameraSize",
             &GGameplayCamerasDebugDefaultCameraSize,
             L"Default: 50. The default size of debug cameras.",0);
  atexit(_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugDefaultCameraSize__);
  return;
}

// `dynamic_initializer_for_'CVarGameplayCamerasDebugDefaultCoordinateSystemAxesLength'' @ 1413d0f50

void __cdecl
UE::Cameras::_dynamic_initializer_for__CVarGameplayCamerasDebugDefaultCoordinateSystemAxesLength__
          (void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGameplayCamerasDebugDefaultCoordinateSystemAxesLength,
             L"GameplayCameras.Debug.DefaultCoordinateSystemAxesLength",
             &GGameplayCamerasDebugDefaultCoordinateSystemAxesLength,
             L"Default: 100. The default length of coordinate system axes.",0);
  atexit(_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugDefaultCoordinateSystemAxesLength__
        );
  return;
}

// `dynamic_initializer_for_'CVarGameplayCamerasDebugDrawBackground'' @ 1413d0fa0

void __cdecl UE::Cameras::_dynamic_initializer_for__CVarGameplayCamerasDebugDrawBackground__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGameplayCamerasDebugDrawBackground,L"GameplayCameras.Debug.DrawBackground",
             &GGameplayCamerasDebugDrawBackground,L"",0);
  atexit(_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugDrawBackground__);
  return;
}

// `dynamic_initializer_for_'CVarGameplayCamerasDebugEnable'' @ 1413d0ff0

void __cdecl UE::Cameras::_dynamic_initializer_for__CVarGameplayCamerasDebugEnable__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGameplayCamerasDebugEnable,L"GameplayCameras.Debug.Enable",
             &GGameplayCamerasDebugEnable,
             L"(Default: false. Enables debug drawing for the GameplayCameras system.",0);
  atexit(_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugEnable__);
  return;
}

// `dynamic_initializer_for_'CVarGameplayCamerasDebugGraphDefaultHistoryTime'' @ 1413d1040

void __cdecl
UE::Cameras::_dynamic_initializer_for__CVarGameplayCamerasDebugGraphDefaultHistoryTime__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGameplayCamerasDebugGraphDefaultHistoryTime,
             L"GameplayCameras.DebugGraph.DefaultHistoryTime",
             &GGameplayCamerasDebugGraphDefaultHistoryTime,
             L"Default: 2s. The default amount of the time in seconds displayed by a debug graph.",0
            );
  atexit(_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugGraphDefaultHistoryTime__);
  return;
}

// `dynamic_initializer_for_'CVarGameplayCamerasDebugGraphPadding'' @ 1413d1090

void __cdecl UE::Cameras::_dynamic_initializer_for__CVarGameplayCamerasDebugGraphPadding__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGameplayCamerasDebugGraphPadding,L"GameplayCameras.DebugGraph.Padding",
             &GGameplayCamerasDebugGraphPadding,
             L"Default: 10px. The uniform padding inside the debug graph card.",0);
  atexit(_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugGraphPadding__);
  return;
}

// `dynamic_initializer_for_'CVarGameplayCamerasDebugIndent'' @ 1413d10e0

void __cdecl UE::Cameras::_dynamic_initializer_for__CVarGameplayCamerasDebugIndent__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGameplayCamerasDebugIndent,L"GameplayCameras.Debug.Indent",
             &GGameplayCamerasDebugIndent,
             L"(Default: 20px. The indent for rendering Gameplay Cameras debug text.",0);
  atexit(_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugIndent__);
  return;
}

// `dynamic_initializer_for_'CVarGameplayCamerasDebugInnerMargin'' @ 1413d1130

void __cdecl UE::Cameras::_dynamic_initializer_for__CVarGameplayCamerasDebugInnerMargin__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGameplayCamerasDebugInnerMargin,L"GameplayCameras.Debug.InnerMargin",
             &GGameplayCamerasDebugInnerMargin,
             L"(Default: 10px. The inner margin for rendering Gameplay Cameras debug text.",0);
  atexit(_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugInnerMargin__);
  return;
}

// `dynamic_initializer_for_'CVarGameplayCamerasDebugLeftMargin'' @ 1413d1180

void __cdecl UE::Cameras::_dynamic_initializer_for__CVarGameplayCamerasDebugLeftMargin__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGameplayCamerasDebugLeftMargin,L"GameplayCameras.Debug.LeftMargin",
             &GGameplayCamerasDebugLeftMargin,
             L"(Default: 10px. The left margin for rendering Gameplay Cameras debug text.",0);
  atexit(_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugLeftMargin__);
  return;
}

// `dynamic_initializer_for_'CVarGameplayCamerasDebugMaxCardColumns'' @ 1413d11d0

void __cdecl UE::Cameras::_dynamic_initializer_for__CVarGameplayCamerasDebugMaxCardColumns__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGameplayCamerasDebugMaxCardColumns,L"GameplayCameras.Debug.MaxCardColumns",
             &GGameplayCamerasDebugMaxCardColumns,
             L"Default: 2. The number of columns to layout the debug cards (e.g. graphs, clocks, etc.)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugMaxCardColumns__);
  return;
}

// `dynamic_initializer_for_'CVarGameplayCamerasDebugNodeTreeFilter'' @ 1413d1220

void __cdecl UE::Cameras::_dynamic_initializer_for__CVarGameplayCamerasDebugNodeTreeFilter__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGameplayCamerasDebugNodeTreeFilter,L"GameplayCameras.Debug.NodeTree.Filter",
             &GGameplayCamerasDebugNodeTreeFilter,
             L"(Default: . Filters the debug camera node tree by node name/type.",0);
  atexit(_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugNodeTreeFilter__);
  return;
}

// `dynamic_initializer_for_'CVarGameplayCamerasDebugPoseStatsShowDataIDs'' @ 1413d1270

void __cdecl
UE::Cameras::_dynamic_initializer_for__CVarGameplayCamerasDebugPoseStatsShowDataIDs__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGameplayCamerasDebugPoseStatsShowDataIDs,
             L"GameplayCameras.Debug.PoseStats.ShowDataIDs",
             &GGameplayCamerasDebugPoseStatsShowDataIDs,L"",0);
  atexit(_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugPoseStatsShowDataIDs__);
  return;
}

// `dynamic_initializer_for_'CVarGameplayCamerasDebugPoseStatsShowUnchanged'' @ 1413d12c0

void __cdecl
UE::Cameras::_dynamic_initializer_for__CVarGameplayCamerasDebugPoseStatsShowUnchanged__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGameplayCamerasDebugPoseStatsShowUnchanged,
             L"GameplayCameras.Debug.PoseStats.ShowUnchanged",
             &GGameplayCamerasDebugPoseStatsShowUnchanged,L"",0);
  atexit(_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugPoseStatsShowUnchanged__);
  return;
}

// `dynamic_initializer_for_'CVarGameplayCamerasDebugPoseStatsShowVariableIDs'' @ 1413d1310

void __cdecl
UE::Cameras::_dynamic_initializer_for__CVarGameplayCamerasDebugPoseStatsShowVariableIDs__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGameplayCamerasDebugPoseStatsShowVariableIDs,
             L"GameplayCameras.Debug.PoseStats.ShowVariableIDs",
             &GGameplayCamerasDebugPoseStatsShowVariableIDs,L"",0);
  atexit(_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugPoseStatsShowVariableIDs__);
  return;
}

// `dynamic_initializer_for_'CVarGameplayCamerasDebugRightMargin'' @ 1413d1360

void __cdecl UE::Cameras::_dynamic_initializer_for__CVarGameplayCamerasDebugRightMargin__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGameplayCamerasDebugRightMargin,L"GameplayCameras.Debug.RightMargin",
             &GGameplayCamerasDebugRightMargin,
             L"(Default: 10px. The right margin for rendering Gameplay Cameras debug text.",0);
  atexit(_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugRightMargin__);
  return;
}

// `dynamic_initializer_for_'CVarGameplayCamerasDebugSystemID'' @ 1413d13b0

void __cdecl UE::Cameras::_dynamic_initializer_for__CVarGameplayCamerasDebugSystemID__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGameplayCamerasDebugSystemID,L"GameplayCameras.Debug.SystemID",
             &GGameplayCamerasDebugSystemID,
             L"(Default: -1. Specifies the GameplayCameras system instance to show debug drawing for."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugSystemID__);
  return;
}

// `dynamic_initializer_for_'CVarGameplayCamerasDebugTopMargin'' @ 1413d1400

void __cdecl UE::Cameras::_dynamic_initializer_for__CVarGameplayCamerasDebugTopMargin__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGameplayCamerasDebugTopMargin,L"GameplayCameras.Debug.TopMargin",
             &GGameplayCamerasDebugTopMargin,
             L"(Default: 10px. The top margin for rendering Gameplay Cameras debug text.",0);
  atexit(_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugTopMargin__);
  return;
}

// `dynamic_initializer_for_'CVarGameplayCamerasDebugTrace'' @ 1413d1450

void __cdecl UE::Cameras::_dynamic_initializer_for__CVarGameplayCamerasDebugTrace__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGameplayCamerasDebugTrace,L"GameplayCameras.Debug.Trace",
             &GGameplayCamerasDebugTrace,
             L"(Default: false. Enables background tracing of GamplayCameras system debug info.",0);
  atexit(_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugTrace__);
  return;
}

// `dynamic_initializer_for_'CVarGameplayCamerasDebugViewfinderGuidesGapFactor'' @ 1413d14a0

void __cdecl
UE::Cameras::_dynamic_initializer_for__CVarGameplayCamerasDebugViewfinderGuidesGapFactor__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGameplayCamerasDebugViewfinderGuidesGapFactor,
             L"GameplayCameras.Debug.Viewfinder.GuidesGapFactor",
             &GGameplayCamerasDebugViewfinderGuidesGapFactor,L"",0);
  atexit(_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugViewfinderGuidesGapFactor__);
  return;
}

// `dynamic_initializer_for_'CVarGameplayCamerasDebugViewfinderReticleInnerSizeFactor'' @ 1413d14f0

void __cdecl
UE::Cameras::_dynamic_initializer_for__CVarGameplayCamerasDebugViewfinderReticleInnerSizeFactor__
          (void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGameplayCamerasDebugViewfinderReticleInnerSizeFactor,
             L"GameplayCameras.Debug.Viewfinder.ReticleInnerSizeFactor",
             &GGameplayCamerasDebugViewfinderReticleInnerSizeFactor,L"",0);
  atexit(_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugViewfinderReticleInnerSizeFactor__)
  ;
  return;
}

// `dynamic_initializer_for_'CVarGameplayCamerasDebugViewfinderReticleNumSides'' @ 1413d1540

void __cdecl
UE::Cameras::_dynamic_initializer_for__CVarGameplayCamerasDebugViewfinderReticleNumSides__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGameplayCamerasDebugViewfinderReticleNumSides,
             L"GameplayCameras.Debug.Viewfinder.ReticleNumSides",
             &GGameplayCamerasDebugViewfinderReticleNumSides,L"",0);
  atexit(_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugViewfinderReticleNumSides__);
  return;
}

// `dynamic_initializer_for_'CVarGameplayCamerasDebugViewfinderReticleSizeFactor'' @ 1413d1590

void __cdecl
UE::Cameras::_dynamic_initializer_for__CVarGameplayCamerasDebugViewfinderReticleSizeFactor__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGameplayCamerasDebugViewfinderReticleSizeFactor,
             L"GameplayCameras.Debug.Viewfinder.ReticleSizeFactor",
             &GGameplayCamerasDebugViewfinderReticleSizeFactor,
             L"Default: 0.1. The size of the viewfinder reticle, as a factor of the screen\'s vertical size."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugViewfinderReticleSizeFactor__);
  return;
}

// `dynamic_initializer_for_'CVarGameplayCamerasDefaultMinFstop'' @ 1413d15e0

void __cdecl _dynamic_initializer_for__CVarGameplayCamerasDefaultMinFstop__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGameplayCamerasDefaultMinFstop,L"GameplayCameras.DefaultMinFstop",
             &GGameplayCamerasDefaultMinFstop,
             L"(Default: 0. Minimum camera lens aperture (f-stop) that defines the curvature of the diaphragm blades."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarGameplayCamerasDefaultMinFstop__);
  return;
}

// `dynamic_initializer_for_'CameraSystemChannelReg'' @ 1413d1630

void __cdecl UE::Cameras::_dynamic_initializer_for__CameraSystemChannelReg__(void)

{
  InitArgs local_18;
  
  local_18.Desc = (char *)0x0;
  local_18.bReadOnly = false;
  local_18._9_7_ = 0;
  Trace::FChannel::Setup(&CameraSystemChannelObject,"CameraSystemChannel",&local_18);
  return;
}

// `dynamic_initializer_for_'GGameplayCamerasDebugBlendStacksFilter'' @ 1413d1660

void __cdecl UE::Cameras::_dynamic_initializer_for__GGameplayCamerasDebugBlendStacksFilter__(void)

{
  atexit(_dynamic_atexit_destructor_for__GGameplayCamerasDebugBlendStacksFilter__);
  return;
}

// `dynamic_initializer_for_'GGameplayCamerasDebugCategories'' @ 1413d1680

void __cdecl UE::Cameras::_dynamic_initializer_for__GGameplayCamerasDebugCategories__(void)

{
  ::FString::FString(&GGameplayCamerasDebugCategories,"nodetree");
  atexit(_dynamic_atexit_destructor_for__GGameplayCamerasDebugCategories__);
  return;
}

// `dynamic_initializer_for_'GGameplayCamerasDebugColorScheme'' @ 1413d16b0

void __cdecl UE::Cameras::_dynamic_initializer_for__GGameplayCamerasDebugColorScheme__(void)

{
  ::FString::FString(&GGameplayCamerasDebugColorScheme,L"SolarizedDark");
  atexit(_dynamic_atexit_destructor_for__GGameplayCamerasDebugColorScheme__);
  return;
}

// `dynamic_initializer_for_'GGameplayCamerasDebugNodeTreeFilter'' @ 1413d16e0

void __cdecl UE::Cameras::_dynamic_initializer_for__GGameplayCamerasDebugNodeTreeFilter__(void)

{
  atexit(_dynamic_atexit_destructor_for__GGameplayCamerasDebugNodeTreeFilter__);
  return;
}

// `dynamic_initializer_for_'GUnavailableVariableDebugName'' @ 1413d1700

void __cdecl UE::Cameras::Private::_dynamic_initializer_for__GUnavailableVariableDebugName__(void)

{
  ::FString::FString(&GUnavailableVariableDebugName,L"<no debug info>");
  atexit(_dynamic_atexit_destructor_for__GUnavailableVariableDebugName__);
  return;
}

// `dynamic_initializer_for_'NAME_UBlueprintCameraDirectorEvaluator_ActivateCameraDirector'' @ 1413d1730

void __cdecl
_dynamic_initializer_for__NAME_UBlueprintCameraDirectorEvaluator_ActivateCameraDirector__(void)

{
  FName::FName(&NAME_UBlueprintCameraDirectorEvaluator_ActivateCameraDirector,
               L"ActivateCameraDirector");
  return;
}

// `dynamic_initializer_for_'NAME_UBlueprintCameraDirectorEvaluator_AddChildEvaluationContext'' @ 1413d1750

void __cdecl
_dynamic_initializer_for__NAME_UBlueprintCameraDirectorEvaluator_AddChildEvaluationContext__(void)

{
  FName::FName(&NAME_UBlueprintCameraDirectorEvaluator_AddChildEvaluationContext,
               L"AddChildEvaluationContext");
  return;
}

// `dynamic_initializer_for_'NAME_UBlueprintCameraDirectorEvaluator_DeactivateCameraDirector'' @ 1413d1770

void __cdecl
_dynamic_initializer_for__NAME_UBlueprintCameraDirectorEvaluator_DeactivateCameraDirector__(void)

{
  FName::FName(&NAME_UBlueprintCameraDirectorEvaluator_DeactivateCameraDirector,
               L"DeactivateCameraDirector");
  return;
}

// `dynamic_initializer_for_'NAME_UBlueprintCameraDirectorEvaluator_RemoveChildEvaluationContext'' @ 1413d1790

void __cdecl
_dynamic_initializer_for__NAME_UBlueprintCameraDirectorEvaluator_RemoveChildEvaluationContext__
          (void)

{
  FName::FName(&NAME_UBlueprintCameraDirectorEvaluator_RemoveChildEvaluationContext,
               L"RemoveChildEvaluationContext");
  return;
}

// `dynamic_initializer_for_'NAME_UBlueprintCameraDirectorEvaluator_RunCameraDirector'' @ 1413d17b0

void __cdecl
_dynamic_initializer_for__NAME_UBlueprintCameraDirectorEvaluator_RunCameraDirector__(void)

{
  FName::FName(&NAME_UBlueprintCameraDirectorEvaluator_RunCameraDirector,L"RunCameraDirector");
  return;
}

// `dynamic_initializer_for_'SchemaCanBeOverridenTag'' @ 1413d17d0

void __cdecl UE::StateTree::_dynamic_initializer_for__SchemaCanBeOverridenTag__(void)

{
  ::FName::FName(&SchemaCanBeOverridenTag,L"SchemaCanBeOverriden");
  return;
}

// `dynamic_initializer_for_'SchemaTag'' @ 1413d17f0

void __cdecl UE::StateTree::_dynamic_initializer_for__SchemaTag__(void)

{
  ::FName::FName(&SchemaTag,L"Schema");
  return;
}

// `dynamic_initializer_for_'StatPtr_CameraSystemEval_Total'' @ 1413d1810

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_CameraSystemEval_Total__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_CameraSystemEval_Total == (FThreadSafeStaticStat<FStat_CameraSystemEval_Total>)0x0) {
    pFVar1 = FName::FName(local_res8,"CameraSystemEval_Total");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_CameraSystemEval_Total,*pFVar1,
               L"Camera System Eval","STATGROUP_CameraSystem","STATCAT_Advanced",
               L"Camera System Evaluation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Private_Core_CameraRigCombinationRegistry_h__Script_GameplayCameras_3147830083'' @ 1413d18a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Private_Core_CameraRigCombinationRegistry_h__Script_GameplayCameras_3147830083__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Private_Core_CameraRigCombinationRegistry_h__Script_GameplayCameras_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraObjectInterface_h__Script_GameplayCameras_2098653946'' @ 1413d18e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraObjectInterface_h__Script_GameplayCameras_2098653946__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraObjectInterface_h__Script_GameplayCameras_Statics
             ::ClassInfo,3,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraObjectInterface_h__Script_GameplayCameras_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraParameters_h__Script_GameplayCameras_1219724804'' @ 1413d1930

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraParameters_h__Script_GameplayCameras_1219724804__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraParameters_h__Script_GameplayCameras_Statics
             ::ScriptStructInfo,0xe,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraPose_h__Script_GameplayCameras_1149983628'' @ 1413d1970

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraPose_h__Script_GameplayCameras_1149983628__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraPose_h__Script_GameplayCameras_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigAssetReference_h__Script_GameplayCameras_4184442064'' @ 1413d19b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigAssetReference_h__Script_GameplayCameras_4184442064__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigAssetReference_h__Script_GameplayCameras_Statics
             ::ScriptStructInfo,0x11,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigAsset_h__Script_GameplayCameras_2571022361'' @ 1413d19f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigAsset_h__Script_GameplayCameras_2571022361__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigAsset_h__Script_GameplayCameras_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigProxyAsset_h__Script_GameplayCameras_1040951006'' @ 1413d1a30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigProxyAsset_h__Script_GameplayCameras_1040951006__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigProxyAsset_h__Script_GameplayCameras_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigProxyRedirectTable_h__Script_GameplayCameras_4097119565'' @ 1413d1a70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigProxyRedirectTable_h__Script_GameplayCameras_4097119565__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigProxyRedirectTable_h__Script_GameplayCameras_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigProxyRedirectTable_h__Script_GameplayCameras_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigTransition_h__Script_GameplayCameras_3938618144'' @ 1413d1ac0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigTransition_h__Script_GameplayCameras_3938618144__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigTransition_h__Script_GameplayCameras_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraRigTransition_h__Script_GameplayCameras_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraShakeAssetReference_h__Script_GameplayCameras_2534905813'' @ 1413d1b10

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraShakeAssetReference_h__Script_GameplayCameras_2534905813__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraShakeAssetReference_h__Script_GameplayCameras_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraShakeAsset_h__Script_GameplayCameras_503600580'' @ 1413d1b50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraShakeAsset_h__Script_GameplayCameras_503600580__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraShakeAsset_h__Script_GameplayCameras_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraValueInterpolator_h__Script_GameplayCameras_3144701784'' @ 1413d1b90

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraValueInterpolator_h__Script_GameplayCameras_3144701784__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraValueInterpolator_h__Script_GameplayCameras_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraVariableAssets_h__Script_GameplayCameras_1060031990'' @ 1413d1bd0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraVariableAssets_h__Script_GameplayCameras_1060031990__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraVariableAssets_h__Script_GameplayCameras_Statics
             ::ClassInfo,0xf,(FStructRegisterCompiledInInfo *)0x0,0,
             (FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraVariableCollection_h__Script_GameplayCameras_3604656246'' @ 1413d1c10

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraVariableCollection_h__Script_GameplayCameras_3604656246__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraVariableCollection_h__Script_GameplayCameras_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraVariableReferences_h__Script_GameplayCameras_880925666'' @ 1413d1c50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraVariableReferences_h__Script_GameplayCameras_880925666__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraVariableReferences_h__Script_GameplayCameras_Statics
             ::ScriptStructInfo,0xe,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraVariableSetter_h__Script_GameplayCameras_3125574315'' @ 1413d1c90

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraVariableSetter_h__Script_GameplayCameras_3125574315__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraVariableSetter_h__Script_GameplayCameras_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraVariableSetter_h__Script_GameplayCameras_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraVariableTableAllocationInfo_h__Script_GameplayCameras_404616374'' @ 1413d1ce0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraVariableTableAllocationInfo_h__Script_GameplayCameras_404616374__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_CameraVariableTableAllocationInfo_h__Script_GameplayCameras_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_DefaultRootCameraNode_h__Script_GameplayCameras_2420185762'' @ 1413d1d20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_DefaultRootCameraNode_h__Script_GameplayCameras_2420185762__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_DefaultRootCameraNode_h__Script_GameplayCameras_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_ICustomCameraNodeParameterProvider_h__Script_GameplayCameras_1184376943'' @ 1413d1d60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_ICustomCameraNodeParameterProvider_h__Script_GameplayCameras_1184376943__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_ICustomCameraNodeParameterProvider_h__Script_GameplayCameras_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_ICustomCameraNodeParameterProvider_h__Script_GameplayCameras_Statics
             ::ScriptStructInfo,3,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_ObjectTreeGraphComment_h__Script_GameplayCameras_3846939573'' @ 1413d1db0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_ObjectTreeGraphComment_h__Script_GameplayCameras_3846939573__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_ObjectTreeGraphComment_h__Script_GameplayCameras_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_RootCameraNode_h__Script_GameplayCameras_2281049698'' @ 1413d1df0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_RootCameraNode_h__Script_GameplayCameras_2281049698__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_RootCameraNode_h__Script_GameplayCameras_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_ShakeCameraNode_h__Script_GameplayCameras_3588912034'' @ 1413d1e30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_ShakeCameraNode_h__Script_GameplayCameras_3588912034__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Core_ShakeCameraNode_h__Script_GameplayCameras_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Curves_CameraRotatorCurve_h__Script_GameplayCameras_3376927286'' @ 1413d1e70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Curves_CameraRotatorCurve_h__Script_GameplayCameras_3376927286__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Curves_CameraRotatorCurve_h__Script_GameplayCameras_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Curves_CameraSingleCurve_h__Script_GameplayCameras_3319668314'' @ 1413d1eb0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Curves_CameraSingleCurve_h__Script_GameplayCameras_3319668314__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Curves_CameraSingleCurve_h__Script_GameplayCameras_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Curves_CameraVectorCurve_h__Script_GameplayCameras_2020387980'' @ 1413d1ef0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Curves_CameraVectorCurve_h__Script_GameplayCameras_2020387980__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Curves_CameraVectorCurve_h__Script_GameplayCameras_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_BlueprintCameraDirector_h__Script_GameplayCameras_3547138465'' @ 1413d1f30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_BlueprintCameraDirector_h__Script_GameplayCameras_3547138465__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_BlueprintCameraDirector_h__Script_GameplayCameras_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_BlueprintCameraDirector_h__Script_GameplayCameras_Statics
             ::ScriptStructInfo,3,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_CameraDirectorStateTreeSchema_h__Script_GameplayCameras_1803692007'' @ 1413d1f80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_CameraDirectorStateTreeSchema_h__Script_GameplayCameras_1803692007__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_CameraDirectorStateTreeSchema_h__Script_GameplayCameras_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_CameraDirectorStateTreeSchema_h__Script_GameplayCameras_Statics
             ::ScriptStructInfo,3,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_PriorityQueueCameraDirector_h__Script_GameplayCameras_4005858554'' @ 1413d1fd0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_PriorityQueueCameraDirector_h__Script_GameplayCameras_4005858554__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_PriorityQueueCameraDirector_h__Script_GameplayCameras_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_SingleCameraDirector_h__Script_GameplayCameras_2396691315'' @ 1413d2010

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_SingleCameraDirector_h__Script_GameplayCameras_2396691315__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_SingleCameraDirector_h__Script_GameplayCameras_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_StateTreeCameraDirectorTasks_h__Script_GameplayCameras_2170154278'' @ 1413d2050

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_StateTreeCameraDirectorTasks_h__Script_GameplayCameras_2170154278__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_StateTreeCameraDirectorTasks_h__Script_GameplayCameras_Statics
             ::ScriptStructInfo,4,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_StateTreeCameraDirector_h__Script_GameplayCameras_1122116168'' @ 1413d2090

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_StateTreeCameraDirector_h__Script_GameplayCameras_1122116168__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_Directors_StateTreeCameraDirector_h__Script_GameplayCameras_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_ActivateCameraRigFunctions_h__Script_GameplayCameras_1583049205'' @ 1413d20d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_ActivateCameraRigFunctions_h__Script_GameplayCameras_1583049205__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_ActivateCameraRigFunctions_h__Script_GameplayCameras_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_ActorCameraEvaluationContext_h__Script_GameplayCameras_3328772042'' @ 1413d2110

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_ActorCameraEvaluationContext_h__Script_GameplayCameras_3328772042__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_ActorCameraEvaluationContext_h__Script_GameplayCameras_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraEvaluationDataRef_h__Script_GameplayCameras_1979489389'' @ 1413d2150

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraEvaluationDataRef_h__Script_GameplayCameras_1979489389__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraEvaluationDataRef_h__Script_GameplayCameras_Statics
             ::ClassInfo,3,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraEvaluationDataRef_h__Script_GameplayCameras_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraPose_h__Script_GameplayCameras_1844641493'' @ 1413d21a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraPose_h__Script_GameplayCameras_1844641493__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraPose_h__Script_GameplayCameras_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_BlueprintCameraPose_h__Script_GameplayCameras_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_CameraRigParameterInterop_h__Script_GameplayCameras_458451099'' @ 1413d21f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_CameraRigParameterInterop_h__Script_GameplayCameras_458451099__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/GameplayCameras",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_GameFramework_CameraRigParameterInterop_h__Script_GameplayCameras_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// NewProp_ReturnValue_SetBit @ 14d56ae70

void __cdecl
Z_Construct_UFunction_UBlueprintCameraContextDataTableFunctionLibrary_SetNameData_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x24) = 1;
  return;
}

// NewStructOps @ 14d56af30

void * __cdecl
Z_Construct_UScriptStruct_FVector2fCameraVariableReference_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FVector2fCameraVariableReference,&UE::CoreUObject::Private::Construct<FVector2fCameraVariableReference>,&UE::CoreUObject::Private::ConstructForTests<FVector2fCameraVariableReference>,&UE::CoreUObject::Private::Destruct<FVector2fCameraVariableReference>,&UE::CoreUObject::Private::Copy<FVector2fCameraVariableReference>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UBlueprintCameraContextDataTableFunctionLibrary_SetNameData @ 14d56af70

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintCameraContextDataTableFunctionLibrary_SetNameData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraContextDataTableFunctionLibrary_SetNameData_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// ECameraRigInitialOrientation_StaticEnum @ 14d56afc0

UEnum * __cdecl ECameraRigInitialOrientation_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECameraRigInitialOrientation.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UEnum_ECameraRigInitialOrientation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GameplayCameras_ECameraRigInitialOrientation,
                       (UObject *)pUVar1,L"ECameraRigInitialOrientation");
  }
  return Z_Registration_Info_UEnum_ECameraRigInitialOrientation.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 14d56b060

void __cdecl
Z_Construct_UFunction_UBlueprintCameraContextDataTableFunctionLibrary_SetObjectData_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// Z_Construct_UFunction_UBlueprintCameraContextDataTableFunctionLibrary_SetObjectData @ 14d56b100

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintCameraContextDataTableFunctionLibrary_SetObjectData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraContextDataTableFunctionLibrary_SetObjectData_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bOverrideInitialOrientation_SetBit @ 14d56b140

void __cdecl
Z_Construct_UClass_UCameraRigTransition_Statics::NewProp_bOverrideInitialOrientation_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x4c) = 1;
  return;
}

// NewProp_bAllowCameraRigMerging_SetBit @ 14d56b150

void __cdecl
Z_Construct_UClass_UCameraRigTransition_Statics::NewProp_bAllowCameraRigMerging_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x4d) = 1;
  return;
}

// NewStructOps @ 14d56b190

void * __cdecl
Z_Construct_UScriptStruct_FVector2dCameraVariableReference_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FVector2dCameraVariableReference,&UE::CoreUObject::Private::Construct<FVector2dCameraVariableReference>,&UE::CoreUObject::Private::ConstructForTests<FVector2dCameraVariableReference>,&UE::CoreUObject::Private::Destruct<FVector2dCameraVariableReference>,&UE::CoreUObject::Private::Copy<FVector2dCameraVariableReference>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_ReturnValue_SetBit @ 14d56b2b0

void __cdecl
Z_Construct_UFunction_UBlueprintCameraContextDataTableFunctionLibrary_SetStringData_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// `scalar_deleting_destructor' @ 14d56b380

void * __thiscall
UE::Cameras::FDefaultRootCameraNodeEvaluatorDebugBlock::_scalar_deleting_destructor_
          (FDefaultRootCameraNodeEvaluatorDebugBlock *this,uint param_1)

{
  *(undefined ***)this = &___7FCameraDebugBlock_Cameras_UE__6B_;
  if (*(void **)&this->field_0x18 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x18);
  }
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// Z_Construct_UFunction_UBlueprintCameraContextDataTableFunctionLibrary_SetStringData @ 14d56b420

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintCameraContextDataTableFunctionLibrary_SetStringData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraContextDataTableFunctionLibrary_SetStringData_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14d56b4e0

void __cdecl
Z_Construct_UFunction_UBlueprintCameraContextDataTableFunctionLibrary_SetStructData_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// NewStructOps @ 14d56b600

void * __cdecl
Z_Construct_UScriptStruct_FVector3fCameraVariableReference_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FVector3fCameraVariableReference,&UE::CoreUObject::Private::Construct<FVector3fCameraVariableReference>,&UE::CoreUObject::Private::ConstructForTests<FVector3fCameraVariableReference>,&UE::CoreUObject::Private::Destruct<FVector3fCameraVariableReference>,&UE::CoreUObject::Private::Copy<FVector3fCameraVariableReference>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UCombinedCameraRigsCameraNode @ 14d56b640

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCombinedCameraRigsCameraNode(void)

{
  if (Z_Registration_Info_UClass_UCombinedCameraRigsCameraNode.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCombinedCameraRigsCameraNode.OuterSingleton,
               &Z_Construct_UClass_UCombinedCameraRigsCameraNode_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCombinedCameraRigsCameraNode.OuterSingleton;
}

// Z_Construct_UFunction_UBlueprintCameraContextDataTableFunctionLibrary_SetStructData @ 14d56b6c0

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintCameraContextDataTableFunctionLibrary_SetStructData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraContextDataTableFunctionLibrary_SetStructData_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14d56b760

void * __cdecl
Z_Construct_UScriptStruct_FVector3dCameraVariableReference_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FVector3dCameraVariableReference,&UE::CoreUObject::Private::Construct<FVector3dCameraVariableReference>,&UE::CoreUObject::Private::ConstructForTests<FVector3dCameraVariableReference>,&UE::CoreUObject::Private::Destruct<FVector3dCameraVariableReference>,&UE::CoreUObject::Private::Copy<FVector3dCameraVariableReference>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UStateTreeCameraDirector @ 14d56b810

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UStateTreeCameraDirector(void)

{
  if (Z_Registration_Info_UClass_UStateTreeCameraDirector.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UStateTreeCameraDirector.OuterSingleton,
               &Z_Construct_UClass_UStateTreeCameraDirector_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UStateTreeCameraDirector.OuterSingleton;
}

// Z_Construct_UClass_UCameraRigAsset_NoRegister @ 14d56b970

UClass * __cdecl Z_Construct_UClass_UCameraRigAsset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraRigAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CameraRigAsset",
               &Z_Registration_Info_UClass_UCameraRigAsset.InnerSingleton,
               UCameraRigAsset::StaticRegisterNativesUCameraRigAsset,0x128,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCameraRigAsset>,
               InternalVTableHelperCtorCaller<UCameraRigAsset>,local_res8,
               UBaseCameraObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraRigAsset.InnerSingleton;
}

// NewStructOps @ 14d56bda0

void * __cdecl
Z_Construct_UScriptStruct_FVector4fCameraVariableReference_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FVector4fCameraVariableReference,&UE::CoreUObject::Private::Construct<FVector4fCameraVariableReference>,&UE::CoreUObject::Private::ConstructForTests<FVector4fCameraVariableReference>,&UE::CoreUObject::Private::Destruct<FVector4fCameraVariableReference>,&UE::CoreUObject::Private::Copy<FVector4fCameraVariableReference>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UCameraShakeAsset_NoRegister @ 14d56be00

UClass * __cdecl Z_Construct_UClass_UCameraShakeAsset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraShakeAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CameraShakeAsset",
               &Z_Registration_Info_UClass_UCameraShakeAsset.InnerSingleton,
               UCameraShakeAsset::StaticRegisterNativesUCameraShakeAsset,0xf0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCameraShakeAsset>,
               InternalVTableHelperCtorCaller<UCameraShakeAsset>,local_res8,
               UBaseCameraObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraShakeAsset.InnerSingleton;
}

// NewStructOps @ 14d56c0a0

void * __cdecl
Z_Construct_UScriptStruct_FVector4dCameraVariableReference_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FVector4dCameraVariableReference,&UE::CoreUObject::Private::Construct<FVector4dCameraVariableReference>,&UE::CoreUObject::Private::ConstructForTests<FVector4dCameraVariableReference>,&UE::CoreUObject::Private::Destruct<FVector4dCameraVariableReference>,&UE::CoreUObject::Private::Copy<FVector4dCameraVariableReference>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d56c250

void * __cdecl
Z_Construct_UScriptStruct_FRotator3fCameraVariableReference_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRotator3fCameraVariableReference,&UE::CoreUObject::Private::Construct<FRotator3fCameraVariableReference>,&UE::CoreUObject::Private::ConstructForTests<FRotator3fCameraVariableReference>,&UE::CoreUObject::Private::Destruct<FRotator3fCameraVariableReference>,&UE::CoreUObject::Private::Copy<FRotator3fCameraVariableReference>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UShakeCameraNode_NoRegister @ 14d56c2d0

UClass * __cdecl Z_Construct_UClass_UShakeCameraNode_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UShakeCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"ShakeCameraNode",
               &Z_Registration_Info_UClass_UShakeCameraNode.InnerSingleton,
               UShakeCameraNode::StaticRegisterNativesUShakeCameraNode,0x38,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UShakeCameraNode>,
               InternalVTableHelperCtorCaller<UShakeCameraNode>,local_res8,UCameraNode::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UShakeCameraNode.InnerSingleton;
}

// NewStructOps @ 14d56c390

void * __cdecl
Z_Construct_UScriptStruct_FRotator3dCameraVariableReference_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRotator3dCameraVariableReference,&UE::CoreUObject::Private::Construct<FRotator3dCameraVariableReference>,&UE::CoreUObject::Private::ConstructForTests<FRotator3dCameraVariableReference>,&UE::CoreUObject::Private::Destruct<FRotator3dCameraVariableReference>,&UE::CoreUObject::Private::Copy<FRotator3dCameraVariableReference>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d56c630

void * __cdecl
Z_Construct_UScriptStruct_FTransform3fCameraVariableReference_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTransform3fCameraVariableReference,&UE::CoreUObject::Private::Construct<FTransform3fCameraVariableReference>,&UE::CoreUObject::Private::ConstructForTests<FTransform3fCameraVariableReference>,&UE::CoreUObject::Private::Destruct<FTransform3fCameraVariableReference>,&UE::CoreUObject::Private::Copy<FTransform3fCameraVariableReference>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14d56c8b0

void * __thiscall
UE::Cameras::FShakeCameraNodeEvaluator::_scalar_deleting_destructor_
          (FShakeCameraNodeEvaluator *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UClass_UCameraShakeAsset @ 14d56c920

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCameraShakeAsset(void)

{
  if (Z_Registration_Info_UClass_UCameraShakeAsset.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCameraShakeAsset.OuterSingleton,
               &Z_Construct_UClass_UCameraShakeAsset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCameraShakeAsset.OuterSingleton;
}

// NewStructOps @ 14d56c960

void * __cdecl
Z_Construct_UScriptStruct_FTransform3dCameraVariableReference_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTransform3dCameraVariableReference,&UE::CoreUObject::Private::Construct<FTransform3dCameraVariableReference>,&UE::CoreUObject::Private::ConstructForTests<FTransform3dCameraVariableReference>,&UE::CoreUObject::Private::Destruct<FTransform3dCameraVariableReference>,&UE::CoreUObject::Private::Copy<FTransform3dCameraVariableReference>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bIsSingleInstance_SetBit @ 14d56ca00

void __cdecl
Z_Construct_UClass_UCameraShakeAsset_Statics::NewProp_bIsSingleInstance_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd8) = 1;
  return;
}

// Z_Construct_UScriptStruct_FBooleanCameraParameter @ 14d56cad0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBooleanCameraParameter(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FBooleanCameraParameter.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FBooleanCameraParameter.InnerSingleton,
               &Z_Construct_UScriptStruct_FBooleanCameraParameter_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FBooleanCameraParameter.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FBooleanCameraParameter.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDoubleCameraParameter @ 14d56cb50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDoubleCameraParameter(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDoubleCameraParameter.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDoubleCameraParameter.InnerSingleton,
               &Z_Construct_UScriptStruct_FDoubleCameraParameter_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDoubleCameraParameter.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDoubleCameraParameter.InnerSingleton;
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

// Z_Construct_UScriptStruct_FFloatCameraParameter @ 14d56cbd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FFloatCameraParameter(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FFloatCameraParameter.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FFloatCameraParameter.InnerSingleton,
               &Z_Construct_UScriptStruct_FFloatCameraParameter_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FFloatCameraParameter.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FFloatCameraParameter.InnerSingleton;
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

// Z_Construct_UScriptStruct_FInteger32CameraParameter @ 14d56cc50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInteger32CameraParameter(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FInteger32CameraParameter.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FInteger32CameraParameter.InnerSingleton,
               &Z_Construct_UScriptStruct_FInteger32CameraParameter_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FInteger32CameraParameter.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FInteger32CameraParameter.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRotator3dCameraParameter @ 14d56ccd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRotator3dCameraParameter(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRotator3dCameraParameter.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRotator3dCameraParameter.InnerSingleton,
               &Z_Construct_UScriptStruct_FRotator3dCameraParameter_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRotator3dCameraParameter.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRotator3dCameraParameter.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRotator3fCameraParameter @ 14d56cd50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRotator3fCameraParameter(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRotator3fCameraParameter.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRotator3fCameraParameter.InnerSingleton,
               &Z_Construct_UScriptStruct_FRotator3fCameraParameter_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRotator3fCameraParameter.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRotator3fCameraParameter.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTransform3dCameraParameter @ 14d56cdd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTransform3dCameraParameter(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTransform3dCameraParameter.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTransform3dCameraParameter.InnerSingleton,
               &Z_Construct_UScriptStruct_FTransform3dCameraParameter_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTransform3dCameraParameter.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTransform3dCameraParameter.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTransform3fCameraParameter @ 14d56ce50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTransform3fCameraParameter(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTransform3fCameraParameter.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTransform3fCameraParameter.InnerSingleton,
               &Z_Construct_UScriptStruct_FTransform3fCameraParameter_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTransform3fCameraParameter.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTransform3fCameraParameter.InnerSingleton;
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

// Z_Construct_UScriptStruct_FVector2dCameraParameter @ 14d56ced0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FVector2dCameraParameter(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FVector2dCameraParameter.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FVector2dCameraParameter.InnerSingleton,
               &Z_Construct_UScriptStruct_FVector2dCameraParameter_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FVector2dCameraParameter.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FVector2dCameraParameter.InnerSingleton;
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

// Z_Construct_UScriptStruct_FVector2fCameraParameter @ 14d56cf50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FVector2fCameraParameter(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FVector2fCameraParameter.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FVector2fCameraParameter.InnerSingleton,
               &Z_Construct_UScriptStruct_FVector2fCameraParameter_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FVector2fCameraParameter.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FVector2fCameraParameter.InnerSingleton;
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

// Z_Construct_UScriptStruct_FVector3dCameraParameter @ 14d56cfd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FVector3dCameraParameter(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FVector3dCameraParameter.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FVector3dCameraParameter.InnerSingleton,
               &Z_Construct_UScriptStruct_FVector3dCameraParameter_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FVector3dCameraParameter.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FVector3dCameraParameter.InnerSingleton;
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

// Z_Construct_UScriptStruct_FVector3fCameraParameter @ 14d56d050

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FVector3fCameraParameter(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FVector3fCameraParameter.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FVector3fCameraParameter.InnerSingleton,
               &Z_Construct_UScriptStruct_FVector3fCameraParameter_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FVector3fCameraParameter.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FVector3fCameraParameter.InnerSingleton;
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

// Z_Construct_UScriptStruct_FVector4dCameraParameter @ 14d56d0d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FVector4dCameraParameter(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FVector4dCameraParameter.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FVector4dCameraParameter.InnerSingleton,
               &Z_Construct_UScriptStruct_FVector4dCameraParameter_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FVector4dCameraParameter.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FVector4dCameraParameter.InnerSingleton;
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

// Z_Construct_UScriptStruct_FVector4fCameraParameter @ 14d56d150

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FVector4fCameraParameter(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FVector4fCameraParameter.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FVector4fCameraParameter.InnerSingleton,
               &Z_Construct_UScriptStruct_FVector4fCameraParameter_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FVector4fCameraParameter.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FVector4fCameraParameter.InnerSingleton;
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

// NewProp_Value_SetBit @ 14d56d1d0

void __cdecl
Z_Construct_UScriptStruct_FBooleanCameraParameter_Statics::NewProp_Value_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewStructOps @ 14d56d1e0

void * __cdecl Z_Construct_UScriptStruct_FBooleanCameraParameter_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FBooleanCameraParameter,&UE::CoreUObject::Private::Construct<FBooleanCameraParameter>,&UE::CoreUObject::Private::ConstructForTests<FBooleanCameraParameter>,&UE::CoreUObject::Private::Destruct<FBooleanCameraParameter>,&UE::CoreUObject::Private::PostSerialize<FBooleanCameraParameter>,&UE::CoreUObject::Private::Copy<FBooleanCameraParameter>,&UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FBooleanCameraParameter>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d56d260

void * __cdecl Z_Construct_UScriptStruct_FInteger32CameraParameter_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FInteger32CameraParameter,&UE::CoreUObject::Private::Construct<FInteger32CameraParameter>,&UE::CoreUObject::Private::ConstructForTests<FInteger32CameraParameter>,&UE::CoreUObject::Private::Destruct<FInteger32CameraParameter>,&UE::CoreUObject::Private::PostSerialize<FInteger32CameraParameter>,&UE::CoreUObject::Private::Copy<FInteger32CameraParameter>,&UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FInteger32CameraParameter>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d56d3b0

void * __cdecl Z_Construct_UScriptStruct_FFloatCameraParameter_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FFloatCameraParameter,&UE::CoreUObject::Private::Construct<FFloatCameraParameter>,&UE::CoreUObject::Private::ConstructForTests<FFloatCameraParameter>,&UE::CoreUObject::Private::Destruct<FFloatCameraParameter>,&UE::CoreUObject::Private::PostSerialize<FFloatCameraParameter>,&UE::CoreUObject::Private::Copy<FFloatCameraParameter>,&UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FFloatCameraParameter>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d56d430

void * __cdecl Z_Construct_UScriptStruct_FDoubleCameraParameter_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDoubleCameraParameter,&UE::CoreUObject::Private::Construct<FDoubleCameraParameter>,&UE::CoreUObject::Private::ConstructForTests<FDoubleCameraParameter>,&UE::CoreUObject::Private::Destruct<FDoubleCameraParameter>,&UE::CoreUObject::Private::PostSerialize<FDoubleCameraParameter>,&UE::CoreUObject::Private::Copy<FDoubleCameraParameter>,&UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FDoubleCameraParameter>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// ECameraVariableSetterBlendType_StaticEnum @ 14d56d470

UEnum * __cdecl ECameraVariableSetterBlendType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECameraVariableSetterBlendType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UEnum_ECameraVariableSetterBlendType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GameplayCameras_ECameraVariableSetterBlendType,
                       (UObject *)pUVar1,L"ECameraVariableSetterBlendType");
  }
  return Z_Registration_Info_UEnum_ECameraVariableSetterBlendType.OuterSingleton;
}

// NewStructOps @ 14d56d500

void * __cdecl Z_Construct_UScriptStruct_FVector2fCameraParameter_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FVector2fCameraParameter,&UE::CoreUObject::Private::Construct<FVector2fCameraParameter>,&UE::CoreUObject::Private::ConstructForTests<FVector2fCameraParameter>,&UE::CoreUObject::Private::Destruct<FVector2fCameraParameter>,&UE::CoreUObject::Private::PostSerialize<FVector2fCameraParameter>,&UE::CoreUObject::Private::Copy<FVector2fCameraParameter>,&UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FVector2fCameraParameter>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d56d590

void * __cdecl Z_Construct_UScriptStruct_FCameraVariableSetterHandle_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCameraVariableSetterHandle,&UE::CoreUObject::Private::Construct<FCameraVariableSetterHandle>,&UE::CoreUObject::Private::ConstructForTests<FCameraVariableSetterHandle>,&UE::CoreUObject::Private::Destruct<FCameraVariableSetterHandle>,&UE::CoreUObject::Private::Copy<FCameraVariableSetterHandle>,&UE::CoreUObject::Private::GetStructTypeHash<FCameraVariableSetterHandle>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d56d870

void * __cdecl Z_Construct_UScriptStruct_FVector2dCameraParameter_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FVector2dCameraParameter,&UE::CoreUObject::Private::Construct<FVector2dCameraParameter>,&UE::CoreUObject::Private::ConstructForTests<FVector2dCameraParameter>,&UE::CoreUObject::Private::Destruct<FVector2dCameraParameter>,&UE::CoreUObject::Private::PostSerialize<FVector2dCameraParameter>,&UE::CoreUObject::Private::Copy<FVector2dCameraParameter>,&UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FVector2dCameraParameter>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d56d9d0

void * __cdecl Z_Construct_UScriptStruct_FVector3fCameraParameter_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FVector3fCameraParameter,&UE::CoreUObject::Private::Construct<FVector3fCameraParameter>,&UE::CoreUObject::Private::ConstructForTests<FVector3fCameraParameter>,&UE::CoreUObject::Private::Destruct<FVector3fCameraParameter>,&UE::CoreUObject::Private::PostSerialize<FVector3fCameraParameter>,&UE::CoreUObject::Private::Copy<FVector3fCameraParameter>,&UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FVector3fCameraParameter>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d56dad0

void * __cdecl Z_Construct_UScriptStruct_FVector3dCameraParameter_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FVector3dCameraParameter,&UE::CoreUObject::Private::Construct<FVector3dCameraParameter>,&UE::CoreUObject::Private::ConstructForTests<FVector3dCameraParameter>,&UE::CoreUObject::Private::Destruct<FVector3dCameraParameter>,&UE::CoreUObject::Private::PostSerialize<FVector3dCameraParameter>,&UE::CoreUObject::Private::Copy<FVector3dCameraParameter>,&UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FVector3dCameraParameter>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d56dd40

void * __cdecl Z_Construct_UScriptStruct_FVector4fCameraParameter_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FVector4fCameraParameter,&UE::CoreUObject::Private::Construct<FVector4fCameraParameter>,&UE::CoreUObject::Private::ConstructForTests<FVector4fCameraParameter>,&UE::CoreUObject::Private::Destruct<FVector4fCameraParameter>,&UE::CoreUObject::Private::PostSerialize<FVector4fCameraParameter>,&UE::CoreUObject::Private::Copy<FVector4fCameraParameter>,&UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FVector4fCameraParameter>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14d56de60

void * __thiscall
FGameplayCamerasActivateCameraRigTask::_scalar_deleting_destructor_
          (FGameplayCamerasActivateCameraRigTask *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FStateTreeNodeBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// NewStructOps @ 14d56e170

void * __cdecl Z_Construct_UScriptStruct_FVector4dCameraParameter_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FVector4dCameraParameter,&UE::CoreUObject::Private::Construct<FVector4dCameraParameter>,&UE::CoreUObject::Private::ConstructForTests<FVector4dCameraParameter>,&UE::CoreUObject::Private::Destruct<FVector4dCameraParameter>,&UE::CoreUObject::Private::PostSerialize<FVector4dCameraParameter>,&UE::CoreUObject::Private::Copy<FVector4dCameraParameter>,&UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FVector4dCameraParameter>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d56e1b0

void * __cdecl Z_Construct_UScriptStruct_FCameraShakeAssetReference_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCameraShakeAssetReference,&UE::CoreUObject::Private::Construct<FCameraShakeAssetReference>,&UE::CoreUObject::Private::ConstructForTests<FCameraShakeAssetReference>,&UE::CoreUObject::Private::Destruct<FCameraShakeAssetReference>,&UE::CoreUObject::Private::PostSerialize<FCameraShakeAssetReference>,&UE::CoreUObject::Private::Copy<FCameraShakeAssetReference>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14d56e1f0

void * __thiscall
FGameplayCamerasActivateCameraRigViaProxyTask::_scalar_deleting_destructor_
          (FGameplayCamerasActivateCameraRigViaProxyTask *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FStateTreeNodeBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// NewStructOps @ 14d56e230

void * __cdecl Z_Construct_UScriptStruct_FRotator3fCameraParameter_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRotator3fCameraParameter,&UE::CoreUObject::Private::Construct<FRotator3fCameraParameter>,&UE::CoreUObject::Private::ConstructForTests<FRotator3fCameraParameter>,&UE::CoreUObject::Private::Destruct<FRotator3fCameraParameter>,&UE::CoreUObject::Private::PostSerialize<FRotator3fCameraParameter>,&UE::CoreUObject::Private::Copy<FRotator3fCameraParameter>,&UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FRotator3fCameraParameter>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d56e2f0

void * __cdecl Z_Construct_UScriptStruct_FRotator3dCameraParameter_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRotator3dCameraParameter,&UE::CoreUObject::Private::Construct<FRotator3dCameraParameter>,&UE::CoreUObject::Private::ConstructForTests<FRotator3dCameraParameter>,&UE::CoreUObject::Private::Destruct<FRotator3dCameraParameter>,&UE::CoreUObject::Private::PostSerialize<FRotator3dCameraParameter>,&UE::CoreUObject::Private::Copy<FRotator3dCameraParameter>,&UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FRotator3dCameraParameter>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UShakeCameraNode @ 14d56e340

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UShakeCameraNode(void)

{
  if (Z_Registration_Info_UClass_UShakeCameraNode.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UShakeCameraNode.OuterSingleton,
               &Z_Construct_UClass_UShakeCameraNode_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UShakeCameraNode.OuterSingleton;
}

// NewStructOps @ 14d56e410

void * __cdecl
Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigTaskInstanceData_Statics::NewStructOps
          (void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGameplayCamerasActivateCameraRigTaskInstanceData,&UE::CoreUObject::Private::Construct<FGameplayCamerasActivateCameraRigTaskInstanceData>,&UE::CoreUObject::Private::ConstructForTests<FGameplayCamerasActivateCameraRigTaskInstanceData>,&UE::CoreUObject::Private::Destruct<FGameplayCamerasActivateCameraRigTaskInstanceData>,&UE::CoreUObject::Private::Copy<FGameplayCamerasActivateCameraRigTaskInstanceData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d56e450

void * __cdecl Z_Construct_UScriptStruct_FTransform3fCameraParameter_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTransform3fCameraParameter,&UE::CoreUObject::Private::Construct<FTransform3fCameraParameter>,&UE::CoreUObject::Private::ConstructForTests<FTransform3fCameraParameter>,&UE::CoreUObject::Private::Destruct<FTransform3fCameraParameter>,&UE::CoreUObject::Private::PostSerialize<FTransform3fCameraParameter>,&UE::CoreUObject::Private::Copy<FTransform3fCameraParameter>,&UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FTransform3fCameraParameter>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d56e5e0

void * __cdecl Z_Construct_UScriptStruct_FTransform3dCameraParameter_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x70;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTransform3dCameraParameter,&UE::CoreUObject::Private::Construct<FTransform3dCameraParameter>,&UE::CoreUObject::Private::ConstructForTests<FTransform3dCameraParameter>,&UE::CoreUObject::Private::Destruct<FTransform3dCameraParameter>,&UE::CoreUObject::Private::PostSerialize<FTransform3dCameraParameter>,&UE::CoreUObject::Private::Copy<FTransform3dCameraParameter>,&UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FTransform3dCameraParameter>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bRunOnce_SetBit @ 14d56e6c0

void __cdecl
Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigTask_Statics::NewProp_bRunOnce_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2e) = 1;
  return;
}

// NewStructOps @ 14d56e6d0

void * __cdecl
Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigTask_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGameplayCamerasActivateCameraRigTask,&UE::CoreUObject::Private::Construct<FGameplayCamerasActivateCameraRigTask>,&UE::CoreUObject::Private::ConstructForTests<FGameplayCamerasActivateCameraRigTask>,&UE::CoreUObject::Private::Destruct<FGameplayCamerasActivateCameraRigTask>,&UE::CoreUObject::Private::Copy<FGameplayCamerasActivateCameraRigTask>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d56e7f0

void * __cdecl
Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigViaProxyTaskInstanceData_Statics::
NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGameplayCamerasActivateCameraRigViaProxyTaskInstanceData,&UE::CoreUObject::Private::Construct<FGameplayCamerasActivateCameraRigViaProxyTaskInstanceData>,&UE::CoreUObject::Private::ConstructForTests<FGameplayCamerasActivateCameraRigViaProxyTaskInstanceData>,&UE::CoreUObject::Private::Destruct<FGameplayCamerasActivateCameraRigViaProxyTaskInstanceData>,&UE::CoreUObject::Private::Copy<FGameplayCamerasActivateCameraRigViaProxyTaskInstanceData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UCameraObjectInterfaceBlendableParameter @ 14d56e830

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCameraObjectInterfaceBlendableParameter(void)

{
  if (Z_Registration_Info_UClass_UCameraObjectInterfaceBlendableParameter.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCameraObjectInterfaceBlendableParameter.OuterSingleton,
               &Z_Construct_UClass_UCameraObjectInterfaceBlendableParameter_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCameraObjectInterfaceBlendableParameter.OuterSingleton;
}

// Z_Construct_UClass_UCameraObjectInterfaceDataParameter @ 14d56e870

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCameraObjectInterfaceDataParameter(void)

{
  if (Z_Registration_Info_UClass_UCameraObjectInterfaceDataParameter.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCameraObjectInterfaceDataParameter.OuterSingleton,
               &Z_Construct_UClass_UCameraObjectInterfaceDataParameter_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCameraObjectInterfaceDataParameter.OuterSingleton;
}

// Z_Construct_UClass_UCameraObjectInterfaceParameterBase @ 14d56e8b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCameraObjectInterfaceParameterBase(void)

{
  if (Z_Registration_Info_UClass_UCameraObjectInterfaceParameterBase.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCameraObjectInterfaceParameterBase.OuterSingleton,
               &Z_Construct_UClass_UCameraObjectInterfaceParameterBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCameraObjectInterfaceParameterBase.OuterSingleton;
}

// Z_Construct_UClass_UCameraVariableAsset_NoRegister @ 14d56e8f0

UClass * __cdecl Z_Construct_UClass_UCameraVariableAsset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraVariableAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CameraVariableAsset",
               &Z_Registration_Info_UClass_UCameraVariableAsset.InnerSingleton,
               UCameraVariableAsset::StaticRegisterNativesUCameraVariableAsset,0x40,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UCameraVariableAsset>,
               InternalVTableHelperCtorCaller<UCameraVariableAsset>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraVariableAsset.InnerSingleton;
}

// NewProp_bRunOnce_SetBit @ 14d56e9a0

void __cdecl
Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigViaProxyTask_Statics::
NewProp_bRunOnce_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2e) = 1;
  return;
}

// NewStructOps @ 14d56e9b0

void * __cdecl
Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigViaProxyTask_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGameplayCamerasActivateCameraRigViaProxyTask,&UE::CoreUObject::Private::Construct<FGameplayCamerasActivateCameraRigViaProxyTask>,&UE::CoreUObject::Private::ConstructForTests<FGameplayCamerasActivateCameraRigViaProxyTask>,&UE::CoreUObject::Private::Destruct<FGameplayCamerasActivateCameraRigViaProxyTask>,&UE::CoreUObject::Private::Copy<FGameplayCamerasActivateCameraRigViaProxyTask>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bIsPreBlended_SetBit @ 14d56ead0

void __cdecl
Z_Construct_UClass_UCameraObjectInterfaceBlendableParameter_Statics::NewProp_bIsPreBlended_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x70) = 1;
  return;
}

// NewStructOps @ 14d56f110

void * __cdecl Z_Construct_UScriptStruct_FCameraObjectInterface_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCameraObjectInterface,&UE::CoreUObject::Private::Construct<FCameraObjectInterface>,&UE::CoreUObject::Private::ConstructForTests<FCameraObjectInterface>,&UE::CoreUObject::Private::Destruct<FCameraObjectInterface>,&UE::CoreUObject::Private::Copy<FCameraObjectInterface>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UActivateCameraRigFunctions @ 14d56f150

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UActivateCameraRigFunctions(void)

{
  if (Z_Registration_Info_UClass_UActivateCameraRigFunctions.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UActivateCameraRigFunctions.OuterSingleton,
               &Z_Construct_UClass_UActivateCameraRigFunctions_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UActivateCameraRigFunctions.OuterSingleton;
}

// Z_Construct_UClass_UCustomCameraNodeParameterProvider @ 14d56f190

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCustomCameraNodeParameterProvider(void)

{
  if (Z_Registration_Info_UClass_UCustomCameraNodeParameterProvider.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCustomCameraNodeParameterProvider.OuterSingleton,
               &Z_Construct_UClass_UCustomCameraNodeParameterProvider_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCustomCameraNodeParameterProvider.OuterSingleton;
}

// Z_Construct_UScriptStruct_FCustomCameraNodeBlendableParameter @ 14d56f1d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCustomCameraNodeBlendableParameter(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCustomCameraNodeBlendableParameter.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCustomCameraNodeBlendableParameter.InnerSingleton
               ,&Z_Construct_UScriptStruct_FCustomCameraNodeBlendableParameter_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FCustomCameraNodeBlendableParameter.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCustomCameraNodeBlendableParameter.InnerSingleton;
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

// Z_Construct_UScriptStruct_FCustomCameraNodeDataParameter @ 14d56f250

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCustomCameraNodeDataParameter(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCustomCameraNodeDataParameter.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCustomCameraNodeDataParameter.InnerSingleton,
               &Z_Construct_UScriptStruct_FCustomCameraNodeDataParameter_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCustomCameraNodeDataParameter.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCustomCameraNodeDataParameter.InnerSingleton;
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

// Z_Construct_UFunction_UActivateCameraRigFunctions_ActivatePersistentBaseCameraRig @ 14d56f2f0

UFunction * __cdecl
Z_Construct_UFunction_UActivateCameraRigFunctions_ActivatePersistentBaseCameraRig(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UActivateCameraRigFunctions_ActivatePersistentBaseCameraRig_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14d56f330

void * __cdecl
Z_Construct_UScriptStruct_FCustomCameraNodeBlendableParameter_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCustomCameraNodeBlendableParameter,&UE::CoreUObject::Private::Construct<FCustomCameraNodeBlendableParameter>,&UE::CoreUObject::Private::ConstructForTests<FCustomCameraNodeBlendableParameter>,&UE::CoreUObject::Private::Destruct<FCustomCameraNodeBlendableParameter>,&UE::CoreUObject::Private::Copy<FCustomCameraNodeBlendableParameter>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UActivateCameraRigFunctions_ActivatePersistentGlobalCameraRig @ 14d56f430

UFunction * __cdecl
Z_Construct_UFunction_UActivateCameraRigFunctions_ActivatePersistentGlobalCameraRig(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UActivateCameraRigFunctions_ActivatePersistentGlobalCameraRig_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UActivateCameraRigFunctions_ActivatePersistentVisualCameraRig @ 14d56f4b0

UFunction * __cdecl
Z_Construct_UFunction_UActivateCameraRigFunctions_ActivatePersistentVisualCameraRig(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UActivateCameraRigFunctions_ActivatePersistentVisualCameraRig_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14d56f610

void * __cdecl Z_Construct_UScriptStruct_FCustomCameraNodeDataParameter_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCustomCameraNodeDataParameter,&UE::CoreUObject::Private::Construct<FCustomCameraNodeDataParameter>,&UE::CoreUObject::Private::ConstructForTests<FCustomCameraNodeDataParameter>,&UE::CoreUObject::Private::Destruct<FCustomCameraNodeDataParameter>,&UE::CoreUObject::Private::Copy<FCustomCameraNodeDataParameter>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UCameraObjectInterfaceBlendableParameter_NoRegister @ 14d56fa80

UClass * __cdecl Z_Construct_UClass_UCameraObjectInterfaceBlendableParameter_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraObjectInterfaceBlendableParameter.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CameraObjectInterfaceBlendableParameter",
               &Z_Registration_Info_UClass_UCameraObjectInterfaceBlendableParameter.InnerSingleton,
               UCameraObjectInterfaceBlendableParameter::
               StaticRegisterNativesUCameraObjectInterfaceBlendableParameter,0x80,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UCameraObjectInterfaceBlendableParameter>,
               InternalVTableHelperCtorCaller<UCameraObjectInterfaceBlendableParameter>,local_res8,
               UCameraObjectInterfaceParameterBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraObjectInterfaceBlendableParameter.InnerSingleton;
}

// Z_Construct_UClass_UCameraObjectInterfaceDataParameter_NoRegister @ 14d56fbe0

UClass * __cdecl Z_Construct_UClass_UCameraObjectInterfaceDataParameter_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraObjectInterfaceDataParameter.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CameraObjectInterfaceDataParameter",
               &Z_Registration_Info_UClass_UCameraObjectInterfaceDataParameter.InnerSingleton,
               UCameraObjectInterfaceDataParameter::
               StaticRegisterNativesUCameraObjectInterfaceDataParameter,0x78,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCameraObjectInterfaceDataParameter>,
               InternalVTableHelperCtorCaller<UCameraObjectInterfaceDataParameter>,local_res8,
               UCameraObjectInterfaceParameterBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraObjectInterfaceDataParameter.InnerSingleton;
}

// NewStructOps @ 14d56fca0

void * __cdecl Z_Construct_UScriptStruct_FCustomCameraNodeParameters_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCustomCameraNodeParameters,&UE::CoreUObject::Private::Construct<FCustomCameraNodeParameters>,&UE::CoreUObject::Private::ConstructForTests<FCustomCameraNodeParameters>,&UE::CoreUObject::Private::Destruct<FCustomCameraNodeParameters>,&UE::CoreUObject::Private::Copy<FCustomCameraNodeParameters>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UCameraValueInterpolator @ 14d56ff00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCameraValueInterpolator(void)

{
  if (Z_Registration_Info_UClass_UCameraValueInterpolator.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCameraValueInterpolator.OuterSingleton,
               &Z_Construct_UClass_UCameraValueInterpolator_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCameraValueInterpolator.OuterSingleton;
}

// Z_Construct_UClass_UPopValueInterpolator @ 14d56ff40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPopValueInterpolator(void)

{
  if (Z_Registration_Info_UClass_UPopValueInterpolator.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPopValueInterpolator.OuterSingleton,
               &Z_Construct_UClass_UPopValueInterpolator_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPopValueInterpolator.OuterSingleton;
}

// NewProp_EnablePhysicalCamera_SetBit @ 14d56ff80

void __cdecl
Z_Construct_UScriptStruct_FCameraPose_Statics::NewProp_EnablePhysicalCamera_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x7c) = 1;
  return;
}

// NewProp_ConstrainAspectRatio_SetBit @ 14d56ff90

void __cdecl
Z_Construct_UScriptStruct_FCameraPose_Statics::NewProp_ConstrainAspectRatio_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x7d) = 1;
  return;
}

// NewProp_OverrideAspectRatioAxisConstraint_SetBit @ 14d56ffa0

void __cdecl
Z_Construct_UScriptStruct_FCameraPose_Statics::NewProp_OverrideAspectRatioAxisConstraint_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x7e) = 1;
  return;
}

// NewStructOps @ 14d56ffb0

void * __cdecl Z_Construct_UScriptStruct_FCameraPose_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x88;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCameraPose,&UE::CoreUObject::Private::Construct<FCameraPose>,&UE::CoreUObject::Private::ConstructForTests<FCameraPose>,&UE::CoreUObject::Private::Destruct<FCameraPose>,&UE::CoreUObject::Private::Copy<FCameraPose>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UCameraRigTransitionCondition_NoRegister @ 14d5703b0

UClass * __cdecl Z_Construct_UClass_UCameraRigTransitionCondition_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraRigTransitionCondition.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CameraRigTransitionCondition",
               &Z_Registration_Info_UClass_UCameraRigTransitionCondition.InnerSingleton,
               UCameraRigTransitionCondition::StaticRegisterNativesUCameraRigTransitionCondition,
               0x30,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UCameraRigTransitionCondition>,
               InternalVTableHelperCtorCaller<UCameraRigTransitionCondition>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraRigTransitionCondition.InnerSingleton;
}

// Z_Construct_UClass_UCameraRigTransition_NoRegister @ 14d570460

UClass * __cdecl Z_Construct_UClass_UCameraRigTransition_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraRigTransition.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CameraRigTransition",
               &Z_Registration_Info_UClass_UCameraRigTransition.InnerSingleton,
               UCameraRigTransition::StaticRegisterNativesUCameraRigTransition,0x50,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UCameraRigTransition>,
               InternalVTableHelperCtorCaller<UCameraRigTransition>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraRigTransition.InnerSingleton;
}

// Z_Construct_UClass_UCameraRigAsset @ 14d570680

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCameraRigAsset(void)

{
  if (Z_Registration_Info_UClass_UCameraRigAsset.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCameraRigAsset.OuterSingleton,
               &Z_Construct_UClass_UCameraRigAsset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCameraRigAsset.OuterSingleton;
}

// Z_Construct_UEnum_GameplayCameras_ECameraRigInitialOrientation @ 14d5706e0

UEnum * __cdecl Z_Construct_UEnum_GameplayCameras_ECameraRigInitialOrientation(void)

{
  if (Z_Registration_Info_UEnum_ECameraRigInitialOrientation.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ECameraRigInitialOrientation.InnerSingleton,
               &Z_Construct_UEnum_GameplayCameras_ECameraRigInitialOrientation_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ECameraRigInitialOrientation.InnerSingleton;
}

// Z_Construct_UClass_UBlueprintCameraPoseFunctionLibrary @ 14d570ca0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UBlueprintCameraPoseFunctionLibrary(void)

{
  if (Z_Registration_Info_UClass_UBlueprintCameraPoseFunctionLibrary.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UBlueprintCameraPoseFunctionLibrary.OuterSingleton,
               &Z_Construct_UClass_UBlueprintCameraPoseFunctionLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UBlueprintCameraPoseFunctionLibrary.OuterSingleton;
}

// NewProp_EnablePhysicalCamera_SetBit @ 14d570d40

void __cdecl
Z_Construct_UScriptStruct_FBlueprintCameraPose_Statics::NewProp_EnablePhysicalCamera_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x7c) = 1;
  return;
}

// NewProp_ConstrainAspectRatio_SetBit @ 14d570de0

void __cdecl
Z_Construct_UScriptStruct_FBlueprintCameraPose_Statics::NewProp_ConstrainAspectRatio_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x7d) = 1;
  return;
}

// NewProp_OverrideAspectRatioAxisConstraint_SetBit @ 14d570df0

void __cdecl
Z_Construct_UScriptStruct_FBlueprintCameraPose_Statics::
NewProp_OverrideAspectRatioAxisConstraint_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x7e) = 1;
  return;
}

// NewStructOps @ 14d570ec0

void * __cdecl Z_Construct_UScriptStruct_FBlueprintCameraPose_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x88;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FBlueprintCameraPose,&UE::CoreUObject::Private::Construct<FBlueprintCameraPose>,&UE::CoreUObject::Private::ConstructForTests<FBlueprintCameraPose>,&UE::CoreUObject::Private::Destruct<FBlueprintCameraPose>,&UE::CoreUObject::Private::Copy<FBlueprintCameraPose>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UBlueprintCameraDirector @ 14d5712a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UBlueprintCameraDirector(void)

{
  if (Z_Registration_Info_UClass_UBlueprintCameraDirector.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UBlueprintCameraDirector.OuterSingleton,
               &Z_Construct_UClass_UBlueprintCameraDirector_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UBlueprintCameraDirector.OuterSingleton;
}

// Z_Construct_UClass_UBlueprintCameraDirectorEvaluator @ 14d5712e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UBlueprintCameraDirectorEvaluator(void)

{
  if (Z_Registration_Info_UClass_UBlueprintCameraDirectorEvaluator.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UBlueprintCameraDirectorEvaluator.OuterSingleton,
               &Z_Construct_UClass_UBlueprintCameraDirectorEvaluator_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UBlueprintCameraDirectorEvaluator.OuterSingleton;
}

// Z_Construct_UScriptStruct_FBlueprintCameraDirectorActivateParams @ 14d571320

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBlueprintCameraDirectorActivateParams(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FBlueprintCameraDirectorActivateParams.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FBlueprintCameraDirectorActivateParams.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FBlueprintCameraDirectorActivateParams_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FBlueprintCameraDirectorActivateParams.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FBlueprintCameraDirectorActivateParams.InnerSingleton;
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

// Z_Construct_UScriptStruct_FBlueprintCameraDirectorDeactivateParams @ 14d5713a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBlueprintCameraDirectorDeactivateParams(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FBlueprintCameraDirectorDeactivateParams.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FBlueprintCameraDirectorDeactivateParams.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FBlueprintCameraDirectorDeactivateParams_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FBlueprintCameraDirectorDeactivateParams.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FBlueprintCameraDirectorDeactivateParams.InnerSingleton
    ;
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

// Z_Construct_UScriptStruct_FBlueprintCameraDirectorEvaluationParams @ 14d571420

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBlueprintCameraDirectorEvaluationParams(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FBlueprintCameraDirectorEvaluationParams.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FBlueprintCameraDirectorEvaluationParams.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FBlueprintCameraDirectorEvaluationParams_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FBlueprintCameraDirectorEvaluationParams.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FBlueprintCameraDirectorEvaluationParams.InnerSingleton
    ;
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

// Z_Construct_UScriptStruct_FBlueprintCameraEvaluationDataRef @ 14d5714a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBlueprintCameraEvaluationDataRef(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FBlueprintCameraEvaluationDataRef.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FBlueprintCameraEvaluationDataRef.InnerSingleton,
               &Z_Construct_UScriptStruct_FBlueprintCameraEvaluationDataRef_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FBlueprintCameraEvaluationDataRef.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FBlueprintCameraEvaluationDataRef.InnerSingleton;
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

// NewStructOps @ 14d571520

void * __cdecl
Z_Construct_UScriptStruct_FBlueprintCameraDirectorEvaluationParams_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FBlueprintCameraDirectorEvaluationParams,&UE::CoreUObject::Private::Construct<FBlueprintCameraDirectorEvaluationParams>,&UE::CoreUObject::Private::ConstructForTests<FBlueprintCameraDirectorEvaluationParams>,&UE::CoreUObject::Private::Destruct<FBlueprintCameraDirectorEvaluationParams>,&UE::CoreUObject::Private::Copy<FBlueprintCameraDirectorEvaluationParams>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UBooleanCameraVariable_NoRegister @ 14d5715a0

UClass * __cdecl Z_Construct_UClass_UBooleanCameraVariable_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBooleanCameraVariable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"BooleanCameraVariable",
               &Z_Registration_Info_UClass_UBooleanCameraVariable.InnerSingleton,
               UBooleanCameraVariable::StaticRegisterNativesUBooleanCameraVariable,0x48,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UBooleanCameraVariable>,
               InternalVTableHelperCtorCaller<UBooleanCameraVariable>,local_res8,
               UCameraVariableAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBooleanCameraVariable.InnerSingleton;
}

// Z_Construct_UClass_UInteger32CameraVariable_NoRegister @ 14d571660

UClass * __cdecl Z_Construct_UClass_UInteger32CameraVariable_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInteger32CameraVariable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"Integer32CameraVariable",
               &Z_Registration_Info_UClass_UInteger32CameraVariable.InnerSingleton,
               UInteger32CameraVariable::StaticRegisterNativesUInteger32CameraVariable,0x48,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UInteger32CameraVariable>,
               InternalVTableHelperCtorCaller<UInteger32CameraVariable>,local_res8,
               UCameraVariableAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInteger32CameraVariable.InnerSingleton;
}

// Z_Construct_UClass_UFloatCameraVariable_NoRegister @ 14d5717d0

UClass * __cdecl Z_Construct_UClass_UFloatCameraVariable_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFloatCameraVariable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"FloatCameraVariable",
               &Z_Registration_Info_UClass_UFloatCameraVariable.InnerSingleton,
               UFloatCameraVariable::StaticRegisterNativesUFloatCameraVariable,0x48,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UFloatCameraVariable>,
               InternalVTableHelperCtorCaller<UFloatCameraVariable>,local_res8,
               UCameraVariableAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFloatCameraVariable.InnerSingleton;
}

// Z_Construct_UClass_UDoubleCameraVariable_NoRegister @ 14d5718b0

UClass * __cdecl Z_Construct_UClass_UDoubleCameraVariable_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDoubleCameraVariable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"DoubleCameraVariable",
               &Z_Registration_Info_UClass_UDoubleCameraVariable.InnerSingleton,
               UDoubleCameraVariable::StaticRegisterNativesUDoubleCameraVariable,0x48,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UDoubleCameraVariable>,
               InternalVTableHelperCtorCaller<UDoubleCameraVariable>,local_res8,
               UCameraVariableAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDoubleCameraVariable.InnerSingleton;
}

// Z_Construct_UClass_UVector2fCameraVariable_NoRegister @ 14d571970

UClass * __cdecl Z_Construct_UClass_UVector2fCameraVariable_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVector2fCameraVariable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"Vector2fCameraVariable",
               &Z_Registration_Info_UClass_UVector2fCameraVariable.InnerSingleton,
               UVector2fCameraVariable::StaticRegisterNativesUVector2fCameraVariable,0x48,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UVector2fCameraVariable>
               ,InternalVTableHelperCtorCaller<UVector2fCameraVariable>,local_res8,
               UCameraVariableAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVector2fCameraVariable.InnerSingleton;
}

// NewStructOps @ 14d571a50

void * __cdecl Z_Construct_UScriptStruct_FCameraRotatorCurve_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x180;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCameraRotatorCurve,&UE::CoreUObject::Private::Construct<FCameraRotatorCurve>,&UE::CoreUObject::Private::ConstructForTests<FCameraRotatorCurve>,&UE::CoreUObject::Private::Destruct<FCameraRotatorCurve>,&UE::CoreUObject::Private::Copy<FCameraRotatorCurve>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UVector2dCameraVariable_NoRegister @ 14d571a90

UClass * __cdecl Z_Construct_UClass_UVector2dCameraVariable_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVector2dCameraVariable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"Vector2dCameraVariable",
               &Z_Registration_Info_UClass_UVector2dCameraVariable.InnerSingleton,
               UVector2dCameraVariable::StaticRegisterNativesUVector2dCameraVariable,0x50,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UVector2dCameraVariable>
               ,InternalVTableHelperCtorCaller<UVector2dCameraVariable>,local_res8,
               UCameraVariableAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVector2dCameraVariable.InnerSingleton;
}

// Z_Construct_UClass_UVector3fCameraVariable_NoRegister @ 14d571b50

UClass * __cdecl Z_Construct_UClass_UVector3fCameraVariable_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVector3fCameraVariable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"Vector3fCameraVariable",
               &Z_Registration_Info_UClass_UVector3fCameraVariable.InnerSingleton,
               UVector3fCameraVariable::StaticRegisterNativesUVector3fCameraVariable,0x50,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UVector3fCameraVariable>
               ,InternalVTableHelperCtorCaller<UVector3fCameraVariable>,local_res8,
               UCameraVariableAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVector3fCameraVariable.InnerSingleton;
}

// Z_Construct_UClass_UVector3dCameraVariable_NoRegister @ 14d571c20

UClass * __cdecl Z_Construct_UClass_UVector3dCameraVariable_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVector3dCameraVariable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"Vector3dCameraVariable",
               &Z_Registration_Info_UClass_UVector3dCameraVariable.InnerSingleton,
               UVector3dCameraVariable::StaticRegisterNativesUVector3dCameraVariable,0x58,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UVector3dCameraVariable>
               ,InternalVTableHelperCtorCaller<UVector3dCameraVariable>,local_res8,
               UCameraVariableAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVector3dCameraVariable.InnerSingleton;
}

// Z_Construct_UClass_UVector4fCameraVariable_NoRegister @ 14d571ce0

UClass * __cdecl Z_Construct_UClass_UVector4fCameraVariable_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVector4fCameraVariable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"Vector4fCameraVariable",
               &Z_Registration_Info_UClass_UVector4fCameraVariable.InnerSingleton,
               UVector4fCameraVariable::StaticRegisterNativesUVector4fCameraVariable,0x50,0x10,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UVector4fCameraVariable>
               ,InternalVTableHelperCtorCaller<UVector4fCameraVariable>,local_res8,
               UCameraVariableAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVector4fCameraVariable.InnerSingleton;
}

// Z_Construct_UClass_UVector4dCameraVariable_NoRegister @ 14d571da0

UClass * __cdecl Z_Construct_UClass_UVector4dCameraVariable_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVector4dCameraVariable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"Vector4dCameraVariable",
               &Z_Registration_Info_UClass_UVector4dCameraVariable.InnerSingleton,
               UVector4dCameraVariable::StaticRegisterNativesUVector4dCameraVariable,0x60,0x10,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UVector4dCameraVariable>
               ,InternalVTableHelperCtorCaller<UVector4dCameraVariable>,local_res8,
               UCameraVariableAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVector4dCameraVariable.InnerSingleton;
}

// Z_Construct_UClass_URotator3fCameraVariable_NoRegister @ 14d571e60

UClass * __cdecl Z_Construct_UClass_URotator3fCameraVariable_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URotator3fCameraVariable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"Rotator3fCameraVariable",
               &Z_Registration_Info_UClass_URotator3fCameraVariable.InnerSingleton,
               URotator3fCameraVariable::StaticRegisterNativesURotator3fCameraVariable,0x50,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<URotator3fCameraVariable>,
               InternalVTableHelperCtorCaller<URotator3fCameraVariable>,local_res8,
               UCameraVariableAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URotator3fCameraVariable.InnerSingleton;
}

// Z_Construct_UClass_URotator3dCameraVariable_NoRegister @ 14d571f20

UClass * __cdecl Z_Construct_UClass_URotator3dCameraVariable_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URotator3dCameraVariable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"Rotator3dCameraVariable",
               &Z_Registration_Info_UClass_URotator3dCameraVariable.InnerSingleton,
               URotator3dCameraVariable::StaticRegisterNativesURotator3dCameraVariable,0x58,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<URotator3dCameraVariable>,
               InternalVTableHelperCtorCaller<URotator3dCameraVariable>,local_res8,
               UCameraVariableAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URotator3dCameraVariable.InnerSingleton;
}

// Z_Construct_UClass_UTransform3fCameraVariable_NoRegister @ 14d571fe0

UClass * __cdecl Z_Construct_UClass_UTransform3fCameraVariable_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTransform3fCameraVariable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"Transform3fCameraVariable",
               &Z_Registration_Info_UClass_UTransform3fCameraVariable.InnerSingleton,
               UTransform3fCameraVariable::StaticRegisterNativesUTransform3fCameraVariable,0x70,0x10
               ,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UTransform3fCameraVariable>,
               InternalVTableHelperCtorCaller<UTransform3fCameraVariable>,local_res8,
               UCameraVariableAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTransform3fCameraVariable.InnerSingleton;
}

// Z_Construct_UClass_UTransform3dCameraVariable_NoRegister @ 14d5720a0

UClass * __cdecl Z_Construct_UClass_UTransform3dCameraVariable_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTransform3dCameraVariable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"Transform3dCameraVariable",
               &Z_Registration_Info_UClass_UTransform3dCameraVariable.InnerSingleton,
               UTransform3dCameraVariable::StaticRegisterNativesUTransform3dCameraVariable,0xa0,0x10
               ,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UTransform3dCameraVariable>,
               InternalVTableHelperCtorCaller<UTransform3dCameraVariable>,local_res8,
               UCameraVariableAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTransform3dCameraVariable.InnerSingleton;
}

// Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetAimDir @ 14d5722a0

UFunction * __cdecl Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetAimDir(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetAimDir_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UObjectTreeGraphComment @ 14d5722e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UObjectTreeGraphComment(void)

{
  if (Z_Registration_Info_UClass_UObjectTreeGraphComment.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UObjectTreeGraphComment.OuterSingleton,
               &Z_Construct_UClass_UObjectTreeGraphComment_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UObjectTreeGraphComment.OuterSingleton;
}

// NewStructOps @ 14d572320

void * __cdecl
Z_Construct_UScriptStruct_FBlueprintCameraDirectorActivateParams_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FBlueprintCameraDirectorActivateParams,&UE::CoreUObject::Private::Construct<FBlueprintCameraDirectorActivateParams>,&UE::CoreUObject::Private::ConstructForTests<FBlueprintCameraDirectorActivateParams>,&UE::CoreUObject::Private::Destruct<FBlueprintCameraDirectorActivateParams>,&UE::CoreUObject::Private::Copy<FBlueprintCameraDirectorActivateParams>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetAimRay @ 14d572360

UFunction * __cdecl Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetAimRay(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetAimRay_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetEffectiveFieldOfView @ 14d5724a0

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetEffectiveFieldOfView(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetEffectiveFieldOfView_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14d5724e0

void * __cdecl Z_Construct_UScriptStruct_FCameraSingleCurve_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x80;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCameraSingleCurve,&UE::CoreUObject::Private::Construct<FCameraSingleCurve>,&UE::CoreUObject::Private::ConstructForTests<FCameraSingleCurve>,&UE::CoreUObject::Private::Destruct<FCameraSingleCurve>,&UE::CoreUObject::Private::Copy<FCameraSingleCurve>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d572520

void * __cdecl
Z_Construct_UScriptStruct_FBlueprintCameraDirectorDeactivateParams_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FBlueprintCameraDirectorDeactivateParams,&UE::CoreUObject::Private::Construct<FBlueprintCameraDirectorDeactivateParams>,&UE::CoreUObject::Private::ConstructForTests<FBlueprintCameraDirectorDeactivateParams>,&UE::CoreUObject::Private::Destruct<FBlueprintCameraDirectorDeactivateParams>,&UE::CoreUObject::Private::Copy<FBlueprintCameraDirectorDeactivateParams>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetFieldOfView @ 14d572670

UFunction * __cdecl Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetFieldOfView(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetFieldOfView_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetFocalLength @ 14d572820

UFunction * __cdecl Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetFocalLength(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetFocalLength_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetLocation @ 14d5728d0

UFunction * __cdecl Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetLocation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetLocation_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14d572950

void * __cdecl Z_Construct_UScriptStruct_FCameraVectorCurve_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x180;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCameraVectorCurve,&UE::CoreUObject::Private::Construct<FCameraVectorCurve>,&UE::CoreUObject::Private::ConstructForTests<FCameraVectorCurve>,&UE::CoreUObject::Private::Destruct<FCameraVectorCurve>,&UE::CoreUObject::Private::Copy<FCameraVectorCurve>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UCalcCameraActorCameraNode @ 14d572990

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCalcCameraActorCameraNode(void)

{
  if (Z_Registration_Info_UClass_UCalcCameraActorCameraNode.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCalcCameraActorCameraNode.OuterSingleton,
               &Z_Construct_UClass_UCalcCameraActorCameraNode_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCalcCameraActorCameraNode.OuterSingleton;
}

// Z_Construct_UClass_UCameraComponentCameraNode @ 14d5729d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCameraComponentCameraNode(void)

{
  if (Z_Registration_Info_UClass_UCameraComponentCameraNode.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCameraComponentCameraNode.OuterSingleton,
               &Z_Construct_UClass_UCameraComponentCameraNode_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCameraComponentCameraNode.OuterSingleton;
}

// Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivateCameraDirector @ 14d572bc0

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivateCameraDirector(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivateCameraDirector_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UBooleanCameraVariable @ 14d572e70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UBooleanCameraVariable(void)

{
  if (Z_Registration_Info_UClass_UBooleanCameraVariable.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UBooleanCameraVariable.OuterSingleton,
               &Z_Construct_UClass_UBooleanCameraVariable_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UBooleanCameraVariable.OuterSingleton;
}

// Z_Construct_UClass_UCameraVariableAsset @ 14d572eb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCameraVariableAsset(void)

{
  if (Z_Registration_Info_UClass_UCameraVariableAsset.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCameraVariableAsset.OuterSingleton,
               &Z_Construct_UClass_UCameraVariableAsset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCameraVariableAsset.OuterSingleton;
}

// Z_Construct_UClass_UDoubleCameraVariable @ 14d572f50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDoubleCameraVariable(void)

{
  if (Z_Registration_Info_UClass_UDoubleCameraVariable.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDoubleCameraVariable.OuterSingleton,
               &Z_Construct_UClass_UDoubleCameraVariable_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDoubleCameraVariable.OuterSingleton;
}

// Z_Construct_UClass_UFloatCameraVariable @ 14d572f90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UFloatCameraVariable(void)

{
  if (Z_Registration_Info_UClass_UFloatCameraVariable.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UFloatCameraVariable.OuterSingleton,
               &Z_Construct_UClass_UFloatCameraVariable_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UFloatCameraVariable.OuterSingleton;
}

// Z_Construct_UClass_UInteger32CameraVariable @ 14d572fd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInteger32CameraVariable(void)

{
  if (Z_Registration_Info_UClass_UInteger32CameraVariable.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInteger32CameraVariable.OuterSingleton,
               &Z_Construct_UClass_UInteger32CameraVariable_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInteger32CameraVariable.OuterSingleton;
}

// Z_Construct_UClass_URotator3dCameraVariable @ 14d573010

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_URotator3dCameraVariable(void)

{
  if (Z_Registration_Info_UClass_URotator3dCameraVariable.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_URotator3dCameraVariable.OuterSingleton,
               &Z_Construct_UClass_URotator3dCameraVariable_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_URotator3dCameraVariable.OuterSingleton;
}

// Z_Construct_UClass_URotator3fCameraVariable @ 14d573050

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_URotator3fCameraVariable(void)

{
  if (Z_Registration_Info_UClass_URotator3fCameraVariable.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_URotator3fCameraVariable.OuterSingleton,
               &Z_Construct_UClass_URotator3fCameraVariable_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_URotator3fCameraVariable.OuterSingleton;
}

// Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetRotation @ 14d573090

UFunction * __cdecl Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetRotation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetRotation_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UTransform3dCameraVariable @ 14d5730d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UTransform3dCameraVariable(void)

{
  if (Z_Registration_Info_UClass_UTransform3dCameraVariable.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UTransform3dCameraVariable.OuterSingleton,
               &Z_Construct_UClass_UTransform3dCameraVariable_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UTransform3dCameraVariable.OuterSingleton;
}

// Z_Construct_UClass_UTransform3fCameraVariable @ 14d573110

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UTransform3fCameraVariable(void)

{
  if (Z_Registration_Info_UClass_UTransform3fCameraVariable.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UTransform3fCameraVariable.OuterSingleton,
               &Z_Construct_UClass_UTransform3fCameraVariable_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UTransform3fCameraVariable.OuterSingleton;
}

// Z_Construct_UClass_UVector2dCameraVariable @ 14d573150

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UVector2dCameraVariable(void)

{
  if (Z_Registration_Info_UClass_UVector2dCameraVariable.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UVector2dCameraVariable.OuterSingleton,
               &Z_Construct_UClass_UVector2dCameraVariable_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UVector2dCameraVariable.OuterSingleton;
}

// NewProp_bForceNewInstance_SetBit @ 14d573190

void __cdecl
Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivateCameraRig_Statics::
NewProp_bForceNewInstance_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UClass_UVector2fCameraVariable @ 14d5731a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UVector2fCameraVariable(void)

{
  if (Z_Registration_Info_UClass_UVector2fCameraVariable.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UVector2fCameraVariable.OuterSingleton,
               &Z_Construct_UClass_UVector2fCameraVariable_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UVector2fCameraVariable.OuterSingleton;
}

// Z_Construct_UClass_UVector3dCameraVariable @ 14d5731e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UVector3dCameraVariable(void)

{
  if (Z_Registration_Info_UClass_UVector3dCameraVariable.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UVector3dCameraVariable.OuterSingleton,
               &Z_Construct_UClass_UVector3dCameraVariable_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UVector3dCameraVariable.OuterSingleton;
}

// Z_Construct_UClass_UVector3fCameraVariable @ 14d573220

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UVector3fCameraVariable(void)

{
  if (Z_Registration_Info_UClass_UVector3fCameraVariable.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UVector3fCameraVariable.OuterSingleton,
               &Z_Construct_UClass_UVector3fCameraVariable_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UVector3fCameraVariable.OuterSingleton;
}

// Z_Construct_UClass_UVector4dCameraVariable @ 14d573260

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UVector4dCameraVariable(void)

{
  if (Z_Registration_Info_UClass_UVector4dCameraVariable.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UVector4dCameraVariable.OuterSingleton,
               &Z_Construct_UClass_UVector4dCameraVariable_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UVector4dCameraVariable.OuterSingleton;
}

// Z_Construct_UClass_UVector4fCameraVariable @ 14d573340

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UVector4fCameraVariable(void)

{
  if (Z_Registration_Info_UClass_UVector4fCameraVariable.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UVector4fCameraVariable.OuterSingleton,
               &Z_Construct_UClass_UVector4fCameraVariable_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UVector4fCameraVariable.OuterSingleton;
}

// NewProp_bAutoReset_SetBit @ 14d5734d0

void __cdecl
Z_Construct_UClass_UCameraVariableAsset_Statics::NewProp_bAutoReset_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivateCameraRig @ 14d5734e0

UFunction * __cdecl Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivateCameraRig(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivateCameraRig_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsPreBlended_SetBit @ 14d573520

void __cdecl
Z_Construct_UClass_UCameraVariableAsset_Statics::NewProp_bIsPreBlended_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x29) = 1;
  return;
}

// NewProp_bIsPrivate_SetBit @ 14d573530

void __cdecl
Z_Construct_UClass_UCameraVariableAsset_Statics::NewProp_bIsPrivate_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2a) = 1;
  return;
}

// Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetSensorAspectRatio @ 14d573610

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetSensorAspectRatio(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetSensorAspectRatio_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UScriptStruct_FCameraVariableDefinition @ 14d5736f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCameraVariableDefinition(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCameraVariableDefinition.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCameraVariableDefinition.InnerSingleton,
               &Z_Construct_UScriptStruct_FCameraVariableDefinition_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCameraVariableDefinition.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCameraVariableDefinition.InnerSingleton;
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

// NewProp_bForceNewInstance_SetBit @ 14d573770

void __cdecl
Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivateCameraRigViaProxy_Statics::
NewProp_bForceNewInstance_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_bIsPrivate_SetBit @ 14d573840

void __cdecl
Z_Construct_UScriptStruct_FCameraVariableDefinition_Statics::NewProp_bIsPrivate_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_bIsInput_SetBit @ 14d573850

void __cdecl
Z_Construct_UScriptStruct_FCameraVariableDefinition_Statics::NewProp_bIsInput_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// NewProp_bAutoReset_SetBit @ 14d573860

void __cdecl
Z_Construct_UScriptStruct_FCameraVariableDefinition_Statics::NewProp_bAutoReset_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x12) = 1;
  return;
}

// NewStructOps @ 14d573870

void * __cdecl Z_Construct_UScriptStruct_FCameraVariableDefinition_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCameraVariableDefinition,&UE::CoreUObject::Private::Construct<FCameraVariableDefinition>,&UE::CoreUObject::Private::ConstructForTests<FCameraVariableDefinition>,&UE::CoreUObject::Private::Destruct<FCameraVariableDefinition>,&UE::CoreUObject::Private::Copy<FCameraVariableDefinition>,&UE::CoreUObject::Private::Identical<FCameraVariableDefinition>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivateCameraRigViaProxy @ 14d573940

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivateCameraRigViaProxy(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivateCameraRigViaProxy_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTarget @ 14d573980

UFunction * __cdecl Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTarget(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTarget_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivatePersistentBaseCameraRig @ 14d5739c0

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivatePersistentBaseCameraRig(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivatePersistentBaseCameraRig_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bDefaultValue_SetBit @ 14d573a00

void __cdecl
Z_Construct_UClass_UBooleanCameraVariable_Statics::NewProp_bDefaultValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x40) = 1;
  return;
}

// Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTargetAtDistance @ 14d573a10

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTargetAtDistance(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTargetAtDistance_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14d573b10

void * __cdecl
Z_Construct_UScriptStruct_FCameraVariableTableAllocationInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCameraVariableTableAllocationInfo,&UE::CoreUObject::Private::Construct<FCameraVariableTableAllocationInfo>,&UE::CoreUObject::Private::ConstructForTests<FCameraVariableTableAllocationInfo>,&UE::CoreUObject::Private::Destruct<FCameraVariableTableAllocationInfo>,&UE::CoreUObject::Private::Copy<FCameraVariableTableAllocationInfo>,&UE::CoreUObject::Private::Identical<FCameraVariableTableAllocationInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivatePersistentGlobalCameraRig @ 14d573b50

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivatePersistentGlobalCameraRig(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivatePersistentGlobalCameraRig_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTargetDistance @ 14d573b90

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTargetDistance(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTargetDistance_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivatePersistentVisualCameraRig @ 14d573bd0

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivatePersistentVisualCameraRig(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ActivatePersistentVisualCameraRig_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTransform @ 14d573c30

UFunction * __cdecl Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTransform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_GetTransform_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_AddChildEvaluationContext @ 14d573e10

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_AddChildEvaluationContext(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_AddChildEvaluationContext_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_MakeCameraPoseFromCameraComponent @ 14d573e50

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_MakeCameraPoseFromCameraComponent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_MakeCameraPoseFromCameraComponent_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_MakeCameraPoseFromCineCameraComponent @ 14d573f50

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_MakeCameraPoseFromCineCameraComponent
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_MakeCameraPoseFromCineCameraComponent_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_DeactivateCameraDirector @ 14d573f90

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_DeactivateCameraDirector(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_DeactivateCameraDirector_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_DeactivatePersistentBaseCameraRig @ 14d573fd0

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_DeactivatePersistentBaseCameraRig(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_DeactivatePersistentBaseCameraRig_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetFieldOfView @ 14d574010

UFunction * __cdecl Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetFieldOfView(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetFieldOfView_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_DeactivatePersistentGlobalCameraRig @ 14d574290

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_DeactivatePersistentGlobalCameraRig(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_DeactivatePersistentGlobalCameraRig_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetFocalLength @ 14d574640

UFunction * __cdecl Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetFocalLength(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetFocalLength_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_DeactivatePersistentVisualCameraRig @ 14d574720

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_DeactivatePersistentVisualCameraRig(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_DeactivatePersistentVisualCameraRig_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UBlueprintCameraContextDataTableFunctionLibrary @ 14d574760

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UBlueprintCameraContextDataTableFunctionLibrary(void)

{
  if (Z_Registration_Info_UClass_UBlueprintCameraContextDataTableFunctionLibrary.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UBlueprintCameraContextDataTableFunctionLibrary.
                OuterSingleton,
               &Z_Construct_UClass_UBlueprintCameraContextDataTableFunctionLibrary_Statics::
                ClassParams);
  }
  return Z_Registration_Info_UClass_UBlueprintCameraContextDataTableFunctionLibrary.OuterSingleton;
}

// Z_Construct_UClass_UBlueprintCameraEvaluationDataFunctionLibrary @ 14d5747a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UBlueprintCameraEvaluationDataFunctionLibrary(void)

{
  if (Z_Registration_Info_UClass_UBlueprintCameraEvaluationDataFunctionLibrary.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UBlueprintCameraEvaluationDataFunctionLibrary.
                OuterSingleton,
               &Z_Construct_UClass_UBlueprintCameraEvaluationDataFunctionLibrary_Statics::
                ClassParams);
  }
  return Z_Registration_Info_UClass_UBlueprintCameraEvaluationDataFunctionLibrary.OuterSingleton;
}

// Z_Construct_UClass_UBlueprintCameraVariableTableFunctionLibrary @ 14d5747e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UBlueprintCameraVariableTableFunctionLibrary(void)

{
  if (Z_Registration_Info_UClass_UBlueprintCameraVariableTableFunctionLibrary.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UBlueprintCameraVariableTableFunctionLibrary.
                OuterSingleton,
               &Z_Construct_UClass_UBlueprintCameraVariableTableFunctionLibrary_Statics::ClassParams
              );
  }
  return Z_Registration_Info_UClass_UBlueprintCameraVariableTableFunctionLibrary.OuterSingleton;
}

// Z_Construct_UScriptStruct_FBlueprintCameraPose @ 14d5748f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBlueprintCameraPose(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FBlueprintCameraPose.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FBlueprintCameraPose.InnerSingleton,
               &Z_Construct_UScriptStruct_FBlueprintCameraPose_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FBlueprintCameraPose.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FBlueprintCameraPose.InnerSingleton;
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

// NewStructOps @ 14d574970

void * __cdecl
Z_Construct_UScriptStruct_FBlueprintCameraEvaluationDataRef_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FBlueprintCameraEvaluationDataRef,&UE::CoreUObject::Private::Construct<FBlueprintCameraEvaluationDataRef>,&UE::CoreUObject::Private::ConstructForTests<FBlueprintCameraEvaluationDataRef>,&UE::CoreUObject::Private::Destruct<FBlueprintCameraEvaluationDataRef>,&UE::CoreUObject::Private::Copy<FBlueprintCameraEvaluationDataRef>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetLocation @ 14d574ab0

UFunction * __cdecl Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetLocation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetLocation_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_FindEvaluationContextOwnerActor @ 14d574b30

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_FindEvaluationContextOwnerActor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_FindEvaluationContextOwnerActor_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetRotation @ 14d574cf0

UFunction * __cdecl Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetRotation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetRotation_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_GetConditionalContextResult @ 14d574d70

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_GetConditionalContextResult(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_GetConditionalContextResult_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetTargetDistance @ 14d574f30

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetTargetDistance(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetTargetDistance_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintCameraEvaluationDataFunctionLibrary_BlendCameraEvaluationData @ 14d574fb0

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintCameraEvaluationDataFunctionLibrary_BlendCameraEvaluationData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraEvaluationDataFunctionLibrary_BlendCameraEvaluationData_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_GetInitialContextResult @ 14d575070

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_GetInitialContextResult(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_GetInitialContextResult_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetTransform @ 14d575130

UFunction * __cdecl Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetTransform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraPoseFunctionLibrary_SetTransform_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintCameraEvaluationDataFunctionLibrary_GetCameraPose @ 14d5751b0

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintCameraEvaluationDataFunctionLibrary_GetCameraPose(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraEvaluationDataFunctionLibrary_GetCameraPose_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14d575230

void __cdecl
Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_RemoveChildEvaluationContext_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_RemoveChildEvaluationContext @ 14d575300

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_RemoveChildEvaluationContext(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_RemoveChildEvaluationContext_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintCameraEvaluationDataFunctionLibrary_MakeCameraEvaluationData @ 14d575340

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintCameraEvaluationDataFunctionLibrary_MakeCameraEvaluationData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraEvaluationDataFunctionLibrary_MakeCameraEvaluationData_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UScriptStruct_FBooleanCameraRigParameterOverride @ 14d575380

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBooleanCameraRigParameterOverride(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FBooleanCameraRigParameterOverride.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FBooleanCameraRigParameterOverride.InnerSingleton,
               &Z_Construct_UScriptStruct_FBooleanCameraRigParameterOverride_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FBooleanCameraRigParameterOverride.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FBooleanCameraRigParameterOverride.InnerSingleton;
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

// Z_Construct_UScriptStruct_FCameraRigAssetReference @ 14d575400

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCameraRigAssetReference(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCameraRigAssetReference.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCameraRigAssetReference.InnerSingleton,
               &Z_Construct_UScriptStruct_FCameraRigAssetReference_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCameraRigAssetReference.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCameraRigAssetReference.InnerSingleton;
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

// Z_Construct_UScriptStruct_FCameraRigParameterOverrideBase @ 14d575480

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCameraRigParameterOverrideBase(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCameraRigParameterOverrideBase.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCameraRigParameterOverrideBase.InnerSingleton,
               &Z_Construct_UScriptStruct_FCameraRigParameterOverrideBase_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCameraRigParameterOverrideBase.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCameraRigParameterOverrideBase.InnerSingleton;
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

// Z_Construct_UScriptStruct_FCameraRigParameterOverrides @ 14d575500

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCameraRigParameterOverrides(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCameraRigParameterOverrides.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCameraRigParameterOverrides.InnerSingleton,
               &Z_Construct_UScriptStruct_FCameraRigParameterOverrides_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCameraRigParameterOverrides.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCameraRigParameterOverrides.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDoubleCameraRigParameterOverride @ 14d575580

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDoubleCameraRigParameterOverride(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDoubleCameraRigParameterOverride.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDoubleCameraRigParameterOverride.InnerSingleton,
               &Z_Construct_UScriptStruct_FDoubleCameraRigParameterOverride_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDoubleCameraRigParameterOverride.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDoubleCameraRigParameterOverride.InnerSingleton;
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

// Z_Construct_UScriptStruct_FFloatCameraRigParameterOverride @ 14d575600

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FFloatCameraRigParameterOverride(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FFloatCameraRigParameterOverride.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FFloatCameraRigParameterOverride.InnerSingleton,
               &Z_Construct_UScriptStruct_FFloatCameraRigParameterOverride_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FFloatCameraRigParameterOverride.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FFloatCameraRigParameterOverride.InnerSingleton;
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

// Z_Construct_UScriptStruct_FInteger32CameraRigParameterOverride @ 14d575680

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInteger32CameraRigParameterOverride(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FInteger32CameraRigParameterOverride.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FInteger32CameraRigParameterOverride.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FInteger32CameraRigParameterOverride_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FInteger32CameraRigParameterOverride.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FInteger32CameraRigParameterOverride.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRotator3dCameraRigParameterOverride @ 14d575700

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRotator3dCameraRigParameterOverride(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRotator3dCameraRigParameterOverride.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRotator3dCameraRigParameterOverride.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FRotator3dCameraRigParameterOverride_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FRotator3dCameraRigParameterOverride.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRotator3dCameraRigParameterOverride.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRotator3fCameraRigParameterOverride @ 14d575780

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRotator3fCameraRigParameterOverride(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRotator3fCameraRigParameterOverride.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRotator3fCameraRigParameterOverride.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FRotator3fCameraRigParameterOverride_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FRotator3fCameraRigParameterOverride.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRotator3fCameraRigParameterOverride.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTransform3dCameraRigParameterOverride @ 14d575800

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTransform3dCameraRigParameterOverride(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTransform3dCameraRigParameterOverride.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTransform3dCameraRigParameterOverride.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FTransform3dCameraRigParameterOverride_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTransform3dCameraRigParameterOverride.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTransform3dCameraRigParameterOverride.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTransform3fCameraRigParameterOverride @ 14d575880

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTransform3fCameraRigParameterOverride(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTransform3fCameraRigParameterOverride.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTransform3fCameraRigParameterOverride.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FTransform3fCameraRigParameterOverride_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTransform3fCameraRigParameterOverride.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTransform3fCameraRigParameterOverride.InnerSingleton;
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

// Z_Construct_UScriptStruct_FVector2dCameraRigParameterOverride @ 14d575900

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FVector2dCameraRigParameterOverride(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FVector2dCameraRigParameterOverride.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FVector2dCameraRigParameterOverride.InnerSingleton
               ,&Z_Construct_UScriptStruct_FVector2dCameraRigParameterOverride_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FVector2dCameraRigParameterOverride.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FVector2dCameraRigParameterOverride.InnerSingleton;
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

// Z_Construct_UScriptStruct_FVector2fCameraRigParameterOverride @ 14d575980

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FVector2fCameraRigParameterOverride(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FVector2fCameraRigParameterOverride.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FVector2fCameraRigParameterOverride.InnerSingleton
               ,&Z_Construct_UScriptStruct_FVector2fCameraRigParameterOverride_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FVector2fCameraRigParameterOverride.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FVector2fCameraRigParameterOverride.InnerSingleton;
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

// Z_Construct_UScriptStruct_FVector3dCameraRigParameterOverride @ 14d575a00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FVector3dCameraRigParameterOverride(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FVector3dCameraRigParameterOverride.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FVector3dCameraRigParameterOverride.InnerSingleton
               ,&Z_Construct_UScriptStruct_FVector3dCameraRigParameterOverride_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FVector3dCameraRigParameterOverride.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FVector3dCameraRigParameterOverride.InnerSingleton;
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

// Z_Construct_UScriptStruct_FVector3fCameraRigParameterOverride @ 14d575a80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FVector3fCameraRigParameterOverride(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FVector3fCameraRigParameterOverride.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FVector3fCameraRigParameterOverride.InnerSingleton
               ,&Z_Construct_UScriptStruct_FVector3fCameraRigParameterOverride_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FVector3fCameraRigParameterOverride.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FVector3fCameraRigParameterOverride.InnerSingleton;
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

// Z_Construct_UScriptStruct_FVector4dCameraRigParameterOverride @ 14d575b00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FVector4dCameraRigParameterOverride(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FVector4dCameraRigParameterOverride.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FVector4dCameraRigParameterOverride.InnerSingleton
               ,&Z_Construct_UScriptStruct_FVector4dCameraRigParameterOverride_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FVector4dCameraRigParameterOverride.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FVector4dCameraRigParameterOverride.InnerSingleton;
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

// Z_Construct_UScriptStruct_FVector4fCameraRigParameterOverride @ 14d575b80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FVector4fCameraRigParameterOverride(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FVector4fCameraRigParameterOverride.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FVector4fCameraRigParameterOverride.InnerSingleton
               ,&Z_Construct_UScriptStruct_FVector4fCameraRigParameterOverride_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FVector4fCameraRigParameterOverride.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FVector4fCameraRigParameterOverride.InnerSingleton;
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

// NewProp_bInvalid_SetBit @ 14d575c00

void __cdecl
Z_Construct_UScriptStruct_FCameraRigParameterOverrideBase_Statics::NewProp_bInvalid_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ResolveCameraRigProxy @ 14d575c10

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ResolveCameraRigProxy(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_ResolveCameraRigProxy_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14d575c50

void * __cdecl Z_Construct_UScriptStruct_FCameraRigParameterOverrideBase_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCameraRigParameterOverrideBase,&UE::CoreUObject::Private::Construct<FCameraRigParameterOverrideBase>,&UE::CoreUObject::Private::ConstructForTests<FCameraRigParameterOverrideBase>,&UE::CoreUObject::Private::Destruct<FCameraRigParameterOverrideBase>,&UE::CoreUObject::Private::Copy<FCameraRigParameterOverrideBase>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UBlueprintCameraEvaluationDataFunctionLibrary_SetCameraPose @ 14d575c90

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintCameraEvaluationDataFunctionLibrary_SetCameraPose(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraEvaluationDataFunctionLibrary_SetCameraPose_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintCameraEvaluationDataFunctionLibrary_SetDefaultCameraRigParameters @ 14d576060

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintCameraEvaluationDataFunctionLibrary_SetDefaultCameraRigParameters
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraEvaluationDataFunctionLibrary_SetDefaultCameraRigParameters_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_RunCameraDirector @ 14d576190

UFunction * __cdecl Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_RunCameraDirector(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_RunCameraDirector_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14d5761e0

void __cdecl
Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_RunChildCameraDirector_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// NewStructOps @ 14d576390

void * __cdecl
Z_Construct_UScriptStruct_FBooleanCameraRigParameterOverride_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FBooleanCameraRigParameterOverride,&UE::CoreUObject::Private::Construct<FBooleanCameraRigParameterOverride>,&UE::CoreUObject::Private::ConstructForTests<FBooleanCameraRigParameterOverride>,&UE::CoreUObject::Private::Destruct<FBooleanCameraRigParameterOverride>,&UE::CoreUObject::Private::Copy<FBooleanCameraRigParameterOverride>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_RunChildCameraDirector @ 14d5763d0

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_RunChildCameraDirector(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraDirectorEvaluator_RunChildCameraDirector_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UCameraRigProxyAsset_NoRegister @ 14d5765c0

UClass * __cdecl Z_Construct_UClass_UCameraRigProxyAsset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraRigProxyAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CameraRigProxyAsset",
               &Z_Registration_Info_UClass_UCameraRigProxyAsset.InnerSingleton,
               UCameraRigProxyAsset::StaticRegisterNativesUCameraRigProxyAsset,0x38,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UCameraRigProxyAsset>,
               InternalVTableHelperCtorCaller<UCameraRigProxyAsset>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraRigProxyAsset.InnerSingleton;
}

// NewStructOps @ 14d5767e0

void * __cdecl
Z_Construct_UScriptStruct_FInteger32CameraRigParameterOverride_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FInteger32CameraRigParameterOverride,&UE::CoreUObject::Private::Construct<FInteger32CameraRigParameterOverride>,&UE::CoreUObject::Private::ConstructForTests<FInteger32CameraRigParameterOverride>,&UE::CoreUObject::Private::Destruct<FInteger32CameraRigParameterOverride>,&UE::CoreUObject::Private::Copy<FInteger32CameraRigParameterOverride>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UCameraRigProxyAsset @ 14d576820

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCameraRigProxyAsset(void)

{
  if (Z_Registration_Info_UClass_UCameraRigProxyAsset.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCameraRigProxyAsset.OuterSingleton,
               &Z_Construct_UClass_UCameraRigProxyAsset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCameraRigProxyAsset.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14d5768e0

void * __thiscall
FGameplayCamerasStateTreeTask::_scalar_deleting_destructor_
          (FGameplayCamerasStateTreeTask *this,uint param_1)

{
  *(undefined ***)this = &___7FStateTreeNodeBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d576a20

void * __thiscall
FGameplayCamerasStateTreeCondition::_scalar_deleting_destructor_
          (FGameplayCamerasStateTreeCondition *this,uint param_1)

{
  *(undefined ***)this = &___7FStateTreeNodeBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// NewProp_ReturnValue_SetBit @ 14d576a60

void __cdecl
Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetBooleanCameraVariable_Statics
::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// NewStructOps @ 14d576b10

void * __cdecl
Z_Construct_UScriptStruct_FFloatCameraRigParameterOverride_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FFloatCameraRigParameterOverride,&UE::CoreUObject::Private::Construct<FFloatCameraRigParameterOverride>,&UE::CoreUObject::Private::ConstructForTests<FFloatCameraRigParameterOverride>,&UE::CoreUObject::Private::Destruct<FFloatCameraRigParameterOverride>,&UE::CoreUObject::Private::Copy<FFloatCameraRigParameterOverride>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetBooleanCameraVariable @ 14d576c00

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetBooleanCameraVariable(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetBooleanCameraVariable_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UCameraDirectorStateTreeSchema @ 14d576e40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCameraDirectorStateTreeSchema(void)

{
  if (Z_Registration_Info_UClass_UCameraDirectorStateTreeSchema.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCameraDirectorStateTreeSchema.OuterSingleton,
               &Z_Construct_UClass_UCameraDirectorStateTreeSchema_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCameraDirectorStateTreeSchema.OuterSingleton;
}

// Z_Construct_UScriptStruct_FGameplayCamerasStateTreeTask @ 14d576f40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGameplayCamerasStateTreeTask(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGameplayCamerasStateTreeTask.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGameplayCamerasStateTreeTask.InnerSingleton,
               &Z_Construct_UScriptStruct_FGameplayCamerasStateTreeTask_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGameplayCamerasStateTreeTask.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGameplayCamerasStateTreeTask.InnerSingleton;
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

// Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetDoubleCameraVariable @ 14d576fc0

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetDoubleCameraVariable(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetDoubleCameraVariable_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetFloatCameraVariable @ 14d5772c0

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetFloatCameraVariable(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetFloatCameraVariable_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14d577300

void * __cdecl
Z_Construct_UScriptStruct_FDoubleCameraRigParameterOverride_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDoubleCameraRigParameterOverride,&UE::CoreUObject::Private::Construct<FDoubleCameraRigParameterOverride>,&UE::CoreUObject::Private::ConstructForTests<FDoubleCameraRigParameterOverride>,&UE::CoreUObject::Private::Destruct<FDoubleCameraRigParameterOverride>,&UE::CoreUObject::Private::Copy<FDoubleCameraRigParameterOverride>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d577340

void * __cdecl
Z_Construct_UScriptStruct_FCameraDirectorStateTreeEvaluationData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCameraDirectorStateTreeEvaluationData,&UE::CoreUObject::Private::Construct<FCameraDirectorStateTreeEvaluationData>,&UE::CoreUObject::Private::ConstructForTests<FCameraDirectorStateTreeEvaluationData>,&UE::CoreUObject::Private::Destruct<FCameraDirectorStateTreeEvaluationData>,&UE::CoreUObject::Private::Copy<FCameraDirectorStateTreeEvaluationData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetInteger32CameraVariable @ 14d5773c0

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetInteger32CameraVariable(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetInteger32CameraVariable_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UCameraRigParameterInterop @ 14d577400

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCameraRigParameterInterop(void)

{
  if (Z_Registration_Info_UClass_UCameraRigParameterInterop.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCameraRigParameterInterop.OuterSingleton,
               &Z_Construct_UClass_UCameraRigParameterInterop_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCameraRigParameterInterop.OuterSingleton;
}

// Z_Construct_UClass_UCameraRigParameterInteropLibrary @ 14d577440

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCameraRigParameterInteropLibrary(void)

{
  if (Z_Registration_Info_UClass_UCameraRigParameterInteropLibrary.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCameraRigParameterInteropLibrary.OuterSingleton,
               &Z_Construct_UClass_UCameraRigParameterInteropLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCameraRigParameterInteropLibrary.OuterSingleton;
}

// Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetRotatorCameraVariable @ 14d577660

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetRotatorCameraVariable(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetRotatorCameraVariable_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCameraRigParameterInterop_GetCameraParameter @ 14d5776a0

UFunction * __cdecl Z_Construct_UFunction_UCameraRigParameterInterop_GetCameraParameter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCameraRigParameterInterop_GetCameraParameter_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14d5776e0

void * __cdecl
Z_Construct_UScriptStruct_FVector2fCameraRigParameterOverride_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FVector2fCameraRigParameterOverride,&UE::CoreUObject::Private::Construct<FVector2fCameraRigParameterOverride>,&UE::CoreUObject::Private::ConstructForTests<FVector2fCameraRigParameterOverride>,&UE::CoreUObject::Private::Destruct<FVector2fCameraRigParameterOverride>,&UE::CoreUObject::Private::Copy<FVector2fCameraRigParameterOverride>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d5777d0

void * __cdecl Z_Construct_UScriptStruct_FGameplayCamerasStateTreeTask_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGameplayCamerasStateTreeTask,&UE::CoreUObject::Private::Construct<FGameplayCamerasStateTreeTask>,&UE::CoreUObject::Private::ConstructForTests<FGameplayCamerasStateTreeTask>,&UE::CoreUObject::Private::Destruct<FGameplayCamerasStateTreeTask>,&UE::CoreUObject::Private::Copy<FGameplayCamerasStateTreeTask>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UCameraRigParameterInterop_SetCameraParameter @ 14d577810

UFunction * __cdecl Z_Construct_UFunction_UCameraRigParameterInterop_SetCameraParameter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCameraRigParameterInterop_SetCameraParameter_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetTransformCameraVariable @ 14d577850

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetTransformCameraVariable(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetTransformCameraVariable_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetVector2CameraVariable @ 14d577890

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetVector2CameraVariable(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetVector2CameraVariable_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14d5778d0

void * __cdecl
Z_Construct_UScriptStruct_FVector2dCameraRigParameterOverride_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FVector2dCameraRigParameterOverride,&UE::CoreUObject::Private::Construct<FVector2dCameraRigParameterOverride>,&UE::CoreUObject::Private::ConstructForTests<FVector2dCameraRigParameterOverride>,&UE::CoreUObject::Private::Destruct<FVector2dCameraRigParameterOverride>,&UE::CoreUObject::Private::Copy<FVector2dCameraRigParameterOverride>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d577910

void * __cdecl
Z_Construct_UScriptStruct_FGameplayCamerasStateTreeCondition_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FGameplayCamerasStateTreeCondition,&UE::CoreUObject::Private::Construct<FGameplayCamerasStateTreeCondition>,&UE::CoreUObject::Private::ConstructForTests<FGameplayCamerasStateTreeCondition>,&UE::CoreUObject::Private::Destruct<FGameplayCamerasStateTreeCondition>,&UE::CoreUObject::Private::Copy<FGameplayCamerasStateTreeCondition>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetVector3CameraVariable @ 14d577a60

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetVector3CameraVariable(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetVector3CameraVariable_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetVector4CameraVariable @ 14d577e00

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetVector4CameraVariable(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_GetVector4CameraVariable_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14d577f70

void * __cdecl
Z_Construct_UScriptStruct_FVector3fCameraRigParameterOverride_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FVector3fCameraRigParameterOverride,&UE::CoreUObject::Private::Construct<FVector3fCameraRigParameterOverride>,&UE::CoreUObject::Private::ConstructForTests<FVector3fCameraRigParameterOverride>,&UE::CoreUObject::Private::Destruct<FVector3fCameraRigParameterOverride>,&UE::CoreUObject::Private::Copy<FVector3fCameraRigParameterOverride>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_Value_SetBit @ 14d577fb0

void __cdecl
Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetBooleanCameraVariable_Statics
::NewProp_Value_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetBooleanCameraVariable @ 14d578050

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetBooleanCameraVariable(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetBooleanCameraVariable_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCameraRigParameterInteropLibrary_MakeLiteralLinearColor @ 14d578140

UFunction * __cdecl
Z_Construct_UFunction_UCameraRigParameterInteropLibrary_MakeLiteralLinearColor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCameraRigParameterInteropLibrary_MakeLiteralLinearColor_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetDoubleCameraVariable @ 14d578290

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetDoubleCameraVariable(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetDoubleCameraVariable_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14d578390

void * __cdecl
Z_Construct_UScriptStruct_FVector3dCameraRigParameterOverride_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FVector3dCameraRigParameterOverride,&UE::CoreUObject::Private::Construct<FVector3dCameraRigParameterOverride>,&UE::CoreUObject::Private::ConstructForTests<FVector3dCameraRigParameterOverride>,&UE::CoreUObject::Private::Destruct<FVector3dCameraRigParameterOverride>,&UE::CoreUObject::Private::Copy<FVector3dCameraRigParameterOverride>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UCameraRigParameterInteropLibrary_MakeLiteralRotator @ 14d5784f0

UFunction * __cdecl Z_Construct_UFunction_UCameraRigParameterInteropLibrary_MakeLiteralRotator(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCameraRigParameterInteropLibrary_MakeLiteralRotator_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UCameraRigProxyTable @ 14d5785e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCameraRigProxyTable(void)

{
  if (Z_Registration_Info_UClass_UCameraRigProxyTable.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCameraRigProxyTable.OuterSingleton,
               &Z_Construct_UClass_UCameraRigProxyTable_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCameraRigProxyTable.OuterSingleton;
}

// Z_Construct_UScriptStruct_FCameraRigProxyRedirectTableEntry @ 14d578620

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCameraRigProxyRedirectTableEntry(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCameraRigProxyRedirectTableEntry.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCameraRigProxyRedirectTableEntry.InnerSingleton,
               &Z_Construct_UScriptStruct_FCameraRigProxyRedirectTableEntry_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCameraRigProxyRedirectTableEntry.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCameraRigProxyRedirectTableEntry.InnerSingleton;
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

// Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetFloatCameraVariable @ 14d5786a0

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetFloatCameraVariable(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetFloatCameraVariable_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14d5786e0

void * __cdecl
Z_Construct_UScriptStruct_FCameraRigProxyRedirectTableEntry_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCameraRigProxyRedirectTableEntry,&UE::CoreUObject::Private::Construct<FCameraRigProxyRedirectTableEntry>,&UE::CoreUObject::Private::ConstructForTests<FCameraRigProxyRedirectTableEntry>,&UE::CoreUObject::Private::Destruct<FCameraRigProxyRedirectTableEntry>,&UE::CoreUObject::Private::Copy<FCameraRigProxyRedirectTableEntry>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UCameraRigParameterInteropLibrary_MakeLiteralVector @ 14d578860

UFunction * __cdecl Z_Construct_UFunction_UCameraRigParameterInteropLibrary_MakeLiteralVector(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCameraRigParameterInteropLibrary_MakeLiteralVector_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetInteger32CameraVariable @ 14d5788a0

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetInteger32CameraVariable(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetInteger32CameraVariable_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCameraRigParameterInteropLibrary_MakeLiteralVector2D @ 14d5788e0

UFunction * __cdecl
Z_Construct_UFunction_UCameraRigParameterInteropLibrary_MakeLiteralVector2D(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCameraRigParameterInteropLibrary_MakeLiteralVector2D_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14d578920

void * __cdecl
Z_Construct_UScriptStruct_FVector4fCameraRigParameterOverride_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FVector4fCameraRigParameterOverride,&UE::CoreUObject::Private::Construct<FVector4fCameraRigParameterOverride>,&UE::CoreUObject::Private::ConstructForTests<FVector4fCameraRigParameterOverride>,&UE::CoreUObject::Private::Destruct<FVector4fCameraRigParameterOverride>,&UE::CoreUObject::Private::Copy<FVector4fCameraRigParameterOverride>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d5789a0

void * __cdecl Z_Construct_UScriptStruct_FCameraRigProxyRedirectTable_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCameraRigProxyRedirectTable,&UE::CoreUObject::Private::Construct<FCameraRigProxyRedirectTable>,&UE::CoreUObject::Private::ConstructForTests<FCameraRigProxyRedirectTable>,&UE::CoreUObject::Private::Destruct<FCameraRigProxyRedirectTable>,&UE::CoreUObject::Private::Copy<FCameraRigProxyRedirectTable>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UCameraVariableCollection @ 14d5789e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCameraVariableCollection(void)

{
  if (Z_Registration_Info_UClass_UCameraVariableCollection.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCameraVariableCollection.OuterSingleton,
               &Z_Construct_UClass_UCameraVariableCollection_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCameraVariableCollection.OuterSingleton;
}

// Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetRotatorCameraVariable @ 14d578a20

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetRotatorCameraVariable(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetRotatorCameraVariable_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCameraRigParameterInteropLibrary_MakeLiteralVector3f @ 14d578a60

UFunction * __cdecl
Z_Construct_UFunction_UCameraRigParameterInteropLibrary_MakeLiteralVector3f(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCameraRigParameterInteropLibrary_MakeLiteralVector3f_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetTransformCameraVariable @ 14d578bb0

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetTransformCameraVariable(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetTransformCameraVariable_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14d578d30

void * __cdecl
Z_Construct_UScriptStruct_FVector4dCameraRigParameterOverride_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x70;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FVector4dCameraRigParameterOverride,&UE::CoreUObject::Private::Construct<FVector4dCameraRigParameterOverride>,&UE::CoreUObject::Private::ConstructForTests<FVector4dCameraRigParameterOverride>,&UE::CoreUObject::Private::Destruct<FVector4dCameraRigParameterOverride>,&UE::CoreUObject::Private::Copy<FVector4dCameraRigParameterOverride>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetVector2CameraVariable @ 14d578fe0

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetVector2CameraVariable(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetVector2CameraVariable_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetVector3CameraVariable @ 14d579200

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetVector3CameraVariable(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetVector3CameraVariable_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14d5792c0

void * __cdecl
Z_Construct_UScriptStruct_FRotator3fCameraRigParameterOverride_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRotator3fCameraRigParameterOverride,&UE::CoreUObject::Private::Construct<FRotator3fCameraRigParameterOverride>,&UE::CoreUObject::Private::ConstructForTests<FRotator3fCameraRigParameterOverride>,&UE::CoreUObject::Private::Destruct<FRotator3fCameraRigParameterOverride>,&UE::CoreUObject::Private::Copy<FRotator3fCameraRigParameterOverride>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetVector4CameraVariable @ 14d579a50

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetVector4CameraVariable(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraVariableTableFunctionLibrary_SetVector4CameraVariable_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14d579bd0

void * __cdecl
Z_Construct_UScriptStruct_FRotator3dCameraRigParameterOverride_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRotator3dCameraRigParameterOverride,&UE::CoreUObject::Private::Construct<FRotator3dCameraRigParameterOverride>,&UE::CoreUObject::Private::ConstructForTests<FRotator3dCameraRigParameterOverride>,&UE::CoreUObject::Private::Destruct<FRotator3dCameraRigParameterOverride>,&UE::CoreUObject::Private::Copy<FRotator3dCameraRigParameterOverride>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d579d50

void * __cdecl
Z_Construct_UScriptStruct_FTransform3fCameraRigParameterOverride_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x80;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTransform3fCameraRigParameterOverride,&UE::CoreUObject::Private::Construct<FTransform3fCameraRigParameterOverride>,&UE::CoreUObject::Private::ConstructForTests<FTransform3fCameraRigParameterOverride>,&UE::CoreUObject::Private::Destruct<FTransform3fCameraRigParameterOverride>,&UE::CoreUObject::Private::Copy<FTransform3fCameraRigParameterOverride>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UPriorityQueueCameraDirector @ 14d57a150

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPriorityQueueCameraDirector(void)

{
  if (Z_Registration_Info_UClass_UPriorityQueueCameraDirector.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPriorityQueueCameraDirector.OuterSingleton,
               &Z_Construct_UClass_UPriorityQueueCameraDirector_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPriorityQueueCameraDirector.OuterSingleton;
}

// NewStructOps @ 14d57a340

void * __cdecl
Z_Construct_UScriptStruct_FTransform3dCameraRigParameterOverride_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xb0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTransform3dCameraRigParameterOverride,&UE::CoreUObject::Private::Construct<FTransform3dCameraRigParameterOverride>,&UE::CoreUObject::Private::ConstructForTests<FTransform3dCameraRigParameterOverride>,&UE::CoreUObject::Private::Destruct<FTransform3dCameraRigParameterOverride>,&UE::CoreUObject::Private::Copy<FTransform3dCameraRigParameterOverride>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UBlueprintCameraContextDataTableFunctionLibrary_GetClassData @ 14d57a380

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintCameraContextDataTableFunctionLibrary_GetClassData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraContextDataTableFunctionLibrary_GetClassData_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UBlueprintCameraContextDataTableFunctionLibrary_GetEnumData @ 14d57a4d0

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintCameraContextDataTableFunctionLibrary_GetEnumData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraContextDataTableFunctionLibrary_GetEnumData_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14d57a510

void * __cdecl Z_Construct_UScriptStruct_FBooleanCameraVariableReference_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FBooleanCameraVariableReference,&UE::CoreUObject::Private::Construct<FBooleanCameraVariableReference>,&UE::CoreUObject::Private::ConstructForTests<FBooleanCameraVariableReference>,&UE::CoreUObject::Private::Destruct<FBooleanCameraVariableReference>,&UE::CoreUObject::Private::Copy<FBooleanCameraVariableReference>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UBlueprintCameraContextDataTableFunctionLibrary_GetNameData @ 14d57a580

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintCameraContextDataTableFunctionLibrary_GetNameData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraContextDataTableFunctionLibrary_GetNameData_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14d57a760

void * __cdecl Z_Construct_UScriptStruct_FCameraRigParameterOverrides_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xe0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCameraRigParameterOverrides,&UE::CoreUObject::Private::Construct<FCameraRigParameterOverrides>,&UE::CoreUObject::Private::ConstructForTests<FCameraRigParameterOverrides>,&UE::CoreUObject::Private::Destruct<FCameraRigParameterOverrides>,&UE::CoreUObject::Private::Copy<FCameraRigParameterOverrides>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UBlueprintCameraContextDataTableFunctionLibrary_GetObjectData @ 14d57a7f0

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintCameraContextDataTableFunctionLibrary_GetObjectData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraContextDataTableFunctionLibrary_GetObjectData_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14d57a830

void * __cdecl
Z_Construct_UScriptStruct_FInteger32CameraVariableReference_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FInteger32CameraVariableReference,&UE::CoreUObject::Private::Construct<FInteger32CameraVariableReference>,&UE::CoreUObject::Private::ConstructForTests<FInteger32CameraVariableReference>,&UE::CoreUObject::Private::Destruct<FInteger32CameraVariableReference>,&UE::CoreUObject::Private::Copy<FInteger32CameraVariableReference>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UBlueprintCameraContextDataTableFunctionLibrary_GetStringData @ 14d57a870

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintCameraContextDataTableFunctionLibrary_GetStringData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraContextDataTableFunctionLibrary_GetStringData_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UDefaultRootCameraNode @ 14d57a8b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDefaultRootCameraNode(void)

{
  if (Z_Registration_Info_UClass_UDefaultRootCameraNode.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDefaultRootCameraNode.OuterSingleton,
               &Z_Construct_UClass_UDefaultRootCameraNode_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDefaultRootCameraNode.OuterSingleton;
}

// Z_Construct_UClass_URootCameraNode @ 14d57a8f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_URootCameraNode(void)

{
  if (Z_Registration_Info_UClass_URootCameraNode.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_URootCameraNode.OuterSingleton,
               &Z_Construct_UClass_URootCameraNode_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_URootCameraNode.OuterSingleton;
}

// Z_Construct_UFunction_UBlueprintCameraContextDataTableFunctionLibrary_GetStructData @ 14d57aaa0

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintCameraContextDataTableFunctionLibrary_GetStructData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraContextDataTableFunctionLibrary_GetStructData_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14d57aae0

void * __cdecl Z_Construct_UScriptStruct_FFloatCameraVariableReference_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FFloatCameraVariableReference,&UE::CoreUObject::Private::Construct<FFloatCameraVariableReference>,&UE::CoreUObject::Private::ConstructForTests<FFloatCameraVariableReference>,&UE::CoreUObject::Private::Destruct<FFloatCameraVariableReference>,&UE::CoreUObject::Private::Copy<FFloatCameraVariableReference>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14d57ac40

void * __cdecl Z_Construct_UScriptStruct_FCameraRigAssetReference_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x130;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCameraRigAssetReference,&UE::CoreUObject::Private::Construct<FCameraRigAssetReference>,&UE::CoreUObject::Private::ConstructForTests<FCameraRigAssetReference>,&UE::CoreUObject::Private::Destruct<FCameraRigAssetReference>,&UE::CoreUObject::Private::PostSerialize<FCameraRigAssetReference>,&UE::CoreUObject::Private::Copy<FCameraRigAssetReference>,&UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FCameraRigAssetReference>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_ReturnValue_SetBit @ 14d57ac80

void __cdecl
Z_Construct_UFunction_UBlueprintCameraContextDataTableFunctionLibrary_SetClassData_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// Z_Construct_UFunction_UBlueprintCameraContextDataTableFunctionLibrary_SetClassData @ 14d57ac90

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintCameraContextDataTableFunctionLibrary_SetClassData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraContextDataTableFunctionLibrary_SetClassData_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14d57ade0

void __cdecl
Z_Construct_UFunction_UBlueprintCameraContextDataTableFunctionLibrary_SetEnumData_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x29) = 1;
  return;
}

// NewStructOps @ 14d57adf0

void * __cdecl Z_Construct_UScriptStruct_FDoubleCameraVariableReference_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDoubleCameraVariableReference,&UE::CoreUObject::Private::Construct<FDoubleCameraVariableReference>,&UE::CoreUObject::Private::ConstructForTests<FDoubleCameraVariableReference>,&UE::CoreUObject::Private::Destruct<FDoubleCameraVariableReference>,&UE::CoreUObject::Private::Copy<FDoubleCameraVariableReference>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UBlueprintCameraDirectorEvaluator_NoRegister @ 14d57ae30

UClass * __cdecl Z_Construct_UClass_UBlueprintCameraDirectorEvaluator_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlueprintCameraDirectorEvaluator.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"BlueprintCameraDirectorEvaluator",
               &Z_Registration_Info_UClass_UBlueprintCameraDirectorEvaluator.InnerSingleton,
               UBlueprintCameraDirectorEvaluator::
               StaticRegisterNativesUBlueprintCameraDirectorEvaluator,0x148,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UBlueprintCameraDirectorEvaluator>,
               InternalVTableHelperCtorCaller<UBlueprintCameraDirectorEvaluator>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlueprintCameraDirectorEvaluator.InnerSingleton;
}

// Z_Construct_UClass_UCameraRigTransition @ 14d57af80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCameraRigTransition(void)

{
  if (Z_Registration_Info_UClass_UCameraRigTransition.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCameraRigTransition.OuterSingleton,
               &Z_Construct_UClass_UCameraRigTransition_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCameraRigTransition.OuterSingleton;
}

// Z_Construct_UClass_UCameraRigTransitionCondition @ 14d57b000

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCameraRigTransitionCondition(void)

{
  if (Z_Registration_Info_UClass_UCameraRigTransitionCondition.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCameraRigTransitionCondition.OuterSingleton,
               &Z_Construct_UClass_UCameraRigTransitionCondition_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UCameraRigTransitionCondition.OuterSingleton;
}

// Z_Construct_UFunction_UBlueprintCameraContextDataTableFunctionLibrary_SetEnumData @ 14d57b120

UFunction * __cdecl
Z_Construct_UFunction_UBlueprintCameraContextDataTableFunctionLibrary_SetEnumData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UBlueprintCameraContextDataTableFunctionLibrary_SetEnumData_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_USingleCameraDirector @ 14d57b180

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USingleCameraDirector(void)

{
  if (Z_Registration_Info_UClass_USingleCameraDirector.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USingleCameraDirector.OuterSingleton,
               &Z_Construct_UClass_USingleCameraDirector_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USingleCameraDirector.OuterSingleton;
}

// TTransform<float>,0> @ 14d57b2c0

void __cdecl
operator<<<UE::Math::TTransform<float>_0>(FStructuredArchiveSlot param_1,TTransform<float> *param_2)

{
  FArchive *pFVar1;
  __m128 _Var2;
  __m128 _Var3;
  FSlotBase local_res8;
  
  local_res8.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
  UE::Math::operator<<(pFVar1,(TQuat<float> *)param_2);
  UE::Math::operator<<(pFVar1,(TVector<float> *)&param_2->Translation);
  UE::Math::operator<<(pFVar1,(TVector<float> *)&param_2->Scale3D);
  if ((pFVar1->field_0x28 & 1) != 0) {
    _Var2.m128_f32 = (float  [4])insertps(param_2->Translation,param_2->Translation,8);
    _Var3.m128_f32 = (float  [4])insertps(param_2->Scale3D,param_2->Scale3D,8);
    param_2->Translation = _Var2;
    param_2->Scale3D = _Var3;
  }
  return;
}

// TVector4<float>,0> @ 14d57b340

void __cdecl
operator<<<UE::Math::TVector4<float>_0>(FStructuredArchiveSlot param_1,TVector4<float> *param_2)

{
  FArchive *pFVar1;
  FSlotBase local_res8 [4];
  
  local_res8[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res8);
  UE::Math::operator<<(pFVar1,param_2);
  return;
}

// FCameraRigJoint,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> @ 14d57b370

FArchive * __cdecl
operator<<<UE::Cameras::FCameraRigJoint_TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
          (FArchive *param_1,
          TArray<UE::Cameras::FCameraRigJoint,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  int *piVar1;
  longlong *plVar2;
  ForElementType<UE::Cameras::FCameraRigJoint> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  ForElementType<UE::Cameras::FCameraRigJoint> FVar9;
  uint uVar10;
  uint uVar11;
  FCameraRigJoint *pFVar12;
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
      ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraRigJoint>_>
                (0x70,0x10,0,&param_2->AllocatorInstance,0,piVar1);
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
              FVar9 = (ForElementType<UE::Cameras::FCameraRigJoint>)param_2;
              if (FVar3 != (ForElementType<UE::Cameras::FCameraRigJoint>)0x0) {
                FVar9 = FVar3;
              }
              UE::Cameras::operator<<
                        (param_1,(FCameraRigJoint *)((longlong)(int)uVar11 * 0x70 + (longlong)FVar9)
                        );
              uVar10 = param_2->ArrayNum;
              uVar11 = uVar11 + 1;
            } while ((int)uVar11 < (int)uVar10);
          }
        }
        else {
          TArray<UE::Cameras::FCameraRigJoint,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
          ::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraRigJoint>_>
                                  (0x1070,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              FVar3 = (param_2->AllocatorInstance).SecondaryData;
              FVar9 = (ForElementType<UE::Cameras::FCameraRigJoint>)param_2;
              if (FVar3 != (ForElementType<UE::Cameras::FCameraRigJoint>)0x0) {
                FVar9 = FVar3;
              }
              pFVar12 = (FCameraRigJoint *)((longlong)iVar6 * 0x70 + (longlong)FVar9);
              DefaultConstructItems<UE::Cameras::FCameraRigJoint,int>(pFVar12,1);
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

// FEntry,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> @ 14d57b380

FArchive * __cdecl
operator<<<UE::Cameras::FCameraRigJointsDebugBlock::
FEntry_TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
          (FArchive *param_1,
          TArray<UE::Cameras::FCameraRigJointsDebugBlock::FEntry,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  int *piVar1;
  FEntry *pFVar2;
  longlong *plVar3;
  ForElementType<UE::Cameras::FCameraRigJointsDebugBlock::FEntry> FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FArchive *pFVar9;
  ForElementType<UE::Cameras::FCameraRigJointsDebugBlock::FEntry> FVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x48);
  iVar13 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      FVar4 = (param_2->AllocatorInstance).SecondaryData;
      FVar10 = (ForElementType<UE::Cameras::FCameraRigJointsDebugBlock::FEntry>)param_2;
      if (FVar4 != (ForElementType<UE::Cameras::FCameraRigJointsDebugBlock::FEntry>)0x0) {
        FVar10 = FVar4;
      }
      DestructItems<UE::Cameras::FCameraRigJointsDebugBlock::FEntry,int>
                ((FEntry *)FVar10,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraRigJointsDebugBlock::FEntry>_>
                  (0x48,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x38e39)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar12 = 0;
          uVar11 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar8 = 0;
              if ((int)uVar12 < (int)uVar11) {
                uVar8 = ~uVar12 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                pFVar9 = (FArchive *)(*pcVar5)();
                return pFVar9;
              }
              FVar4 = (param_2->AllocatorInstance).SecondaryData;
              FVar10 = (ForElementType<UE::Cameras::FCameraRigJointsDebugBlock::FEntry>)param_2;
              if (FVar4 != (ForElementType<UE::Cameras::FCameraRigJointsDebugBlock::FEntry>)0x0) {
                FVar10 = FVar4;
              }
              UE::Cameras::operator<<
                        (param_1,(FEntry *)((longlong)FVar10 + (longlong)(int)uVar12 * 0x48));
              uVar12 = uVar12 + 1;
              uVar11 = param_2->ArrayNum;
            } while ((int)uVar12 < param_2->ArrayNum);
          }
        }
        else {
          TArray<UE::Cameras::FCameraRigJointsDebugBlock::FEntry,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
          ::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar7 = param_2->ArrayNum;
              if (iVar7 == *piVar1) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraRigJointsDebugBlock::FEntry>_>
                                  (0x848,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar7 + 1;
              FVar4 = (param_2->AllocatorInstance).SecondaryData;
              FVar10 = (ForElementType<UE::Cameras::FCameraRigJointsDebugBlock::FEntry>)param_2;
              if (FVar4 != (ForElementType<UE::Cameras::FCameraRigJointsDebugBlock::FEntry>)0x0) {
                FVar10 = FVar4;
              }
              pFVar2 = (FEntry *)((longlong)FVar10 + (longlong)iVar7 * 0x48);
              DefaultConstructItems<UE::Cameras::FCameraRigJointsDebugBlock::FEntry,int>(pFVar2,1);
              UE::Cameras::operator<<(param_1,pFVar2);
              iVar13 = iVar13 + 1;
            } while (iVar13 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FArchive *)(*pcVar5)();
        return pFVar9;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// FEntryDebugInfo,TSizedDefaultAllocator<32>_> @ 14d57b390

FArchive * __cdecl
operator<<<UE::Cameras::FContextDataTableDebugBlock::FEntryDebugInfo_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<UE::Cameras::FContextDataTableDebugBlock::FEntryDebugInfo,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x38);
  iVar11 = 0;
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
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<UE::Cameras::FContextDataTableDebugBlock::FEntryDebugInfo,int>
                ((FEntryDebugInfo *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x4924a)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
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
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                pFVar7 = (FArchive *)(*pcVar3)();
                return pFVar7;
              }
              pFVar9 = (param_2->AllocatorInstance).Data;
              ::operator<<(param_1,(FString *)(pFVar9 + (longlong)(int)uVar10 * 0x38 + 8));
              (**(code **)(*(longlong *)param_1 + 0x178))
                        (param_1,pFVar9 + (longlong)(int)uVar10 * 0x38 + 0x18);
              ::operator<<(param_1,(FString *)(pFVar9 + (longlong)(int)uVar10 * 0x38 + 0x20));
              ::operator<<(param_1,(bool *)(pFVar9 + (longlong)(int)uVar10 * 0x38 + 0x30));
              ::operator<<(param_1,(bool *)(pFVar9 + (longlong)(int)uVar10 * 0x38 + 0x31));
              uVar10 = uVar10 + 1;
              uVar8 = param_2->ArrayNum;
            } while ((int)uVar10 < param_2->ArrayNum);
          }
        }
        else {
          TArray<UE::Cameras::FContextDataTableDebugBlock::FEntryDebugInfo,TSizedDefaultAllocator<32>_>
          ::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x838,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar9 = (param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x38;
              DefaultConstructItems<UE::Cameras::FContextDataTableDebugBlock::FEntryDebugInfo,int>
                        (pFVar9,1);
              ::operator<<(param_1,(FString *)(pFVar9 + 8));
              (**(code **)(*(longlong *)param_1 + 0x178))(param_1,pFVar9 + 0x18);
              ::operator<<(param_1,(FString *)(pFVar9 + 0x20));
              ::operator<<(param_1,(bool *)(pFVar9 + 0x30));
              ::operator<<(param_1,(bool *)(pFVar9 + 0x31));
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
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

// FEntryDebugInfo,TSizedDefaultAllocator<32>_> @ 14d57b3a0

FArchive * __cdecl
operator<<<UE::Cameras::FVariableTableDebugBlock::FEntryDebugInfo_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<UE::Cameras::FVariableTableDebugBlock::FEntryDebugInfo,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint uVar9;
  FEntryDebugInfo *pFVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x30);
  iVar11 = 0;
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
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<UE::Cameras::FVariableTableDebugBlock::FEntryDebugInfo,int>
                ((FEntryDebugInfo *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x55556)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar9 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if (uVar6 == 0) {
                bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar4) {
                  pcVar3 = (code *)swi(3);
                  pFVar7 = (FArchive *)(*pcVar3)();
                  return pFVar7;
                }
              }
              UE::Cameras::operator<<
                        (param_1,(FEntryDebugInfo *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x30));
              uVar8 = param_2->ArrayNum;
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < (int)uVar8);
          }
        }
        else {
          TArray<UE::Cameras::FVariableTableDebugBlock::FEntryDebugInfo,TSizedDefaultAllocator<32>_>
          ::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x830,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FEntryDebugInfo *)
                        ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x30);
              DefaultConstructItems<UE::Cameras::FVariableTableDebugBlock::FEntryDebugInfo,int>
                        (pFVar10,1);
              UE::Cameras::operator<<(param_1,pFVar10);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
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

// FPlayerControllerDebugInfo,TSizedDefaultAllocator<32>_> @ 14d57b3b0

FArchive * __cdecl
operator<<<UE::Cameras::FPlayerControllersDebugBlock::
FPlayerControllerDebugInfo_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<UE::Cameras::FPlayerControllersDebugBlock::FPlayerControllerDebugInfo,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint uVar9;
  FPlayerControllerDebugInfo *pFVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 7);
  iVar11 = 0;
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
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<UE::Cameras::FPlayerControllersDebugBlock::FPlayerControllerDebugInfo,int>
                ((FPlayerControllerDebugInfo *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x80,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x20001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar9 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                pFVar7 = (FArchive *)(*pcVar3)();
                return pFVar7;
              }
              UE::Cameras::operator<<
                        (param_1,(FPlayerControllerDebugInfo *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x80));
              uVar9 = uVar9 + 1;
              uVar8 = param_2->ArrayNum;
            } while ((int)uVar9 < param_2->ArrayNum);
          }
        }
        else {
          TArray<UE::Cameras::FPlayerControllersDebugBlock::FPlayerControllerDebugInfo,TSizedDefaultAllocator<32>_>
          ::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x880,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FPlayerControllerDebugInfo *)
                        ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x80);
              DefaultConstructItems<UE::Cameras::FPlayerControllersDebugBlock::FPlayerControllerDebugInfo,int>
                        (pFVar10,1);
              UE::Cameras::operator<<(param_1,pFVar10);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
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

// CastChecked<UEnum_const_,UObject_const_> @ 14d57dd70

UEnum * __cdecl CastChecked<UEnum_const_,UObject_const_>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UEnum_const_>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UEnum_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UEnum *)param_1;
  }
  pFVar3 = GetTypeName<UEnum_const_>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UScriptStruct_const_,UScriptStruct_const_> @ 14d57de30

UScriptStruct * __cdecl
CastChecked<UScriptStruct_const_,UScriptStruct_const_>(UScriptStruct *param_1)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_18;
  
  if (param_1 != (UScriptStruct *)0x0) {
    return param_1;
  }
  pFVar1 = GetTypeName<UScriptStruct_const_>(&local_18);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// CastChecked<UCameraRigAsset,UObject> @ 14d57de70

UCameraRigAsset * __cdecl CastChecked<UCameraRigAsset,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UCameraRigAsset>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UCameraRigAsset::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UCameraRigAsset *)param_1;
  }
  pFVar3 = GetTypeName<UCameraRigAsset>(&local_28);
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

// CastChecked<UCameraRigProxyAsset,UObject> @ 14d57df30

UCameraRigProxyAsset * __cdecl CastChecked<UCameraRigProxyAsset,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UCameraRigProxyAsset>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UCameraRigProxyAsset::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UCameraRigProxyAsset *)param_1;
  }
  pFVar3 = GetTypeName<UCameraRigProxyAsset>(&local_28);
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

// CompareItems<TWeakObjectPtr<UCameraRigAsset_const_,FWeakObjectPtr>,int> @ 14d57e0e0

bool __cdecl
CompareItems<TWeakObjectPtr<UCameraRigAsset_const_,FWeakObjectPtr>,int>
          (TWeakObjectPtr<UCameraRigAsset_const_,FWeakObjectPtr> *param_1,
          TWeakObjectPtr<UCameraRigAsset_const_,FWeakObjectPtr> *param_2,int param_3)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      bVar1 = TWeakObjectPtr<UCameraRigAsset_const_,FWeakObjectPtr>::
              UEOpEquals<UCameraRigAsset_const_,bool>
                        ((TWeakObjectPtr<UCameraRigAsset_const_,FWeakObjectPtr> *)
                         (lVar2 + (longlong)param_2),param_2);
      if (!bVar1) {
        return false;
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// ConstructItems<TObjectPtr<UCameraObjectInterfaceBlendableParameter>,TObjectPtr<UCameraObjectInterfaceBlendableParameter>,int> @ 14d57e150

void __cdecl
ConstructItems<TObjectPtr<UCameraObjectInterfaceBlendableParameter>,TObjectPtr<UCameraObjectInterfaceBlendableParameter>,int>
          (void *param_1,TObjectPtr<UCameraObjectInterfaceBlendableParameter> *param_2,int param_3)

{
  TObjectPtr<UCameraObjectInterfaceBlendableParameter> TVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      TVar1.field0_0x0 =
           (TObjectPtr<UCameraObjectInterfaceBlendableParameter>_u_0)param_2->field0_0x0;
      ((TObjectPtr<UCameraObjectInterfaceBlendableParameter>_u_0 *)(lVar2 + (longlong)param_2))->
      DebugPtr = (UCameraObjectInterfaceBlendableParameter *)TVar1.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.field0_0x0 != (UCameraObjectInterfaceBlendableParameter *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TObjectPtr<UCameraObjectInterfaceDataParameter>,TObjectPtr<UCameraObjectInterfaceDataParameter>,int> @ 14d57e1b0

void __cdecl
ConstructItems<TObjectPtr<UCameraObjectInterfaceDataParameter>,TObjectPtr<UCameraObjectInterfaceDataParameter>,int>
          (void *param_1,TObjectPtr<UCameraObjectInterfaceDataParameter> *param_2,int param_3)

{
  TObjectPtr<UCameraObjectInterfaceDataParameter> TVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      TVar1.field0_0x0 = (TObjectPtr<UCameraObjectInterfaceDataParameter>_u_0)param_2->field0_0x0;
      ((TObjectPtr<UCameraObjectInterfaceDataParameter>_u_0 *)(lVar2 + (longlong)param_2))->DebugPtr
           = (UCameraObjectInterfaceDataParameter *)TVar1.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.field0_0x0 != (UCameraObjectInterfaceDataParameter *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TObjectPtr<UCameraRigAsset>,TObjectPtr<UCameraRigAsset>,int> @ 14d57e210

void __cdecl
ConstructItems<TObjectPtr<UCameraRigAsset>,TObjectPtr<UCameraRigAsset>,int>
          (void *param_1,TObjectPtr<UCameraRigAsset> *param_2,int param_3)

{
  TObjectPtr<UCameraRigAsset> TVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      TVar1.field0_0x0 = (TObjectPtr<UCameraRigAsset>_u_0)param_2->field0_0x0;
      ((TObjectPtr<UCameraRigAsset>_u_0 *)(lVar2 + (longlong)param_2))->DebugPtr =
           (UCameraRigAsset *)TVar1.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.field0_0x0 != (UCameraRigAsset *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TObjectPtr<UCameraRigProxyAsset>,TObjectPtr<UCameraRigProxyAsset>,int> @ 14d57e270

void __cdecl
ConstructItems<TObjectPtr<UCameraRigProxyAsset>,TObjectPtr<UCameraRigProxyAsset>,int>
          (void *param_1,TObjectPtr<UCameraRigProxyAsset> *param_2,int param_3)

{
  TObjectPtr<UCameraRigProxyAsset> TVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      TVar1.field0_0x0 = (TObjectPtr<UCameraRigProxyAsset>_u_0)param_2->field0_0x0;
      ((TObjectPtr<UCameraRigProxyAsset>_u_0 *)(lVar2 + (longlong)param_2))->DebugPtr =
           (UCameraRigProxyAsset *)TVar1.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.field0_0x0 != (UCameraRigProxyAsset *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<UE::Cameras::FBlendableStructInfo,UE::Cameras::FBlendableStructInfo,int> @ 14d57e2d0

void __cdecl
ConstructItems<UE::Cameras::FBlendableStructInfo,UE::Cameras::FBlendableStructInfo,int>
          (void *param_1,FBlendableStructInfo *param_2,int param_3)

{
  UScriptStruct *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      pUVar1 = (param_2->StructType).field0_0x0.DebugPtr;
      *(UScriptStruct **)(lVar2 + (longlong)param_2) = pUVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UScriptStruct *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      *(_func___cdecl_void_uchar_ptr_uchar_ptr_float **)(lVar2 + 8 + (longlong)param_2) =
           param_2->Interpolator;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FBooleanCameraRigParameterOverride,FBooleanCameraRigParameterOverride,int> @ 14d57e340

void __cdecl
ConstructItems<FBooleanCameraRigParameterOverride,FBooleanCameraRigParameterOverride,int>
          (void *param_1,FBooleanCameraRigParameterOverride *param_2,int param_3)

{
  undefined8 *puVar1;
  TObjectPtr<UBooleanCameraVariable> TVar2;
  undefined8 uVar3;
  longlong lVar4;
  int *this;
  longlong *plVar5;
  
  if (param_3 != 0) {
    this = (int *)((longlong)param_1 + 0x20);
    plVar5 = &param_2->_padding_;
    do {
      puVar1 = (undefined8 *)((longlong)this + (longlong)param_2 + (-0x20 - (longlong)param_1));
      uVar3 = puVar1[1];
      (((FString *)(this + -8))->Data).AllocatorInstance.Data = (FScriptContainerElement *)*puVar1;
      *(undefined8 *)(this + -6) = uVar3;
      lVar4 = plVar5[-1];
      (((FString *)(this + -4))->Data).AllocatorInstance.Data =
           (FScriptContainerElement *)plVar5[-2];
      *(longlong *)(this + -2) = lVar4;
      FString::FString((FString *)this,(FString *)plVar5);
      *(char *)&(((FString *)(this + 4))->Data).AllocatorInstance.Data = (char)plVar5[2];
      *(bool *)(this + 6) = ((FBooleanCameraParameter *)(plVar5 + 3))->Value;
      this[7] = ((FCameraVariableID *)((longlong)plVar5 + 0x1c))->Value;
      TVar2.field0_0x0 =
           (TObjectPtr<UBooleanCameraVariable>_u_0)
           ((TObjectPtr<UBooleanCameraVariable>_u_0 *)(plVar5 + 4))->DebugPtr;
      ((TObjectPtr<UBooleanCameraVariable>_u_0 *)(this + 8))->DebugPtr =
           (UBooleanCameraVariable *)TVar2.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar2.field0_0x0 != (UBooleanCameraVariable *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar2.field0_0x0);
      }
      plVar5 = plVar5 + 9;
      this = this + 0x12;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<UE::Cameras::FCameraRigActivationDeactivationRequest,UE::Cameras::FCameraRigActivationDeactivationRequest,int> @ 14d57e3f0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
ConstructItems<UE::Cameras::FCameraRigActivationDeactivationRequest,UE::Cameras::FCameraRigActivationDeactivationRequest,int>
          (void *param_1,FCameraRigActivationDeactivationRequest *param_2,int param_3)

{
  undefined1 *puVar1;
  UCameraRigAsset *pUVar2;
  TObjectPtr<UCameraRigAsset_const_> TVar3;
  TObjectPtr<UCameraRigAsset_const_>_u_0 *pTVar4;
  TObjectPtr<UCameraRigAsset_const_>_u_0 *pTVar5;
  
  if (param_3 != 0) {
    pTVar4 = (TObjectPtr<UCameraRigAsset_const_>_u_0 *)((longlong)param_1 + 0x10);
    pTVar5 = &(param_2->CameraRig).field0_0x0;
    do {
      pTVar4[-2] = *(TObjectPtr<UCameraRigAsset_const_>_u_0 *)
                    ((longlong)pTVar4 + (longlong)param_2 + (-0x10 - (longlong)param_1));
      pUVar2 = pTVar5[-1].DebugPtr;
      pTVar4[-1].DebugPtr = pUVar2;
      if (pUVar2 != (UCameraRigAsset *)0x0) {
        LOCK();
        *(int *)&pUVar2->_padding_ = (int)pUVar2->_padding_ + 1;
        UNLOCK();
      }
      TVar3.field0_0x0 = (TObjectPtr<UCameraRigAsset_const_>_u_0)pTVar5->DebugPtr;
      pTVar4->DebugPtr = (UCameraRigAsset *)TVar3.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar3.field0_0x0 != (UCameraRigAsset *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar3.field0_0x0);
      }
      pUVar2 = pTVar5[1].DebugPtr;
      pTVar4[1].DebugPtr = pUVar2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UCameraRigAsset *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      *(undefined4 *)(pTVar4 + 2) = *(undefined4 *)(pTVar5 + 2);
      *(undefined1 *)((longlong)pTVar4 + 0x14) = *(undefined1 *)((longlong)pTVar5 + 0x14);
      pUVar2 = pTVar5[3].DebugPtr;
      pTVar4[3].DebugPtr = pUVar2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UCameraRigAsset *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      *(undefined4 *)(pTVar4 + 4) = *(undefined4 *)(pTVar5 + 4);
      puVar1 = (undefined1 *)((longlong)pTVar5 + 0x24);
      pTVar5 = pTVar5 + 7;
      *(undefined1 *)((longlong)pTVar4 + 0x24) = *puVar1;
      pTVar4 = pTVar4 + 7;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FCustomCameraNodeBlendableParameter,FCustomCameraNodeBlendableParameter,int> @ 14d57e4d0

void __cdecl
ConstructItems<FCustomCameraNodeBlendableParameter,FCustomCameraNodeBlendableParameter,int>
          (void *param_1,FCustomCameraNodeBlendableParameter *param_2,int param_3)

{
  TObjectPtr<UScriptStruct_const_> TVar1;
  UScriptStruct *pUVar2;
  TObjectPtr<UScriptStruct_const_>_u_0 *pTVar3;
  TObjectPtr<UScriptStruct_const_>_u_0 *pTVar4;
  
  if (param_3 != 0) {
    pTVar3 = (TObjectPtr<UScriptStruct_const_>_u_0 *)((longlong)param_1 + 0x10);
    pTVar4 = &(param_2->BlendableStructType).field0_0x0;
    do {
      pTVar3[-2] = *(TObjectPtr<UScriptStruct_const_>_u_0 *)
                    ((longlong)pTVar3 + (longlong)param_2 + (-0x10 - (longlong)param_1));
      *(undefined4 *)(pTVar3 + -1) = *(undefined4 *)(pTVar4 + -1);
      TVar1.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pTVar4->DebugPtr;
      pTVar3->DebugPtr = (UScriptStruct *)TVar1.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.field0_0x0 != (UScriptStruct *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      *(undefined4 *)(pTVar3 + 1) = *(undefined4 *)(pTVar4 + 1);
      pUVar2 = pTVar4[2].DebugPtr;
      pTVar3[2].DebugPtr = pUVar2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UScriptStruct *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      pTVar4 = pTVar4 + 5;
      pTVar3 = pTVar3 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FCustomCameraNodeDataParameter,FCustomCameraNodeDataParameter,int> @ 14d57e580

void __cdecl
ConstructItems<FCustomCameraNodeDataParameter,FCustomCameraNodeDataParameter,int>
          (void *param_1,FCustomCameraNodeDataParameter *param_2,int param_3)

{
  FCameraContextDataID *pFVar1;
  TObjectPtr<UObject_const_> TVar2;
  ECameraContextDataContainerType *pEVar3;
  ECameraContextDataContainerType *pEVar4;
  
  if (param_3 != 0) {
    pEVar3 = (ECameraContextDataContainerType *)((longlong)param_1 + 0xc);
    pEVar4 = &param_2->ParameterContainerType;
    do {
      *(undefined8 *)(pEVar3 + -3) =
           *(undefined8 *)((longlong)pEVar3 + (longlong)param_2 + (-0xc - (longlong)param_1));
      pEVar3[-1] = pEVar4[-1];
      *pEVar3 = *pEVar4;
      TVar2.field0_0x0 =
           (TObjectPtr<UObject_const_>_u_0)
           ((TObjectPtr<UObject_const_>_u_0 *)(pEVar4 + 1))->DebugPtr;
      ((TObjectPtr<UObject_const_>_u_0 *)(pEVar3 + 1))->DebugPtr = (UObject *)TVar2.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar2.field0_0x0 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar2.field0_0x0);
      }
      pFVar1 = (FCameraContextDataID *)(pEVar4 + 3);
      pEVar4 = pEVar4 + 8;
      pEVar3[3] = pFVar1->Value;
      pEVar3 = pEVar3 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FDoubleCameraRigParameterOverride,FDoubleCameraRigParameterOverride,int> @ 14d57e610

void __cdecl
ConstructItems<FDoubleCameraRigParameterOverride,FDoubleCameraRigParameterOverride,int>
          (void *param_1,FDoubleCameraRigParameterOverride *param_2,int param_3)

{
  undefined8 *puVar1;
  TObjectPtr<UDoubleCameraVariable> TVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  FString *this;
  longlong *plVar6;
  
  if (param_3 != 0) {
    this = (FString *)((longlong)param_1 + 0x20);
    plVar6 = &param_2->_padding_;
    do {
      puVar1 = (undefined8 *)((longlong)this + (longlong)param_2 + (-0x20 - (longlong)param_1));
      uVar3 = puVar1[1];
      this[-2].Data.AllocatorInstance.Data = (FScriptContainerElement *)*puVar1;
      this[-2].Data.ArrayNum = (int)uVar3;
      this[-2].Data.ArrayMax = (int)((ulonglong)uVar3 >> 0x20);
      uVar4 = *(undefined4 *)(plVar6 + -1);
      uVar5 = *(undefined4 *)((longlong)(plVar6 + -1) + 4);
      this[-1].Data.AllocatorInstance.Data = (FScriptContainerElement *)plVar6[-2];
      this[-1].Data.ArrayNum = uVar4;
      this[-1].Data.ArrayMax = uVar5;
      FString::FString(this,(FString *)plVar6);
      *(char *)&this[1].Data.AllocatorInstance.Data = (char)plVar6[2];
      *(double *)&this[1].Data.ArrayNum = ((FDoubleCameraParameter *)(plVar6 + 3))->Value;
      *(uint *)&this[2].Data.AllocatorInstance.Data = ((FCameraVariableID *)(plVar6 + 4))->Value;
      TVar2.field0_0x0 =
           (TObjectPtr<UDoubleCameraVariable>_u_0)
           ((TObjectPtr<UDoubleCameraVariable>_u_0 *)(plVar6 + 5))->DebugPtr;
      *(TObjectPtr<UDoubleCameraVariable>_u_0 *)&this[2].Data.ArrayNum =
           (UDoubleCameraVariable *)TVar2.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar2.field0_0x0 != (UDoubleCameraVariable *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar2.field0_0x0);
      }
      plVar6 = plVar6 + 10;
      this = this + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<UE::Cameras::FPriorityQueueCameraDirectorEvaluator::FEntry,UE::Cameras::FPriorityQueueCameraDirectorEvaluator::FEntry,int> @ 14d57e6c0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
ConstructItems<UE::Cameras::FPriorityQueueCameraDirectorEvaluator::FEntry,UE::Cameras::FPriorityQueueCameraDirectorEvaluator::FEntry,int>
          (void *param_1,FEntry *param_2,int param_3)

{
  byte bVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  longlong *plVar5;
  FSharedReferencer<1> *pFVar6;
  
  if (param_3 != 0) {
    plVar5 = (longlong *)((longlong)param_1 + 8);
    pFVar6 = &(param_2->ChildContext).SharedReferenceCount;
    do {
      plVar5[-1] = *(longlong *)((longlong)plVar5 + (longlong)param_2 + (-8 - (longlong)param_1));
      pTVar2 = pFVar6->ReferenceController;
      *plVar5 = (longlong)pTVar2;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar1 = *(byte *)(pFVar6 + 2);
      *(byte *)(plVar5 + 2) = bVar1;
      if ((1 < bVar1) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xec,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<int,UE::Cameras::IPriorityQueueEntry*___ptr64>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                  ::__l2::CopyConstructors)[bVar1])(plVar5 + 1,pFVar6 + 1);
      pFVar6 = pFVar6 + 4;
      plVar5 = plVar5 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FFloatCameraRigParameterOverride,FFloatCameraRigParameterOverride,int> @ 14d57e790

void __cdecl
ConstructItems<FFloatCameraRigParameterOverride,FFloatCameraRigParameterOverride,int>
          (void *param_1,FFloatCameraRigParameterOverride *param_2,int param_3)

{
  undefined8 *puVar1;
  TObjectPtr<UFloatCameraVariable> TVar2;
  undefined8 uVar3;
  longlong lVar4;
  int *this;
  longlong *plVar5;
  
  if (param_3 != 0) {
    this = (int *)((longlong)param_1 + 0x20);
    plVar5 = &param_2->_padding_;
    do {
      puVar1 = (undefined8 *)((longlong)this + (longlong)param_2 + (-0x20 - (longlong)param_1));
      uVar3 = puVar1[1];
      (((FString *)(this + -8))->Data).AllocatorInstance.Data = (FScriptContainerElement *)*puVar1;
      *(undefined8 *)(this + -6) = uVar3;
      lVar4 = plVar5[-1];
      (((FString *)(this + -4))->Data).AllocatorInstance.Data =
           (FScriptContainerElement *)plVar5[-2];
      *(longlong *)(this + -2) = lVar4;
      FString::FString((FString *)this,(FString *)plVar5);
      *(char *)&(((FString *)(this + 4))->Data).AllocatorInstance.Data = (char)plVar5[2];
      this[6] = (int)((FFloatCameraParameter *)(plVar5 + 3))->Value;
      this[7] = ((FCameraVariableID *)((longlong)plVar5 + 0x1c))->Value;
      TVar2.field0_0x0 =
           (TObjectPtr<UFloatCameraVariable>_u_0)
           ((TObjectPtr<UFloatCameraVariable>_u_0 *)(plVar5 + 4))->DebugPtr;
      ((TObjectPtr<UFloatCameraVariable>_u_0 *)(this + 8))->DebugPtr =
           (UFloatCameraVariable *)TVar2.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar2.field0_0x0 != (UFloatCameraVariable *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar2.field0_0x0);
      }
      plVar5 = plVar5 + 9;
      this = this + 0x12;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FInteger32CameraRigParameterOverride,FInteger32CameraRigParameterOverride,int> @ 14d57e840

void __cdecl
ConstructItems<FInteger32CameraRigParameterOverride,FInteger32CameraRigParameterOverride,int>
          (void *param_1,FInteger32CameraRigParameterOverride *param_2,int param_3)

{
  undefined8 *puVar1;
  TObjectPtr<UInteger32CameraVariable> TVar2;
  undefined8 uVar3;
  longlong lVar4;
  int *this;
  longlong *plVar5;
  
  if (param_3 != 0) {
    this = (int *)((longlong)param_1 + 0x20);
    plVar5 = &param_2->_padding_;
    do {
      puVar1 = (undefined8 *)((longlong)this + (longlong)param_2 + (-0x20 - (longlong)param_1));
      uVar3 = puVar1[1];
      (((FString *)(this + -8))->Data).AllocatorInstance.Data = (FScriptContainerElement *)*puVar1;
      *(undefined8 *)(this + -6) = uVar3;
      lVar4 = plVar5[-1];
      (((FString *)(this + -4))->Data).AllocatorInstance.Data =
           (FScriptContainerElement *)plVar5[-2];
      *(longlong *)(this + -2) = lVar4;
      FString::FString((FString *)this,(FString *)plVar5);
      *(char *)&(((FString *)(this + 4))->Data).AllocatorInstance.Data = (char)plVar5[2];
      this[6] = ((FInteger32CameraParameter *)(plVar5 + 3))->Value;
      this[7] = ((FCameraVariableID *)((longlong)plVar5 + 0x1c))->Value;
      TVar2.field0_0x0 =
           (TObjectPtr<UInteger32CameraVariable>_u_0)
           ((TObjectPtr<UInteger32CameraVariable>_u_0 *)(plVar5 + 4))->DebugPtr;
      ((TObjectPtr<UInteger32CameraVariable>_u_0 *)(this + 8))->DebugPtr =
           (UInteger32CameraVariable *)TVar2.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar2.field0_0x0 != (UInteger32CameraVariable *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar2.field0_0x0);
      }
      plVar5 = plVar5 + 9;
      this = this + 0x12;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FRotator3dCameraRigParameterOverride,FRotator3dCameraRigParameterOverride,int> @ 14d57e8f0

void __cdecl
ConstructItems<FRotator3dCameraRigParameterOverride,FRotator3dCameraRigParameterOverride,int>
          (void *param_1,FRotator3dCameraRigParameterOverride *param_2,int param_3)

{
  undefined8 *puVar1;
  TObjectPtr<URotator3dCameraVariable> TVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  FString *this;
  longlong *plVar7;
  
  if (param_3 != 0) {
    this = (FString *)((longlong)param_1 + 0x20);
    plVar7 = &param_2->_padding_;
    do {
      puVar1 = (undefined8 *)((longlong)this + (longlong)param_2 + (-0x20 - (longlong)param_1));
      uVar3 = puVar1[1];
      this[-2].Data.AllocatorInstance.Data = (FScriptContainerElement *)*puVar1;
      this[-2].Data.ArrayNum = (int)uVar3;
      this[-2].Data.ArrayMax = (int)((ulonglong)uVar3 >> 0x20);
      uVar5 = *(undefined4 *)(plVar7 + -1);
      uVar6 = *(undefined4 *)((longlong)(plVar7 + -1) + 4);
      this[-1].Data.AllocatorInstance.Data = (FScriptContainerElement *)plVar7[-2];
      this[-1].Data.ArrayNum = uVar5;
      this[-1].Data.ArrayMax = uVar6;
      FString::FString(this,(FString *)plVar7);
      *(char *)&this[1].Data.AllocatorInstance.Data = (char)plVar7[2];
      pFVar4 = (FScriptContainerElement *)plVar7[4];
      *(double *)&this[1].Data.ArrayNum = (((FRotator3dCameraParameter *)(plVar7 + 3))->Value).Pitch
      ;
      this[2].Data.AllocatorInstance.Data = pFVar4;
      *(longlong *)&this[2].Data.ArrayNum = plVar7[5];
      *(uint *)&this[3].Data.AllocatorInstance.Data = ((FCameraVariableID *)(plVar7 + 6))->Value;
      TVar2.field0_0x0 =
           (TObjectPtr<URotator3dCameraVariable>_u_0)
           ((TObjectPtr<URotator3dCameraVariable>_u_0 *)(plVar7 + 7))->DebugPtr;
      *(TObjectPtr<URotator3dCameraVariable>_u_0 *)&this[3].Data.ArrayNum =
           (URotator3dCameraVariable *)TVar2.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar2.field0_0x0 != (URotator3dCameraVariable *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar2.field0_0x0);
      }
      plVar7 = plVar7 + 0xc;
      this = this + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FRotator3fCameraRigParameterOverride,FRotator3fCameraRigParameterOverride,int> @ 14d57e9a0

void __cdecl
ConstructItems<FRotator3fCameraRigParameterOverride,FRotator3fCameraRigParameterOverride,int>
          (void *param_1,FRotator3fCameraRigParameterOverride *param_2,int param_3)

{
  undefined8 *puVar1;
  TObjectPtr<URotator3fCameraVariable> TVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  FString *this;
  longlong *plVar7;
  
  if (param_3 != 0) {
    this = (FString *)((longlong)param_1 + 0x20);
    plVar7 = &param_2->_padding_;
    do {
      puVar1 = (undefined8 *)((longlong)this + (longlong)param_2 + (-0x20 - (longlong)param_1));
      uVar3 = puVar1[1];
      this[-2].Data.AllocatorInstance.Data = (FScriptContainerElement *)*puVar1;
      this[-2].Data.ArrayNum = (int)uVar3;
      this[-2].Data.ArrayMax = (int)((ulonglong)uVar3 >> 0x20);
      uVar4 = *(undefined4 *)(plVar7 + -1);
      uVar5 = *(undefined4 *)((longlong)(plVar7 + -1) + 4);
      this[-1].Data.AllocatorInstance.Data = (FScriptContainerElement *)plVar7[-2];
      this[-1].Data.ArrayNum = uVar4;
      this[-1].Data.ArrayMax = uVar5;
      FString::FString(this,(FString *)plVar7);
      *(char *)&this[1].Data.AllocatorInstance.Data = (char)plVar7[2];
      fVar6 = (((FRotator3fCameraParameter *)(plVar7 + 3))->Value).Yaw;
      this[1].Data.ArrayNum = (int)(((FRotator3fCameraParameter *)(plVar7 + 3))->Value).Pitch;
      this[1].Data.ArrayMax = (int)fVar6;
      *(float *)&this[2].Data.AllocatorInstance.Data = *(float *)(plVar7 + 4);
      *(uint *)((longlong)&this[2].Data.AllocatorInstance.Data + 4) =
           ((FCameraVariableID *)((longlong)plVar7 + 0x24))->Value;
      TVar2.field0_0x0 =
           (TObjectPtr<URotator3fCameraVariable>_u_0)
           ((TObjectPtr<URotator3fCameraVariable>_u_0 *)(plVar7 + 5))->DebugPtr;
      *(TObjectPtr<URotator3fCameraVariable>_u_0 *)&this[2].Data.ArrayNum =
           (URotator3fCameraVariable *)TVar2.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar2.field0_0x0 != (URotator3fCameraVariable *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar2.field0_0x0);
      }
      plVar7 = plVar7 + 10;
      this = this + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FTransform3dCameraRigParameterOverride,FTransform3dCameraRigParameterOverride,int> @ 14d57ea50

void __cdecl
ConstructItems<FTransform3dCameraRigParameterOverride,FTransform3dCameraRigParameterOverride,int>
          (void *param_1,FTransform3dCameraRigParameterOverride *param_2,int param_3)

{
  undefined8 *puVar1;
  TObjectPtr<UTransform3dCameraVariable> TVar2;
  undefined8 uVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  FString *this;
  longlong *plVar7;
  
  if (param_3 != 0) {
    this = (FString *)((longlong)param_1 + 0x20);
    plVar7 = &param_2->_padding_;
    do {
      puVar1 = (undefined8 *)((longlong)this + (longlong)param_2 + (-0x20 - (longlong)param_1));
      uVar3 = puVar1[1];
      this[-2].Data.AllocatorInstance.Data = (FScriptContainerElement *)*puVar1;
      this[-2].Data.ArrayNum = (int)uVar3;
      this[-2].Data.ArrayMax = (int)((ulonglong)uVar3 >> 0x20);
      uVar5 = *(undefined4 *)(plVar7 + -1);
      uVar6 = *(undefined4 *)((longlong)(plVar7 + -1) + 4);
      this[-1].Data.AllocatorInstance.Data = (FScriptContainerElement *)plVar7[-2];
      this[-1].Data.ArrayNum = uVar5;
      this[-1].Data.ArrayMax = uVar6;
      FString::FString(this,(FString *)plVar7);
      *(char *)&this[1].Data.AllocatorInstance.Data = (char)plVar7[2];
      dVar4 = (double)plVar7[5];
      this[2].Data.AllocatorInstance.Data =
           (FScriptContainerElement *)
           (((FTransform3dCameraParameter *)(plVar7 + 4))->Value).Rotation.XY.m128d_f64[0];
      *(double *)&this[2].Data.ArrayNum = dVar4;
      dVar4 = (double)plVar7[7];
      this[3].Data.AllocatorInstance.Data =
           (FScriptContainerElement *)((__m128d *)(plVar7 + 6))->m128d_f64[0];
      *(double *)&this[3].Data.ArrayNum = dVar4;
      dVar4 = (double)plVar7[9];
      this[4].Data.AllocatorInstance.Data =
           (FScriptContainerElement *)(((VectorRegister4Double *)(plVar7 + 8))->XY).m128d_f64[0];
      *(double *)&this[4].Data.ArrayNum = dVar4;
      dVar4 = (double)plVar7[0xb];
      this[5].Data.AllocatorInstance.Data =
           (FScriptContainerElement *)((__m128d *)(plVar7 + 10))->m128d_f64[0];
      *(double *)&this[5].Data.ArrayNum = dVar4;
      dVar4 = (double)plVar7[0xd];
      this[6].Data.AllocatorInstance.Data =
           (FScriptContainerElement *)(((VectorRegister4Double *)(plVar7 + 0xc))->XY).m128d_f64[0];
      *(double *)&this[6].Data.ArrayNum = dVar4;
      dVar4 = (double)plVar7[0xf];
      this[7].Data.AllocatorInstance.Data =
           (FScriptContainerElement *)((__m128d *)(plVar7 + 0xe))->m128d_f64[0];
      *(double *)&this[7].Data.ArrayNum = dVar4;
      *(uint *)&this[8].Data.AllocatorInstance.Data = ((FCameraVariableID *)(plVar7 + 0x10))->Value;
      TVar2.field0_0x0 =
           (TObjectPtr<UTransform3dCameraVariable>_u_0)
           ((TObjectPtr<UTransform3dCameraVariable>_u_0 *)(plVar7 + 0x11))->DebugPtr;
      *(TObjectPtr<UTransform3dCameraVariable>_u_0 *)&this[8].Data.ArrayNum =
           (UTransform3dCameraVariable *)TVar2.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar2.field0_0x0 != (UTransform3dCameraVariable *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar2.field0_0x0);
      }
      plVar7 = plVar7 + 0x16;
      this = this + 0xb;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FTransform3fCameraRigParameterOverride,FTransform3fCameraRigParameterOverride,int> @ 14d57eb40

void __cdecl
ConstructItems<FTransform3fCameraRigParameterOverride,FTransform3fCameraRigParameterOverride,int>
          (void *param_1,FTransform3fCameraRigParameterOverride *param_2,int param_3)

{
  undefined8 *puVar1;
  TObjectPtr<UTransform3fCameraVariable> TVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  FString *this;
  longlong *plVar6;
  
  if (param_3 != 0) {
    this = (FString *)((longlong)param_1 + 0x20);
    plVar6 = &param_2->_padding_;
    do {
      puVar1 = (undefined8 *)((longlong)this + (longlong)param_2 + (-0x20 - (longlong)param_1));
      uVar3 = puVar1[1];
      this[-2].Data.AllocatorInstance.Data = (FScriptContainerElement *)*puVar1;
      this[-2].Data.ArrayNum = (int)uVar3;
      this[-2].Data.ArrayMax = (int)((ulonglong)uVar3 >> 0x20);
      uVar4 = *(undefined4 *)(plVar6 + -1);
      uVar5 = *(undefined4 *)((longlong)(plVar6 + -1) + 4);
      this[-1].Data.AllocatorInstance.Data = (FScriptContainerElement *)plVar6[-2];
      this[-1].Data.ArrayNum = uVar4;
      this[-1].Data.ArrayMax = uVar5;
      FString::FString(this,(FString *)plVar6);
      *(char *)&this[1].Data.AllocatorInstance.Data = (char)plVar6[2];
      uVar3 = plVar6[5];
      this[2].Data.AllocatorInstance.Data =
           (FScriptContainerElement *)
           (((FTransform3fCameraParameter *)(plVar6 + 4))->Value).Rotation.m128_u64[0];
      this[2].Data.ArrayNum = (int)uVar3;
      this[2].Data.ArrayMax = (int)((ulonglong)uVar3 >> 0x20);
      uVar3 = plVar6[7];
      this[3].Data.AllocatorInstance.Data =
           (FScriptContainerElement *)((__m128 *)(plVar6 + 6))->m128_u64[0];
      this[3].Data.ArrayNum = (int)uVar3;
      this[3].Data.ArrayMax = (int)((ulonglong)uVar3 >> 0x20);
      uVar3 = plVar6[9];
      this[4].Data.AllocatorInstance.Data =
           (FScriptContainerElement *)((__m128 *)(plVar6 + 8))->m128_u64[0];
      this[4].Data.ArrayNum = (int)uVar3;
      this[4].Data.ArrayMax = (int)((ulonglong)uVar3 >> 0x20);
      *(uint *)&this[5].Data.AllocatorInstance.Data = ((FCameraVariableID *)(plVar6 + 10))->Value;
      TVar2.field0_0x0 =
           (TObjectPtr<UTransform3fCameraVariable>_u_0)
           ((TObjectPtr<UTransform3fCameraVariable>_u_0 *)(plVar6 + 0xb))->DebugPtr;
      *(TObjectPtr<UTransform3fCameraVariable>_u_0 *)&this[5].Data.ArrayNum =
           (UTransform3fCameraVariable *)TVar2.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar2.field0_0x0 != (UTransform3fCameraVariable *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar2.field0_0x0);
      }
      plVar6 = plVar6 + 0x10;
      this = this + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FVector2dCameraRigParameterOverride,FVector2dCameraRigParameterOverride,int> @ 14d57ec00

void __cdecl
ConstructItems<FVector2dCameraRigParameterOverride,FVector2dCameraRigParameterOverride,int>
          (void *param_1,FVector2dCameraRigParameterOverride *param_2,int param_3)

{
  undefined8 *puVar1;
  TObjectPtr<UVector2dCameraVariable> TVar2;
  undefined8 uVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  int *this;
  longlong *plVar6;
  
  if (param_3 != 0) {
    this = (int *)((longlong)param_1 + 0x20);
    plVar6 = &param_2->_padding_;
    do {
      puVar1 = (undefined8 *)((longlong)this + (longlong)param_2 + (-0x20 - (longlong)param_1));
      uVar3 = puVar1[1];
      (((FString *)(this + -8))->Data).AllocatorInstance.Data = (FScriptContainerElement *)*puVar1;
      *(undefined8 *)(this + -6) = uVar3;
      lVar4 = plVar6[-1];
      (((FString *)(this + -4))->Data).AllocatorInstance.Data =
           (FScriptContainerElement *)plVar6[-2];
      *(longlong *)(this + -2) = lVar4;
      FString::FString((FString *)this,(FString *)plVar6);
      *(char *)&(((FString *)(this + 4))->Data).AllocatorInstance.Data = (char)plVar6[2];
      pFVar5 = (FScriptContainerElement *)plVar6[4];
      *(double *)(this + 6) = (((FVector2dCameraParameter *)(plVar6 + 3))->Value).field0_0x0._s_0.X;
      (((FString *)(this + 8))->Data).AllocatorInstance.Data = pFVar5;
      this[10] = ((FCameraVariableID *)(plVar6 + 5))->Value;
      TVar2.field0_0x0 =
           (TObjectPtr<UVector2dCameraVariable>_u_0)
           ((TObjectPtr<UVector2dCameraVariable>_u_0 *)(plVar6 + 6))->DebugPtr;
      ((TObjectPtr<UVector2dCameraVariable>_u_0 *)(this + 0xc))->DebugPtr =
           (UVector2dCameraVariable *)TVar2.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar2.field0_0x0 != (UVector2dCameraVariable *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar2.field0_0x0);
      }
      plVar6 = plVar6 + 0xb;
      this = this + 0x16;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FVector2fCameraRigParameterOverride,FVector2fCameraRigParameterOverride,int> @ 14d57ecb0

void __cdecl
ConstructItems<FVector2fCameraRigParameterOverride,FVector2fCameraRigParameterOverride,int>
          (void *param_1,FVector2fCameraRigParameterOverride *param_2,int param_3)

{
  undefined8 *puVar1;
  TObjectPtr<UVector2fCameraVariable> TVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  FString *this;
  longlong *plVar6;
  
  if (param_3 != 0) {
    this = (FString *)((longlong)param_1 + 0x20);
    plVar6 = &param_2->_padding_;
    do {
      puVar1 = (undefined8 *)((longlong)this + (longlong)param_2 + (-0x20 - (longlong)param_1));
      uVar3 = puVar1[1];
      this[-2].Data.AllocatorInstance.Data = (FScriptContainerElement *)*puVar1;
      this[-2].Data.ArrayNum = (int)uVar3;
      this[-2].Data.ArrayMax = (int)((ulonglong)uVar3 >> 0x20);
      uVar4 = *(undefined4 *)(plVar6 + -1);
      uVar5 = *(undefined4 *)((longlong)(plVar6 + -1) + 4);
      this[-1].Data.AllocatorInstance.Data = (FScriptContainerElement *)plVar6[-2];
      this[-1].Data.ArrayNum = uVar4;
      this[-1].Data.ArrayMax = uVar5;
      FString::FString(this,(FString *)plVar6);
      *(char *)&this[1].Data.AllocatorInstance.Data = (char)plVar6[2];
      *(TVector2<float>_u_0 *)&this[1].Data.ArrayNum =
           (((FVector2fCameraParameter *)(plVar6 + 3))->Value).field0_0x0;
      *(uint *)&this[2].Data.AllocatorInstance.Data = ((FCameraVariableID *)(plVar6 + 4))->Value;
      TVar2.field0_0x0 =
           (TObjectPtr<UVector2fCameraVariable>_u_0)
           ((TObjectPtr<UVector2fCameraVariable>_u_0 *)(plVar6 + 5))->DebugPtr;
      *(TObjectPtr<UVector2fCameraVariable>_u_0 *)&this[2].Data.ArrayNum =
           (UVector2fCameraVariable *)TVar2.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar2.field0_0x0 != (UVector2fCameraVariable *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar2.field0_0x0);
      }
      plVar6 = plVar6 + 10;
      this = this + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FVector3dCameraRigParameterOverride,FVector3dCameraRigParameterOverride,int> @ 14d57ed60

void __cdecl
ConstructItems<FVector3dCameraRigParameterOverride,FVector3dCameraRigParameterOverride,int>
          (void *param_1,FVector3dCameraRigParameterOverride *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  TObjectPtr<UVector3dCameraVariable> TVar3;
  FScriptContainerElement *pFVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  FString *this;
  longlong *plVar7;
  
  if (param_3 != 0) {
    this = (FString *)((longlong)param_1 + 0x20);
    plVar7 = &param_2->_padding_;
    do {
      puVar1 = (undefined8 *)((longlong)this + (longlong)param_2 + (-0x20 - (longlong)param_1));
      uVar2 = puVar1[1];
      this[-2].Data.AllocatorInstance.Data = (FScriptContainerElement *)*puVar1;
      this[-2].Data.ArrayNum = (int)uVar2;
      this[-2].Data.ArrayMax = (int)((ulonglong)uVar2 >> 0x20);
      uVar5 = *(undefined4 *)(plVar7 + -1);
      uVar6 = *(undefined4 *)((longlong)(plVar7 + -1) + 4);
      this[-1].Data.AllocatorInstance.Data = (FScriptContainerElement *)plVar7[-2];
      this[-1].Data.ArrayNum = uVar5;
      this[-1].Data.ArrayMax = uVar6;
      FString::FString(this,(FString *)plVar7);
      *(char *)&this[1].Data.AllocatorInstance.Data = (char)plVar7[2];
      pFVar4 = (FScriptContainerElement *)plVar7[4];
      *(double *)&this[1].Data.ArrayNum =
           (((FVector3dCameraParameter *)(plVar7 + 3))->Value).field0_0x0._s_0.X;
      this[2].Data.AllocatorInstance.Data = pFVar4;
      uVar2 = plVar7[5];
      this[2].Data.ArrayNum = (int)uVar2;
      this[2].Data.ArrayMax = (int)((ulonglong)uVar2 >> 0x20);
      *(uint *)&this[3].Data.AllocatorInstance.Data = ((FCameraVariableID *)(plVar7 + 6))->Value;
      TVar3.field0_0x0 =
           (TObjectPtr<UVector3dCameraVariable>_u_0)
           ((TObjectPtr<UVector3dCameraVariable>_u_0 *)(plVar7 + 7))->DebugPtr;
      *(TObjectPtr<UVector3dCameraVariable>_u_0 *)&this[3].Data.ArrayNum =
           (UVector3dCameraVariable *)TVar3.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar3.field0_0x0 != (UVector3dCameraVariable *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar3.field0_0x0);
      }
      plVar7 = plVar7 + 0xc;
      this = this + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FVector3fCameraRigParameterOverride,FVector3fCameraRigParameterOverride,int> @ 14d57ee10

void __cdecl
ConstructItems<FVector3fCameraRigParameterOverride,FVector3fCameraRigParameterOverride,int>
          (void *param_1,FVector3fCameraRigParameterOverride *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  TObjectPtr<UVector3fCameraVariable> TVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  FString *this;
  longlong *plVar6;
  
  if (param_3 != 0) {
    this = (FString *)((longlong)param_1 + 0x20);
    plVar6 = &param_2->_padding_;
    do {
      puVar1 = (undefined8 *)((longlong)this + (longlong)param_2 + (-0x20 - (longlong)param_1));
      uVar2 = puVar1[1];
      this[-2].Data.AllocatorInstance.Data = (FScriptContainerElement *)*puVar1;
      this[-2].Data.ArrayNum = (int)uVar2;
      this[-2].Data.ArrayMax = (int)((ulonglong)uVar2 >> 0x20);
      uVar4 = *(undefined4 *)(plVar6 + -1);
      uVar5 = *(undefined4 *)((longlong)(plVar6 + -1) + 4);
      this[-1].Data.AllocatorInstance.Data = (FScriptContainerElement *)plVar6[-2];
      this[-1].Data.ArrayNum = uVar4;
      this[-1].Data.ArrayMax = uVar5;
      FString::FString(this,(FString *)plVar6);
      *(char *)&this[1].Data.AllocatorInstance.Data = (char)plVar6[2];
      uVar2 = *(undefined8 *)&(((FVector3fCameraParameter *)(plVar6 + 3))->Value).field0_0x0;
      this[1].Data.ArrayNum = (int)uVar2;
      this[1].Data.ArrayMax = (int)((ulonglong)uVar2 >> 0x20);
      *(undefined4 *)&this[2].Data.AllocatorInstance.Data = *(undefined4 *)(plVar6 + 4);
      *(uint *)((longlong)&this[2].Data.AllocatorInstance.Data + 4) =
           ((FCameraVariableID *)((longlong)plVar6 + 0x24))->Value;
      TVar3.field0_0x0 =
           (TObjectPtr<UVector3fCameraVariable>_u_0)
           ((TObjectPtr<UVector3fCameraVariable>_u_0 *)(plVar6 + 5))->DebugPtr;
      *(TObjectPtr<UVector3fCameraVariable>_u_0 *)&this[2].Data.ArrayNum =
           (UVector3fCameraVariable *)TVar3.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar3.field0_0x0 != (UVector3fCameraVariable *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar3.field0_0x0);
      }
      plVar6 = plVar6 + 10;
      this = this + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FVector4dCameraRigParameterOverride,FVector4dCameraRigParameterOverride,int> @ 14d57eec0

void __cdecl
ConstructItems<FVector4dCameraRigParameterOverride,FVector4dCameraRigParameterOverride,int>
          (void *param_1,FVector4dCameraRigParameterOverride *param_2,int param_3)

{
  undefined8 *puVar1;
  TObjectPtr<UVector4dCameraVariable> TVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  FString *this;
  longlong *plVar6;
  
  if (param_3 != 0) {
    this = (FString *)((longlong)param_1 + 0x20);
    plVar6 = &param_2->_padding_;
    do {
      puVar1 = (undefined8 *)((longlong)this + (longlong)param_2 + (-0x20 - (longlong)param_1));
      uVar3 = puVar1[1];
      this[-2].Data.AllocatorInstance.Data = (FScriptContainerElement *)*puVar1;
      this[-2].Data.ArrayNum = (int)uVar3;
      this[-2].Data.ArrayMax = (int)((ulonglong)uVar3 >> 0x20);
      uVar4 = *(undefined4 *)(plVar6 + -1);
      uVar5 = *(undefined4 *)((longlong)(plVar6 + -1) + 4);
      this[-1].Data.AllocatorInstance.Data = (FScriptContainerElement *)plVar6[-2];
      this[-1].Data.ArrayNum = uVar4;
      this[-1].Data.ArrayMax = uVar5;
      FString::FString(this,(FString *)plVar6);
      *(char *)&this[1].Data.AllocatorInstance.Data = (char)plVar6[2];
      uVar3 = plVar6[5];
      this[2].Data.AllocatorInstance.Data =
           (FScriptContainerElement *)
           (((FVector4dCameraParameter *)(plVar6 + 4))->Value).field0_0x0._s_0.X;
      this[2].Data.ArrayNum = (int)uVar3;
      this[2].Data.ArrayMax = (int)((ulonglong)uVar3 >> 0x20);
      uVar3 = plVar6[7];
      this[3].Data.AllocatorInstance.Data = (FScriptContainerElement *)plVar6[6];
      this[3].Data.ArrayNum = (int)uVar3;
      this[3].Data.ArrayMax = (int)((ulonglong)uVar3 >> 0x20);
      *(uint *)&this[4].Data.AllocatorInstance.Data = ((FCameraVariableID *)(plVar6 + 8))->Value;
      TVar2.field0_0x0 =
           (TObjectPtr<UVector4dCameraVariable>_u_0)
           ((TObjectPtr<UVector4dCameraVariable>_u_0 *)(plVar6 + 9))->DebugPtr;
      *(TObjectPtr<UVector4dCameraVariable>_u_0 *)&this[4].Data.ArrayNum =
           (UVector4dCameraVariable *)TVar2.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar2.field0_0x0 != (UVector4dCameraVariable *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar2.field0_0x0);
      }
      plVar6 = plVar6 + 0xe;
      this = this + 7;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FVector4fCameraRigParameterOverride,FVector4fCameraRigParameterOverride,int> @ 14d57ef70

void __cdecl
ConstructItems<FVector4fCameraRigParameterOverride,FVector4fCameraRigParameterOverride,int>
          (void *param_1,FVector4fCameraRigParameterOverride *param_2,int param_3)

{
  undefined8 *puVar1;
  TObjectPtr<UVector4fCameraVariable> TVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  FString *this;
  longlong *plVar6;
  
  if (param_3 != 0) {
    this = (FString *)((longlong)param_1 + 0x20);
    plVar6 = &param_2->_padding_;
    do {
      puVar1 = (undefined8 *)((longlong)this + (longlong)param_2 + (-0x20 - (longlong)param_1));
      uVar3 = puVar1[1];
      this[-2].Data.AllocatorInstance.Data = (FScriptContainerElement *)*puVar1;
      this[-2].Data.ArrayNum = (int)uVar3;
      this[-2].Data.ArrayMax = (int)((ulonglong)uVar3 >> 0x20);
      uVar4 = *(undefined4 *)(plVar6 + -1);
      uVar5 = *(undefined4 *)((longlong)(plVar6 + -1) + 4);
      this[-1].Data.AllocatorInstance.Data = (FScriptContainerElement *)plVar6[-2];
      this[-1].Data.ArrayNum = uVar4;
      this[-1].Data.ArrayMax = uVar5;
      FString::FString(this,(FString *)plVar6);
      *(char *)&this[1].Data.AllocatorInstance.Data = (char)plVar6[2];
      uVar3 = plVar6[5];
      this[2].Data.AllocatorInstance.Data =
           *(FScriptContainerElement **)
            &(((FVector4fCameraParameter *)(plVar6 + 4))->Value).field0_0x0;
      this[2].Data.ArrayNum = (int)uVar3;
      this[2].Data.ArrayMax = (int)((ulonglong)uVar3 >> 0x20);
      *(uint *)&this[3].Data.AllocatorInstance.Data = ((FCameraVariableID *)(plVar6 + 6))->Value;
      TVar2.field0_0x0 =
           (TObjectPtr<UVector4fCameraVariable>_u_0)
           ((TObjectPtr<UVector4fCameraVariable>_u_0 *)(plVar6 + 7))->DebugPtr;
      *(TObjectPtr<UVector4fCameraVariable>_u_0 *)&this[3].Data.ArrayNum =
           (UVector4fCameraVariable *)TVar2.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar2.field0_0x0 != (UVector4fCameraVariable *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar2.field0_0x0);
      }
      plVar6 = plVar6 + 0xc;
      this = this + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TSharedPtr<UE::Cameras::FCameraEvaluationService,1>,TSharedPtr<UE::Cameras::FCameraEvaluationService,1>,int> @ 14d57f020

void __cdecl
ConstructItems<TSharedPtr<UE::Cameras::FCameraEvaluationService,1>,TSharedPtr<UE::Cameras::FCameraEvaluationService,1>,int>
          (void *param_1,TSharedPtr<UE::Cameras::FCameraEvaluationService,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FCameraEvaluationService **)(lVar2 + (longlong)param_2) = param_2->Object;
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

// DefaultConstructItems<UE::Cameras::FCameraRigJoint,int> @ 14d57f5a0

void __cdecl DefaultConstructItems<UE::Cameras::FCameraRigJoint,int>(void *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double *pdVar4;
  
  if (param_2 != 0) {
    pdVar4 = (double *)((longlong)param_1 + 0x20);
    do {
      *(undefined4 *)(pdVar4 + -4) = 0xffffffff;
      fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
      fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
      fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
      pdVar4[-2] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      pdVar4[-1] = (double)fVar1;
      *pdVar4 = (double)fVar2;
      pdVar4[1] = (double)fVar3;
      fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
      fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
      fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
      pdVar4[2] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      pdVar4[3] = (double)fVar1;
      pdVar4[4] = (double)fVar2;
      pdVar4[5] = (double)fVar3;
      fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
      fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
      fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
      pdVar4[6] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      pdVar4[7] = (double)fVar1;
      pdVar4[8] = (double)fVar2;
      pdVar4[9] = (double)fVar3;
      param_2 = param_2 + -1;
      pdVar4 = pdVar4 + 0xe;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Cameras::FCameraRigJointsDebugBlock::FEntry,int> @ 14d57f610

void __cdecl
DefaultConstructItems<UE::Cameras::FCameraRigJointsDebugBlock::FEntry,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x38);
    do {
      *(undefined4 *)(puVar1 + -1) = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = puVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Cameras::FCameraVariableTable::FEntry,int> @ 14d57f640

void __cdecl
DefaultConstructItems<UE::Cameras::FCameraVariableTable::FEntry,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined4 *)param_1 = 0xffffffff;
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0x18);
  }
  return;
}

// DefaultConstructItems<UE::Cameras::FContextDataTableDebugBlock::FEntryDebugInfo,int> @ 14d57f670

void __cdecl
DefaultConstructItems<UE::Cameras::FContextDataTableDebugBlock::FEntryDebugInfo,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1 = puVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Cameras::FVariableTableDebugBlock::FEntryDebugInfo,int> @ 14d57f6b0

void __cdecl
DefaultConstructItems<UE::Cameras::FVariableTableDebugBlock::FEntryDebugInfo,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1 = puVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Cameras::FPlayerControllersDebugBlock::FPlayerControllerDebugInfo,int> @ 14d57f6e0

void __cdecl
DefaultConstructItems<UE::Cameras::FPlayerControllersDebugBlock::FPlayerControllerDebugInfo,int>
          (void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined8 *)(lVar1 + 0x1c) = 0;
      *(undefined8 *)(lVar1 + 0x24) = 0;
      *(undefined8 *)(lVar1 + 0x2c) = 0;
      *(undefined1 *)(lVar1 + 0x38) = 0;
      lVar1 = lVar1 + 0x80;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FBooleanCameraRigParameterOverride,int> @ 14d57f750

void __cdecl
DestructItems<FBooleanCameraRigParameterOverride,int>
          (FBooleanCameraRigParameterOverride *param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = &param_1->_padding_;
    do {
      if ((void *)*plVar1 != (void *)0x0) {
        FMemory::Free((void *)*plVar1);
      }
      plVar1 = plVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FCameraRigAssetReference,int> @ 14d57f790

void __cdecl
DestructItems<FCameraRigAssetReference,int>(FCameraRigAssetReference *param_1,int param_2)

{
  FCameraRigParameterOverrides *this;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    this = &param_1->ParameterOverrides_DEPRECATED;
    FCameraRigParameterOverrides::~FCameraRigParameterOverrides(this);
    if (*(void **)((longlong)(this + -1) + 0xd0) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)(this + -1) + 0xd0));
    }
    *(undefined ***)((longlong)(this + -1) + 0x90) = &___7FBaseCameraObjectReference__6B_;
    if (*(void **)((longlong)(this + -1) + 0xb8) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)(this + -1) + 0xb8));
    }
    if (*(void **)((longlong)(this + -1) + 0xa8) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)(this + -1) + 0xa8));
    }
    FInstancedStruct::Reset((FInstancedStruct *)((longlong)(this + -1) + 0x98));
    param_1 = (FCameraRigAssetReference *)(this + 1);
  }
  return;
}

// DestructItems<FDoubleCameraRigParameterOverride,int> @ 14d57f820

void __cdecl
DestructItems<FDoubleCameraRigParameterOverride,int>
          (FDoubleCameraRigParameterOverride *param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = &param_1->_padding_;
    do {
      if ((void *)*plVar1 != (void *)0x0) {
        FMemory::Free((void *)*plVar1);
      }
      plVar1 = plVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Cameras::FCameraRigJointsDebugBlock::FEntry,int> @ 14d57f860

void __cdecl
DestructItems<UE::Cameras::FCameraRigJointsDebugBlock::FEntry,int>(FEntry *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->VariableName;
    do {
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = (FString *)((longlong)(pFVar2 + 4) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Cameras::FPriorityQueueCameraDirectorEvaluator::FEntry,int> @ 14d57f8a0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
DestructItems<UE::Cameras::FPriorityQueueCameraDirectorEvaluator::FEntry,int>
          (FEntry *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->ChildContext).SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Cameras::FContextDataTableDebugBlock::FEntryDebugInfo,int> @ 14d57f8e0

void __cdecl
DestructItems<UE::Cameras::FContextDataTableDebugBlock::FEntryDebugInfo,int>
          (FEntryDebugInfo *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->Name;
    do {
      pFVar1 = (((FString *)((FName *)(pFVar2 + 1) + 1))->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = (FString *)((longlong)(pFVar2 + 3) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Cameras::FVariableTableDebugBlock::FEntryDebugInfo,int> @ 14d57f930

void __cdecl
DestructItems<UE::Cameras::FVariableTableDebugBlock::FEntryDebugInfo,int>
          (FEntryDebugInfo *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->Name;
    do {
      pFVar1 = pFVar2[1].Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = pFVar2 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FFloatCameraRigParameterOverride,int> @ 14d57f980

void __cdecl
DestructItems<FFloatCameraRigParameterOverride,int>
          (FFloatCameraRigParameterOverride *param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = &param_1->_padding_;
    do {
      if ((void *)*plVar1 != (void *)0x0) {
        FMemory::Free((void *)*plVar1);
      }
      plVar1 = plVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FInteger32CameraRigParameterOverride,int> @ 14d57f9c0

void __cdecl
DestructItems<FInteger32CameraRigParameterOverride,int>
          (FInteger32CameraRigParameterOverride *param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = &param_1->_padding_;
    do {
      if ((void *)*plVar1 != (void *)0x0) {
        FMemory::Free((void *)*plVar1);
      }
      plVar1 = plVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Cameras::FPlayerControllersDebugBlock::FPlayerControllerDebugInfo,int> @ 14d57fa00

void __cdecl
DestructItems<UE::Cameras::FPlayerControllersDebugBlock::FPlayerControllerDebugInfo,int>
          (FPlayerControllerDebugInfo *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->ViewTargetName;
    do {
      pFVar1 = pFVar2[1].Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = pFVar2[-1].Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FPlayerControllerDebugInfo *)(pFVar2 + -2))->PlayerControllerName).Data.
               AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = pFVar2 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Cameras::FBlendStackCameraNodeEvaluator::FResolvedEntry,int> @ 14d57fa70

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
DestructItems<UE::Cameras::FBlendStackCameraNodeEvaluator::FResolvedEntry,int>
          (FResolvedEntry *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->Context).SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FRotator3dCameraRigParameterOverride,int> @ 14d57fab0

void __cdecl
DestructItems<FRotator3dCameraRigParameterOverride,int>
          (FRotator3dCameraRigParameterOverride *param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = &param_1->_padding_;
    do {
      if ((void *)*plVar1 != (void *)0x0) {
        FMemory::Free((void *)*plVar1);
      }
      plVar1 = plVar1 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FRotator3fCameraRigParameterOverride,int> @ 14d57faf0

void __cdecl
DestructItems<FRotator3fCameraRigParameterOverride,int>
          (FRotator3fCameraRigParameterOverride *param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = &param_1->_padding_;
    do {
      if ((void *)*plVar1 != (void *)0x0) {
        FMemory::Free((void *)*plVar1);
      }
      plVar1 = plVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FTransform3dCameraRigParameterOverride,int> @ 14d57fb30

void __cdecl
DestructItems<FTransform3dCameraRigParameterOverride,int>
          (FTransform3dCameraRigParameterOverride *param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = &param_1->_padding_;
    do {
      if ((void *)*plVar1 != (void *)0x0) {
        FMemory::Free((void *)*plVar1);
      }
      plVar1 = plVar1 + 0x16;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FTransform3fCameraRigParameterOverride,int> @ 14d57fb70

void __cdecl
DestructItems<FTransform3fCameraRigParameterOverride,int>
          (FTransform3fCameraRigParameterOverride *param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = &param_1->_padding_;
    do {
      if ((void *)*plVar1 != (void *)0x0) {
        FMemory::Free((void *)*plVar1);
      }
      plVar1 = plVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FVector2dCameraRigParameterOverride,int> @ 14d57fbb0

void __cdecl
DestructItems<FVector2dCameraRigParameterOverride,int>
          (FVector2dCameraRigParameterOverride *param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = &param_1->_padding_;
    do {
      if ((void *)*plVar1 != (void *)0x0) {
        FMemory::Free((void *)*plVar1);
      }
      plVar1 = plVar1 + 0xb;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FVector2fCameraRigParameterOverride,int> @ 14d57fbf0

void __cdecl
DestructItems<FVector2fCameraRigParameterOverride,int>
          (FVector2fCameraRigParameterOverride *param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = &param_1->_padding_;
    do {
      if ((void *)*plVar1 != (void *)0x0) {
        FMemory::Free((void *)*plVar1);
      }
      plVar1 = plVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FVector3dCameraRigParameterOverride,int> @ 14d57fc30

void __cdecl
DestructItems<FVector3dCameraRigParameterOverride,int>
          (FVector3dCameraRigParameterOverride *param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = &param_1->_padding_;
    do {
      if ((void *)*plVar1 != (void *)0x0) {
        FMemory::Free((void *)*plVar1);
      }
      plVar1 = plVar1 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FVector3fCameraRigParameterOverride,int> @ 14d57fc70

void __cdecl
DestructItems<FVector3fCameraRigParameterOverride,int>
          (FVector3fCameraRigParameterOverride *param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = &param_1->_padding_;
    do {
      if ((void *)*plVar1 != (void *)0x0) {
        FMemory::Free((void *)*plVar1);
      }
      plVar1 = plVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FVector4dCameraRigParameterOverride,int> @ 14d57fcb0

void __cdecl
DestructItems<FVector4dCameraRigParameterOverride,int>
          (FVector4dCameraRigParameterOverride *param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = &param_1->_padding_;
    do {
      if ((void *)*plVar1 != (void *)0x0) {
        FMemory::Free((void *)*plVar1);
      }
      plVar1 = plVar1 + 0xe;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FVector4fCameraRigParameterOverride,int> @ 14d57fcf0

void __cdecl
DestructItems<FVector4fCameraRigParameterOverride,int>
          (FVector4fCameraRigParameterOverride *param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = &param_1->_padding_;
    do {
      if ((void *)*plVar1 != (void *)0x0) {
        FMemory::Free((void *)*plVar1);
      }
      plVar1 = plVar1 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<UE::Cameras::FCameraEvaluationService,1>,int> @ 14d57fd30

void __cdecl
DestructItems<TSharedPtr<UE::Cameras::FCameraEvaluationService,1>,int>
          (TSharedPtr<UE::Cameras::FCameraEvaluationService,1> *param_1,int param_2)

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

// FindByPredicate<`FCameraObjectInterface::FindBlendableParameterByName'::__l2::<lambda_1>_> @ 14d581270

TObjectPtr<UCameraObjectInterfaceBlendableParameter> * __thiscall
TArray<TObjectPtr<UCameraObjectInterfaceBlendableParameter>,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FCameraObjectInterface::FindBlendableParameterByName_::__l2::<lambda_1>_>
          (TArray<TObjectPtr<UCameraObjectInterfaceBlendableParameter>,TSizedDefaultAllocator<32>_>
           *this,<lambda_1> param_1)

{
  TObjectPtr<UCameraObjectInterfaceBlendableParameter>_u_0 *pTVar1;
  int iVar2;
  int iVar3;
  TObjectPtr<UCameraObjectInterfaceBlendableParameter>_u_0 *pTVar4;
  bool bVar5;
  
  pTVar4 = (TObjectPtr<UCameraObjectInterfaceBlendableParameter>_u_0 *)
           (this->AllocatorInstance).Data;
  pTVar1 = pTVar4 + this->ArrayNum;
  while( true ) {
    if (pTVar4 == pTVar1) {
      return (TObjectPtr<UCameraObjectInterfaceBlendableParameter> *)0x0;
    }
    iVar3 = ((param_1.ParameterName)->Data).ArrayNum;
    iVar2 = *(int *)((longlong)pTVar4->DebugPtr + 0x38);
    if (iVar2 == iVar3) {
      if (iVar2 < 2) {
        return (TObjectPtr<UCameraObjectInterfaceBlendableParameter> *)pTVar4;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp
                        (*(wchar_t **)((longlong)pTVar4->DebugPtr + 0x30),
                         (wchar_t *)((param_1.ParameterName)->Data).AllocatorInstance.Data);
      bVar5 = iVar3 == 0;
    }
    else {
      bVar5 = iVar2 + iVar3 == 1;
    }
    if (bVar5) break;
    pTVar4 = pTVar4 + 1;
  }
  return (TObjectPtr<UCameraObjectInterfaceBlendableParameter> *)pTVar4;
}

// FindByPredicate<`FCameraObjectInterface::FindDataParameterByName'::__l2::<lambda_1>_> @ 14d581300

TObjectPtr<UCameraObjectInterfaceDataParameter> * __thiscall
TArray<TObjectPtr<UCameraObjectInterfaceDataParameter>,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FCameraObjectInterface::FindDataParameterByName_::__l2::<lambda_1>_>
          (TArray<TObjectPtr<UCameraObjectInterfaceDataParameter>,TSizedDefaultAllocator<32>_> *this
          ,<lambda_1> param_1)

{
  TObjectPtr<UCameraObjectInterfaceDataParameter>_u_0 *pTVar1;
  int iVar2;
  int iVar3;
  TObjectPtr<UCameraObjectInterfaceDataParameter>_u_0 *pTVar4;
  bool bVar5;
  
  pTVar4 = (TObjectPtr<UCameraObjectInterfaceDataParameter>_u_0 *)(this->AllocatorInstance).Data;
  pTVar1 = pTVar4 + this->ArrayNum;
  while( true ) {
    if (pTVar4 == pTVar1) {
      return (TObjectPtr<UCameraObjectInterfaceDataParameter> *)0x0;
    }
    iVar3 = ((param_1.ParameterName)->Data).ArrayNum;
    iVar2 = *(int *)((longlong)pTVar4->DebugPtr + 0x38);
    if (iVar2 == iVar3) {
      if (iVar2 < 2) {
        return (TObjectPtr<UCameraObjectInterfaceDataParameter> *)pTVar4;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp
                        (*(wchar_t **)((longlong)pTVar4->DebugPtr + 0x30),
                         (wchar_t *)((param_1.ParameterName)->Data).AllocatorInstance.Data);
      bVar5 = iVar3 == 0;
    }
    else {
      bVar5 = iVar2 + iVar3 == 1;
    }
    if (bVar5) break;
    pTVar4 = pTVar4 + 1;
  }
  return (TObjectPtr<UCameraObjectInterfaceDataParameter> *)pTVar4;
}

// GetFullNameForCastLogError<UScriptStruct_const_> @ 14d582040

FString * __cdecl
GetFullNameForCastLogError<UScriptStruct_const_>
          (FString *__return_storage_ptr__,UScriptStruct *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetTypeName<UCameraRigAsset> @ 14d582da0

FString * __cdecl GetTypeName<UCameraRigAsset>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UCameraRigAsset::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UCameraRigProxyAsset> @ 14d582de0

FString * __cdecl GetTypeName<UCameraRigProxyAsset>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UCameraRigProxyAsset::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// InternalConstructor<UActivateCameraRigFunctions> @ 14d583350

void __cdecl InternalConstructor<UActivateCameraRigFunctions>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UActivateCameraRigFunctions__6B_;
  }
  return;
}

// InternalConstructor<UBlueprintCameraContextDataTableFunctionLibrary> @ 14d583380

void __cdecl
InternalConstructor<UBlueprintCameraContextDataTableFunctionLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UBlueprintCameraContextDataTableFunctionLibrary__6B_;
  }
  return;
}

// InternalConstructor<UBlueprintCameraDirector> @ 14d5833b0

void __cdecl InternalConstructor<UBlueprintCameraDirector>(FObjectInitializer *param_1)

{
  UCameraDirector *this;
  
  this = (UCameraDirector *)param_1->Obj;
  if (this != (UCameraDirector *)0x0) {
    UCameraDirector::UCameraDirector(this,param_1);
    this->_padding_ = (longlong)&___7UBlueprintCameraDirector__6B_;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UBlueprintCameraDirectorEvaluator> @ 14d5833f0

void __cdecl InternalConstructor<UBlueprintCameraDirectorEvaluator>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UBlueprintCameraDirectorEvaluator__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[6].field_0x20 = 0;
    *(undefined4 *)(this + 7) = 0;
    *(undefined4 *)&this[7].field_0x4 = 4;
    *(undefined8 *)&this[7].field_0x8 = 0;
    *(undefined8 *)&this[7].field_0x10 = 0;
    *(undefined8 *)&this[7].field_0x18 = 0;
    *(undefined8 *)&this[7].field_0x20 = 0;
    *(undefined8 *)(this + 8) = 0;
  }
  return;
}

// InternalConstructor<UBlueprintCameraEvaluationDataFunctionLibrary> @ 14d583460

void __cdecl
InternalConstructor<UBlueprintCameraEvaluationDataFunctionLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UBlueprintCameraEvaluationDataFunctionLibrary__6B_;
  }
  return;
}

// InternalConstructor<UBlueprintCameraPoseFunctionLibrary> @ 14d583490

void __cdecl InternalConstructor<UBlueprintCameraPoseFunctionLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UBlueprintCameraPoseFunctionLibrary__6B_;
  }
  return;
}

// InternalConstructor<UBlueprintCameraVariableTableFunctionLibrary> @ 14d5834c0

void __cdecl
InternalConstructor<UBlueprintCameraVariableTableFunctionLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UBlueprintCameraVariableTableFunctionLibrary__6B_;
  }
  return;
}

// InternalConstructor<UBooleanCameraVariable> @ 14d5834f0

void __cdecl InternalConstructor<UBooleanCameraVariable>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined2 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x4 = 0;
    *(undefined8 *)&this[1].field_0xc = 0;
    *(undefined ***)this = &___7UBooleanCameraVariable__6B_;
    this[1].field_0x2 = 0;
    this[1].field_0x18 = 0;
  }
  return;
}

// InternalConstructor<UCalcCameraActorCameraNode> @ 14d583540

void __cdecl InternalConstructor<UCalcCameraActorCameraNode>(FObjectInitializer *param_1)

{
  UCameraNode *this;
  
  this = (UCameraNode *)param_1->Obj;
  if (this != (UCameraNode *)0x0) {
    UCameraNode::UCameraNode(this,param_1);
    this->_padding_ = (longlong)&UCalcCameraActorCameraNode::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UCalcCameraActorCameraNode::_vftable__for__IObjectTreeGraphObject__
    ;
  }
  return;
}

// InternalConstructor<UCameraComponentCameraNode> @ 14d583580

void __cdecl InternalConstructor<UCameraComponentCameraNode>(FObjectInitializer *param_1)

{
  UCameraNode *this;
  
  this = (UCameraNode *)param_1->Obj;
  if (this != (UCameraNode *)0x0) {
    UCameraNode::UCameraNode(this,param_1);
    this->_padding_ = (longlong)&UCameraComponentCameraNode::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UCameraComponentCameraNode::_vftable__for__IObjectTreeGraphObject__
    ;
  }
  return;
}

// InternalConstructor<UCameraDirectorStateTreeSchema> @ 14d5835c0

void __cdecl InternalConstructor<UCameraDirectorStateTreeSchema>(FObjectInitializer *param_1)

{
  UStateTreeSchema *pUVar1;
  UStateTreeSchema *this;
  int iVar2;
  FObjectInitializer *pFVar3;
  TObjectPtr<UStruct_const_>_u_0 local_28;
  FName local_20;
  FStateTreeDataHandle local_18;
  undefined1 local_12;
  
  this = (UStateTreeSchema *)param_1->Obj;
  if (this != (UStateTreeSchema *)0x0) {
    pFVar3 = FObjectInitializer::Get();
    UStateTreeSchema::UStateTreeSchema(this,pFVar3);
    pUVar1 = this + 1;
    *(undefined ***)this = &___7UCameraDirectorStateTreeSchema__6B_;
    *(FScriptContainerElement **)pUVar1 = (FScriptContainerElement *)0x0;
    *(undefined4 *)&this[1].field_0x8 = 0;
    *(undefined4 *)&this[1].field_0xc = 0;
    local_28.DebugPtr = (UStruct *)Z_Construct_UClass_UObject_NoRegister();
    local_20 = UE::Cameras::FStateTreeContextDataNames::ContextOwner;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UClass *)local_28.DebugPtr != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_28.DebugPtr);
    }
    local_18.Source = FStateTreeDataHandle::Invalid.Source;
    local_18._1_1_ = FStateTreeDataHandle::Invalid._1_1_;
    local_18.Index = FStateTreeDataHandle::Invalid.Index;
    local_18.StateHandle = (FStateTreeStateHandle)FStateTreeDataHandle::Invalid.StateHandle.Index;
    local_12 = 0;
    iVar2 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)pUVar1,(int *)&this[1].field_0x8,
                       (int *)&this[1].field_0xc);
    ConstructItems<FStateTreeExternalDataDesc,FStateTreeExternalDataDesc,int>
              (*(FScriptContainerElement **)pUVar1 + (longlong)iVar2 * 0x18,
               (FStateTreeExternalDataDesc *)&local_28.ObjectPtr,1);
  }
  return;
}

// InternalConstructor<UCameraObjectInterfaceBlendableParameter> @ 14d5836c0

void __cdecl
InternalConstructor<UCameraObjectInterfaceBlendableParameter>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined4 *)&this[2].field_0x24 = 0xffffffff;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined ***)this = &UCameraObjectInterfaceBlendableParameter::_vftable__for__UObject__;
    *(undefined ***)(this + 1) =
         &UCameraObjectInterfaceBlendableParameter::_vftable__for__IObjectTreeGraphObject__;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined4 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    this[2].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 0;
  }
  return;
}

// InternalConstructor<UCameraObjectInterfaceDataParameter> @ 14d583730

void __cdecl InternalConstructor<UCameraObjectInterfaceDataParameter>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined4 *)&this[2].field_0x20 = 0xffffffff;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined ***)this = &UCameraObjectInterfaceDataParameter::_vftable__for__UObject__;
    *(undefined ***)(this + 1) =
         &UCameraObjectInterfaceDataParameter::_vftable__for__IObjectTreeGraphObject__;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
  }
  return;
}

// InternalConstructor<UCameraObjectInterfaceParameterBase> @ 14d5837a0

void __cdecl InternalConstructor<UCameraObjectInterfaceParameterBase>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &UCameraObjectInterfaceParameterBase::_vftable__for__UObject__;
    *(undefined ***)(this + 1) =
         &UCameraObjectInterfaceParameterBase::_vftable__for__IObjectTreeGraphObject__;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UCameraRigAsset> @ 14d583800

void __cdecl InternalConstructor<UCameraRigAsset>(FObjectInitializer *param_1)

{
  UBaseCameraObject *this;
  
  this = (UBaseCameraObject *)param_1->Obj;
  if (this != (UBaseCameraObject *)0x0) {
    UBaseCameraObject::UBaseCameraObject(this,param_1);
    *(undefined1 *)
     ((longlong)&this[1].AllocationInfo.VariableTableInfo.VariableDefinitions.AllocatorInstance.Data
     + 4) = 3;
    this->_padding_ = (longlong)&UCameraRigAsset::_vftable__for__UBaseCameraObject__;
    this[1]._padding_ = (longlong)&UCameraRigAsset::_vftable__for__IGameplayTagAssetInterface__;
    this[1]._padding_ = (longlong)&UCameraRigAsset::_vftable__for__IHasCameraBuildStatus__;
    this[1]._padding_ = (longlong)&UCameraRigAsset::_vftable__for__IObjectTreeGraphObject__;
    this[1]._padding_ = (longlong)&UCameraRigAsset::_vftable__for__IObjectTreeGraphRootObject__;
    this[1]._padding_ = 0;
    this[1].Interface.BlendableParameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].Interface.BlendableParameters.ArrayNum = 0;
    this[1].Interface.BlendableParameters.ArrayMax = 0;
    this[1].Interface.DataParameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].Interface.DataParameters.ArrayNum = 0;
    this[1].Interface.DataParameters.ArrayMax = 0;
    this[1].Interface.DisplayName_DEPRECATED.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    this[1].Interface.DisplayName_DEPRECATED.Data.ArrayNum = 0;
    this[1].Interface.DisplayName_DEPRECATED.Data.ArrayMax = 0;
    *(undefined8 *)&this[1].EventHandlers = 0;
    *(undefined8 *)&this[1].AllocationInfo = 0;
    *(undefined4 *)
     &this[1].AllocationInfo.VariableTableInfo.VariableDefinitions.AllocatorInstance.Data = 0;
    this[1].AllocationInfo.VariableTableInfo.VariableDefinitions.ArrayNum = 0;
    this[1].AllocationInfo.VariableTableInfo.VariableDefinitions.ArrayMax = 0;
    this[1].AllocationInfo.ContextDataTableInfo.DataDefinitions.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
  }
  return;
}

// InternalConstructor<UCameraRigParameterInterop> @ 14d5838d0

void __cdecl InternalConstructor<UCameraRigParameterInterop>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UCameraRigParameterInterop__6B_;
  }
  return;
}

// InternalConstructor<UCameraRigParameterInteropLibrary> @ 14d583900

void __cdecl InternalConstructor<UCameraRigParameterInteropLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UCameraRigParameterInteropLibrary__6B_;
  }
  return;
}

// InternalConstructor<UCameraRigProxyAsset> @ 14d583930

void __cdecl InternalConstructor<UCameraRigProxyAsset>(FObjectInitializer *param_1)

{
  UObject *this;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FGuid *pFVar4;
  FGuid local_18;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UCameraRigProxyAsset__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    pFVar4 = FGuid::NewGuid(&local_18);
    uVar1 = pFVar4->B;
    uVar2 = pFVar4->C;
    uVar3 = pFVar4->D;
    *(uint *)&this[1].field_0x0 = pFVar4->A;
    *(uint *)&this[1].field_0x4 = uVar1;
    *(uint *)&this[1].field_0x8 = uVar2;
    *(uint *)&this[1].field_0xc = uVar3;
  }
  return;
}

// InternalConstructor<UCameraRigProxyTable> @ 14d583980

void __cdecl InternalConstructor<UCameraRigProxyTable>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UCameraRigProxyTable__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UCameraRigTransition> @ 14d5839c0

void __cdecl InternalConstructor<UCameraRigTransition>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &UCameraRigTransition::_vftable__for__UObject__;
    *(undefined ***)(this + 1) = &UCameraRigTransition::_vftable__for__IObjectTreeGraphObject__;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined4 *)&this[1].field_0x20 = 0;
    *(undefined2 *)&this[1].field_0x24 = 0;
  }
  return;
}

// InternalConstructor<UCameraRigTransitionCondition> @ 14d583a10

void __cdecl InternalConstructor<UCameraRigTransitionCondition>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &UCameraRigTransitionCondition::_vftable__for__UObject__;
    *(undefined ***)(this + 1) =
         &UCameraRigTransitionCondition::_vftable__for__IObjectTreeGraphObject__;
  }
  return;
}

// InternalConstructor<UCameraShakeAsset> @ 14d583a50

void __cdecl InternalConstructor<UCameraShakeAsset>(FObjectInitializer *param_1)

{
  UBaseCameraObject *this;
  
  this = (UBaseCameraObject *)param_1->Obj;
  if (this != (UBaseCameraObject *)0x0) {
    UBaseCameraObject::UBaseCameraObject(this,param_1);
    *(undefined2 *)&this[1].Interface.BlendableParameters.ArrayNum = 0x300;
    this->_padding_ = (longlong)&UCameraShakeAsset::_vftable__for__UBaseCameraObject__;
    this[1]._padding_ = (longlong)&UCameraShakeAsset::_vftable__for__IHasCameraBuildStatus__;
    this[1]._padding_ = (longlong)&UCameraShakeAsset::_vftable__for__IObjectTreeGraphObject__;
    this[1]._padding_ = (longlong)&UCameraShakeAsset::_vftable__for__IObjectTreeGraphRootObject__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].Interface.BlendableParameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(undefined8 *)&this[1].Interface.BlendableParameters.ArrayMax = 0;
    *(undefined8 *)((longlong)&this[1].Interface.DataParameters.AllocatorInstance.Data + 4) = 0;
  }
  return;
}

// InternalConstructor<UCameraValueInterpolator> @ 14d583ae0

void __cdecl InternalConstructor<UCameraValueInterpolator>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UCameraValueInterpolator__6B_;
  }
  return;
}

// InternalConstructor<UCameraVariableAsset> @ 14d583b10

void __cdecl InternalConstructor<UCameraVariableAsset>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined2 *)(this + 1) = 0;
    *(undefined ***)this = &___7UCameraVariableAsset__6B_;
    *(undefined8 *)&this[1].field_0x4 = 0;
    *(undefined8 *)&this[1].field_0xc = 0;
    this[1].field_0x2 = 0;
  }
  return;
}

// InternalConstructor<UCameraVariableCollection> @ 14d583b60

void __cdecl InternalConstructor<UCameraVariableCollection>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UCameraVariableCollection__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UCombinedCameraRigsCameraNode> @ 14d583ba0

void __cdecl InternalConstructor<UCombinedCameraRigsCameraNode>(FObjectInitializer *param_1)

{
  UCameraNode *this;
  
  this = (UCameraNode *)param_1->Obj;
  if (this != (UCameraNode *)0x0) {
    UCameraNode::UCameraNode(this,param_1);
    this->_padding_ = (longlong)&UCombinedCameraRigsCameraNode::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UCombinedCameraRigsCameraNode::_vftable__for__IObjectTreeGraphObject__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UCustomCameraNodeParameterProvider> @ 14d583bf0

void __cdecl InternalConstructor<UCustomCameraNodeParameterProvider>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UCustomCameraNodeParameterProvider__6B_;
  }
  return;
}

// InternalConstructor<UDefaultRootCameraNode> @ 14d583c20

void __cdecl InternalConstructor<UDefaultRootCameraNode>(FObjectInitializer *param_1)

{
  if ((UDefaultRootCameraNode *)param_1->Obj != (UDefaultRootCameraNode *)0x0) {
    UDefaultRootCameraNode::UDefaultRootCameraNode((UDefaultRootCameraNode *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UDoubleCameraVariable> @ 14d583c40

void __cdecl InternalConstructor<UDoubleCameraVariable>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined2 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x4 = 0;
    *(undefined8 *)&this[1].field_0xc = 0;
    *(undefined ***)this = &___7UDoubleCameraVariable__6B_;
    *(undefined8 *)&this[1].field_0x18 = 0;
    this[1].field_0x2 = 0;
  }
  return;
}

// InternalConstructor<UFloatCameraVariable> @ 14d583c90

void __cdecl InternalConstructor<UFloatCameraVariable>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined2 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x4 = 0;
    *(undefined8 *)&this[1].field_0xc = 0;
    *(undefined ***)this = &___7UFloatCameraVariable__6B_;
    *(undefined4 *)&this[1].field_0x18 = 0;
    this[1].field_0x2 = 0;
  }
  return;
}

// InternalConstructor<UInteger32CameraVariable> @ 14d583ce0

void __cdecl InternalConstructor<UInteger32CameraVariable>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined2 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x4 = 0;
    *(undefined8 *)&this[1].field_0xc = 0;
    *(undefined ***)this = &___7UInteger32CameraVariable__6B_;
    *(undefined4 *)&this[1].field_0x18 = 0;
    this[1].field_0x2 = 0;
  }
  return;
}

// InternalConstructor<UObjectTreeGraphComment> @ 14d583d30

void __cdecl InternalConstructor<UObjectTreeGraphComment>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &UObjectTreeGraphComment::_vftable__for__UObject__;
    *(undefined ***)(this + 1) = &UObjectTreeGraphComment::_vftable__for__IObjectTreeGraphObject__;
  }
  return;
}

// InternalConstructor<UPopValueInterpolator> @ 14d583d70

void __cdecl InternalConstructor<UPopValueInterpolator>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UPopValueInterpolator__6B_;
  }
  return;
}

// InternalConstructor<UPriorityQueueCameraDirector> @ 14d583da0

void __cdecl InternalConstructor<UPriorityQueueCameraDirector>(FObjectInitializer *param_1)

{
  UCameraDirector *this;
  
  this = (UCameraDirector *)param_1->Obj;
  if (this != (UCameraDirector *)0x0) {
    UCameraDirector::UCameraDirector(this,param_1);
    this->_padding_ = (longlong)&___7UPriorityQueueCameraDirector__6B_;
  }
  return;
}

// InternalConstructor<URootCameraNode> @ 14d583dd0

void __cdecl InternalConstructor<URootCameraNode>(FObjectInitializer *param_1)

{
  UCameraNode *this;
  
  this = (UCameraNode *)param_1->Obj;
  if (this != (UCameraNode *)0x0) {
    UCameraNode::UCameraNode(this,param_1);
    this->_padding_ = (longlong)&URootCameraNode::_vftable__for__UObject__;
    this->_padding_ = (longlong)&URootCameraNode::_vftable__for__IObjectTreeGraphObject__;
  }
  return;
}

// InternalConstructor<URotator3dCameraVariable> @ 14d583e10

void __cdecl InternalConstructor<URotator3dCameraVariable>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined2 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x4 = 0;
    *(undefined8 *)&this[1].field_0xc = 0;
    *(undefined ***)this = &___7URotator3dCameraVariable__6B_;
    this[1].field_0x2 = 0;
  }
  return;
}

// InternalConstructor<URotator3fCameraVariable> @ 14d583e60

void __cdecl InternalConstructor<URotator3fCameraVariable>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined2 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x4 = 0;
    *(undefined8 *)&this[1].field_0xc = 0;
    *(undefined ***)this = &___7URotator3fCameraVariable__6B_;
    this[1].field_0x2 = 0;
  }
  return;
}

// InternalConstructor<UShakeCameraNode> @ 14d583eb0

void __cdecl InternalConstructor<UShakeCameraNode>(FObjectInitializer *param_1)

{
  UCameraNode *this;
  
  this = (UCameraNode *)param_1->Obj;
  if (this != (UCameraNode *)0x0) {
    UCameraNode::UCameraNode(this,param_1);
    this->_padding_ = (longlong)&UShakeCameraNode::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UShakeCameraNode::_vftable__for__IObjectTreeGraphObject__;
  }
  return;
}

// InternalConstructor<USingleCameraDirector> @ 14d583ef0

void __cdecl InternalConstructor<USingleCameraDirector>(FObjectInitializer *param_1)

{
  UCameraDirector *this;
  
  this = (UCameraDirector *)param_1->Obj;
  if (this != (UCameraDirector *)0x0) {
    UCameraDirector::UCameraDirector(this,param_1);
    this->_padding_ = (longlong)&___7USingleCameraDirector__6B_;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UStateTreeCameraDirector> @ 14d583f30

void __cdecl InternalConstructor<UStateTreeCameraDirector>(FObjectInitializer *param_1)

{
  UCameraDirector *this;
  
  this = (UCameraDirector *)param_1->Obj;
  if (this != (UCameraDirector *)0x0) {
    UCameraDirector::UCameraDirector(this,param_1);
    this->_padding_ = (longlong)&___7UStateTreeCameraDirector__6B_;
    this[1]._padding_ = 0;
    FInstancedStruct::FInstancedStruct((FInstancedStruct *)&this[1]._padding_);
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UTransform3dCameraVariable> @ 14d583f80

void __cdecl InternalConstructor<UTransform3dCameraVariable>(FObjectInitializer *param_1)

{
  UObject *this;
  float fVar1;
  float fVar2;
  float fVar3;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined2 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x4 = 0;
    *(undefined8 *)&this[1].field_0xc = 0;
    *(undefined ***)this = &___7UTransform3dCameraVariable__6B_;
    this[1].field_0x2 = 0;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    *(double *)&this[1].field_0x18 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    *(double *)&this[1].field_0x20 = (double)fVar1;
    *(double *)(this + 2) = (double)fVar2;
    *(double *)&this[2].field_0x8 = (double)fVar3;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    *(double *)&this[2].field_0x10 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    *(double *)&this[2].field_0x18 = (double)fVar1;
    *(double *)&this[2].field_0x20 = (double)fVar2;
    *(double *)(this + 3) = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    *(double *)&this[3].field_0x8 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    *(double *)&this[3].field_0x10 = (double)fVar1;
    *(double *)&this[3].field_0x18 = (double)fVar2;
    *(double *)&this[3].field_0x20 = (double)fVar3;
  }
  return;
}

// InternalConstructor<UTransform3fCameraVariable> @ 14d584020

void __cdecl InternalConstructor<UTransform3fCameraVariable>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined2 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x4 = 0;
    *(undefined8 *)&this[1].field_0xc = 0;
    *(undefined ***)this = &___7UTransform3fCameraVariable__6B_;
    this[1].field_0x2 = 0;
    *(__m128 *)&this[1].field_0x18 = GlobalVectorConstants::Float0001;
    *(__m128 *)(this + 2) = GlobalVectorConstants::FloatZero;
    *(__m128 *)&this[2].field_0x10 = GlobalVectorConstants::Float1110;
  }
  return;
}

// InternalConstructor<UVector2dCameraVariable> @ 14d584090

void __cdecl InternalConstructor<UVector2dCameraVariable>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined2 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x4 = 0;
    *(undefined8 *)&this[1].field_0xc = 0;
    *(undefined ***)this = &___7UVector2dCameraVariable__6B_;
    this[1].field_0x2 = 0;
  }
  return;
}

// InternalConstructor<UVector2fCameraVariable> @ 14d5840e0

void __cdecl InternalConstructor<UVector2fCameraVariable>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined2 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x4 = 0;
    *(undefined8 *)&this[1].field_0xc = 0;
    *(undefined ***)this = &___7UVector2fCameraVariable__6B_;
    this[1].field_0x2 = 0;
  }
  return;
}

// InternalConstructor<UVector3dCameraVariable> @ 14d584130

void __cdecl InternalConstructor<UVector3dCameraVariable>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined2 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x4 = 0;
    *(undefined8 *)&this[1].field_0xc = 0;
    *(undefined ***)this = &___7UVector3dCameraVariable__6B_;
    this[1].field_0x2 = 0;
  }
  return;
}

// InternalConstructor<UVector3fCameraVariable> @ 14d584180

void __cdecl InternalConstructor<UVector3fCameraVariable>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined2 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x4 = 0;
    *(undefined8 *)&this[1].field_0xc = 0;
    *(undefined ***)this = &___7UVector3fCameraVariable__6B_;
    this[1].field_0x2 = 0;
  }
  return;
}

// InternalConstructor<UVector4dCameraVariable> @ 14d5841d0

void __cdecl InternalConstructor<UVector4dCameraVariable>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined2 *)(this + 1) = 0;
    this[1].field_0x2 = 0;
    *(undefined ***)this = &___7UVector4dCameraVariable__6B_;
    *(undefined8 *)&this[2].field_0x8 = 0x3ff0000000000000;
    *(undefined8 *)&this[1].field_0x4 = 0;
    *(undefined8 *)&this[1].field_0xc = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
  }
  return;
}

// InternalConstructor<UVector4fCameraVariable> @ 14d584230

void __cdecl InternalConstructor<UVector4fCameraVariable>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined2 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x4 = 0;
    *(undefined8 *)&this[1].field_0xc = 0;
    *(undefined ***)this = &___7UVector4fCameraVariable__6B_;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined4 *)&this[1].field_0x20 = 0;
    this[1].field_0x2 = 0;
    *(undefined4 *)&this[1].field_0x24 = 0x3f800000;
  }
  return;
}

// InternalVTableHelperCtorCaller<UActivateCameraRigFunctions> @ 14d584290

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UActivateCameraRigFunctions>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UActivateCameraRigFunctions::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UActivateCameraRigFunctions__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UBlueprintCameraContextDataTableFunctionLibrary> @ 14d584340

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UBlueprintCameraContextDataTableFunctionLibrary>
          (FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UBlueprintCameraContextDataTableFunctionLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UBlueprintCameraContextDataTableFunctionLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UBlueprintCameraDirector> @ 14d5843f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UBlueprintCameraDirector>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UCameraDirector *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UBlueprintCameraDirector::GetPrivateStaticClass();
  this = (UCameraDirector *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UCameraDirector *)0x0) {
    UCameraDirector::UCameraDirector(this,param_1);
    this->_padding_ = (longlong)&___7UBlueprintCameraDirector__6B_;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UBlueprintCameraDirectorEvaluator> @ 14d5844a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UBlueprintCameraDirectorEvaluator>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UBlueprintCameraDirectorEvaluator::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UBlueprintCameraDirectorEvaluator__6B_;
    *(undefined8 *)&pUVar1[6].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 7) = 0;
    *(undefined4 *)&pUVar1[7].field_0x4 = 4;
    *(undefined8 *)&pUVar1[7].field_0x8 = 0;
    *(undefined8 *)&pUVar1[7].field_0x10 = 0;
    *(undefined8 *)&pUVar1[7].field_0x18 = 0;
    *(undefined8 *)&pUVar1[7].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 8) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UBlueprintCameraEvaluationDataFunctionLibrary> @ 14d584590

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UBlueprintCameraEvaluationDataFunctionLibrary>
          (FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UBlueprintCameraEvaluationDataFunctionLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UBlueprintCameraEvaluationDataFunctionLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UBlueprintCameraPoseFunctionLibrary> @ 14d584640

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UBlueprintCameraPoseFunctionLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UBlueprintCameraPoseFunctionLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UBlueprintCameraPoseFunctionLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UBlueprintCameraVariableTableFunctionLibrary> @ 14d5846f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UBlueprintCameraVariableTableFunctionLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UBlueprintCameraVariableTableFunctionLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UBlueprintCameraVariableTableFunctionLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UBooleanCameraVariable> @ 14d5847a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UBooleanCameraVariable>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UBooleanCameraVariable::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined2 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UBooleanCameraVariable__6B_;
    pUVar1[1].field_0x2 = 0;
    *(undefined8 *)&pUVar1[1].field_0x4 = 0;
    *(undefined8 *)&pUVar1[1].field_0xc = 0;
    pUVar1[1].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCalcCameraActorCameraNode> @ 14d584860

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UCalcCameraActorCameraNode>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UCameraNode *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCalcCameraActorCameraNode::GetPrivateStaticClass();
  this = (UCameraNode *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UCameraNode *)0x0) {
    UCameraNode::UCameraNode(this,param_1);
    this->_padding_ = (longlong)&UCalcCameraActorCameraNode::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UCalcCameraActorCameraNode::_vftable__for__IObjectTreeGraphObject__
    ;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCameraComponentCameraNode> @ 14d584920

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UCameraComponentCameraNode>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UCameraNode *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCameraComponentCameraNode::GetPrivateStaticClass();
  this = (UCameraNode *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UCameraNode *)0x0) {
    UCameraNode::UCameraNode(this,param_1);
    this->_padding_ = (longlong)&UCameraComponentCameraNode::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UCameraComponentCameraNode::_vftable__for__IObjectTreeGraphObject__
    ;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCameraDirectorStateTreeSchema> @ 14d5849e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UCameraDirectorStateTreeSchema>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCameraDirectorStateTreeSchema::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UStateTreeSchema::UStateTreeSchema((UStateTreeSchema *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UCameraDirectorStateTreeSchema__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCameraObjectInterfaceBlendableParameter> @ 14d584aa0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UCameraObjectInterfaceBlendableParameter>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCameraObjectInterfaceBlendableParameter::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &UCameraObjectInterfaceBlendableParameter::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) =
         &UCameraObjectInterfaceBlendableParameter::_vftable__for__IObjectTreeGraphObject__;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined4 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    pUVar1[2].field_0x20 = 0;
    *(undefined4 *)&pUVar1[2].field_0x24 = 0xffffffff;
    *(undefined8 *)(pUVar1 + 3) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCameraObjectInterfaceDataParameter> @ 14d584b90

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UCameraObjectInterfaceDataParameter>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCameraObjectInterfaceDataParameter::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &UCameraObjectInterfaceDataParameter::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) =
         &UCameraObjectInterfaceDataParameter::_vftable__for__IObjectTreeGraphObject__;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined4 *)&pUVar1[2].field_0x20 = 0xffffffff;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCameraObjectInterfaceParameterBase> @ 14d584c70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UCameraObjectInterfaceParameterBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCameraObjectInterfaceParameterBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &UCameraObjectInterfaceParameterBase::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) =
         &UCameraObjectInterfaceParameterBase::_vftable__for__IObjectTreeGraphObject__;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCameraRigAsset> @ 14d584d40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UCameraRigAsset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UBaseCameraObject *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCameraRigAsset::GetPrivateStaticClass();
  this = (UBaseCameraObject *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UBaseCameraObject *)0x0) {
    UBaseCameraObject::UBaseCameraObject(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UCameraRigAsset::_vftable__for__UBaseCameraObject__;
    this[1]._padding_ = (longlong)&UCameraRigAsset::_vftable__for__IGameplayTagAssetInterface__;
    this[1]._padding_ = (longlong)&UCameraRigAsset::_vftable__for__IHasCameraBuildStatus__;
    this[1]._padding_ = (longlong)&UCameraRigAsset::_vftable__for__IObjectTreeGraphObject__;
    this[1]._padding_ = (longlong)&UCameraRigAsset::_vftable__for__IObjectTreeGraphRootObject__;
    this[1].Interface.BlendableParameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].Interface.BlendableParameters.ArrayNum = 0;
    this[1].Interface.BlendableParameters.ArrayMax = 0;
    this[1].Interface.DataParameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].Interface.DataParameters.ArrayNum = 0;
    this[1].Interface.DataParameters.ArrayMax = 0;
    this[1].Interface.DisplayName_DEPRECATED.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    this[1].Interface.DisplayName_DEPRECATED.Data.ArrayNum = 0;
    this[1].Interface.DisplayName_DEPRECATED.Data.ArrayMax = 0;
    *(undefined8 *)&this[1].EventHandlers = 0;
    *(undefined8 *)&this[1].AllocationInfo = 0;
    *(undefined4 *)
     &this[1].AllocationInfo.VariableTableInfo.VariableDefinitions.AllocatorInstance.Data = 0;
    *(undefined1 *)
     ((longlong)&this[1].AllocationInfo.VariableTableInfo.VariableDefinitions.AllocatorInstance.Data
     + 4) = 3;
    this[1].AllocationInfo.VariableTableInfo.VariableDefinitions.ArrayNum = 0;
    this[1].AllocationInfo.VariableTableInfo.VariableDefinitions.ArrayMax = 0;
    this[1].AllocationInfo.ContextDataTableInfo.DataDefinitions.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCameraRigParameterInterop> @ 14d584e80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UCameraRigParameterInterop>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCameraRigParameterInterop::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UCameraRigParameterInterop__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCameraRigParameterInteropLibrary> @ 14d584f30

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UCameraRigParameterInteropLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCameraRigParameterInteropLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UCameraRigParameterInteropLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCameraRigProxyAsset> @ 14d584fe0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UCameraRigProxyAsset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCameraRigProxyAsset::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UCameraRigProxyAsset__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCameraRigProxyTable> @ 14d5850a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UCameraRigProxyTable>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCameraRigProxyTable::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UCameraRigProxyTable__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCameraRigTransition> @ 14d585160

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UCameraRigTransition>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCameraRigTransition::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &UCameraRigTransition::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) = &UCameraRigTransition::_vftable__for__IObjectTreeGraphObject__;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined4 *)&pUVar1[1].field_0x20 = 0;
    *(undefined2 *)&pUVar1[1].field_0x24 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCameraRigTransitionCondition> @ 14d585230

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UCameraRigTransitionCondition>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCameraRigTransitionCondition::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &UCameraRigTransitionCondition::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) =
         &UCameraRigTransitionCondition::_vftable__for__IObjectTreeGraphObject__;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCameraShakeAsset> @ 14d5852f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UCameraShakeAsset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UBaseCameraObject *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCameraShakeAsset::GetPrivateStaticClass();
  this = (UBaseCameraObject *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UBaseCameraObject *)0x0) {
    UBaseCameraObject::UBaseCameraObject(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UCameraShakeAsset::_vftable__for__UBaseCameraObject__;
    this[1]._padding_ = (longlong)&UCameraShakeAsset::_vftable__for__IHasCameraBuildStatus__;
    this[1]._padding_ = (longlong)&UCameraShakeAsset::_vftable__for__IObjectTreeGraphObject__;
    this[1]._padding_ = (longlong)&UCameraShakeAsset::_vftable__for__IObjectTreeGraphRootObject__;
    this[1]._padding_ = 0;
    this[1].Interface.BlendableParameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(undefined2 *)&this[1].Interface.BlendableParameters.ArrayNum = 0x300;
    *(undefined8 *)&this[1].Interface.BlendableParameters.ArrayMax = 0;
    *(undefined8 *)((longlong)&this[1].Interface.DataParameters.AllocatorInstance.Data + 4) = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCameraValueInterpolator> @ 14d585400

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UCameraValueInterpolator>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCameraValueInterpolator::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UCameraValueInterpolator__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCameraVariableAsset> @ 14d5854b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UCameraVariableAsset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCameraVariableAsset::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined2 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UCameraVariableAsset__6B_;
    *(undefined8 *)&pUVar1[1].field_0x4 = 0;
    *(undefined8 *)&pUVar1[1].field_0xc = 0;
    pUVar1[1].field_0x2 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCameraVariableCollection> @ 14d585570

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UCameraVariableCollection>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCameraVariableCollection::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UCameraVariableCollection__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCombinedCameraRigsCameraNode> @ 14d585630

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UCombinedCameraRigsCameraNode>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UCameraNode *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCombinedCameraRigsCameraNode::GetPrivateStaticClass();
  this = (UCameraNode *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UCameraNode *)0x0) {
    UCameraNode::UCameraNode(this,param_1);
    this->_padding_ = (longlong)&UCombinedCameraRigsCameraNode::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UCombinedCameraRigsCameraNode::_vftable__for__IObjectTreeGraphObject__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCustomCameraNodeParameterProvider> @ 14d5856f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UCustomCameraNodeParameterProvider>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCustomCameraNodeParameterProvider::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UCustomCameraNodeParameterProvider__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDefaultRootCameraNode> @ 14d5857a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDefaultRootCameraNode>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UCameraNode *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDefaultRootCameraNode::GetPrivateStaticClass();
  this = (UCameraNode *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UCameraNode *)0x0) {
    UCameraNode::UCameraNode(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UDefaultRootCameraNode::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UDefaultRootCameraNode::_vftable__for__IObjectTreeGraphObject__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDoubleCameraVariable> @ 14d585870

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDoubleCameraVariable>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDoubleCameraVariable::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined2 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UDoubleCameraVariable__6B_;
    pUVar1[1].field_0x2 = 0;
    *(undefined8 *)&pUVar1[1].field_0x4 = 0;
    *(undefined8 *)&pUVar1[1].field_0xc = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UFloatCameraVariable> @ 14d585930

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UFloatCameraVariable>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UFloatCameraVariable::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined2 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UFloatCameraVariable__6B_;
    pUVar1[1].field_0x2 = 0;
    *(undefined8 *)&pUVar1[1].field_0x4 = 0;
    *(undefined8 *)&pUVar1[1].field_0xc = 0;
    *(undefined4 *)&pUVar1[1].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInteger32CameraVariable> @ 14d5859f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UInteger32CameraVariable>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInteger32CameraVariable::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined2 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UInteger32CameraVariable__6B_;
    pUVar1[1].field_0x2 = 0;
    *(undefined8 *)&pUVar1[1].field_0x4 = 0;
    *(undefined8 *)&pUVar1[1].field_0xc = 0;
    *(undefined4 *)&pUVar1[1].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UObjectTreeGraphComment> @ 14d585ab0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UObjectTreeGraphComment>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UObjectTreeGraphComment::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &UObjectTreeGraphComment::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) = &UObjectTreeGraphComment::_vftable__for__IObjectTreeGraphObject__
    ;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPopValueInterpolator> @ 14d585b70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPopValueInterpolator>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPopValueInterpolator::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UPopValueInterpolator__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPriorityQueueCameraDirector> @ 14d585c20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPriorityQueueCameraDirector>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UCameraDirector *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPriorityQueueCameraDirector::GetPrivateStaticClass();
  this = (UCameraDirector *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UCameraDirector *)0x0) {
    UCameraDirector::UCameraDirector(this,param_1);
    this->_padding_ = (longlong)&___7UPriorityQueueCameraDirector__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<URootCameraNode> @ 14d585cd0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<URootCameraNode>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UCameraNode *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = URootCameraNode::GetPrivateStaticClass();
  this = (UCameraNode *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UCameraNode *)0x0) {
    UCameraNode::UCameraNode(this,param_1);
    this->_padding_ = (longlong)&URootCameraNode::_vftable__for__UObject__;
    this->_padding_ = (longlong)&URootCameraNode::_vftable__for__IObjectTreeGraphObject__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<URotator3dCameraVariable> @ 14d585d90

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<URotator3dCameraVariable>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = URotator3dCameraVariable::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined2 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7URotator3dCameraVariable__6B_;
    pUVar1[1].field_0x2 = 0;
    *(undefined8 *)&pUVar1[1].field_0x4 = 0;
    *(undefined8 *)&pUVar1[1].field_0xc = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<URotator3fCameraVariable> @ 14d585e50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<URotator3fCameraVariable>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = URotator3fCameraVariable::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined2 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7URotator3fCameraVariable__6B_;
    pUVar1[1].field_0x2 = 0;
    *(undefined8 *)&pUVar1[1].field_0x4 = 0;
    *(undefined8 *)&pUVar1[1].field_0xc = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UShakeCameraNode> @ 14d585f10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UShakeCameraNode>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UCameraNode *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UShakeCameraNode::GetPrivateStaticClass();
  this = (UCameraNode *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UCameraNode *)0x0) {
    UCameraNode::UCameraNode(this,param_1);
    this->_padding_ = (longlong)&UShakeCameraNode::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UShakeCameraNode::_vftable__for__IObjectTreeGraphObject__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USingleCameraDirector> @ 14d585fd0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USingleCameraDirector>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UCameraDirector *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USingleCameraDirector::GetPrivateStaticClass();
  this = (UCameraDirector *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UCameraDirector *)0x0) {
    UCameraDirector::UCameraDirector(this,param_1);
    this->_padding_ = (longlong)&___7USingleCameraDirector__6B_;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UStateTreeCameraDirector> @ 14d586080

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UStateTreeCameraDirector>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UCameraDirector *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UStateTreeCameraDirector::GetPrivateStaticClass();
  this = (UCameraDirector *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UCameraDirector *)0x0) {
    UCameraDirector::UCameraDirector(this,param_1);
    this->_padding_ = (longlong)&___7UStateTreeCameraDirector__6B_;
    this[1]._padding_ = 0;
    FInstancedStruct::FInstancedStruct((FInstancedStruct *)&this[1]._padding_);
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UTransform3dCameraVariable> @ 14d586140

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UTransform3dCameraVariable>(FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  
  pUVar4 = GetTransientPackageAsObject();
  pUVar5 = UTransform3dCameraVariable::GetPrivateStaticClass();
  pUVar4 = StaticAllocateObject
                     (pUVar5,pUVar4,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar4 != (UObject *)0x0) {
    UObject::UObject(pUVar4,param_1);
    *(undefined2 *)(pUVar4 + 1) = 0;
    *(undefined ***)pUVar4 = &___7UTransform3dCameraVariable__6B_;
    pUVar4[1].field_0x2 = 0;
    *(undefined8 *)&pUVar4[1].field_0x4 = 0;
    *(undefined8 *)&pUVar4[1].field_0xc = 0;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    *(double *)&pUVar4[1].field_0x18 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    *(double *)&pUVar4[1].field_0x20 = (double)fVar1;
    *(double *)(pUVar4 + 2) = (double)fVar2;
    *(double *)&pUVar4[2].field_0x8 = (double)fVar3;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    *(double *)&pUVar4[2].field_0x10 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    *(double *)&pUVar4[2].field_0x18 = (double)fVar1;
    *(double *)&pUVar4[2].field_0x20 = (double)fVar2;
    *(double *)(pUVar4 + 3) = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    *(double *)&pUVar4[3].field_0x8 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    *(double *)&pUVar4[3].field_0x10 = (double)fVar1;
    *(double *)&pUVar4[3].field_0x18 = (double)fVar2;
    *(double *)&pUVar4[3].field_0x20 = (double)fVar3;
    return pUVar4;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UTransform3fCameraVariable> @ 14d586250

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UTransform3fCameraVariable>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UTransform3fCameraVariable::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined2 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UTransform3fCameraVariable__6B_;
    pUVar1[1].field_0x2 = 0;
    *(undefined8 *)&pUVar1[1].field_0x4 = 0;
    *(undefined8 *)&pUVar1[1].field_0xc = 0;
    *(__m128 *)&pUVar1[1].field_0x18 = GlobalVectorConstants::Float0001;
    *(__m128 *)(pUVar1 + 2) = GlobalVectorConstants::FloatZero;
    *(__m128 *)&pUVar1[2].field_0x10 = GlobalVectorConstants::Float1110;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UVector2dCameraVariable> @ 14d586330

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UVector2dCameraVariable>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UVector2dCameraVariable::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined2 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UVector2dCameraVariable__6B_;
    pUVar1[1].field_0x2 = 0;
    *(undefined8 *)&pUVar1[1].field_0x4 = 0;
    *(undefined8 *)&pUVar1[1].field_0xc = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UVector2fCameraVariable> @ 14d5863f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UVector2fCameraVariable>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UVector2fCameraVariable::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined2 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UVector2fCameraVariable__6B_;
    pUVar1[1].field_0x2 = 0;
    *(undefined8 *)&pUVar1[1].field_0x4 = 0;
    *(undefined8 *)&pUVar1[1].field_0xc = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UVector3dCameraVariable> @ 14d5864b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UVector3dCameraVariable>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UVector3dCameraVariable::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined2 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UVector3dCameraVariable__6B_;
    pUVar1[1].field_0x2 = 0;
    *(undefined8 *)&pUVar1[1].field_0x4 = 0;
    *(undefined8 *)&pUVar1[1].field_0xc = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UVector3fCameraVariable> @ 14d586570

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UVector3fCameraVariable>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UVector3fCameraVariable::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined2 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UVector3fCameraVariable__6B_;
    pUVar1[1].field_0x2 = 0;
    *(undefined8 *)&pUVar1[1].field_0x4 = 0;
    *(undefined8 *)&pUVar1[1].field_0xc = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UVector4dCameraVariable> @ 14d586630

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UVector4dCameraVariable>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UVector4dCameraVariable::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined2 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UVector4dCameraVariable__6B_;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0x3ff0000000000000;
    pUVar1[1].field_0x2 = 0;
    *(undefined8 *)&pUVar1[1].field_0x4 = 0;
    *(undefined8 *)&pUVar1[1].field_0xc = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UVector4fCameraVariable> @ 14d586710

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UVector4fCameraVariable>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UVector4fCameraVariable::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined2 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UVector4fCameraVariable__6B_;
    pUVar1[1].field_0x2 = 0;
    *(undefined8 *)&pUVar1[1].field_0x4 = 0;
    *(undefined8 *)&pUVar1[1].field_0xc = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined4 *)&pUVar1[1].field_0x20 = 0;
    *(undefined4 *)&pUVar1[1].field_0x24 = 0x3f800000;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IsObjectPtrEqual<UCameraRigTransition_const_,UCameraRigTransition_const_*,0> @ 14d5867e0

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UCameraRigTransition_const_,UCameraRigTransition_const_*,0>
          (TObjectPtr<UCameraRigTransition_const_> *param_1,UCameraRigTransition **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UCameraRigTransition *)0x0) {
    return *param_2 == (UCameraRigTransition *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<UStruct_const_,UScriptStruct_*,0> @ 14d586800

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UStruct_const_,UScriptStruct_*,0>
          (TObjectPtr<UStruct_const_> *param_1,UScriptStruct **param_2)

{
  if ((UScriptStruct *)(param_1->field0_0x0).DebugPtr == (UScriptStruct *)0x0) {
    return *param_2 == (UScriptStruct *)0x0;
  }
  return (UScriptStruct *)(param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<UCameraRigProxyAsset,UCameraRigProxyAsset_const_*,0> @ 14d586820

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UCameraRigProxyAsset,UCameraRigProxyAsset_const_*,0>
          (TObjectPtr<UCameraRigProxyAsset> *param_1,UCameraRigProxyAsset **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UCameraRigProxyAsset *)0x0) {
    return *param_2 == (UCameraRigProxyAsset *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// LowerBoundInternal<UE::Cameras::FPriorityQueueCameraDirectorEvaluator::FEntry,int,int,int_(__cdecl_UE::Cameras::FPriorityQueueCameraDirectorEvaluator::FEntry::*)(void)const_,TLess<void>_> @ 14d586840

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

int __cdecl
AlgoImpl::
LowerBoundInternal<UE::Cameras::FPriorityQueueCameraDirectorEvaluator::FEntry,int,int,int_(__cdecl_UE::Cameras::FPriorityQueueCameraDirectorEvaluator::FEntry::*)(void)const_,TLess<void>_>
          (FEntry *param_1,int param_2,int *param_3,pmf_93107371 param_4,TLess<void> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar4;
      iVar3 = (*(code *)param_4)(param_1 + iVar1);
      if (iVar3 < *param_3) {
        iVar4 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar4;
}

// Merge<UE::Cameras::FPriorityQueueCameraDirectorEvaluator::FEntry,int_(__cdecl_UE::Cameras::FPriorityQueueCameraDirectorEvaluator::FEntry::*)(void)const_,TLess<void>_> @ 14d5868c0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
AlgoImpl::
Merge<UE::Cameras::FPriorityQueueCameraDirectorEvaluator::FEntry,int_(__cdecl_UE::Cameras::FPriorityQueueCameraDirectorEvaluator::FEntry::*)(void)const_,TLess<void>_>
          (FEntry *param_1,int param_2,int param_3,pmf_93107371 param_4,TLess<void> param_5)

{
  TReferenceControllerBase<1> *pTVar1;
  FCameraEvaluationContext *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  uchar uVar5;
  undefined7 uVar6;
  uchar uVar7;
  undefined7 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  FEntry *pFVar13;
  FEntry *pFVar15;
  FEntry *pFVar16;
  FEntry *pFVar17;
  FEntry *pFVar18;
  uint uVar19;
  uint uVar20;
  int local_68;
  FEntry *pFVar14;
  
  if (0 < param_2) {
    local_68 = 0;
    do {
      if (param_3 <= param_2) {
        return;
      }
      iVar9 = (*(code *)param_4)(param_1 + param_2);
      iVar12 = 0;
      if (0 < param_2 - local_68) {
        uVar19 = param_2 - local_68;
        do {
          iVar11 = (uVar19 >> 1) + iVar12;
          iVar10 = (*(code *)param_4)(param_1 + (longlong)iVar11 + (longlong)local_68);
          if (iVar10 <= iVar9) {
            iVar12 = iVar11 + (uVar19 & 1);
          }
          uVar20 = uVar19 >> 1;
          uVar19 = uVar19 >> 1;
        } while (uVar20 != 0);
      }
      local_68 = local_68 + iVar12;
      if (param_2 <= local_68) {
        return;
      }
      pFVar16 = param_1 + local_68;
      iVar11 = (*(code *)param_4)(pFVar16);
      iVar12 = 0;
      iVar9 = 0;
      uVar19 = param_3 - param_2;
      if (0 < (int)uVar19) {
        do {
          uVar20 = uVar19 >> 1;
          iVar10 = (*(code *)param_4)(param_1 + (longlong)(int)(uVar20 + iVar12) + (longlong)param_2
                                     );
          iVar9 = iVar12;
          if (iVar10 < iVar11) {
            iVar9 = uVar20 + iVar12 + (uVar19 & 1);
          }
          uVar19 = uVar20;
          iVar12 = iVar9;
        } while (uVar20 != 0);
      }
      iVar11 = (iVar9 - local_68) + param_2;
      iVar12 = param_2 - local_68;
      if ((iVar12 != 0) && (iVar12 < iVar11)) {
        pFVar13 = pFVar16 + iVar12;
        pFVar17 = pFVar16;
        pFVar14 = pFVar16 + iVar12;
        do {
          while( true ) {
            pFVar15 = pFVar13 + 1;
            pFVar18 = pFVar17 + 1;
            pTVar1 = (pFVar13->ChildContext).SharedReferenceCount.ReferenceController;
            pFVar2 = (pFVar17->ChildContext).Object;
            pTVar3 = (pFVar17->ChildContext).SharedReferenceCount.ReferenceController;
            lVar4 = (pFVar17->PriorityGiver)._padding_;
            uVar7 = (pFVar17->PriorityGiver).TypeIndex;
            uVar8 = *(undefined7 *)&(pFVar17->PriorityGiver).field_0x9;
            (pFVar17->ChildContext).Object = (pFVar13->ChildContext).Object;
            (pFVar17->ChildContext).SharedReferenceCount.ReferenceController = pTVar1;
            uVar5 = (pFVar13->PriorityGiver).TypeIndex;
            uVar6 = *(undefined7 *)&(pFVar13->PriorityGiver).field_0x9;
            (pFVar17->PriorityGiver)._padding_ = (pFVar13->PriorityGiver)._padding_;
            (pFVar17->PriorityGiver).TypeIndex = uVar5;
            *(undefined7 *)&(pFVar17->PriorityGiver).field_0x9 = uVar6;
            (pFVar13->ChildContext).Object = pFVar2;
            (pFVar13->ChildContext).SharedReferenceCount.ReferenceController = pTVar3;
            (pFVar13->PriorityGiver)._padding_ = lVar4;
            (pFVar13->PriorityGiver).TypeIndex = uVar7;
            *(undefined7 *)&(pFVar13->PriorityGiver).field_0x9 = uVar8;
            pFVar17 = pFVar18;
            if (pFVar15 == pFVar16 + iVar11) break;
            pFVar13 = pFVar15;
            if (pFVar18 == pFVar14) {
              pFVar14 = pFVar15;
            }
          }
          pFVar13 = pFVar14;
        } while (pFVar18 != pFVar14);
      }
      local_68 = local_68 + 1 + iVar9;
      param_2 = param_2 + iVar9;
    } while (local_68 < param_2);
  }
  return;
}

// Merge<UE::Cameras::FContextDataTableDebugBlock::FEntryDebugInfo,FIdentityFunctor,TDereferenceWrapper<UE::Cameras::FContextDataTableDebugBlock::FEntryDebugInfo,`UE::Cameras::FContextDataTableDebugBlock::Initialize'::__l2::<lambda_1>_>_> @ 14d586b00

void __cdecl
AlgoImpl::
Merge<UE::Cameras::FContextDataTableDebugBlock::FEntryDebugInfo,FIdentityFunctor,TDereferenceWrapper<UE::Cameras::FContextDataTableDebugBlock::FEntryDebugInfo,_UE::Cameras::FContextDataTableDebugBlock::Initialize_::__l2::<lambda_1>_>_>
          (FEntryDebugInfo *param_1,int param_2,int param_3,FIdentityFunctor param_4,
          TDereferenceWrapper<UE::Cameras::FContextDataTableDebugBlock::FEntryDebugInfo,_protected:_void___cdecl_UE::Cameras::FContextDataTableDebugBlock::Initialize(UE::Cameras::FCameraContextDataTable_const_&)_::_2_::<lambda_1>_>
          param_5)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FName FVar3;
  FScriptContainerElement *pFVar4;
  FName FVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined6 uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  bool bVar15;
  undefined6 uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  wchar_t *pwVar22;
  wchar_t *pwVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  FEntryDebugInfo *pFVar27;
  FEntryDebugInfo *pFVar28;
  FEntryDebugInfo *pFVar29;
  FEntryDebugInfo *pFVar30;
  FEntryDebugInfo *pFVar32;
  int local_48;
  FEntryDebugInfo *pFVar31;
  
  if (0 < param_2) {
    local_48 = 0;
    do {
      if (param_3 <= param_2) {
        return;
      }
      lVar20 = (longlong)param_2;
      iVar26 = 0;
      if (0 < param_2 - local_48) {
        iVar19 = param_1[lVar20].Name.Data.ArrayNum;
        uVar24 = param_2 - local_48;
        do {
          iVar18 = (uVar24 >> 1) + iVar26;
          lVar21 = (longlong)iVar18 + (longlong)local_48;
          if (param_1[lVar21].Name.Data.ArrayNum == 0) {
            pwVar23 = L"";
          }
          else {
            pwVar23 = (wchar_t *)param_1[lVar21].Name.Data.AllocatorInstance.Data;
          }
          if (iVar19 == 0) {
            pwVar22 = L"";
          }
          else {
            pwVar22 = (wchar_t *)param_1[lVar20].Name.Data.AllocatorInstance.Data;
          }
          iVar17 = wcscmp(pwVar22,pwVar23);
          if (-1 < iVar17) {
            iVar26 = iVar18 + (uVar24 & 1);
          }
          uVar25 = uVar24 >> 1;
          uVar24 = uVar24 >> 1;
        } while (uVar25 != 0);
      }
      local_48 = local_48 + iVar26;
      if (param_2 <= local_48) {
        return;
      }
      iVar26 = 0;
      pFVar27 = param_1 + local_48;
      if (0 < param_3 - param_2) {
        iVar19 = (pFVar27->Name).Data.ArrayNum;
        uVar24 = param_3 - param_2;
        iVar26 = 0;
        do {
          uVar25 = uVar24 >> 1;
          lVar21 = (int)(uVar25 + iVar26) + lVar20;
          if (iVar19 == 0) {
            pwVar23 = L"";
          }
          else {
            pwVar23 = (wchar_t *)(pFVar27->Name).Data.AllocatorInstance.Data;
          }
          if (param_1[lVar21].Name.Data.ArrayNum == 0) {
            pwVar22 = L"";
          }
          else {
            pwVar22 = (wchar_t *)param_1[lVar21].Name.Data.AllocatorInstance.Data;
          }
          iVar18 = wcscmp(pwVar22,pwVar23);
          if (iVar18 < 0) {
            iVar26 = uVar25 + iVar26 + (uVar24 & 1);
          }
          uVar24 = uVar25;
        } while (uVar25 != 0);
      }
      iVar18 = (iVar26 - local_48) + param_2;
      iVar19 = param_2 - local_48;
      if ((iVar19 != 0) && (iVar19 < iVar18)) {
        pFVar28 = pFVar27;
        pFVar30 = pFVar27 + iVar19;
        pFVar31 = pFVar27 + iVar19;
        do {
          while( true ) {
            pFVar32 = pFVar30 + 1;
            pFVar29 = pFVar28 + 1;
            bVar14 = pFVar28->bWritten;
            bVar15 = pFVar28->bWrittenThisFrame;
            uVar16 = *(undefined6 *)&pFVar28->field_0x32;
            uVar6 = *(undefined4 *)&pFVar30->field_0x4;
            pFVar1 = (pFVar30->Name).Data.AllocatorInstance.Data;
            uVar24 = pFVar28->ID;
            uVar9 = *(undefined4 *)&pFVar28->field_0x4;
            pFVar2 = (pFVar28->Name).Data.AllocatorInstance.Data;
            iVar10 = (pFVar28->Name).Data.ArrayNum;
            iVar11 = (pFVar28->Name).Data.ArrayMax;
            FVar3 = pFVar28->TypeName;
            pFVar4 = (pFVar28->Value).Data.AllocatorInstance.Data;
            iVar12 = (pFVar28->Value).Data.ArrayNum;
            iVar13 = (pFVar28->Value).Data.ArrayMax;
            pFVar28->ID = pFVar30->ID;
            *(undefined4 *)&pFVar28->field_0x4 = uVar6;
            (pFVar28->Name).Data.AllocatorInstance.Data = pFVar1;
            iVar19 = (pFVar30->Name).Data.ArrayMax;
            FVar5 = pFVar30->TypeName;
            (pFVar28->Name).Data.ArrayNum = (pFVar30->Name).Data.ArrayNum;
            (pFVar28->Name).Data.ArrayMax = iVar19;
            pFVar28->TypeName = FVar5;
            iVar19 = (pFVar30->Value).Data.ArrayNum;
            iVar17 = (pFVar30->Value).Data.ArrayMax;
            (pFVar28->Value).Data.AllocatorInstance.Data =
                 (pFVar30->Value).Data.AllocatorInstance.Data;
            (pFVar28->Value).Data.ArrayNum = iVar19;
            (pFVar28->Value).Data.ArrayMax = iVar17;
            bVar7 = pFVar30->bWrittenThisFrame;
            uVar8 = *(undefined6 *)&pFVar30->field_0x32;
            pFVar28->bWritten = pFVar30->bWritten;
            pFVar28->bWrittenThisFrame = bVar7;
            *(undefined6 *)&pFVar28->field_0x32 = uVar8;
            pFVar30->ID = uVar24;
            *(undefined4 *)&pFVar30->field_0x4 = uVar9;
            (pFVar30->Name).Data.AllocatorInstance.Data = pFVar2;
            (pFVar30->Name).Data.ArrayNum = iVar10;
            (pFVar30->Name).Data.ArrayMax = iVar11;
            pFVar30->TypeName = FVar3;
            (pFVar30->Value).Data.AllocatorInstance.Data = pFVar4;
            (pFVar30->Value).Data.ArrayNum = iVar12;
            (pFVar30->Value).Data.ArrayMax = iVar13;
            pFVar30->bWritten = bVar14;
            pFVar30->bWrittenThisFrame = bVar15;
            *(undefined6 *)&pFVar30->field_0x32 = uVar16;
            pFVar28 = pFVar29;
            if (pFVar32 == pFVar27 + iVar18) break;
            pFVar30 = pFVar32;
            if (pFVar29 == pFVar31) {
              pFVar31 = pFVar32;
            }
          }
          pFVar30 = pFVar31;
        } while (pFVar29 != pFVar31);
      }
      local_48 = local_48 + 1 + iVar26;
      param_2 = param_2 + iVar26;
    } while (local_48 < param_2);
  }
  return;
}

// Merge<UE::Cameras::FVariableTableDebugBlock::FEntryDebugInfo,FIdentityFunctor,TDereferenceWrapper<UE::Cameras::FVariableTableDebugBlock::FEntryDebugInfo,`UE::Cameras::FVariableTableDebugBlock::Initialize'::__l2::<lambda_1>_>_> @ 14d586d70

void __cdecl
AlgoImpl::
Merge<UE::Cameras::FVariableTableDebugBlock::FEntryDebugInfo,FIdentityFunctor,TDereferenceWrapper<UE::Cameras::FVariableTableDebugBlock::FEntryDebugInfo,_UE::Cameras::FVariableTableDebugBlock::Initialize_::__l2::<lambda_1>_>_>
          (FEntryDebugInfo *param_1,int param_2,int param_3,FIdentityFunctor param_4,
          TDereferenceWrapper<UE::Cameras::FVariableTableDebugBlock::FEntryDebugInfo,_protected:_void___cdecl_UE::Cameras::FVariableTableDebugBlock::Initialize(UE::Cameras::FCameraVariableTable_const_&)_::_2_::<lambda_1>_>
          param_5)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined4 uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  undefined4 uVar18;
  uint uVar19;
  longlong lVar20;
  int iVar21;
  wchar_t *pwVar22;
  int iVar23;
  wchar_t *pwVar24;
  uint uVar25;
  FEntryDebugInfo *pFVar26;
  int iVar27;
  uint uVar28;
  FEntryDebugInfo *pFVar29;
  FEntryDebugInfo *pFVar30;
  FEntryDebugInfo *pFVar31;
  FEntryDebugInfo *pFVar33;
  int iVar34;
  FEntryDebugInfo *pFVar32;
  
  if (0 < param_2) {
    iVar34 = 0;
    do {
      if (param_3 <= param_2) {
        return;
      }
      iVar27 = 0;
      pFVar26 = param_1 + param_2;
      if (0 < param_2 - iVar34) {
        iVar21 = (pFVar26->Name).Data.ArrayNum;
        uVar25 = param_2 - iVar34;
        do {
          iVar23 = (uVar25 >> 1) + iVar27;
          pFVar29 = param_1 + (longlong)iVar23 + (longlong)iVar34;
          if ((iVar21 < 2) && ((pFVar29->Name).Data.ArrayNum < 2)) {
            uVar28 = (uint)(pFVar26->ID < pFVar29->ID);
          }
          else {
            if ((pFVar29->Name).Data.ArrayNum == 0) {
              pwVar24 = L"";
            }
            else {
              pwVar24 = (wchar_t *)(pFVar29->Name).Data.AllocatorInstance.Data;
            }
            if (iVar21 == 0) {
              pwVar22 = L"";
            }
            else {
              pwVar22 = (wchar_t *)(pFVar26->Name).Data.AllocatorInstance.Data;
            }
            uVar28 = wcscmp(pwVar22,pwVar24);
            uVar28 = uVar28 >> 0x1f;
          }
          if (uVar28 == 0) {
            iVar27 = iVar23 + (uVar25 & 1);
          }
          uVar28 = uVar25 >> 1;
          uVar25 = uVar25 >> 1;
        } while (uVar28 != 0);
      }
      iVar34 = iVar34 + iVar27;
      if (param_2 <= iVar34) {
        return;
      }
      iVar27 = 0;
      pFVar26 = param_1 + iVar34;
      if (0 < param_3 - param_2) {
        uVar25 = param_3 - param_2;
        do {
          uVar28 = uVar25 >> 1;
          lVar20 = (longlong)(int)(uVar28 + iVar27) + (longlong)param_2;
          iVar21 = param_1[lVar20].Name.Data.ArrayNum;
          if ((iVar21 < 2) && ((pFVar26->Name).Data.ArrayNum < 2)) {
            uVar19 = (uint)(param_1[lVar20].ID < pFVar26->ID);
          }
          else {
            if ((pFVar26->Name).Data.ArrayNum == 0) {
              pwVar24 = L"";
            }
            else {
              pwVar24 = (wchar_t *)(pFVar26->Name).Data.AllocatorInstance.Data;
            }
            if (iVar21 == 0) {
              pwVar22 = L"";
            }
            else {
              pwVar22 = (wchar_t *)param_1[lVar20].Name.Data.AllocatorInstance.Data;
            }
            uVar19 = wcscmp(pwVar22,pwVar24);
            uVar19 = uVar19 >> 0x1f;
          }
          if (uVar19 != 0) {
            iVar27 = uVar28 + iVar27 + (uVar25 & 1);
          }
          uVar25 = uVar28;
        } while (uVar28 != 0);
      }
      iVar21 = (iVar27 - iVar34) + param_2;
      pFVar26 = param_1 + iVar34;
      iVar23 = param_2 - iVar34;
      if ((iVar23 != 0) && (iVar23 < iVar21)) {
        pFVar29 = pFVar26;
        pFVar31 = pFVar26 + iVar23;
        pFVar32 = pFVar26 + iVar23;
        do {
          while( true ) {
            pFVar33 = pFVar31 + 1;
            pFVar30 = pFVar29 + 1;
            uVar4 = *(undefined4 *)&pFVar31->field_0x4;
            pFVar1 = (pFVar31->Name).Data.AllocatorInstance.Data;
            uVar25 = pFVar29->ID;
            uVar9 = *(undefined4 *)&pFVar29->field_0x4;
            pFVar2 = (pFVar29->Name).Data.AllocatorInstance.Data;
            iVar10 = (pFVar29->Name).Data.ArrayNum;
            iVar11 = (pFVar29->Name).Data.ArrayMax;
            pFVar3 = (pFVar29->Value).Data.AllocatorInstance.Data;
            iVar12 = (pFVar29->Value).Data.ArrayNum;
            iVar13 = (pFVar29->Value).Data.ArrayMax;
            bVar14 = pFVar29->bIsInput;
            bVar15 = pFVar29->bIsPrivate;
            bVar16 = pFVar29->bWritten;
            bVar17 = pFVar29->bWrittenThisFrame;
            uVar18 = *(undefined4 *)&pFVar29->field_0x2c;
            pFVar29->ID = pFVar31->ID;
            *(undefined4 *)&pFVar29->field_0x4 = uVar4;
            (pFVar29->Name).Data.AllocatorInstance.Data = pFVar1;
            iVar23 = (pFVar31->Name).Data.ArrayMax;
            pFVar1 = (pFVar31->Value).Data.AllocatorInstance.Data;
            (pFVar29->Name).Data.ArrayNum = (pFVar31->Name).Data.ArrayNum;
            (pFVar29->Name).Data.ArrayMax = iVar23;
            (pFVar29->Value).Data.AllocatorInstance.Data = pFVar1;
            iVar23 = (pFVar31->Value).Data.ArrayMax;
            bVar5 = pFVar31->bIsInput;
            bVar6 = pFVar31->bIsPrivate;
            bVar7 = pFVar31->bWritten;
            bVar8 = pFVar31->bWrittenThisFrame;
            uVar4 = *(undefined4 *)&pFVar31->field_0x2c;
            (pFVar29->Value).Data.ArrayNum = (pFVar31->Value).Data.ArrayNum;
            (pFVar29->Value).Data.ArrayMax = iVar23;
            pFVar29->bIsInput = bVar5;
            pFVar29->bIsPrivate = bVar6;
            pFVar29->bWritten = bVar7;
            pFVar29->bWrittenThisFrame = bVar8;
            *(undefined4 *)&pFVar29->field_0x2c = uVar4;
            pFVar31->ID = uVar25;
            *(undefined4 *)&pFVar31->field_0x4 = uVar9;
            (pFVar31->Name).Data.AllocatorInstance.Data = pFVar2;
            (pFVar31->Name).Data.ArrayNum = iVar10;
            (pFVar31->Name).Data.ArrayMax = iVar11;
            (pFVar31->Value).Data.AllocatorInstance.Data = pFVar3;
            (pFVar31->Value).Data.ArrayNum = iVar12;
            (pFVar31->Value).Data.ArrayMax = iVar13;
            pFVar31->bIsInput = bVar14;
            pFVar31->bIsPrivate = bVar15;
            pFVar31->bWritten = bVar16;
            pFVar31->bWrittenThisFrame = bVar17;
            *(undefined4 *)&pFVar31->field_0x2c = uVar18;
            pFVar29 = pFVar30;
            if (pFVar33 == pFVar26 + iVar21) break;
            pFVar31 = pFVar33;
            if (pFVar30 == pFVar32) {
              pFVar32 = pFVar33;
            }
          }
          pFVar31 = pFVar32;
        } while (pFVar30 != pFVar32);
      }
      param_2 = param_2 + iVar27;
      iVar34 = iVar34 + 1 + iVar27;
    } while (iVar34 < param_2);
  }
  return;
}

// NewObject<UBlendStackRootCameraNode> @ 14d5870f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UBlendStackRootCameraNode * __cdecl
NewObject<UBlendStackRootCameraNode>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UBlendStackRootCameraNode *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UBlendStackRootCameraNode_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UBlendStackRootCameraNode *)
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

// NewObject<UBlueprintCameraDirectorEvaluator> @ 14d5871e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UBlueprintCameraDirectorEvaluator * __cdecl
NewObject<UBlueprintCameraDirectorEvaluator>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UBlueprintCameraDirectorEvaluator *pUVar2;
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
  pUVar1 = UBlueprintCameraDirectorEvaluator::StaticClass();
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
  pUVar2 = (UBlueprintCameraDirectorEvaluator *)
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

// NewObject<UCalcCameraActorCameraNode> @ 14d5872e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UCalcCameraActorCameraNode * __cdecl
NewObject<UCalcCameraActorCameraNode>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UCalcCameraActorCameraNode *pUVar2;
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
  pUVar1 = UCalcCameraActorCameraNode::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UCalcCameraActorCameraNode *)
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

// NewObject<UCameraAsset> @ 14d5873d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UCameraAsset * __cdecl
NewObject<UCameraAsset>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UCameraAsset *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UCameraAsset_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UCameraAsset *)
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

// NewObject<UCameraComponentCameraNode> @ 14d5874c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UCameraComponentCameraNode * __cdecl
NewObject<UCameraComponentCameraNode>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UCameraComponentCameraNode *pUVar2;
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
  pUVar1 = UCameraComponentCameraNode::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UCameraComponentCameraNode *)
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

// NewObject<UCameraRigAsset> @ 14d5875b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UCameraRigAsset * __cdecl NewObject<UCameraRigAsset>(UObject *param_1)

{
  UClass *pUVar1;
  UCameraRigAsset *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UCameraRigAsset::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UCameraRigAsset *)
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

// NewObject<UCameraRigAsset> @ 14d587650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UCameraRigAsset * __cdecl
NewObject<UCameraRigAsset>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UCameraRigAsset *pUVar2;
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
  pUVar1 = UCameraRigAsset::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UCameraRigAsset *)
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

// NewObject<UCombinedCameraRigsCameraNode> @ 14d587740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UCombinedCameraRigsCameraNode * __cdecl NewObject<UCombinedCameraRigsCameraNode>(UObject *param_1)

{
  UClass *pUVar1;
  UCombinedCameraRigsCameraNode *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UCombinedCameraRigsCameraNode::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UCombinedCameraRigsCameraNode *)
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

// NewObject<UDefaultRootCameraNode> @ 14d5877e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDefaultRootCameraNode * __cdecl
NewObject<UDefaultRootCameraNode>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UDefaultRootCameraNode *pUVar2;
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
  pUVar1 = UDefaultRootCameraNode::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UDefaultRootCameraNode *)
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

// NewObject<UPopBlendCameraNode> @ 14d5878d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPopBlendCameraNode * __cdecl
NewObject<UPopBlendCameraNode>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UPopBlendCameraNode *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UPopBlendCameraNode_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UPopBlendCameraNode *)
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

// NewObject<USingleCameraDirector> @ 14d5879c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USingleCameraDirector * __cdecl
NewObject<USingleCameraDirector>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  USingleCameraDirector *pUVar2;
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
  pUVar1 = USingleCameraDirector::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (USingleCameraDirector *)
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

// RotateInternal<UE::Cameras::FPriorityQueueCameraDirectorEvaluator::FEntry> @ 14d588430

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

int __cdecl
AlgoImpl::RotateInternal<UE::Cameras::FPriorityQueueCameraDirectorEvaluator::FEntry>
          (FEntry *param_1,int param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  FCameraEvaluationContext *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  uchar uVar5;
  undefined7 uVar6;
  uchar uVar7;
  undefined7 uVar8;
  FEntry *pFVar9;
  FEntry *pFVar11;
  FEntry *pFVar12;
  FEntry *pFVar13;
  FEntry *pFVar10;
  
  if (param_3 != 0) {
    if (param_2 <= param_3) {
      return 0;
    }
    pFVar9 = param_1 + param_3;
    pFVar12 = param_1;
    pFVar10 = param_1 + param_3;
    do {
      while( true ) {
        pFVar11 = pFVar9 + 1;
        pFVar13 = pFVar12 + 1;
        pTVar1 = (pFVar9->ChildContext).SharedReferenceCount.ReferenceController;
        pFVar2 = (pFVar12->ChildContext).Object;
        pTVar3 = (pFVar12->ChildContext).SharedReferenceCount.ReferenceController;
        lVar4 = (pFVar12->PriorityGiver)._padding_;
        uVar7 = (pFVar12->PriorityGiver).TypeIndex;
        uVar8 = *(undefined7 *)&(pFVar12->PriorityGiver).field_0x9;
        (pFVar12->ChildContext).Object = (pFVar9->ChildContext).Object;
        (pFVar12->ChildContext).SharedReferenceCount.ReferenceController = pTVar1;
        uVar5 = (pFVar9->PriorityGiver).TypeIndex;
        uVar6 = *(undefined7 *)&(pFVar9->PriorityGiver).field_0x9;
        (pFVar12->PriorityGiver)._padding_ = (pFVar9->PriorityGiver)._padding_;
        (pFVar12->PriorityGiver).TypeIndex = uVar5;
        *(undefined7 *)&(pFVar12->PriorityGiver).field_0x9 = uVar6;
        (pFVar9->ChildContext).Object = pFVar2;
        (pFVar9->ChildContext).SharedReferenceCount.ReferenceController = pTVar3;
        (pFVar9->PriorityGiver)._padding_ = lVar4;
        (pFVar9->PriorityGiver).TypeIndex = uVar7;
        *(undefined7 *)&(pFVar9->PriorityGiver).field_0x9 = uVar8;
        pFVar12 = pFVar13;
        if (pFVar11 == param_1 + param_2) break;
        pFVar9 = pFVar11;
        if (pFVar13 == pFVar10) {
          pFVar10 = pFVar11;
        }
      }
      pFVar9 = pFVar10;
    } while (pFVar13 != pFVar10);
    param_2 = param_2 - param_3;
  }
  return param_2;
}

// RotateInternal<UE::Cameras::FContextDataTableDebugBlock::FEntryDebugInfo> @ 14d5884d0

int __cdecl
AlgoImpl::RotateInternal<UE::Cameras::FContextDataTableDebugBlock::FEntryDebugInfo>
          (FEntryDebugInfo *param_1,int param_2,int param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FName FVar3;
  FScriptContainerElement *pFVar4;
  FName FVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  undefined6 uVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  bool bVar17;
  bool bVar18;
  undefined6 uVar19;
  FEntryDebugInfo *pFVar20;
  FEntryDebugInfo *pFVar22;
  FEntryDebugInfo *pFVar23;
  FEntryDebugInfo *pFVar24;
  FEntryDebugInfo *pFVar21;
  
  if (param_3 != 0) {
    if (param_2 <= param_3) {
      return 0;
    }
    pFVar20 = param_1 + param_3;
    pFVar23 = param_1;
    pFVar21 = param_1 + param_3;
    do {
      while( true ) {
        pFVar22 = pFVar20 + 1;
        pFVar24 = pFVar23 + 1;
        bVar17 = pFVar23->bWritten;
        bVar18 = pFVar23->bWrittenThisFrame;
        uVar19 = *(undefined6 *)&pFVar23->field_0x32;
        uVar6 = *(undefined4 *)&pFVar20->field_0x4;
        pFVar1 = (pFVar20->Name).Data.AllocatorInstance.Data;
        uVar11 = pFVar23->ID;
        uVar12 = *(undefined4 *)&pFVar23->field_0x4;
        pFVar2 = (pFVar23->Name).Data.AllocatorInstance.Data;
        iVar13 = (pFVar23->Name).Data.ArrayNum;
        iVar14 = (pFVar23->Name).Data.ArrayMax;
        FVar3 = pFVar23->TypeName;
        pFVar4 = (pFVar23->Value).Data.AllocatorInstance.Data;
        iVar15 = (pFVar23->Value).Data.ArrayNum;
        iVar16 = (pFVar23->Value).Data.ArrayMax;
        pFVar23->ID = pFVar20->ID;
        *(undefined4 *)&pFVar23->field_0x4 = uVar6;
        (pFVar23->Name).Data.AllocatorInstance.Data = pFVar1;
        iVar7 = (pFVar20->Name).Data.ArrayMax;
        FVar5 = pFVar20->TypeName;
        (pFVar23->Name).Data.ArrayNum = (pFVar20->Name).Data.ArrayNum;
        (pFVar23->Name).Data.ArrayMax = iVar7;
        pFVar23->TypeName = FVar5;
        iVar7 = (pFVar20->Value).Data.ArrayNum;
        iVar8 = (pFVar20->Value).Data.ArrayMax;
        (pFVar23->Value).Data.AllocatorInstance.Data = (pFVar20->Value).Data.AllocatorInstance.Data;
        (pFVar23->Value).Data.ArrayNum = iVar7;
        (pFVar23->Value).Data.ArrayMax = iVar8;
        bVar9 = pFVar20->bWrittenThisFrame;
        uVar10 = *(undefined6 *)&pFVar20->field_0x32;
        pFVar23->bWritten = pFVar20->bWritten;
        pFVar23->bWrittenThisFrame = bVar9;
        *(undefined6 *)&pFVar23->field_0x32 = uVar10;
        pFVar20->ID = uVar11;
        *(undefined4 *)&pFVar20->field_0x4 = uVar12;
        (pFVar20->Name).Data.AllocatorInstance.Data = pFVar2;
        (pFVar20->Name).Data.ArrayNum = iVar13;
        (pFVar20->Name).Data.ArrayMax = iVar14;
        pFVar20->TypeName = FVar3;
        (pFVar20->Value).Data.AllocatorInstance.Data = pFVar4;
        (pFVar20->Value).Data.ArrayNum = iVar15;
        (pFVar20->Value).Data.ArrayMax = iVar16;
        pFVar20->bWritten = bVar17;
        pFVar20->bWrittenThisFrame = bVar18;
        *(undefined6 *)&pFVar20->field_0x32 = uVar19;
        pFVar23 = pFVar24;
        if (pFVar22 == param_1 + param_2) break;
        pFVar20 = pFVar22;
        if (pFVar24 == pFVar21) {
          pFVar21 = pFVar22;
        }
      }
      pFVar20 = pFVar21;
    } while (pFVar24 != pFVar21);
    param_2 = param_2 - param_3;
  }
  return param_2;
}

// RotateInternal<UE::Cameras::FVariableTableDebugBlock::FEntryDebugInfo> @ 14d588590

int __cdecl
AlgoImpl::RotateInternal<UE::Cameras::FVariableTableDebugBlock::FEntryDebugInfo>
          (FEntryDebugInfo *param_1,int param_2,int param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined4 uVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  undefined4 uVar20;
  FEntryDebugInfo *pFVar21;
  FEntryDebugInfo *pFVar23;
  FEntryDebugInfo *pFVar24;
  FEntryDebugInfo *pFVar25;
  FEntryDebugInfo *pFVar22;
  
  if (param_3 != 0) {
    if (param_2 <= param_3) {
      return 0;
    }
    pFVar21 = param_1 + param_3;
    pFVar24 = param_1;
    pFVar22 = param_1 + param_3;
    do {
      while( true ) {
        pFVar23 = pFVar21 + 1;
        pFVar25 = pFVar24 + 1;
        uVar4 = *(undefined4 *)&pFVar21->field_0x4;
        pFVar1 = (pFVar21->Name).Data.AllocatorInstance.Data;
        uVar10 = pFVar24->ID;
        uVar11 = *(undefined4 *)&pFVar24->field_0x4;
        pFVar2 = (pFVar24->Name).Data.AllocatorInstance.Data;
        iVar12 = (pFVar24->Name).Data.ArrayNum;
        iVar13 = (pFVar24->Name).Data.ArrayMax;
        pFVar3 = (pFVar24->Value).Data.AllocatorInstance.Data;
        iVar14 = (pFVar24->Value).Data.ArrayNum;
        iVar15 = (pFVar24->Value).Data.ArrayMax;
        bVar16 = pFVar24->bIsInput;
        bVar17 = pFVar24->bIsPrivate;
        bVar18 = pFVar24->bWritten;
        bVar19 = pFVar24->bWrittenThisFrame;
        uVar20 = *(undefined4 *)&pFVar24->field_0x2c;
        pFVar24->ID = pFVar21->ID;
        *(undefined4 *)&pFVar24->field_0x4 = uVar4;
        (pFVar24->Name).Data.AllocatorInstance.Data = pFVar1;
        iVar5 = (pFVar21->Name).Data.ArrayMax;
        pFVar1 = (pFVar21->Value).Data.AllocatorInstance.Data;
        (pFVar24->Name).Data.ArrayNum = (pFVar21->Name).Data.ArrayNum;
        (pFVar24->Name).Data.ArrayMax = iVar5;
        (pFVar24->Value).Data.AllocatorInstance.Data = pFVar1;
        iVar5 = (pFVar21->Value).Data.ArrayMax;
        bVar6 = pFVar21->bIsInput;
        bVar7 = pFVar21->bIsPrivate;
        bVar8 = pFVar21->bWritten;
        bVar9 = pFVar21->bWrittenThisFrame;
        uVar4 = *(undefined4 *)&pFVar21->field_0x2c;
        (pFVar24->Value).Data.ArrayNum = (pFVar21->Value).Data.ArrayNum;
        (pFVar24->Value).Data.ArrayMax = iVar5;
        pFVar24->bIsInput = bVar6;
        pFVar24->bIsPrivate = bVar7;
        pFVar24->bWritten = bVar8;
        pFVar24->bWrittenThisFrame = bVar9;
        *(undefined4 *)&pFVar24->field_0x2c = uVar4;
        pFVar21->ID = uVar10;
        *(undefined4 *)&pFVar21->field_0x4 = uVar11;
        (pFVar21->Name).Data.AllocatorInstance.Data = pFVar2;
        (pFVar21->Name).Data.ArrayNum = iVar12;
        (pFVar21->Name).Data.ArrayMax = iVar13;
        (pFVar21->Value).Data.AllocatorInstance.Data = pFVar3;
        (pFVar21->Value).Data.ArrayNum = iVar14;
        (pFVar21->Value).Data.ArrayMax = iVar15;
        pFVar21->bIsInput = bVar16;
        pFVar21->bIsPrivate = bVar17;
        pFVar21->bWritten = bVar18;
        pFVar21->bWrittenThisFrame = bVar19;
        *(undefined4 *)&pFVar21->field_0x2c = uVar20;
        pFVar24 = pFVar25;
        if (pFVar23 == param_1 + param_2) break;
        pFVar21 = pFVar23;
        if (pFVar25 == pFVar22) {
          pFVar22 = pFVar23;
        }
      }
      pFVar21 = pFVar22;
    } while (pFVar25 != pFVar22);
    param_2 = param_2 - param_3;
  }
  return param_2;
}

// StableSortInternal<UE::Cameras::FPriorityQueueCameraDirectorEvaluator::FEntry,int_(__cdecl_UE::Cameras::FPriorityQueueCameraDirectorEvaluator::FEntry::*)(void)const_,TLess<void>_> @ 14d58a730

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
AlgoImpl::
StableSortInternal<UE::Cameras::FPriorityQueueCameraDirectorEvaluator::FEntry,int_(__cdecl_UE::Cameras::FPriorityQueueCameraDirectorEvaluator::FEntry::*)(void)const_,TLess<void>_>
          (FEntry *param_1,int param_2,pmf_93107371 param_3,TLess<void> param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  FCameraEvaluationContext *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  uchar uVar5;
  undefined7 uVar6;
  uchar uVar7;
  undefined7 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  FEntry *pFVar13;
  int iVar14;
  FEntry *pFVar15;
  
  iVar11 = 0;
  if (0 < param_2) {
    pFVar15 = param_1 + 1;
    pFVar13 = param_1;
    do {
      if (iVar11 + 1 < param_2) {
        iVar9 = (*(code *)param_3)(pFVar13);
        iVar10 = (*(code *)param_3)(pFVar15);
        if (iVar10 < iVar9) {
          pTVar1 = pFVar13[1].ChildContext.SharedReferenceCount.ReferenceController;
          pFVar2 = (pFVar13->ChildContext).Object;
          pTVar3 = (pFVar13->ChildContext).SharedReferenceCount.ReferenceController;
          lVar4 = (pFVar13->PriorityGiver)._padding_;
          uVar7 = (pFVar13->PriorityGiver).TypeIndex;
          uVar8 = *(undefined7 *)&(pFVar13->PriorityGiver).field_0x9;
          (pFVar13->ChildContext).Object = pFVar13[1].ChildContext.Object;
          (pFVar13->ChildContext).SharedReferenceCount.ReferenceController = pTVar1;
          uVar5 = pFVar13[1].PriorityGiver.TypeIndex;
          uVar6 = *(undefined7 *)&pFVar13[1].PriorityGiver.field_0x9;
          (pFVar13->PriorityGiver)._padding_ = pFVar13[1].PriorityGiver._padding_;
          (pFVar13->PriorityGiver).TypeIndex = uVar5;
          *(undefined7 *)&(pFVar13->PriorityGiver).field_0x9 = uVar6;
          pFVar13[1].ChildContext.Object = pFVar2;
          pFVar13[1].ChildContext.SharedReferenceCount.ReferenceController = pTVar3;
          pFVar13[1].PriorityGiver._padding_ = lVar4;
          pFVar13[1].PriorityGiver.TypeIndex = uVar7;
          *(undefined7 *)&pFVar13[1].PriorityGiver.field_0x9 = uVar8;
        }
      }
      iVar11 = iVar11 + 2;
      pFVar15 = pFVar15 + 2;
      pFVar13 = pFVar13 + 2;
    } while (iVar11 < param_2);
  }
  iVar11 = 2;
  if (2 < param_2) {
    do {
      iVar9 = iVar11 * 2;
      iVar12 = 0;
      iVar10 = param_2;
      do {
        iVar14 = iVar10;
        if (iVar9 <= iVar10) {
          iVar14 = iVar9;
        }
        Merge<UE::Cameras::FPriorityQueueCameraDirectorEvaluator::FEntry,int_(__cdecl_UE::Cameras::FPriorityQueueCameraDirectorEvaluator::FEntry::*)(void)const_,TLess<void>_>
                  (param_1 + iVar12,iVar11,iVar14,param_3,param_4);
        iVar12 = iVar12 + iVar9;
        iVar10 = iVar10 + iVar11 * -2;
      } while (iVar12 < param_2);
      iVar11 = iVar9;
    } while (iVar9 < param_2);
  }
  return;
}

// StableSortInternal<UE::Cameras::FContextDataTableDebugBlock::FEntryDebugInfo,FIdentityFunctor,TDereferenceWrapper<UE::Cameras::FContextDataTableDebugBlock::FEntryDebugInfo,`UE::Cameras::FContextDataTableDebugBlock::Initialize'::__l2::<lambda_1>_>_> @ 14d58a850

void __cdecl
AlgoImpl::
StableSortInternal<UE::Cameras::FContextDataTableDebugBlock::FEntryDebugInfo,FIdentityFunctor,TDereferenceWrapper<UE::Cameras::FContextDataTableDebugBlock::FEntryDebugInfo,_UE::Cameras::FContextDataTableDebugBlock::Initialize_::__l2::<lambda_1>_>_>
          (FEntryDebugInfo *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<UE::Cameras::FContextDataTableDebugBlock::FEntryDebugInfo,_protected:_void___cdecl_UE::Cameras::FContextDataTableDebugBlock::Initialize(UE::Cameras::FCameraContextDataTable_const_&)_::_2_::<lambda_1>_>
          param_4)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  undefined8 uVar5;
  FName FVar6;
  FScriptContainerElement *pFVar7;
  undefined8 uVar8;
  int iVar9;
  wchar_t *_Str1;
  wchar_t *_Str2;
  int iVar10;
  int iVar11;
  int iVar12;
  FString *pFVar13;
  int iVar14;
  longlong lVar15;
  
  if (0 < param_2) {
    pFVar13 = &param_1[1].Name;
    iVar10 = 1;
    lVar15 = ((longlong)param_2 - 1U >> 1) + 1;
    do {
      if (iVar10 < param_2) {
        if (*(int *)(pFVar13 + -3) == 0) {
          _Str2 = L"";
        }
        else {
          _Str2 = *(wchar_t **)((longlong)(pFVar13 + -4) + 8);
        }
        if ((pFVar13->Data).ArrayNum == 0) {
          _Str1 = L"";
        }
        else {
          _Str1 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
        }
        iVar9 = wcscmp(_Str1,_Str2);
        if (iVar9 < 0) {
          pFVar2 = (pFVar13->Data).AllocatorInstance.Data;
          uVar3 = *(undefined8 *)(pFVar13 + -4);
          pFVar4 = *(FScriptContainerElement **)((longlong)(pFVar13 + -4) + 8);
          uVar5 = *(undefined8 *)(pFVar13 + -3);
          FVar6 = *(FName *)((longlong)(pFVar13 + -3) + 8);
          pFVar7 = *(FScriptContainerElement **)(pFVar13 + -2);
          uVar8 = *(undefined8 *)((longlong)(pFVar13 + -2) + 8);
          uVar1 = *(undefined8 *)(pFVar13 + -1);
          *(undefined8 *)(pFVar13 + -4) = *(undefined8 *)((longlong)(pFVar13 + -1) + 8);
          *(FScriptContainerElement **)((longlong)(pFVar13 + -4) + 8) = pFVar2;
          *(undefined8 *)(pFVar13 + -3) = *(undefined8 *)&(pFVar13->Data).ArrayNum;
          *(FName *)((longlong)(pFVar13 + -3) + 8) = *(FName *)(pFVar13 + 1);
          *(FScriptContainerElement **)(pFVar13 + -2) =
               (((FString *)((FName *)(pFVar13 + 1) + 1))->Data).AllocatorInstance.Data;
          *(undefined8 *)((longlong)(pFVar13 + -2) + 8) = *(undefined8 *)(pFVar13 + 2);
          *(undefined8 *)(pFVar13 + -1) = *(undefined8 *)((longlong)(pFVar13 + 2) + 8);
          *(undefined8 *)((longlong)(pFVar13 + -1) + 8) = uVar3;
          (pFVar13->Data).AllocatorInstance.Data = pFVar4;
          (pFVar13->Data).ArrayNum = (int)uVar5;
          (pFVar13->Data).ArrayMax = (int)((ulonglong)uVar5 >> 0x20);
          *(FName *)(pFVar13 + 1) = FVar6;
          (((FString *)((FName *)(pFVar13 + 1) + 1))->Data).AllocatorInstance.Data = pFVar7;
          *(undefined8 *)(pFVar13 + 2) = uVar8;
          *(undefined8 *)((longlong)(pFVar13 + 2) + 8) = uVar1;
        }
      }
      iVar10 = iVar10 + 2;
      pFVar13 = pFVar13 + 7;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
  }
  iVar10 = 2;
  if (2 < param_2) {
    do {
      iVar9 = iVar10 * 2;
      iVar11 = 0;
      iVar12 = param_2;
      do {
        iVar14 = iVar12;
        if (iVar9 <= iVar12) {
          iVar14 = iVar9;
        }
        Merge<UE::Cameras::FContextDataTableDebugBlock::FEntryDebugInfo,FIdentityFunctor,TDereferenceWrapper<UE::Cameras::FContextDataTableDebugBlock::FEntryDebugInfo,_UE::Cameras::FContextDataTableDebugBlock::Initialize_::__l2::<lambda_1>_>_>
                  (param_1 + iVar11,iVar10,iVar14,param_3,param_4);
        iVar11 = iVar11 + iVar9;
        iVar12 = iVar12 + iVar10 * -2;
      } while (iVar11 < param_2);
      iVar10 = iVar9;
    } while (iVar9 < param_2);
  }
  return;
}

// StableSortInternal<UE::Cameras::FVariableTableDebugBlock::FEntryDebugInfo,FIdentityFunctor,TDereferenceWrapper<UE::Cameras::FVariableTableDebugBlock::FEntryDebugInfo,`UE::Cameras::FVariableTableDebugBlock::Initialize'::__l2::<lambda_1>_>_> @ 14d58a9c0

void __cdecl
AlgoImpl::
StableSortInternal<UE::Cameras::FVariableTableDebugBlock::FEntryDebugInfo,FIdentityFunctor,TDereferenceWrapper<UE::Cameras::FVariableTableDebugBlock::FEntryDebugInfo,_UE::Cameras::FVariableTableDebugBlock::Initialize_::__l2::<lambda_1>_>_>
          (FEntryDebugInfo *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<UE::Cameras::FVariableTableDebugBlock::FEntryDebugInfo,_protected:_void___cdecl_UE::Cameras::FVariableTableDebugBlock::Initialize(UE::Cameras::FCameraVariableTable_const_&)_::_2_::<lambda_1>_>
          param_4)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  wchar_t *_Str1;
  wchar_t *_Str2;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  longlong lVar13;
  bool bVar14;
  
  if (0 < param_2) {
    piVar11 = &(param_1->Name).Data.ArrayNum;
    iVar8 = 1;
    lVar13 = ((longlong)param_2 - 1U >> 1) + 1;
    do {
      if (iVar8 < param_2) {
        if ((piVar11[0xc] < 2) && (*piVar11 < 2)) {
          bVar14 = (uint)piVar11[8] < (uint)piVar11[-4];
        }
        else {
          if (*piVar11 == 0) {
            _Str2 = L"";
          }
          else {
            _Str2 = (wchar_t *)
                    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)(piVar11 + -2))->
                    AllocatorInstance).Data;
          }
          if (piVar11[0xc] == 0) {
            _Str1 = L"";
          }
          else {
            _Str1 = *(wchar_t **)(piVar11 + 10);
          }
          iVar7 = wcscmp(_Str1,_Str2);
          bVar14 = SUB41((uint)iVar7 >> 0x1f,0);
        }
        if (bVar14 != false) {
          uVar1 = *(undefined8 *)(piVar11 + -4);
          pFVar2 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)(piVar11 + -2))->
                   AllocatorInstance).Data;
          uVar3 = *(undefined8 *)piVar11;
          uVar4 = *(undefined8 *)(piVar11 + 2);
          uVar5 = *(undefined8 *)(piVar11 + 4);
          uVar6 = *(undefined8 *)(piVar11 + 6);
          *(undefined8 *)(piVar11 + -4) = *(undefined8 *)(piVar11 + 8);
          (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)(piVar11 + -2))->AllocatorInstance).Data
               = *(FScriptContainerElement **)(piVar11 + 10);
          *(undefined8 *)piVar11 = *(undefined8 *)(piVar11 + 0xc);
          *(undefined8 *)(piVar11 + 2) = *(undefined8 *)(piVar11 + 0xe);
          *(undefined8 *)(piVar11 + 4) = *(undefined8 *)(piVar11 + 0x10);
          *(undefined8 *)(piVar11 + 6) = *(undefined8 *)(piVar11 + 0x12);
          *(undefined8 *)(piVar11 + 8) = uVar1;
          *(FScriptContainerElement **)(piVar11 + 10) = pFVar2;
          *(undefined8 *)(piVar11 + 0xc) = uVar3;
          *(undefined8 *)(piVar11 + 0xe) = uVar4;
          *(undefined8 *)(piVar11 + 0x10) = uVar5;
          *(undefined8 *)(piVar11 + 0x12) = uVar6;
        }
      }
      iVar8 = iVar8 + 2;
      piVar11 = piVar11 + 0x18;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  iVar8 = 2;
  if (2 < param_2) {
    do {
      iVar7 = iVar8 * 2;
      iVar10 = 0;
      iVar9 = param_2;
      do {
        iVar12 = iVar9;
        if (iVar7 <= iVar9) {
          iVar12 = iVar7;
        }
        Merge<UE::Cameras::FVariableTableDebugBlock::FEntryDebugInfo,FIdentityFunctor,TDereferenceWrapper<UE::Cameras::FVariableTableDebugBlock::FEntryDebugInfo,_UE::Cameras::FVariableTableDebugBlock::Initialize_::__l2::<lambda_1>_>_>
                  (param_1 + iVar10,iVar8,iVar12,param_3,param_4);
        iVar10 = iVar10 + iVar7;
        iVar9 = iVar9 + iVar8 * -2;
      } while (iVar10 < param_2);
      iVar8 = iVar7;
    } while (iVar7 < param_2);
  }
  return;
}

// StaticEnum<enum_ECameraRigInitialOrientation> @ 14d58ac40

UEnum * __cdecl StaticEnum<enum_ECameraRigInitialOrientation>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECameraRigInitialOrientation.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UEnum_ECameraRigInitialOrientation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GameplayCameras_ECameraRigInitialOrientation,
                       (UObject *)pUVar1,L"ECameraRigInitialOrientation");
  }
  return Z_Registration_Info_UEnum_ECameraRigInitialOrientation.OuterSingleton;
}

// StaticEnum<enum_ECameraVariableSetterBlendType> @ 14d58ac80

UEnum * __cdecl StaticEnum<enum_ECameraVariableSetterBlendType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECameraVariableSetterBlendType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UEnum_ECameraVariableSetterBlendType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_GameplayCameras_ECameraVariableSetterBlendType,
                       (UObject *)pUVar1,L"ECameraVariableSetterBlendType");
  }
  return Z_Registration_Info_UEnum_ECameraVariableSetterBlendType.OuterSingleton;
}

// UpperBoundInternal<UE::Cameras::FPersistentBlendStackCameraNodeEvaluator::FCameraRigEntryExtraInfo_const_,int,int,int_UE::Cameras::FPersistentBlendStackCameraNodeEvaluator::FCameraRigEntryExtraInfo::*,TLess<void>_> @ 14d58b9f0

int __cdecl
AlgoImpl::
UpperBoundInternal<UE::Cameras::FPersistentBlendStackCameraNodeEvaluator::FCameraRigEntryExtraInfo_const_,int,int,int_UE::Cameras::FPersistentBlendStackCameraNodeEvaluator::FCameraRigEntryExtraInfo::*,TLess<void>_>
          (FCameraRigEntryExtraInfo *param_1,int param_2,int *param_3,pdm_1e5328f8 param_4,
          TLess<void> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (*(int *)((longlong)&param_1[iVar1].StackOrder + (longlong)(int)param_4) <= *param_3) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// UpperBoundInternal<UE::Cameras::FPriorityQueueCameraDirectorEvaluator::FEntry,int,int,int_(__cdecl_UE::Cameras::FPriorityQueueCameraDirectorEvaluator::FEntry::*)(void)const_,TLess<void>_> @ 14d58ba50

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

int __cdecl
AlgoImpl::
UpperBoundInternal<UE::Cameras::FPriorityQueueCameraDirectorEvaluator::FEntry,int,int,int_(__cdecl_UE::Cameras::FPriorityQueueCameraDirectorEvaluator::FEntry::*)(void)const_,TLess<void>_>
          (FEntry *param_1,int param_2,int *param_3,pmf_93107371 param_4,TLess<void> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar4;
      iVar3 = (*(code *)param_4)(param_1 + iVar1);
      if (iVar3 <= *param_3) {
        iVar4 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar4;
}

// FAngleValue>_&> @ 14d58bad0

void __cdecl
Visit<`operator<<<UE::Cameras::FCameraDebugClock::FVectorValue,UE::Cameras::FCameraDebugClock::
FAngleValue>'::__l14::<lambda_1>,TVariant<UE::Cameras::FCameraDebugClock::FVectorValue,UE::Cameras::
FCameraDebugClock::FAngleValue>__>
          (<lambda_1> *param_1,
          TVariant<UE::Cameras::FCameraDebugClock::FVectorValue,UE::Cameras::FCameraDebugClock::FAngleValue>
          *param_2)

{
  FArchive *this;
  longlong *plVar1;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2->TypeIndex) {
  case '\0':
    UE::Cameras::operator<<(*(FArchive **)param_1,(FVectorValue *)param_2);
    return;
  }
  this = *(FArchive **)param_1;
  plVar1 = (longlong *)**(longlong **)&this->field_0x8;
  if (plVar1 + 1 <= (longlong *)(*(longlong **)&this->field_0x8)[1]) {
    param_2->_padding_ = *plVar1;
    **(longlong **)&this->field_0x8 = **(longlong **)&this->field_0x8 + 8;
    return;
  }
  if ((this->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014d58bb26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this + 0x188))(this,param_2,8);
    return;
  }
  FArchive::SerializeByteOrderSwapped(this,(ulong64 *)param_2);
  return;
}

// FAngleValue>_&> @ 14d58baf0

void __cdecl
UE::Core::Private::VisitApplyEncoded<1,0,`operator<<<UE::Cameras::FCameraDebugClock::FVectorValue,UE
::Cameras::FCameraDebugClock::FAngleValue>'::__l14::<lambda_1>,TVariant<UE::Cameras::
FCameraDebugClock::FVectorValue,UE::Cameras::FCameraDebugClock::FAngleValue>__>
          (<lambda_1> *param_1,
          TVariant<UE::Cameras::FCameraDebugClock::FVectorValue,UE::Cameras::FCameraDebugClock::FAngleValue>
          *param_2)

{
  FArchive *this;
  longlong *plVar1;
  
  this = *(FArchive **)param_1;
  plVar1 = (longlong *)**(longlong **)&this->field_0x8;
  if (plVar1 + 1 <= (longlong *)(*(longlong **)&this->field_0x8)[1]) {
    param_2->_padding_ = *plVar1;
    **(longlong **)&this->field_0x8 = **(longlong **)&this->field_0x8 + 8;
    return;
  }
  if ((this->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014d58bb26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this + 0x188))(this,param_2,8);
    return;
  }
  FArchive::SerializeByteOrderSwapped(this,(ulong64 *)param_2);
  return;
}

// FAngleValue>_&> @ 14d58bb40

void __cdecl
UE::Core::Private::VisitApplyEncoded<0,0,`operator<<<UE::Cameras::FCameraDebugClock::FVectorValue,UE
::Cameras::FCameraDebugClock::FAngleValue>'::__l14::<lambda_1>,TVariant<UE::Cameras::
FCameraDebugClock::FVectorValue,UE::Cameras::FCameraDebugClock::FAngleValue>__>
          (<lambda_1> *param_1,
          TVariant<UE::Cameras::FCameraDebugClock::FVectorValue,UE::Cameras::FCameraDebugClock::FAngleValue>
          *param_2)

{
  UE::Cameras::operator<<(*(FArchive **)param_1,(FVectorValue *)param_2);
  return;
}

// FAngleValue>_&> @ 14d58bb50

void __cdecl
UE::Core::Private::VisitImpl<`operator<<<UE::Cameras::FCameraDebugClock::FVectorValue,UE::Cameras::
FCameraDebugClock::FAngleValue>'::__l14::<lambda_1>,0,1,0,TVariant<UE::Cameras::FCameraDebugClock::
FVectorValue,UE::Cameras::FCameraDebugClock::FAngleValue>__>
          (ulong64 param_1,<lambda_1> *param_2,TIntegerSequence<unsigned___int64,0,1> *param_3,
          TIntegerSequence<unsigned___int64,0> *param_4,
          TVariant<UE::Cameras::FCameraDebugClock::FVectorValue,UE::Cameras::FCameraDebugClock::FAngleValue>
          *param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00014d58bb66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`class_FArchive&___ptr64___cdecl_operator<<<UE::Cameras::FCameraDebugClock::FVectorValue,UE::Cameras::FCameraDebugClock::FAngleValue>(FArchive&___ptr64,TVariant<UE::Cameras::FCameraDebugClock::FVectorValue,UE::Cameras::FCameraDebugClock::FAngleValue>&___ptr64)'::`14'::<lambda_1>,0,1,0,TVariant<struct_UE::Cameras::FCameraDebugClock::FVectorValue,struct_UE::Cameras::FCameraDebugClock::FAngleValue>&___ptr64>(unsigned___int64,`class_FArchive&___ptr64___cdecl_operator<<<UE::Cameras::FCameraDebugClock::FVectorValue,UE::Cameras::FCameraDebugClock::FAngleValue>(FArchive&___ptr64,TVariant<UE::Cameras::FCameraDebugClock::FVectorValue,UE::Cameras::FCameraDebugClock::FAngleValue>&___ptr64)'::`14'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<UE::Cameras::FCameraDebugClock::FVectorValue,UE::Cameras::FCameraDebugClock::FAngleValue>&___ptr64)'
    ::__l2::Invokers[param_1])(param_2,param_5);
  return;
}

// rbegin<UE::Cameras::TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*>_> @ 14d58bb70

/* WARNING: Removing unreachable block (ram,0x00014d58bbae) */
/* WARNING: Removing unreachable block (ram,0x00014d58bbd3) */
/* WARNING: Removing unreachable block (ram,0x00014d58bbee) */
/* WARNING: Removing unreachable block (ram,0x00014d58bc13) */

FReverseIterator * __cdecl
std::rbegin<UE::Cameras::TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*>_>
          (FReverseIterator *__return_storage_ptr__,
          TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *param_1)

{
  uchar uVar1;
  
  *(TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> **)__return_storage_ptr__ = param_1;
  uVar1 = (param_1->Storage).TypeIndex;
  if (uVar1 == '\0') {
    *(int *)&__return_storage_ptr__->field_0x8 = (int)(param_1->Storage)._padding_ + -1;
    return __return_storage_ptr__;
  }
  if (uVar1 == '\x01') {
    *(int *)&__return_storage_ptr__->field_0x8 = (int)(param_1->Storage)._padding_ + -1;
    return __return_storage_ptr__;
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = 0xffffffff;
  return __return_storage_ptr__;
}

// rbegin<UE::Cameras::TObjectChildrenView<TObjectPtr<UCameraNode>_>_> @ 14d58bc30

/* WARNING: Removing unreachable block (ram,0x00014d58bc6e) */
/* WARNING: Removing unreachable block (ram,0x00014d58bc93) */
/* WARNING: Removing unreachable block (ram,0x00014d58bcae) */
/* WARNING: Removing unreachable block (ram,0x00014d58bcd3) */

FReverseIterator * __cdecl
std::rbegin<UE::Cameras::TObjectChildrenView<TObjectPtr<UCameraNode>_>_>
          (FReverseIterator *__return_storage_ptr__,
          TObjectChildrenView<TObjectPtr<UCameraNode>_> *param_1)

{
  uchar uVar1;
  
  *(TObjectChildrenView<TObjectPtr<UCameraNode>_> **)__return_storage_ptr__ = param_1;
  uVar1 = (param_1->Storage).TypeIndex;
  if (uVar1 == '\0') {
    *(int *)&__return_storage_ptr__->field_0x8 = (int)(param_1->Storage)._padding_ + -1;
    return __return_storage_ptr__;
  }
  if (uVar1 == '\x01') {
    *(int *)&__return_storage_ptr__->field_0x8 = (int)(param_1->Storage)._padding_ + -1;
    return __return_storage_ptr__;
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = 0xffffffff;
  return __return_storage_ptr__;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d5939ec

/* [thunk]:public: virtual void * __ptr64 __cdecl UCalcCameraActorCameraNode::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UCalcCameraActorCameraNode::_vector_deleting_destructor__adjustor_40__
          (UCalcCameraActorCameraNode *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UCalcCameraActorCameraNode *)&this[-1].field_0x10,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d5939fc

/* [thunk]:public: virtual void * __ptr64 __cdecl UCameraComponentCameraNode::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UCameraComponentCameraNode::_vector_deleting_destructor__adjustor_40__
          (UCameraComponentCameraNode *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UCameraComponentCameraNode *)&this[-1].field_0x10,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d593a0c

/* [thunk]:public: virtual void * __ptr64 __cdecl UCameraObjectInterfaceBlendableParameter::`vector
   deleting destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UCameraObjectInterfaceBlendableParameter::_vector_deleting_destructor__adjustor_40__
          (UCameraObjectInterfaceBlendableParameter *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UCameraObjectInterfaceBlendableParameter *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d593a1c

/* [thunk]:public: virtual void * __ptr64 __cdecl UCameraObjectInterfaceDataParameter::`vector
   deleting destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UCameraObjectInterfaceDataParameter::_vector_deleting_destructor__adjustor_40__
          (UCameraObjectInterfaceDataParameter *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UCameraObjectInterfaceDataParameter *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d593a2c

/* [thunk]:public: virtual void * __ptr64 __cdecl UCameraObjectInterfaceParameterBase::`vector
   deleting destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UCameraObjectInterfaceParameterBase::_vector_deleting_destructor__adjustor_40__
          (UCameraObjectInterfaceParameterBase *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UCameraObjectInterfaceParameterBase *)
                      &this[-1].InterfaceParameterName.Data.ArrayNum,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{168}' @ 14d593a3c

/* [thunk]:public: virtual void * __ptr64 __cdecl UCameraRigAsset::`vector deleting
   destructor'`adjustor{168}' (unsigned int) __ptr64 */

void * __thiscall
UCameraRigAsset::_vector_deleting_destructor__adjustor_168__(UCameraRigAsset *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UCameraRigAsset *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{176}' @ 14d593a50

/* [thunk]:public: virtual void * __ptr64 __cdecl UCameraRigAsset::`vector deleting
   destructor'`adjustor{176}' (unsigned int) __ptr64 */

void * __thiscall
UCameraRigAsset::_vector_deleting_destructor__adjustor_176__(UCameraRigAsset *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UCameraRigAsset *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{184}' @ 14d593a64

/* [thunk]:public: virtual void * __ptr64 __cdecl UCameraRigAsset::`vector deleting
   destructor'`adjustor{184}' (unsigned int) __ptr64 */

void * __thiscall
UCameraRigAsset::_vector_deleting_destructor__adjustor_184__(UCameraRigAsset *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UCameraRigAsset *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{192}' @ 14d593a78

/* [thunk]:public: virtual void * __ptr64 __cdecl UCameraRigAsset::`vector deleting
   destructor'`adjustor{192}' (unsigned int) __ptr64 */

void * __thiscall
UCameraRigAsset::_vector_deleting_destructor__adjustor_192__(UCameraRigAsset *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UCameraRigAsset *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d593a8c

/* [thunk]:public: virtual void * __ptr64 __cdecl UCameraRigTransition::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UCameraRigTransition::_vector_deleting_destructor__adjustor_40__
          (UCameraRigTransition *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UCameraRigTransition *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d593a9c

/* [thunk]:public: virtual void * __ptr64 __cdecl UCameraRigTransitionCondition::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UCameraRigTransitionCondition::_vector_deleting_destructor__adjustor_40__
          (UCameraRigTransitionCondition *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UCameraRigTransitionCondition *)&this[-1].field_0x8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{168}' @ 14d593aac

/* [thunk]:public: virtual void * __ptr64 __cdecl UCameraShakeAsset::`vector deleting
   destructor'`adjustor{168}' (unsigned int) __ptr64 */

void * __thiscall
UCameraShakeAsset::_vector_deleting_destructor__adjustor_168__(UCameraShakeAsset *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UCameraShakeAsset *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{176}' @ 14d593ac0

/* [thunk]:public: virtual void * __ptr64 __cdecl UCameraShakeAsset::`vector deleting
   destructor'`adjustor{176}' (unsigned int) __ptr64 */

void * __thiscall
UCameraShakeAsset::_vector_deleting_destructor__adjustor_176__(UCameraShakeAsset *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UCameraShakeAsset *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{184}' @ 14d593ad4

/* [thunk]:public: virtual void * __ptr64 __cdecl UCameraShakeAsset::`vector deleting
   destructor'`adjustor{184}' (unsigned int) __ptr64 */

void * __thiscall
UCameraShakeAsset::_vector_deleting_destructor__adjustor_184__(UCameraShakeAsset *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UCameraShakeAsset *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d593ae8

/* [thunk]:public: virtual void * __ptr64 __cdecl UCombinedCameraRigsCameraNode::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UCombinedCameraRigsCameraNode::_vector_deleting_destructor__adjustor_40__
          (UCombinedCameraRigsCameraNode *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UCombinedCameraRigsCameraNode *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d593af8

/* [thunk]:public: virtual void * __ptr64 __cdecl UDefaultRootCameraNode::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UDefaultRootCameraNode::_vector_deleting_destructor__adjustor_40__
          (UDefaultRootCameraNode *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UDefaultRootCameraNode *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d593b08

/* [thunk]:public: virtual void * __ptr64 __cdecl UObjectTreeGraphComment::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UObjectTreeGraphComment::_vector_deleting_destructor__adjustor_40__
          (UObjectTreeGraphComment *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UObjectTreeGraphComment *)&this[-1].field_0x8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d593b18

/* [thunk]:public: virtual void * __ptr64 __cdecl URootCameraNode::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
URootCameraNode::_vector_deleting_destructor__adjustor_40__(URootCameraNode *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((URootCameraNode *)&this[-1].field_0x10,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d593b28

/* [thunk]:public: virtual void * __ptr64 __cdecl UShakeCameraNode::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UShakeCameraNode::_vector_deleting_destructor__adjustor_40__(UShakeCameraNode *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UShakeCameraNode *)&this[-1].field_0x10,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14d593b40

void * __thiscall
IBaseDelegateInstance<void___cdecl(UE::Cameras::FBlendStackCameraRigEvent_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UE::Cameras::FBlendStackCameraRigEvent_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d593b70

void * __thiscall
IBaseDelegateInstance<bool___cdecl(FStateTreeExecutionContext_const_&,UStateTree_const_*,TArrayView<FStateTreeExternalDataDesc_const_,int>,TArrayView<FStateTreeDataView,int>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<bool___cdecl(FStateTreeExecutionContext_const_&,UStateTree_const_*,TArrayView<FStateTreeExternalDataDesc_const_,int>,TArrayView<FStateTreeDataView,int>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d593ba0

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(FStateTreeExecutionContext_const_&,UStateTree_const_*,TArrayView<FStateTreeExternalDataDesc_const_,int>,TArrayView<FStateTreeDataView,int>),FDefaultDelegateUserPolicy,`UE::Cameras::FStateTreeCameraDirectorEvaluator::SetContextRequirements'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d593bd0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Cameras::FDefaultRootCameraNodeEvaluator,void___cdecl(UE::Cameras::FBlendStackCameraRigEvent_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Cameras::FDefaultRootCameraNodeEvaluator,void___cdecl(UE::Cameras::FBlendStackCameraRigEvent_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d593c00

void * __thiscall
UE::Cameras::TCameraValueInterpolator<double>::_scalar_deleting_destructor_
          (TCameraValueInterpolator<double> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7__TCameraValueInterpolator_N_Cameras_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d593c40

void * __thiscall
UE::Cameras::TCameraValueInterpolator<UE::Math::TVector2<double>_>::_scalar_deleting_destructor_
          (TCameraValueInterpolator<UE::Math::TVector2<double>_> *this,uint param_1)

{
  this->_padding_ =
       (longlong)&___7__TCameraValueInterpolator_U__TVector2_N_Math_UE___Cameras_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d593c80

void * __thiscall
UE::Cameras::TCameraValueInterpolator<UE::Math::TVector<double>_>::_scalar_deleting_destructor_
          (TCameraValueInterpolator<UE::Math::TVector<double>_> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7__TCameraValueInterpolator_U__TVector_N_Math_UE___Cameras_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d593cc0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UE::Cameras::FBlendStackCameraRigEvent_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UE::Cameras::FBlendStackCameraRigEvent_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d593cf0

void * __thiscall
TCommonDelegateInstanceState<bool___cdecl(FStateTreeExecutionContext_const_&,UStateTree_const_*,TArrayView<FStateTreeExternalDataDesc_const_,int>,TArrayView<FStateTreeDataView,int>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<bool___cdecl(FStateTreeExecutionContext_const_&,UStateTree_const_*,TArrayView<FStateTreeExternalDataDesc_const_,int>,TArrayView<FStateTreeDataView,int>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d593d20

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Cameras::FCameraNodeEvaluationResult,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Cameras::FCameraNodeEvaluationResult,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d593d60

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Cameras::FBlueprintCameraDirectorEvaluator,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Cameras::FBlueprintCameraDirectorEvaluator,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d593da0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Cameras::FCameraModifierService,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Cameras::FCameraModifierService,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d593de0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Cameras::FCameraParameterSetterService,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Cameras::FCameraParameterSetterService,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d593e20

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Cameras::FCameraRigCombinationRegistry,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Cameras::FCameraRigCombinationRegistry,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d593e60

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Cameras::FCameraShakeService,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Cameras::FCameraShakeService,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d593ea0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Cameras::FOrientationInitializationService,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Cameras::FOrientationInitializationService,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d593ee0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Cameras::FPriorityQueueCameraDirectorEvaluator,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Cameras::FPriorityQueueCameraDirectorEvaluator,1> *this
          ,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d593f20

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Cameras::FSingleCameraDirectorEvaluator,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Cameras::FSingleCameraDirectorEvaluator,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d593f60

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Cameras::FStateTreeCameraDirectorEvaluator,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Cameras::FStateTreeCameraDirectorEvaluator,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d593fa0

void * __thiscall
UE::Cameras::TPopValueInterpolator<double>::_scalar_deleting_destructor_
          (TPopValueInterpolator<double> *this,uint param_1)

{
  *(undefined ***)this = &___7__TCameraValueInterpolator_N_Cameras_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d593fe0

void * __thiscall
UE::Cameras::TPopValueInterpolator<UE::Math::TVector2<double>_>::_scalar_deleting_destructor_
          (TPopValueInterpolator<UE::Math::TVector2<double>_> *this,uint param_1)

{
  *(undefined ***)this = &___7__TCameraValueInterpolator_U__TVector2_N_Math_UE___Cameras_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d594020

void * __thiscall
UE::Cameras::TPopValueInterpolator<UE::Math::TVector<double>_>::_scalar_deleting_destructor_
          (TPopValueInterpolator<UE::Math::TVector<double>_> *this,uint param_1)

{
  *(undefined ***)this = &___7__TCameraValueInterpolator_U__TVector_N_Math_UE___Cameras_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d594060

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void * __thiscall
UE::Cameras::FActorCameraEvaluationContext::_scalar_deleting_destructor_
          (FActorCameraEvaluationContext *this,uint param_1)

{
  FCameraEvaluationContext::~FCameraEvaluationContext((FCameraEvaluationContext *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xaf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d5940a0

void * __thiscall
UE::Cameras::FBlendStacksCameraDebugBlock::_scalar_deleting_destructor_
          (FBlendStacksCameraDebugBlock *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FString,int>
            ((FString *)(this->BlendStackNames).AllocatorInstance.Data,
             (this->BlendStackNames).ArrayNum);
  pFVar1 = (this->BlendStackNames).AllocatorInstance.Data;
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

// `scalar_deleting_destructor' @ 14d594120

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void * __thiscall
UE::Cameras::FBlueprintCameraDirectorEvaluator::_scalar_deleting_destructor_
          (FBlueprintCameraDirectorEvaluator *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  UBlueprintCameraDirectorEvaluator *pUVar3;
  longlong *plVar4;
  
  pUVar3 = (this->EvaluatorBlueprint).field0_0x0.DebugPtr;
  if (pUVar3 != (UBlueprintCameraDirectorEvaluator *)0x0) {
    pUVar3->OwningDirectorEvaluator = (FCameraDirectorEvaluator *)0x0;
  }
  this->_padding_ = (longlong)&___7FCameraDirectorEvaluator_Cameras_UE__6B_;
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
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d5941a0

void * __thiscall
UE::Cameras::FCalcCameraActorCameraNodeEvaluator::_scalar_deleting_destructor_
          (FCalcCameraActorCameraNodeEvaluator *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d5941d0

void * __thiscall
UE::Cameras::FCameraComponentCameraNodeEvaluator::_scalar_deleting_destructor_
          (FCameraComponentCameraNodeEvaluator *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d594200

void * __thiscall
UE::Cameras::FCameraDirectorDebugBlock::_scalar_deleting_destructor_
          (FCameraDirectorDebugBlock *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->CameraAssetName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OwnerName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined ***)this = &___7FCameraDebugBlock_Cameras_UE__6B_;
  if (*(void **)&this->field_0x18 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x18);
  }
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d594280

void * __thiscall
UE::Cameras::FCameraDirectorTreeDebugBlock::_scalar_deleting_destructor_
          (FCameraDirectorTreeDebugBlock *this,uint param_1)

{
  *(undefined ***)this = &___7FCameraDebugBlock_Cameras_UE__6B_;
  if (*(void **)&this->field_0x18 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x18);
  }
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d5942e0

void * __thiscall
UE::Cameras::FCameraEvaluationServiceDebugBlock::_scalar_deleting_destructor_
          (FCameraEvaluationServiceDebugBlock *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ServiceClassName).Data.AllocatorInstance.Data;
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

// `scalar_deleting_destructor' @ 14d594350

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void * __thiscall
UE::Cameras::FCameraModifierService::_scalar_deleting_destructor_
          (FCameraModifierService *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ModifierContext).SharedReferenceCount.ReferenceController);
  FCameraEvaluationService::~FCameraEvaluationService((FCameraEvaluationService *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d5943a0

void * __thiscall
UE::Cameras::FCameraNodeEvaluationResultDebugBlock::_scalar_deleting_destructor_
          (FCameraNodeEvaluationResultDebugBlock *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FCameraDebugBlock_Cameras_UE__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d594400

void * __thiscall
UE::Cameras::FCameraNodeEvaluatorDebugBlock::_scalar_deleting_destructor_
          (FCameraNodeEvaluatorDebugBlock *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->NodeClassName).Data.AllocatorInstance.Data;
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

// `scalar_deleting_destructor' @ 14d594470

void * __thiscall
UE::Cameras::FCameraPoseDebugBlock::_scalar_deleting_destructor_
          (FCameraPoseDebugBlock *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ShowUnchangedCVarName).Data.AllocatorInstance.Data;
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
    ::operator_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d5944e0

void * __thiscall
UE::Cameras::FCameraPoseLocationTrailDebugBlock::_scalar_deleting_destructor_
          (FCameraPoseLocationTrailDebugBlock *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Trail).AllocatorInstance.Data;
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

// `scalar_deleting_destructor' @ 14d594550

void * __thiscall
FCameraRigAssetReference::_scalar_deleting_destructor_(FCameraRigAssetReference *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  FCameraRigParameterOverrides::~FCameraRigParameterOverrides(&this->ParameterOverrides_DEPRECATED);
  pFVar1 = (this->ParameterOverrideGuids_DEPRECATED).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FBaseCameraObjectReference__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FInstancedStruct::Reset((FInstancedStruct *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x130);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d5945e0

void * __thiscall
UE::Cameras::FCameraRigJointsDebugBlock::_scalar_deleting_destructor_
          (FCameraRigJointsDebugBlock *this,uint param_1)

{
  ForElementType<UE::Cameras::FCameraRigJointsDebugBlock::FEntry> FVar1;
  
  FVar1 = (this->Entries).AllocatorInstance.SecondaryData;
  if (FVar1 == (ForElementType<UE::Cameras::FCameraRigJointsDebugBlock::FEntry>)0x0) {
    FVar1 = (ForElementType<UE::Cameras::FCameraRigJointsDebugBlock::FEntry>)&this->Entries;
  }
  DestructItems<UE::Cameras::FCameraRigJointsDebugBlock::FEntry,int>
            ((FEntry *)FVar1,(this->Entries).ArrayNum);
  FVar1 = (this->Entries).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<UE::Cameras::FCameraRigJointsDebugBlock::FEntry>)0x0) {
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
    ::operator_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d594680

void * __thiscall
FCameraShakeAssetReference::_scalar_deleting_destructor_
          (FCameraShakeAssetReference *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FBaseCameraObjectReference__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FInstancedStruct::Reset((FInstancedStruct *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d5946f0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void * __thiscall
UE::Cameras::FCameraShakeService::_scalar_deleting_destructor_
          (FCameraShakeService *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ShakeContext).SharedReferenceCount.ReferenceController);
  FCameraEvaluationService::~FCameraEvaluationService((FCameraEvaluationService *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d594740

void * __thiscall
UE::Cameras::FCategoryTitleDebugBlock::_scalar_deleting_destructor_
          (FCategoryTitleDebugBlock *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Title).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Category).Data.AllocatorInstance.Data;
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
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d5947c0

void * __thiscall
UE::Cameras::FCombinedCameraRigCameraDebugBlock::_scalar_deleting_destructor_
          (FCombinedCameraRigCameraDebugBlock *this,uint param_1)

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
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d594830

void * __thiscall
UE::Cameras::FCombinedCameraRigsCameraNodeEvaluator::_scalar_deleting_destructor_
          (FCombinedCameraRigsCameraNodeEvaluator *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->CameraRigRootEvaluators).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d594880

void * __thiscall
UE::Cameras::FContextDataTableDebugBlock::_scalar_deleting_destructor_
          (FContextDataTableDebugBlock *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ShowDataIDsCVarName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<UE::Cameras::FContextDataTableDebugBlock::FEntryDebugInfo,int>
            ((FEntryDebugInfo *)(this->Entries).AllocatorInstance.Data,(this->Entries).ArrayNum);
  pFVar1 = (this->Entries).AllocatorInstance.Data;
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

// `scalar_deleting_destructor' @ 14d594910

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void * __thiscall
UE::Cameras::FDefaultRootCameraNodeEvaluator::_scalar_deleting_destructor_
          (FDefaultRootCameraNodeEvaluator *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ParameterSetterService).SharedReferenceCount.ReferenceController);
  FRootCameraNodeEvaluator::~FRootCameraNodeEvaluator((FRootCameraNodeEvaluator *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d594960

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void * __thiscall
UE::Cameras::FOrientationInitializationService::_scalar_deleting_destructor_
          (FOrientationInitializationService *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo> FVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  FVar3 = (this->LastAimDebugInfo).Iterations.AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  pTVar4 = (this->PreviousEvaluationContext).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  FCameraEvaluationService::~FCameraEvaluationService((FCameraEvaluationService *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d5949e0

void * __thiscall
UE::Cameras::FPlayerControllersDebugBlock::_scalar_deleting_destructor_
          (FPlayerControllersDebugBlock *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<UE::Cameras::FPlayerControllersDebugBlock::FPlayerControllerDebugInfo,int>
            ((FPlayerControllerDebugInfo *)(this->PlayerControllers).AllocatorInstance.Data,
             (this->PlayerControllers).ArrayNum);
  pFVar1 = (this->PlayerControllers).AllocatorInstance.Data;
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

// `scalar_deleting_destructor' @ 14d594a60

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void * __thiscall
UE::Cameras::FPostProcessSettingsDebugBlock::_scalar_deleting_destructor_
          (FPostProcessSettingsDebugBlock *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PostProcessSettings).PostProcessSettings.WeightedBlendables.Array.
           AllocatorInstance.Data;
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
    ::operator_delete(this,0x7a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d594ad0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void * __thiscall
UE::Cameras::FPriorityQueueCameraDirectorEvaluator::_scalar_deleting_destructor_
          (FPriorityQueueCameraDirectorEvaluator *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  DestructItems<UE::Cameras::FPriorityQueueCameraDirectorEvaluator::FEntry,int>
            ((FEntry *)(this->Entries).AllocatorInstance.Data,(this->Entries).ArrayNum);
  pFVar3 = (this->Entries).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  this->_padding_ = (longlong)&___7FCameraDirectorEvaluator_Cameras_UE__6B_;
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
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d594b50

void * __thiscall
UE::Cameras::FRootCameraDebugBlock::_scalar_deleting_destructor_
          (FRootCameraDebugBlock *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FCameraDebugBlock_Cameras_UE__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d594bb0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void * __thiscall
UE::Cameras::FRootCameraNodeEvaluator::_scalar_deleting_destructor_
          (FRootCameraNodeEvaluator *this,uint param_1)

{
  ~FRootCameraNodeEvaluator(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d594bf0

void * __thiscall
UE::Cameras::FSingleCameraDirectorEvaluator::_scalar_deleting_destructor_
          (FSingleCameraDirectorEvaluator *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &___7FCameraDirectorEvaluator_Cameras_UE__6B_;
  plVar3 = *(longlong **)&this->field_0x18;
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
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d594c60

void * __thiscall
UE::Cameras::FStateTreeCameraDirectorEvaluator::_scalar_deleting_destructor_
          (FStateTreeCameraDirectorEvaluator *this,uint param_1)

{
  ~FStateTreeCameraDirectorEvaluator(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d594ca0

void * __thiscall
UE::Cameras::FVariableTableDebugBlock::_scalar_deleting_destructor_
          (FVariableTableDebugBlock *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ShowVariableIDsCVarName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<UE::Cameras::FVariableTableDebugBlock::FEntryDebugInfo,int>
            ((FEntryDebugInfo *)(this->Entries).AllocatorInstance.Data,(this->Entries).ArrayNum);
  pFVar1 = (this->Entries).AllocatorInstance.Data;
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

// `scalar_deleting_destructor' @ 14d594d30

void * __thiscall
UE::Cameras::FViewfinderDebugBlock::_scalar_deleting_destructor_
          (FViewfinderDebugBlock *this,uint param_1)

{
  *(undefined ***)this = &___7FCameraDebugBlock_Cameras_UE__6B_;
  if (*(void **)&this->field_0x18 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x18);
  }
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d594d90

void * __thiscall
IGameplayTagAssetInterface::_scalar_deleting_destructor_
          (IGameplayTagAssetInterface *this,uint param_1)

{
  *this = (IGameplayTagAssetInterface)&___7IGameplayTagAssetInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d594dd0

void * __thiscall
UActivateCameraRigFunctions::_scalar_deleting_destructor_
          (UActivateCameraRigFunctions *this,uint param_1)

{
  *(undefined ***)this = &___7UActivateCameraRigFunctions__6B_;
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

// `scalar_deleting_destructor' @ 14d594e30

void * __thiscall
UBlueprintCameraContextDataTableFunctionLibrary::_scalar_deleting_destructor_
          (UBlueprintCameraContextDataTableFunctionLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UBlueprintCameraContextDataTableFunctionLibrary__6B_;
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

// `scalar_deleting_destructor' @ 14d594e90

void * __thiscall
UBlueprintCameraDirector::_scalar_deleting_destructor_(UBlueprintCameraDirector *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UBlueprintCameraDirector__6B_;
  UCameraDirector::~UCameraDirector((UCameraDirector *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d594ef0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void * __thiscall
UBlueprintCameraDirectorEvaluator::_scalar_deleting_destructor_
          (UBlueprintCameraDirectorEvaluator *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest> FVar2;
  
  this->_padding_ = (longlong)&___7UBlueprintCameraDirectorEvaluator__6B_;
  pFVar1 = (this->ChildrenContextSlotNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->EvaluationContext).SharedReferenceCount.ReferenceController);
  FVar2 = (this->EvaluationResult).Requests.AllocatorInstance.SecondaryData;
  if (FVar2 == (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
    FVar2 = (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)
            &this->EvaluationResult;
  }
  DestructItems<UE::Cameras::FCameraRigActivationDeactivationRequest,int>
            ((FCameraRigActivationDeactivationRequest *)FVar2,
             (this->EvaluationResult).Requests.ArrayNum);
  FVar2 = (this->EvaluationResult).Requests.AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x148);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d594fb0

void * __thiscall
UBlueprintCameraEvaluationDataFunctionLibrary::_scalar_deleting_destructor_
          (UBlueprintCameraEvaluationDataFunctionLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UBlueprintCameraEvaluationDataFunctionLibrary__6B_;
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

// `scalar_deleting_destructor' @ 14d595010

void * __thiscall
UBlueprintCameraPoseFunctionLibrary::_scalar_deleting_destructor_
          (UBlueprintCameraPoseFunctionLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UBlueprintCameraPoseFunctionLibrary__6B_;
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

// `scalar_deleting_destructor' @ 14d595070

void * __thiscall
UBlueprintCameraVariableTableFunctionLibrary::_scalar_deleting_destructor_
          (UBlueprintCameraVariableTableFunctionLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UBlueprintCameraVariableTableFunctionLibrary__6B_;
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

// `scalar_deleting_destructor' @ 14d5950d0

void * __thiscall
UBooleanCameraVariable::_scalar_deleting_destructor_(UBooleanCameraVariable *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UCameraVariableAsset__6B_;
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

// `scalar_deleting_destructor' @ 14d595130

void * __thiscall
UCalcCameraActorCameraNode::_scalar_deleting_destructor_
          (UCalcCameraActorCameraNode *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14d5951a0

void * __thiscall
UCameraComponentCameraNode::_scalar_deleting_destructor_
          (UCameraComponentCameraNode *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14d595210

void * __thiscall
UCameraDirectorStateTreeSchema::_scalar_deleting_destructor_
          (UCameraDirectorStateTreeSchema *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UCameraDirectorStateTreeSchema__6B_;
  pFVar1 = (this->ContextDataDescs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UStateTreeSchema::~UStateTreeSchema((UStateTreeSchema *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d595280

void * __thiscall
UCameraObjectInterfaceBlendableParameter::_scalar_deleting_destructor_
          (UCameraObjectInterfaceBlendableParameter *this,uint param_1)

{
  this->_padding_ = (longlong)&UCameraObjectInterfaceParameterBase::_vftable__for__UObject__;
  this->_padding_ =
       (longlong)&UCameraObjectInterfaceParameterBase::_vftable__for__IObjectTreeGraphObject__;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7IObjectTreeGraphObject__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d595310

void * __thiscall
UCameraObjectInterfaceDataParameter::_scalar_deleting_destructor_
          (UCameraObjectInterfaceDataParameter *this,uint param_1)

{
  this->_padding_ = (longlong)&UCameraObjectInterfaceParameterBase::_vftable__for__UObject__;
  this->_padding_ =
       (longlong)&UCameraObjectInterfaceParameterBase::_vftable__for__IObjectTreeGraphObject__;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7IObjectTreeGraphObject__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d5953a0

void * __thiscall
UCameraObjectInterfaceParameterBase::_scalar_deleting_destructor_
          (UCameraObjectInterfaceParameterBase *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  pFVar1 = (this->InterfaceParameterName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IObjectTreeGraphObject__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d595430

void * __thiscall UCameraRigAsset::_scalar_deleting_destructor_(UCameraRigAsset *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UBaseCameraObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTagAssetInterface__;
  this->_padding_ = (longlong)&_vftable__for__IHasCameraBuildStatus__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphRootObject__;
  pFVar1 = (this->ExitTransitions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EnterTransitions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GameplayTags).ParentTags.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GameplayTags).GameplayTags.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IObjectTreeGraphRootObject__6B_;
  this->_padding_ = (longlong)&___7IObjectTreeGraphObject__6B_;
  this->_padding_ = (longlong)&___7IHasCameraBuildStatus__6B_;
  this->_padding_ = (longlong)&___7IGameplayTagAssetInterface__6B_;
  UBaseCameraObject::~UBaseCameraObject((UBaseCameraObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x128);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d595550

void * __thiscall
UCameraRigParameterInterop::_scalar_deleting_destructor_
          (UCameraRigParameterInterop *this,uint param_1)

{
  *(undefined ***)this = &___7UCameraRigParameterInterop__6B_;
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

// `scalar_deleting_destructor' @ 14d5955b0

void * __thiscall
UCameraRigParameterInteropLibrary::_scalar_deleting_destructor_
          (UCameraRigParameterInteropLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UCameraRigParameterInteropLibrary__6B_;
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

// `scalar_deleting_destructor' @ 14d595610

void * __thiscall
UCameraRigProxyAsset::_scalar_deleting_destructor_(UCameraRigProxyAsset *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UCameraRigProxyAsset__6B_;
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

// `scalar_deleting_destructor' @ 14d595670

void * __thiscall
UCameraRigProxyTable::_scalar_deleting_destructor_(UCameraRigProxyTable *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UCameraRigProxyTable__6B_;
  pFVar1 = (this->Entries).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
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

// `scalar_deleting_destructor' @ 14d5956e0

void * __thiscall
UCameraRigTransition::_scalar_deleting_destructor_(UCameraRigTransition *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  pFVar1 = (this->Conditions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IObjectTreeGraphObject__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d595770

void * __thiscall
UCameraRigTransitionCondition::_scalar_deleting_destructor_
          (UCameraRigTransitionCondition *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &___7IObjectTreeGraphObject__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d5957e0

void * __thiscall
UCameraShakeAsset::_scalar_deleting_destructor_(UCameraShakeAsset *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UBaseCameraObject__;
  this->_padding_ = (longlong)&___7IObjectTreeGraphRootObject__6B_;
  this->_padding_ = (longlong)&___7IObjectTreeGraphObject__6B_;
  this->_padding_ = (longlong)&___7IHasCameraBuildStatus__6B_;
  UBaseCameraObject::~UBaseCameraObject((UBaseCameraObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d595870

void * __thiscall
UCameraValueInterpolator::_scalar_deleting_destructor_(UCameraValueInterpolator *this,uint param_1)

{
  *(undefined ***)this = &___7UCameraValueInterpolator__6B_;
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

// `scalar_deleting_destructor' @ 14d5958d0

void * __thiscall
UCameraVariableAsset::_scalar_deleting_destructor_(UCameraVariableAsset *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UCameraVariableAsset__6B_;
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

// `scalar_deleting_destructor' @ 14d595930

void * __thiscall
UCameraVariableCollection::_scalar_deleting_destructor_
          (UCameraVariableCollection *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UCameraVariableCollection__6B_;
  pFVar1 = (this->Variables).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
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

// `scalar_deleting_destructor' @ 14d5959a0

void * __thiscall
UCombinedCameraRigsCameraNode::_scalar_deleting_destructor_
          (UCombinedCameraRigsCameraNode *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  DestructItems<FCameraRigAssetReference,int>
            ((FCameraRigAssetReference *)(this->CameraRigReferences).AllocatorInstance.Data,
             (this->CameraRigReferences).ArrayNum);
  pFVar1 = (this->CameraRigReferences).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UCameraNode::~UCameraNode((UCameraNode *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d595a30

void * __thiscall
UCustomCameraNodeParameterProvider::_scalar_deleting_destructor_
          (UCustomCameraNodeParameterProvider *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14d595a90

void * __thiscall
UDefaultRootCameraNode::_scalar_deleting_destructor_(UDefaultRootCameraNode *this,uint param_1)

{
  this->_padding_ = (longlong)&URootCameraNode::_vftable__for__UObject__;
  this->_padding_ = (longlong)&URootCameraNode::_vftable__for__IObjectTreeGraphObject__;
  UCameraNode::~UCameraNode((UCameraNode *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d595b00

void * __thiscall
UDoubleCameraVariable::_scalar_deleting_destructor_(UDoubleCameraVariable *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UCameraVariableAsset__6B_;
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

// `scalar_deleting_destructor' @ 14d595b60

void * __thiscall
UFloatCameraVariable::_scalar_deleting_destructor_(UFloatCameraVariable *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UCameraVariableAsset__6B_;
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

// `scalar_deleting_destructor' @ 14d595bc0

void * __thiscall
UInteger32CameraVariable::_scalar_deleting_destructor_(UInteger32CameraVariable *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UCameraVariableAsset__6B_;
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

// `scalar_deleting_destructor' @ 14d595c20

void * __thiscall
UObjectTreeGraphComment::_scalar_deleting_destructor_(UObjectTreeGraphComment *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &___7IObjectTreeGraphObject__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d595c90

void * __thiscall
UPopValueInterpolator::_scalar_deleting_destructor_(UPopValueInterpolator *this,uint param_1)

{
  *(undefined ***)this = &___7UCameraValueInterpolator__6B_;
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

// `scalar_deleting_destructor' @ 14d595cf0

void * __thiscall
UPriorityQueueCameraDirector::_scalar_deleting_destructor_
          (UPriorityQueueCameraDirector *this,uint param_1)

{
  *(undefined ***)this = &___7UPriorityQueueCameraDirector__6B_;
  UCameraDirector::~UCameraDirector((UCameraDirector *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d595d50

void * __thiscall URootCameraNode::_scalar_deleting_destructor_(URootCameraNode *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14d595dc0

void * __thiscall
URotator3dCameraVariable::_scalar_deleting_destructor_(URotator3dCameraVariable *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UCameraVariableAsset__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d595e20

void * __thiscall
URotator3fCameraVariable::_scalar_deleting_destructor_(URotator3fCameraVariable *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UCameraVariableAsset__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d595e80

void * __thiscall
UShakeCameraNode::_scalar_deleting_destructor_(UShakeCameraNode *this,uint param_1)

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

// `scalar_deleting_destructor' @ 14d595ef0

void * __thiscall
USingleCameraDirector::_scalar_deleting_destructor_(USingleCameraDirector *this,uint param_1)

{
  this->_padding_ = (longlong)&___7USingleCameraDirector__6B_;
  UCameraDirector::~UCameraDirector((UCameraDirector *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d595f50

void * __thiscall
UStateTreeCameraDirector::_scalar_deleting_destructor_(UStateTreeCameraDirector *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UStateTreeCameraDirector__6B_;
  pFVar1 = (this->StateTreeReference).PropertyOverrides.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FInstancedStruct::Reset(&(this->StateTreeReference).Parameters.Value);
  UCameraDirector::~UCameraDirector((UCameraDirector *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d595fd0

void * __thiscall
UTransform3dCameraVariable::_scalar_deleting_destructor_
          (UTransform3dCameraVariable *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UCameraVariableAsset__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d596030

void * __thiscall
UTransform3fCameraVariable::_scalar_deleting_destructor_
          (UTransform3fCameraVariable *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UCameraVariableAsset__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d596090

void * __thiscall
UVector2dCameraVariable::_scalar_deleting_destructor_(UVector2dCameraVariable *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UCameraVariableAsset__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d5960f0

void * __thiscall
UVector2fCameraVariable::_scalar_deleting_destructor_(UVector2fCameraVariable *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UCameraVariableAsset__6B_;
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

// `scalar_deleting_destructor' @ 14d596150

void * __thiscall
UVector3dCameraVariable::_scalar_deleting_destructor_(UVector3dCameraVariable *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UCameraVariableAsset__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d5961b0

void * __thiscall
UVector3fCameraVariable::_scalar_deleting_destructor_(UVector3fCameraVariable *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UCameraVariableAsset__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d596210

void * __thiscall
UVector4dCameraVariable::_scalar_deleting_destructor_(UVector4dCameraVariable *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UCameraVariableAsset__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d596270

void * __thiscall
UVector4fCameraVariable::_scalar_deleting_destructor_(UVector4fCameraVariable *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UCameraVariableAsset__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x50);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeActivateCameraRigFunctions @ 14d5a2c50

void __cdecl EmptyLinkFunctionForGeneratedCodeActivateCameraRigFunctions(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeActorCameraEvaluationContext @ 14d5a2c60

void __cdecl EmptyLinkFunctionForGeneratedCodeActorCameraEvaluationContext(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeBlueprintCameraDirector @ 14d5a2c70

void __cdecl EmptyLinkFunctionForGeneratedCodeBlueprintCameraDirector(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeBlueprintCameraEvaluationDataRef @ 14d5a2c80

void __cdecl EmptyLinkFunctionForGeneratedCodeBlueprintCameraEvaluationDataRef(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeBlueprintCameraPose @ 14d5a2c90

void __cdecl EmptyLinkFunctionForGeneratedCodeBlueprintCameraPose(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCameraDirectorStateTreeSchema @ 14d5a2ca0

void __cdecl EmptyLinkFunctionForGeneratedCodeCameraDirectorStateTreeSchema(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCameraObjectInterface @ 14d5a2cb0

void __cdecl EmptyLinkFunctionForGeneratedCodeCameraObjectInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCameraParameters @ 14d5a2cc0

void __cdecl EmptyLinkFunctionForGeneratedCodeCameraParameters(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCameraPose @ 14d5a2cd0

void __cdecl EmptyLinkFunctionForGeneratedCodeCameraPose(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCameraRigAsset @ 14d5a2ce0

void __cdecl EmptyLinkFunctionForGeneratedCodeCameraRigAsset(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCameraRigAssetReference @ 14d5a2cf0

void __cdecl EmptyLinkFunctionForGeneratedCodeCameraRigAssetReference(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCameraRigCombinationRegistry @ 14d5a2d00

void __cdecl EmptyLinkFunctionForGeneratedCodeCameraRigCombinationRegistry(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCameraRigParameterInterop @ 14d5a2d10

void __cdecl EmptyLinkFunctionForGeneratedCodeCameraRigParameterInterop(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCameraRigProxyAsset @ 14d5a2d20

void __cdecl EmptyLinkFunctionForGeneratedCodeCameraRigProxyAsset(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCameraRigProxyRedirectTable @ 14d5a2d30

void __cdecl EmptyLinkFunctionForGeneratedCodeCameraRigProxyRedirectTable(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCameraRigTransition @ 14d5a2d40

void __cdecl EmptyLinkFunctionForGeneratedCodeCameraRigTransition(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCameraRotatorCurve @ 14d5a2d50

void __cdecl EmptyLinkFunctionForGeneratedCodeCameraRotatorCurve(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCameraShakeAsset @ 14d5a2d60

void __cdecl EmptyLinkFunctionForGeneratedCodeCameraShakeAsset(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCameraShakeAssetReference @ 14d5a2d70

void __cdecl EmptyLinkFunctionForGeneratedCodeCameraShakeAssetReference(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCameraSingleCurve @ 14d5a2d80

void __cdecl EmptyLinkFunctionForGeneratedCodeCameraSingleCurve(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCameraValueInterpolator @ 14d5a2d90

void __cdecl EmptyLinkFunctionForGeneratedCodeCameraValueInterpolator(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCameraVariableAssets @ 14d5a2da0

void __cdecl EmptyLinkFunctionForGeneratedCodeCameraVariableAssets(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCameraVariableCollection @ 14d5a2db0

void __cdecl EmptyLinkFunctionForGeneratedCodeCameraVariableCollection(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCameraVariableReferences @ 14d5a2dc0

void __cdecl EmptyLinkFunctionForGeneratedCodeCameraVariableReferences(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCameraVariableSetter @ 14d5a2dd0

void __cdecl EmptyLinkFunctionForGeneratedCodeCameraVariableSetter(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCameraVariableTableAllocationInfo @ 14d5a2de0

void __cdecl EmptyLinkFunctionForGeneratedCodeCameraVariableTableAllocationInfo(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCameraVectorCurve @ 14d5a2df0

void __cdecl EmptyLinkFunctionForGeneratedCodeCameraVectorCurve(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDefaultRootCameraNode @ 14d5a2e00

void __cdecl EmptyLinkFunctionForGeneratedCodeDefaultRootCameraNode(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeICustomCameraNodeParameterProvider @ 14d5a2e10

void __cdecl EmptyLinkFunctionForGeneratedCodeICustomCameraNodeParameterProvider(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeObjectTreeGraphComment @ 14d5a2e20

void __cdecl EmptyLinkFunctionForGeneratedCodeObjectTreeGraphComment(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePriorityQueueCameraDirector @ 14d5a2e30

void __cdecl EmptyLinkFunctionForGeneratedCodePriorityQueueCameraDirector(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRootCameraNode @ 14d5a2e40

void __cdecl EmptyLinkFunctionForGeneratedCodeRootCameraNode(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeShakeCameraNode @ 14d5a2e50

void __cdecl EmptyLinkFunctionForGeneratedCodeShakeCameraNode(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSingleCameraDirector @ 14d5a2e60

void __cdecl EmptyLinkFunctionForGeneratedCodeSingleCameraDirector(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeStateTreeCameraDirector @ 14d5a2e70

void __cdecl EmptyLinkFunctionForGeneratedCodeStateTreeCameraDirector(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeStateTreeCameraDirectorTasks @ 14d5a2e80

void __cdecl EmptyLinkFunctionForGeneratedCodeStateTreeCameraDirectorTasks(void)

{
  return;
}

// Z_Construct_UClass_UActivateCameraRigFunctions_NoRegister @ 14d5d5400

UClass * __cdecl Z_Construct_UClass_UActivateCameraRigFunctions_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UActivateCameraRigFunctions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"ActivateCameraRigFunctions",
               &Z_Registration_Info_UClass_UActivateCameraRigFunctions.InnerSingleton,
               UActivateCameraRigFunctions::StaticRegisterNativesUActivateCameraRigFunctions,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UActivateCameraRigFunctions>,
               InternalVTableHelperCtorCaller<UActivateCameraRigFunctions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UActivateCameraRigFunctions.InnerSingleton;
}

// Z_Construct_UClass_UBlueprintCameraContextDataTableFunctionLibrary_NoRegister @ 14d5d54c0

UClass * __cdecl Z_Construct_UClass_UBlueprintCameraContextDataTableFunctionLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlueprintCameraContextDataTableFunctionLibrary.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"BlueprintCameraContextDataTableFunctionLibrary",
               &Z_Registration_Info_UClass_UBlueprintCameraContextDataTableFunctionLibrary.
                InnerSingleton,
               UBlueprintCameraContextDataTableFunctionLibrary::
               StaticRegisterNativesUBlueprintCameraContextDataTableFunctionLibrary,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UBlueprintCameraContextDataTableFunctionLibrary>,
               InternalVTableHelperCtorCaller<UBlueprintCameraContextDataTableFunctionLibrary>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlueprintCameraContextDataTableFunctionLibrary.InnerSingleton;
}

// Z_Construct_UClass_UBlueprintCameraDirector_NoRegister @ 14d5d5580

UClass * __cdecl Z_Construct_UClass_UBlueprintCameraDirector_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlueprintCameraDirector.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"BlueprintCameraDirector",
               &Z_Registration_Info_UClass_UBlueprintCameraDirector.InnerSingleton,
               UBlueprintCameraDirector::StaticRegisterNativesUBlueprintCameraDirector,0x48,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UBlueprintCameraDirector>,
               InternalVTableHelperCtorCaller<UBlueprintCameraDirector>,local_res8,
               UCameraDirector::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlueprintCameraDirector.InnerSingleton;
}

// Z_Construct_UClass_UBlueprintCameraEvaluationDataFunctionLibrary_NoRegister @ 14d5d5640

UClass * __cdecl Z_Construct_UClass_UBlueprintCameraEvaluationDataFunctionLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlueprintCameraEvaluationDataFunctionLibrary.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"BlueprintCameraEvaluationDataFunctionLibrary",
               &Z_Registration_Info_UClass_UBlueprintCameraEvaluationDataFunctionLibrary.
                InnerSingleton,
               UBlueprintCameraEvaluationDataFunctionLibrary::
               StaticRegisterNativesUBlueprintCameraEvaluationDataFunctionLibrary,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UBlueprintCameraEvaluationDataFunctionLibrary>,
               InternalVTableHelperCtorCaller<UBlueprintCameraEvaluationDataFunctionLibrary>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlueprintCameraEvaluationDataFunctionLibrary.InnerSingleton;
}

// Z_Construct_UClass_UBlueprintCameraPoseFunctionLibrary_NoRegister @ 14d5d5700

UClass * __cdecl Z_Construct_UClass_UBlueprintCameraPoseFunctionLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlueprintCameraPoseFunctionLibrary.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"BlueprintCameraPoseFunctionLibrary",
               &Z_Registration_Info_UClass_UBlueprintCameraPoseFunctionLibrary.InnerSingleton,
               UBlueprintCameraPoseFunctionLibrary::
               StaticRegisterNativesUBlueprintCameraPoseFunctionLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UBlueprintCameraPoseFunctionLibrary>,
               InternalVTableHelperCtorCaller<UBlueprintCameraPoseFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlueprintCameraPoseFunctionLibrary.InnerSingleton;
}

// Z_Construct_UClass_UBlueprintCameraVariableTableFunctionLibrary_NoRegister @ 14d5d57c0

UClass * __cdecl Z_Construct_UClass_UBlueprintCameraVariableTableFunctionLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlueprintCameraVariableTableFunctionLibrary.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"BlueprintCameraVariableTableFunctionLibrary",
               &Z_Registration_Info_UClass_UBlueprintCameraVariableTableFunctionLibrary.
                InnerSingleton,
               UBlueprintCameraVariableTableFunctionLibrary::
               StaticRegisterNativesUBlueprintCameraVariableTableFunctionLibrary,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UBlueprintCameraVariableTableFunctionLibrary>,
               InternalVTableHelperCtorCaller<UBlueprintCameraVariableTableFunctionLibrary>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlueprintCameraVariableTableFunctionLibrary.InnerSingleton;
}

// Z_Construct_UClass_UCalcCameraActorCameraNode_NoRegister @ 14d5d5880

UClass * __cdecl Z_Construct_UClass_UCalcCameraActorCameraNode_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCalcCameraActorCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CalcCameraActorCameraNode",
               &Z_Registration_Info_UClass_UCalcCameraActorCameraNode.InnerSingleton,
               UCalcCameraActorCameraNode::StaticRegisterNativesUCalcCameraActorCameraNode,0x38,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UCalcCameraActorCameraNode>,
               InternalVTableHelperCtorCaller<UCalcCameraActorCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCalcCameraActorCameraNode.InnerSingleton;
}

// Z_Construct_UClass_UCameraComponentCameraNode_NoRegister @ 14d5d5940

UClass * __cdecl Z_Construct_UClass_UCameraComponentCameraNode_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraComponentCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CameraComponentCameraNode",
               &Z_Registration_Info_UClass_UCameraComponentCameraNode.InnerSingleton,
               UCameraComponentCameraNode::StaticRegisterNativesUCameraComponentCameraNode,0x38,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UCameraComponentCameraNode>,
               InternalVTableHelperCtorCaller<UCameraComponentCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraComponentCameraNode.InnerSingleton;
}

// Z_Construct_UClass_UCameraDirectorStateTreeSchema_NoRegister @ 14d5d5a00

UClass * __cdecl Z_Construct_UClass_UCameraDirectorStateTreeSchema_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraDirectorStateTreeSchema.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CameraDirectorStateTreeSchema",
               &Z_Registration_Info_UClass_UCameraDirectorStateTreeSchema.InnerSingleton,
               UCameraDirectorStateTreeSchema::StaticRegisterNativesUCameraDirectorStateTreeSchema,
               0x38,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UCameraDirectorStateTreeSchema>,
               InternalVTableHelperCtorCaller<UCameraDirectorStateTreeSchema>,local_res8,
               UStateTreeSchema::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraDirectorStateTreeSchema.InnerSingleton;
}

// Z_Construct_UClass_UCameraObjectInterfaceParameterBase_NoRegister @ 14d5d5ac0

UClass * __cdecl Z_Construct_UClass_UCameraObjectInterfaceParameterBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraObjectInterfaceParameterBase.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CameraObjectInterfaceParameterBase",
               &Z_Registration_Info_UClass_UCameraObjectInterfaceParameterBase.InnerSingleton,
               UCameraObjectInterfaceParameterBase::
               StaticRegisterNativesUCameraObjectInterfaceParameterBase,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCameraObjectInterfaceParameterBase>,
               InternalVTableHelperCtorCaller<UCameraObjectInterfaceParameterBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraObjectInterfaceParameterBase.InnerSingleton;
}

// Z_Construct_UClass_UCameraRigParameterInteropLibrary_NoRegister @ 14d5d5b70

UClass * __cdecl Z_Construct_UClass_UCameraRigParameterInteropLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraRigParameterInteropLibrary.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CameraRigParameterInteropLibrary",
               &Z_Registration_Info_UClass_UCameraRigParameterInteropLibrary.InnerSingleton,
               UCameraRigParameterInteropLibrary::
               StaticRegisterNativesUCameraRigParameterInteropLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCameraRigParameterInteropLibrary>,
               InternalVTableHelperCtorCaller<UCameraRigParameterInteropLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraRigParameterInteropLibrary.InnerSingleton;
}

// Z_Construct_UClass_UCameraRigParameterInterop_NoRegister @ 14d5d5c30

UClass * __cdecl Z_Construct_UClass_UCameraRigParameterInterop_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraRigParameterInterop.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CameraRigParameterInterop",
               &Z_Registration_Info_UClass_UCameraRigParameterInterop.InnerSingleton,
               UCameraRigParameterInterop::StaticRegisterNativesUCameraRigParameterInterop,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UCameraRigParameterInterop>,
               InternalVTableHelperCtorCaller<UCameraRigParameterInterop>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraRigParameterInterop.InnerSingleton;
}

// Z_Construct_UClass_UCameraRigProxyTable_NoRegister @ 14d5d5cf0

UClass * __cdecl Z_Construct_UClass_UCameraRigProxyTable_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraRigProxyTable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CameraRigProxyTable",
               &Z_Registration_Info_UClass_UCameraRigProxyTable.InnerSingleton,
               UCameraRigProxyTable::StaticRegisterNativesUCameraRigProxyTable,0x38,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UCameraRigProxyTable>,
               InternalVTableHelperCtorCaller<UCameraRigProxyTable>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraRigProxyTable.InnerSingleton;
}

// Z_Construct_UClass_UCameraValueInterpolator_NoRegister @ 14d5d5da0

UClass * __cdecl Z_Construct_UClass_UCameraValueInterpolator_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraValueInterpolator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CameraValueInterpolator",
               &Z_Registration_Info_UClass_UCameraValueInterpolator.InnerSingleton,
               UCameraValueInterpolator::StaticRegisterNativesUCameraValueInterpolator,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UCameraValueInterpolator>,
               InternalVTableHelperCtorCaller<UCameraValueInterpolator>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraValueInterpolator.InnerSingleton;
}

// Z_Construct_UClass_UCameraVariableCollection_NoRegister @ 14d5d5e50

UClass * __cdecl Z_Construct_UClass_UCameraVariableCollection_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraVariableCollection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CameraVariableCollection",
               &Z_Registration_Info_UClass_UCameraVariableCollection.InnerSingleton,
               UCameraVariableCollection::StaticRegisterNativesUCameraVariableCollection,0x38,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UCameraVariableCollection>,
               InternalVTableHelperCtorCaller<UCameraVariableCollection>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraVariableCollection.InnerSingleton;
}

// Z_Construct_UClass_UCombinedCameraRigsCameraNode_NoRegister @ 14d5d5f00

UClass * __cdecl Z_Construct_UClass_UCombinedCameraRigsCameraNode_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCombinedCameraRigsCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CombinedCameraRigsCameraNode",
               &Z_Registration_Info_UClass_UCombinedCameraRigsCameraNode.InnerSingleton,
               UCombinedCameraRigsCameraNode::StaticRegisterNativesUCombinedCameraRigsCameraNode,
               0x48,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UCombinedCameraRigsCameraNode>,
               InternalVTableHelperCtorCaller<UCombinedCameraRigsCameraNode>,local_res8,
               UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCombinedCameraRigsCameraNode.InnerSingleton;
}

// Z_Construct_UClass_UCustomCameraNodeParameterProvider_NoRegister @ 14d5d5fc0

UClass * __cdecl Z_Construct_UClass_UCustomCameraNodeParameterProvider_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCustomCameraNodeParameterProvider.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CustomCameraNodeParameterProvider",
               &Z_Registration_Info_UClass_UCustomCameraNodeParameterProvider.InnerSingleton,
               UCustomCameraNodeParameterProvider::
               StaticRegisterNativesUCustomCameraNodeParameterProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UCustomCameraNodeParameterProvider>,
               InternalVTableHelperCtorCaller<UCustomCameraNodeParameterProvider>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCustomCameraNodeParameterProvider.InnerSingleton;
}

// Z_Construct_UClass_UDefaultRootCameraNode_NoRegister @ 14d5d6080

UClass * __cdecl Z_Construct_UClass_UDefaultRootCameraNode_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDefaultRootCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"DefaultRootCameraNode",
               &Z_Registration_Info_UClass_UDefaultRootCameraNode.InnerSingleton,
               UDefaultRootCameraNode::StaticRegisterNativesUDefaultRootCameraNode,0x58,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UDefaultRootCameraNode>,
               InternalVTableHelperCtorCaller<UDefaultRootCameraNode>,local_res8,
               URootCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDefaultRootCameraNode.InnerSingleton;
}

// Z_Construct_UClass_UObjectTreeGraphComment_NoRegister @ 14d5d6140

UClass * __cdecl Z_Construct_UClass_UObjectTreeGraphComment_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObjectTreeGraphComment.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"ObjectTreeGraphComment",
               &Z_Registration_Info_UClass_UObjectTreeGraphComment.InnerSingleton,
               UObjectTreeGraphComment::StaticRegisterNativesUObjectTreeGraphComment,0x30,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UObjectTreeGraphComment>
               ,InternalVTableHelperCtorCaller<UObjectTreeGraphComment>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectTreeGraphComment.InnerSingleton;
}

// Z_Construct_UClass_UPopValueInterpolator_NoRegister @ 14d5d61f0

UClass * __cdecl Z_Construct_UClass_UPopValueInterpolator_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPopValueInterpolator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"PopValueInterpolator",
               &Z_Registration_Info_UClass_UPopValueInterpolator.InnerSingleton,
               UPopValueInterpolator::StaticRegisterNativesUPopValueInterpolator,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UPopValueInterpolator>,
               InternalVTableHelperCtorCaller<UPopValueInterpolator>,local_res8,
               UCameraValueInterpolator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPopValueInterpolator.InnerSingleton;
}

// Z_Construct_UClass_UPriorityQueueCameraDirector_NoRegister @ 14d5d62b0

UClass * __cdecl Z_Construct_UClass_UPriorityQueueCameraDirector_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPriorityQueueCameraDirector.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"PriorityQueueCameraDirector",
               &Z_Registration_Info_UClass_UPriorityQueueCameraDirector.InnerSingleton,
               UPriorityQueueCameraDirector::StaticRegisterNativesUPriorityQueueCameraDirector,0x40,
               8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPriorityQueueCameraDirector>,
               InternalVTableHelperCtorCaller<UPriorityQueueCameraDirector>,local_res8,
               UCameraDirector::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPriorityQueueCameraDirector.InnerSingleton;
}

// Z_Construct_UClass_URootCameraNode_NoRegister @ 14d5d6370

UClass * __cdecl Z_Construct_UClass_URootCameraNode_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URootCameraNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"RootCameraNode",
               &Z_Registration_Info_UClass_URootCameraNode.InnerSingleton,
               URootCameraNode::StaticRegisterNativesURootCameraNode,0x38,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<URootCameraNode>,InternalVTableHelperCtorCaller<URootCameraNode>,
               local_res8,UCameraNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URootCameraNode.InnerSingleton;
}

// Z_Construct_UClass_USingleCameraDirector_NoRegister @ 14d5d6430

UClass * __cdecl Z_Construct_UClass_USingleCameraDirector_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USingleCameraDirector.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"SingleCameraDirector",
               &Z_Registration_Info_UClass_USingleCameraDirector.InnerSingleton,
               USingleCameraDirector::StaticRegisterNativesUSingleCameraDirector,0x48,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<USingleCameraDirector>,
               InternalVTableHelperCtorCaller<USingleCameraDirector>,local_res8,
               UCameraDirector::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USingleCameraDirector.InnerSingleton;
}

// Z_Construct_UClass_UStateTreeCameraDirector_NoRegister @ 14d5d64f0

UClass * __cdecl Z_Construct_UClass_UStateTreeCameraDirector_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStateTreeCameraDirector.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"StateTreeCameraDirector",
               &Z_Registration_Info_UClass_UStateTreeCameraDirector.InnerSingleton,
               UStateTreeCameraDirector::StaticRegisterNativesUStateTreeCameraDirector,0x68,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UStateTreeCameraDirector>,
               InternalVTableHelperCtorCaller<UStateTreeCameraDirector>,local_res8,
               UCameraDirector::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStateTreeCameraDirector.InnerSingleton;
}

// Z_Construct_UEnum_GameplayCameras_ECameraVariableSetterBlendType @ 14d5d65b0

UEnum * __cdecl Z_Construct_UEnum_GameplayCameras_ECameraVariableSetterBlendType(void)

{
  if (Z_Registration_Info_UEnum_ECameraVariableSetterBlendType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ECameraVariableSetterBlendType.InnerSingleton,
               &Z_Construct_UEnum_GameplayCameras_ECameraVariableSetterBlendType_Statics::EnumParams
              );
  }
  return Z_Registration_Info_UEnum_ECameraVariableSetterBlendType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FBooleanCameraVariableReference @ 14d5d65f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBooleanCameraVariableReference(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FBooleanCameraVariableReference.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FBooleanCameraVariableReference.InnerSingleton,
               &Z_Construct_UScriptStruct_FBooleanCameraVariableReference_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FBooleanCameraVariableReference.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FBooleanCameraVariableReference.InnerSingleton;
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

// Z_Construct_UScriptStruct_FCameraDirectorStateTreeEvaluationData @ 14d5d6670

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCameraDirectorStateTreeEvaluationData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCameraDirectorStateTreeEvaluationData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCameraDirectorStateTreeEvaluationData.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FCameraDirectorStateTreeEvaluationData_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCameraDirectorStateTreeEvaluationData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCameraDirectorStateTreeEvaluationData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FCameraObjectInterface @ 14d5d66f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCameraObjectInterface(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCameraObjectInterface.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCameraObjectInterface.InnerSingleton,
               &Z_Construct_UScriptStruct_FCameraObjectInterface_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCameraObjectInterface.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCameraObjectInterface.InnerSingleton;
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

// Z_Construct_UScriptStruct_FCameraPose @ 14d5d6770

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCameraPose(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCameraPose.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCameraPose.InnerSingleton,
               &Z_Construct_UScriptStruct_FCameraPose_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCameraPose.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCameraPose.InnerSingleton;
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

// Z_Construct_UScriptStruct_FCameraRigProxyRedirectTable @ 14d5d67f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCameraRigProxyRedirectTable(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCameraRigProxyRedirectTable.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCameraRigProxyRedirectTable.InnerSingleton,
               &Z_Construct_UScriptStruct_FCameraRigProxyRedirectTable_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCameraRigProxyRedirectTable.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCameraRigProxyRedirectTable.InnerSingleton;
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

// Z_Construct_UScriptStruct_FCameraRotatorCurve @ 14d5d6870

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCameraRotatorCurve(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCameraRotatorCurve.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCameraRotatorCurve.InnerSingleton,
               &Z_Construct_UScriptStruct_FCameraRotatorCurve_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCameraRotatorCurve.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FCameraRotatorCurve.InnerSingleton;
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

// Z_Construct_UScriptStruct_FCameraShakeAssetReference @ 14d5d68f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCameraShakeAssetReference(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCameraShakeAssetReference.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCameraShakeAssetReference.InnerSingleton,
               &Z_Construct_UScriptStruct_FCameraShakeAssetReference_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCameraShakeAssetReference.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCameraShakeAssetReference.InnerSingleton;
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

// Z_Construct_UScriptStruct_FCameraSingleCurve @ 14d5d6970

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCameraSingleCurve(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCameraSingleCurve.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCameraSingleCurve.InnerSingleton,
               &Z_Construct_UScriptStruct_FCameraSingleCurve_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCameraSingleCurve.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCameraSingleCurve.InnerSingleton;
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

// Z_Construct_UScriptStruct_FCameraVariableSetterHandle @ 14d5d69f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCameraVariableSetterHandle(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCameraVariableSetterHandle.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCameraVariableSetterHandle.InnerSingleton,
               &Z_Construct_UScriptStruct_FCameraVariableSetterHandle_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCameraVariableSetterHandle.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCameraVariableSetterHandle.InnerSingleton;
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

// Z_Construct_UScriptStruct_FCameraVariableTableAllocationInfo @ 14d5d6a70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCameraVariableTableAllocationInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCameraVariableTableAllocationInfo.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCameraVariableTableAllocationInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FCameraVariableTableAllocationInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCameraVariableTableAllocationInfo.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCameraVariableTableAllocationInfo.InnerSingleton;
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

// Z_Construct_UScriptStruct_FCameraVectorCurve @ 14d5d6af0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCameraVectorCurve(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCameraVectorCurve.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCameraVectorCurve.InnerSingleton,
               &Z_Construct_UScriptStruct_FCameraVectorCurve_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCameraVectorCurve.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCameraVectorCurve.InnerSingleton;
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

// Z_Construct_UScriptStruct_FCustomCameraNodeParameters @ 14d5d6b70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCustomCameraNodeParameters(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCustomCameraNodeParameters.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCustomCameraNodeParameters.InnerSingleton,
               &Z_Construct_UScriptStruct_FCustomCameraNodeParameters_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCustomCameraNodeParameters.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FCustomCameraNodeParameters.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDoubleCameraVariableReference @ 14d5d6bf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDoubleCameraVariableReference(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDoubleCameraVariableReference.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDoubleCameraVariableReference.InnerSingleton,
               &Z_Construct_UScriptStruct_FDoubleCameraVariableReference_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDoubleCameraVariableReference.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDoubleCameraVariableReference.InnerSingleton;
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

// Z_Construct_UScriptStruct_FFloatCameraVariableReference @ 14d5d6c70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FFloatCameraVariableReference(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FFloatCameraVariableReference.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FFloatCameraVariableReference.InnerSingleton,
               &Z_Construct_UScriptStruct_FFloatCameraVariableReference_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FFloatCameraVariableReference.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FFloatCameraVariableReference.InnerSingleton;
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

// Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigTask @ 14d5d6cf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigTask(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGameplayCamerasActivateCameraRigTask.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGameplayCamerasActivateCameraRigTask.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigTask_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGameplayCamerasActivateCameraRigTask.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGameplayCamerasActivateCameraRigTask.InnerSingleton;
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

// Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigTaskInstanceData @ 14d5d6d70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl
Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigTaskInstanceData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGameplayCamerasActivateCameraRigTaskInstanceData.
      InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGameplayCamerasActivateCameraRigTaskInstanceData.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigTaskInstanceData_Statics
                ::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGameplayCamerasActivateCameraRigTaskInstanceData.
      InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGameplayCamerasActivateCameraRigTaskInstanceData.
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

// Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigViaProxyTask @ 14d5d6df0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl
Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigViaProxyTask(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGameplayCamerasActivateCameraRigViaProxyTask.InnerSingleton
      == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGameplayCamerasActivateCameraRigViaProxyTask.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigViaProxyTask_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGameplayCamerasActivateCameraRigViaProxyTask.InnerSingleton
      != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGameplayCamerasActivateCameraRigViaProxyTask.
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

// Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigViaProxyTaskInstanceData @ 14d5d6e70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl
Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigViaProxyTaskInstanceData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGameplayCamerasActivateCameraRigViaProxyTaskInstanceData.
      InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGameplayCamerasActivateCameraRigViaProxyTaskInstanceData
                .InnerSingleton,
               &Z_Construct_UScriptStruct_FGameplayCamerasActivateCameraRigViaProxyTaskInstanceData_Statics
                ::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGameplayCamerasActivateCameraRigViaProxyTaskInstanceData.
      InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGameplayCamerasActivateCameraRigViaProxyTaskInstanceData
           .InnerSingleton;
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

// Z_Construct_UScriptStruct_FGameplayCamerasStateTreeCondition @ 14d5d6ef0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGameplayCamerasStateTreeCondition(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FGameplayCamerasStateTreeCondition.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FGameplayCamerasStateTreeCondition.InnerSingleton,
               &Z_Construct_UScriptStruct_FGameplayCamerasStateTreeCondition_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FGameplayCamerasStateTreeCondition.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FGameplayCamerasStateTreeCondition.InnerSingleton;
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

// Z_Construct_UScriptStruct_FInteger32CameraVariableReference @ 14d5d6f70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInteger32CameraVariableReference(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FInteger32CameraVariableReference.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FInteger32CameraVariableReference.InnerSingleton,
               &Z_Construct_UScriptStruct_FInteger32CameraVariableReference_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FInteger32CameraVariableReference.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FInteger32CameraVariableReference.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRotator3dCameraVariableReference @ 14d5d6ff0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRotator3dCameraVariableReference(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRotator3dCameraVariableReference.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRotator3dCameraVariableReference.InnerSingleton,
               &Z_Construct_UScriptStruct_FRotator3dCameraVariableReference_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRotator3dCameraVariableReference.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRotator3dCameraVariableReference.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRotator3fCameraVariableReference @ 14d5d7070

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRotator3fCameraVariableReference(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRotator3fCameraVariableReference.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRotator3fCameraVariableReference.InnerSingleton,
               &Z_Construct_UScriptStruct_FRotator3fCameraVariableReference_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRotator3fCameraVariableReference.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRotator3fCameraVariableReference.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTransform3dCameraVariableReference @ 14d5d70f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTransform3dCameraVariableReference(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTransform3dCameraVariableReference.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTransform3dCameraVariableReference.InnerSingleton
               ,&Z_Construct_UScriptStruct_FTransform3dCameraVariableReference_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FTransform3dCameraVariableReference.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTransform3dCameraVariableReference.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTransform3fCameraVariableReference @ 14d5d7170

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTransform3fCameraVariableReference(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTransform3fCameraVariableReference.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTransform3fCameraVariableReference.InnerSingleton
               ,&Z_Construct_UScriptStruct_FTransform3fCameraVariableReference_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FTransform3fCameraVariableReference.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTransform3fCameraVariableReference.InnerSingleton;
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

// Z_Construct_UScriptStruct_FVector2dCameraVariableReference @ 14d5d71f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FVector2dCameraVariableReference(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FVector2dCameraVariableReference.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FVector2dCameraVariableReference.InnerSingleton,
               &Z_Construct_UScriptStruct_FVector2dCameraVariableReference_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FVector2dCameraVariableReference.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FVector2dCameraVariableReference.InnerSingleton;
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

// Z_Construct_UScriptStruct_FVector2fCameraVariableReference @ 14d5d7270

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FVector2fCameraVariableReference(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FVector2fCameraVariableReference.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FVector2fCameraVariableReference.InnerSingleton,
               &Z_Construct_UScriptStruct_FVector2fCameraVariableReference_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FVector2fCameraVariableReference.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FVector2fCameraVariableReference.InnerSingleton;
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

// Z_Construct_UScriptStruct_FVector3dCameraVariableReference @ 14d5d72f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FVector3dCameraVariableReference(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FVector3dCameraVariableReference.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FVector3dCameraVariableReference.InnerSingleton,
               &Z_Construct_UScriptStruct_FVector3dCameraVariableReference_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FVector3dCameraVariableReference.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FVector3dCameraVariableReference.InnerSingleton;
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

// Z_Construct_UScriptStruct_FVector3fCameraVariableReference @ 14d5d7370

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FVector3fCameraVariableReference(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FVector3fCameraVariableReference.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FVector3fCameraVariableReference.InnerSingleton,
               &Z_Construct_UScriptStruct_FVector3fCameraVariableReference_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FVector3fCameraVariableReference.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FVector3fCameraVariableReference.InnerSingleton;
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

// Z_Construct_UScriptStruct_FVector4dCameraVariableReference @ 14d5d73f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FVector4dCameraVariableReference(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FVector4dCameraVariableReference.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FVector4dCameraVariableReference.InnerSingleton,
               &Z_Construct_UScriptStruct_FVector4dCameraVariableReference_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FVector4dCameraVariableReference.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FVector4dCameraVariableReference.InnerSingleton;
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

// Z_Construct_UScriptStruct_FVector4fCameraVariableReference @ 14d5d7470

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FVector4fCameraVariableReference(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FVector4fCameraVariableReference.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FVector4fCameraVariableReference.InnerSingleton,
               &Z_Construct_UScriptStruct_FVector4fCameraVariableReference_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FVector4fCameraVariableReference.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FVector4fCameraVariableReference.InnerSingleton;
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

// BlendStacks'' @ 150456c90

void __cdecl
`dynamic_atexit_destructor_for_'UE::Cameras::FCameraDebugCategories::BlendStacks__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UE::Cameras::FCameraDebugCategories::BlendStacks.Data.AllocatorInstance.Data;
  if (UE::Cameras::FCameraDebugCategories::BlendStacks.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (UE::Cameras::FCameraDebugCategories::BlendStacks.Data.AllocatorInstance.Data !=
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

// CachedBlendableStructs'' @ 150456cb0

void __cdecl
`dynamic_atexit_destructor_for_'UE::Cameras::FCameraVariableTable::CachedBlendableStructs__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UE::Cameras::FCameraVariableTable::CachedBlendableStructs.AllocatorInstance.Data;
  if (UE::Cameras::FCameraVariableTable::CachedBlendableStructs.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (UE::Cameras::FCameraVariableTable::CachedBlendableStructs.AllocatorInstance.Data !=
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

// ChannelName'' @ 150456cd0

void __cdecl `dynamic_atexit_destructor_for_'UE::Cameras::FCameraSystemTrace::ChannelName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UE::Cameras::FCameraSystemTrace::ChannelName.Data.AllocatorInstance.Data;
  if (UE::Cameras::FCameraSystemTrace::ChannelName.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (UE::Cameras::FCameraSystemTrace::ChannelName.Data.AllocatorInstance.Data !=
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

// ColorMap'' @ 150456cf0

void __cdecl `dynamic_atexit_destructor_for_'UE::Cameras::FCameraDebugColors::ColorMap__(void)

{
  UE::Cameras::FCameraDebugColors::ColorMap._72_4_ = 0;
  if (UE::Cameras::FCameraDebugColors::ColorMap._64_8_ != 0) {
    FMemory::Free((void *)UE::Cameras::FCameraDebugColors::ColorMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&UE::Cameras::FCameraDebugColors::ColorMap);
  return;
}

// ColorSchemes'' @ 150456d30

void __cdecl `dynamic_atexit_destructor_for_'UE::Cameras::FCameraDebugColors::ColorSchemes__(void)

{
  UE::Cameras::FCameraDebugColors::ColorSchemes._72_4_ = 0;
  if (UE::Cameras::FCameraDebugColors::ColorSchemes._64_8_ != 0) {
    FMemory::Free((void *)UE::Cameras::FCameraDebugColors::ColorSchemes._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,UE::Cameras::FCameraDebugColors>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,UE::Cameras::FCameraDebugColors>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,UE::Cameras::FCameraDebugColors>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&UE::Cameras::FCameraDebugColors::ColorSchemes);
  return;
}

// CurrentColorSchemeName'' @ 150456d70

void __cdecl
`dynamic_atexit_destructor_for_'UE::Cameras::FCameraDebugColors::CurrentColorSchemeName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UE::Cameras::FCameraDebugColors::CurrentColorSchemeName.Data.AllocatorInstance.Data;
  if (UE::Cameras::FCameraDebugColors::CurrentColorSchemeName.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (UE::Cameras::FCameraDebugColors::CurrentColorSchemeName.Data.AllocatorInstance.Data !=
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

// DirectorTree'' @ 150456d90

void __cdecl
`dynamic_atexit_destructor_for_'UE::Cameras::FCameraDebugCategories::DirectorTree__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UE::Cameras::FCameraDebugCategories::DirectorTree.Data.AllocatorInstance.Data;
  if (UE::Cameras::FCameraDebugCategories::DirectorTree.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (UE::Cameras::FCameraDebugCategories::DirectorTree.Data.AllocatorInstance.Data !=
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

// EvaluationEventName'' @ 150456db0

void __cdecl
`dynamic_atexit_destructor_for_'UE::Cameras::FCameraSystemTrace::EvaluationEventName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UE::Cameras::FCameraSystemTrace::EvaluationEventName.Data.AllocatorInstance.Data;
  if (UE::Cameras::FCameraSystemTrace::EvaluationEventName.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (UE::Cameras::FCameraSystemTrace::EvaluationEventName.Data.AllocatorInstance.Data !=
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

// GlobalCameraPoseLabel'' @ 150456dd0

void __cdecl
`dynamic_atexit_destructor_for_'UE::Cameras::FCameraPoseDebugBlock::GlobalCameraPoseLabel__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UE::Cameras::FCameraPoseDebugBlock::GlobalCameraPoseLabel.Data.AllocatorInstance.Data
  ;
  if (UE::Cameras::FCameraPoseDebugBlock::GlobalCameraPoseLabel.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (UE::Cameras::FCameraPoseDebugBlock::GlobalCameraPoseLabel.Data.AllocatorInstance.Data !=
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

// LoggerName'' @ 150456df0

void __cdecl `dynamic_atexit_destructor_for_'UE::Cameras::FCameraSystemTrace::LoggerName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UE::Cameras::FCameraSystemTrace::LoggerName.Data.AllocatorInstance.Data;
  if (UE::Cameras::FCameraSystemTrace::LoggerName.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (UE::Cameras::FCameraSystemTrace::LoggerName.Data.AllocatorInstance.Data !=
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

// NodeTree'' @ 150456e10

void __cdecl `dynamic_atexit_destructor_for_'UE::Cameras::FCameraDebugCategories::NodeTree__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UE::Cameras::FCameraDebugCategories::NodeTree.Data.AllocatorInstance.Data;
  if (UE::Cameras::FCameraDebugCategories::NodeTree.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (UE::Cameras::FCameraDebugCategories::NodeTree.Data.AllocatorInstance.Data !=
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

// PoseStats'' @ 150456e30

void __cdecl `dynamic_atexit_destructor_for_'UE::Cameras::FCameraDebugCategories::PoseStats__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UE::Cameras::FCameraDebugCategories::PoseStats.Data.AllocatorInstance.Data;
  if (UE::Cameras::FCameraDebugCategories::PoseStats.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (UE::Cameras::FCameraDebugCategories::PoseStats.Data.AllocatorInstance.Data !=
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

// Services'' @ 150456e50

void __cdecl `dynamic_atexit_destructor_for_'UE::Cameras::FCameraDebugCategories::Services__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UE::Cameras::FCameraDebugCategories::Services.Data.AllocatorInstance.Data;
  if (UE::Cameras::FCameraDebugCategories::Services.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (UE::Cameras::FCameraDebugCategories::Services.Data.AllocatorInstance.Data !=
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

// Viewfinder'' @ 150456e70

void __cdecl `dynamic_atexit_destructor_for_'UE::Cameras::FCameraDebugCategories::Viewfinder__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UE::Cameras::FCameraDebugCategories::Viewfinder.Data.AllocatorInstance.Data;
  if (UE::Cameras::FCameraDebugCategories::Viewfinder.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (UE::Cameras::FCameraDebugCategories::Viewfinder.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'CVarGameplayCamerasDebugBackgroundDepthSortKey'' @ 150456e90

void __cdecl
UE::Cameras::_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugBackgroundDepthSortKey__(void)

{
  CVarGameplayCamerasDebugBackgroundDepthSortKey._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarGameplayCamerasDebugBackgroundDepthSortKey);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGameplayCamerasDebugBackgroundOpacity'' @ 150456eb0

void __cdecl
UE::Cameras::_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugBackgroundOpacity__(void)

{
  CVarGameplayCamerasDebugBackgroundOpacity._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarGameplayCamerasDebugBackgroundOpacity);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGameplayCamerasDebugBlendStacksFilter'' @ 150456ed0

void __cdecl
UE::Cameras::_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugBlendStacksFilter__(void)

{
  CVarGameplayCamerasDebugBlendStacksFilter._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarGameplayCamerasDebugBlendStacksFilter);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGameplayCamerasDebugCameraPoseLabelWorldOffset'' @ 150456ef0

void __cdecl
UE::Cameras::_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugCameraPoseLabelWorldOffset__
          (void)

{
  CVarGameplayCamerasDebugCameraPoseLabelWorldOffset._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarGameplayCamerasDebugCameraPoseLabelWorldOffset);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGameplayCamerasDebugCardGap'' @ 150456f10

void __cdecl UE::Cameras::_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugCardGap__(void)

{
  CVarGameplayCamerasDebugCardGap._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarGameplayCamerasDebugCardGap);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGameplayCamerasDebugCardHeight'' @ 150456f30

void __cdecl UE::Cameras::_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugCardHeight__(void)

{
  CVarGameplayCamerasDebugCardHeight._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarGameplayCamerasDebugCardHeight)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarGameplayCamerasDebugCardWidth'' @ 150456f50

void __cdecl UE::Cameras::_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugCardWidth__(void)

{
  CVarGameplayCamerasDebugCardWidth._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarGameplayCamerasDebugCardWidth);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGameplayCamerasDebugCategories'' @ 150456f70

void __cdecl UE::Cameras::_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugCategories__(void)

{
  CVarGameplayCamerasDebugCategories._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarGameplayCamerasDebugCategories)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarGameplayCamerasDebugClockArrowThickness'' @ 150456f90

void __cdecl
UE::Cameras::_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugClockArrowThickness__(void)

{
  CVarGameplayCamerasDebugClockArrowThickness._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarGameplayCamerasDebugClockArrowThickness);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGameplayCamerasDebugClockPadding'' @ 150456fb0

void __cdecl
UE::Cameras::_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugClockPadding__(void)

{
  CVarGameplayCamerasDebugClockPadding._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarGameplayCamerasDebugClockPadding);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGameplayCamerasDebugColorScheme'' @ 150456fd0

void __cdecl
UE::Cameras::_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugColorScheme__(void)

{
  CVarGameplayCamerasDebugColorScheme._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarGameplayCamerasDebugColorScheme);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGameplayCamerasDebugContextInitialResultShowCoordinateSystem'' @ 150456ff0

void __cdecl
UE::Cameras::
_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugContextInitialResultShowCoordinateSystem__
          (void)

{
  CVarGameplayCamerasDebugContextInitialResultShowCoordinateSystem._0_8_ =
       &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarGameplayCamerasDebugContextInitialResultShowCoordinateSystem
            );
  return;
}

// `dynamic_atexit_destructor_for_'CVarGameplayCamerasDebugContextInitialResultShowDataIDs'' @ 150457010

void __cdecl
UE::Cameras::
_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugContextInitialResultShowDataIDs__(void)

{
  CVarGameplayCamerasDebugContextInitialResultShowDataIDs._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarGameplayCamerasDebugContextInitialResultShowDataIDs);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGameplayCamerasDebugContextInitialResultShowUnchanged'' @ 150457030

void __cdecl
UE::Cameras::
_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugContextInitialResultShowUnchanged__(void)

{
  CVarGameplayCamerasDebugContextInitialResultShowUnchanged._0_8_ =
       &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarGameplayCamerasDebugContextInitialResultShowUnchanged);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGameplayCamerasDebugContextInitialResultShowVariableIDs'' @ 150457050

void __cdecl
UE::Cameras::
_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugContextInitialResultShowVariableIDs__(void)

{
  CVarGameplayCamerasDebugContextInitialResultShowVariableIDs._0_8_ =
       &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarGameplayCamerasDebugContextInitialResultShowVariableIDs);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGameplayCamerasDebugDefaultCameraSize'' @ 150457070

void __cdecl
UE::Cameras::_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugDefaultCameraSize__(void)

{
  CVarGameplayCamerasDebugDefaultCameraSize._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarGameplayCamerasDebugDefaultCameraSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGameplayCamerasDebugDefaultCoordinateSystemAxesLength'' @ 150457090

void __cdecl
UE::Cameras::
_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugDefaultCoordinateSystemAxesLength__(void)

{
  CVarGameplayCamerasDebugDefaultCoordinateSystemAxesLength._0_8_ =
       &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarGameplayCamerasDebugDefaultCoordinateSystemAxesLength);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGameplayCamerasDebugDrawBackground'' @ 1504570b0

void __cdecl
UE::Cameras::_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugDrawBackground__(void)

{
  CVarGameplayCamerasDebugDrawBackground._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarGameplayCamerasDebugDrawBackground);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGameplayCamerasDebugEnable'' @ 1504570d0

void __cdecl UE::Cameras::_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugEnable__(void)

{
  CVarGameplayCamerasDebugEnable._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarGameplayCamerasDebugEnable);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGameplayCamerasDebugGraphDefaultHistoryTime'' @ 1504570f0

void __cdecl
UE::Cameras::_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugGraphDefaultHistoryTime__(void)

{
  CVarGameplayCamerasDebugGraphDefaultHistoryTime._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarGameplayCamerasDebugGraphDefaultHistoryTime);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGameplayCamerasDebugGraphPadding'' @ 150457110

void __cdecl
UE::Cameras::_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugGraphPadding__(void)

{
  CVarGameplayCamerasDebugGraphPadding._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarGameplayCamerasDebugGraphPadding);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGameplayCamerasDebugIndent'' @ 150457130

void __cdecl UE::Cameras::_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugIndent__(void)

{
  CVarGameplayCamerasDebugIndent._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarGameplayCamerasDebugIndent);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGameplayCamerasDebugInnerMargin'' @ 150457150

void __cdecl
UE::Cameras::_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugInnerMargin__(void)

{
  CVarGameplayCamerasDebugInnerMargin._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarGameplayCamerasDebugInnerMargin);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGameplayCamerasDebugLeftMargin'' @ 150457170

void __cdecl UE::Cameras::_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugLeftMargin__(void)

{
  CVarGameplayCamerasDebugLeftMargin._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarGameplayCamerasDebugLeftMargin)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarGameplayCamerasDebugMaxCardColumns'' @ 150457190

void __cdecl
UE::Cameras::_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugMaxCardColumns__(void)

{
  CVarGameplayCamerasDebugMaxCardColumns._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarGameplayCamerasDebugMaxCardColumns);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGameplayCamerasDebugNodeTreeFilter'' @ 1504571b0

void __cdecl
UE::Cameras::_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugNodeTreeFilter__(void)

{
  CVarGameplayCamerasDebugNodeTreeFilter._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarGameplayCamerasDebugNodeTreeFilter);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGameplayCamerasDebugPoseStatsShowDataIDs'' @ 1504571d0

void __cdecl
UE::Cameras::_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugPoseStatsShowDataIDs__(void)

{
  CVarGameplayCamerasDebugPoseStatsShowDataIDs._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarGameplayCamerasDebugPoseStatsShowDataIDs);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGameplayCamerasDebugPoseStatsShowUnchanged'' @ 1504571f0

void __cdecl
UE::Cameras::_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugPoseStatsShowUnchanged__(void)

{
  CVarGameplayCamerasDebugPoseStatsShowUnchanged._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarGameplayCamerasDebugPoseStatsShowUnchanged);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGameplayCamerasDebugPoseStatsShowVariableIDs'' @ 150457210

void __cdecl
UE::Cameras::_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugPoseStatsShowVariableIDs__
          (void)

{
  CVarGameplayCamerasDebugPoseStatsShowVariableIDs._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarGameplayCamerasDebugPoseStatsShowVariableIDs);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGameplayCamerasDebugRightMargin'' @ 150457230

void __cdecl
UE::Cameras::_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugRightMargin__(void)

{
  CVarGameplayCamerasDebugRightMargin._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarGameplayCamerasDebugRightMargin);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGameplayCamerasDebugSystemID'' @ 150457250

void __cdecl UE::Cameras::_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugSystemID__(void)

{
  CVarGameplayCamerasDebugSystemID._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarGameplayCamerasDebugSystemID);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGameplayCamerasDebugTopMargin'' @ 150457270

void __cdecl UE::Cameras::_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugTopMargin__(void)

{
  CVarGameplayCamerasDebugTopMargin._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarGameplayCamerasDebugTopMargin);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGameplayCamerasDebugTrace'' @ 150457290

void __cdecl UE::Cameras::_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugTrace__(void)

{
  CVarGameplayCamerasDebugTrace._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarGameplayCamerasDebugTrace);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGameplayCamerasDebugViewfinderGuidesGapFactor'' @ 1504572b0

void __cdecl
UE::Cameras::_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugViewfinderGuidesGapFactor__
          (void)

{
  CVarGameplayCamerasDebugViewfinderGuidesGapFactor._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarGameplayCamerasDebugViewfinderGuidesGapFactor);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGameplayCamerasDebugViewfinderReticleInnerSizeFactor'' @ 1504572d0

void __cdecl
UE::Cameras::
_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugViewfinderReticleInnerSizeFactor__(void)

{
  CVarGameplayCamerasDebugViewfinderReticleInnerSizeFactor._0_8_ = &___7FAutoConsoleVariableRef__6B_
  ;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarGameplayCamerasDebugViewfinderReticleInnerSizeFactor);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGameplayCamerasDebugViewfinderReticleNumSides'' @ 1504572f0

void __cdecl
UE::Cameras::_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugViewfinderReticleNumSides__
          (void)

{
  CVarGameplayCamerasDebugViewfinderReticleNumSides._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarGameplayCamerasDebugViewfinderReticleNumSides);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGameplayCamerasDebugViewfinderReticleSizeFactor'' @ 150457310

void __cdecl
UE::Cameras::_dynamic_atexit_destructor_for__CVarGameplayCamerasDebugViewfinderReticleSizeFactor__
          (void)

{
  CVarGameplayCamerasDebugViewfinderReticleSizeFactor._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarGameplayCamerasDebugViewfinderReticleSizeFactor);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGameplayCamerasDefaultMinFstop'' @ 150457330

void __cdecl _dynamic_atexit_destructor_for__CVarGameplayCamerasDefaultMinFstop__(void)

{
  CVarGameplayCamerasDefaultMinFstop._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarGameplayCamerasDefaultMinFstop)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'GGameplayCamerasDebugBlendStacksFilter'' @ 150457350

void __cdecl
UE::Cameras::_dynamic_atexit_destructor_for__GGameplayCamerasDebugBlendStacksFilter__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = GGameplayCamerasDebugBlendStacksFilter.Data.AllocatorInstance.Data;
  if (GGameplayCamerasDebugBlendStacksFilter.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (GGameplayCamerasDebugBlendStacksFilter.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'GGameplayCamerasDebugCategories'' @ 150457370

void __cdecl UE::Cameras::_dynamic_atexit_destructor_for__GGameplayCamerasDebugCategories__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = GGameplayCamerasDebugCategories.Data.AllocatorInstance.Data;
  if (GGameplayCamerasDebugCategories.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
  {
    return;
  }
  if (GGameplayCamerasDebugCategories.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
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

// `dynamic_atexit_destructor_for_'GGameplayCamerasDebugColorScheme'' @ 150457390

void __cdecl UE::Cameras::_dynamic_atexit_destructor_for__GGameplayCamerasDebugColorScheme__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = GGameplayCamerasDebugColorScheme.Data.AllocatorInstance.Data;
  if (GGameplayCamerasDebugColorScheme.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0
     ) {
    return;
  }
  if (GGameplayCamerasDebugColorScheme.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
     ) {
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

// `dynamic_atexit_destructor_for_'GGameplayCamerasDebugNodeTreeFilter'' @ 1504573b0

void __cdecl
UE::Cameras::_dynamic_atexit_destructor_for__GGameplayCamerasDebugNodeTreeFilter__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = GGameplayCamerasDebugNodeTreeFilter.Data.AllocatorInstance.Data;
  if (GGameplayCamerasDebugNodeTreeFilter.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (GGameplayCamerasDebugNodeTreeFilter.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'GUnavailableVariableDebugName'' @ 1504573d0

void __cdecl
UE::Cameras::Private::_dynamic_atexit_destructor_for__GUnavailableVariableDebugName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = GUnavailableVariableDebugName.Data.AllocatorInstance.Data;
  if (GUnavailableVariableDebugName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (GUnavailableVariableDebugName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'Instance'' @ 1504573f0

void __cdecl
`UE::Cameras::FCameraSystemDebugRegistry::Get'::__l2::_dynamic_atexit_destructor_for__Instance__
          (void)

{
  TSparseArray<UE::Cameras::FCameraSystemDebugRegistry::FEntry,FDefaultSparseArrayAllocator>::
  DestroyElements(&::Instance.Entries,0,::Instance.Entries._8_4_);
  ::Instance.Entries._8_4_ = 0;
  if (::Instance.Entries._12_4_ != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)&::Instance,0,(int *)&::Instance.Entries.field_0xc);
  }
  ::Instance.Entries._48_4_ = 0xffffffff;
  ::Instance.Entries._52_4_ = 0;
  ::Instance.Entries._40_4_ = 0;
  if (0x80 < (uint)::Instance.Entries._44_4_) {
    ::Instance.Entries._44_4_ = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&::Instance.Entries.field_0x10,0);
  }
  if (::Instance.Entries._32_8_ != 0) {
    FMemory::Free((void *)::Instance.Entries._32_8_);
  }
  if (::Instance.Entries._0_8_ != 0) {
    FMemory::Free((void *)::Instance.Entries._0_8_);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'StaticField'' @ 1504574c0

void __cdecl
`UE::Cameras::FCombinedCameraRigCameraDebugBlock::GetCameraRigIndexField'::__l2::
_dynamic_atexit_destructor_for__StaticField__(void)

{
  `private:_static_struct_UE::Cameras::TCameraDebugBlockField<int>*___ptr64___cdecl_UE::Cameras::FCombinedCameraRigCameraDebugBlock::GetCameraRigIndexField(void)'
  ::__l2::StaticField._0_8_ = &___7FCameraDebugBlockField_Cameras_UE__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'StaticField'' @ 1504574e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`UE::Cameras::FCombinedCameraRigCameraDebugBlock::GetCameraRigNameField'::__l2::
_dynamic_atexit_destructor_for__StaticField__(void)

{
  _StaticField = &___7FCameraDebugBlockField_Cameras_UE__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'StaticFields'' @ 150457500

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`UE::Cameras::FCombinedCameraRigCameraDebugBlock::GetStaticFields'::__l2::
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

// `dynamic_atexit_destructor_for_'StaticFields'' @ 150457520

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`UE::Cameras::FDefaultRootCameraNodeEvaluatorDebugBlock::GetStaticFields'::__l2::
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

// `dynamic_atexit_destructor_for_'StaticRegistry'' @ 150457540

void __cdecl
`UE::Cameras::FCameraObjectTypeRegistry::Get'::__l2::
_dynamic_atexit_destructor_for__StaticRegistry__(void)

{
  StaticRegistry.TypeInfos._8_4_ = 0;
  if (StaticRegistry.TypeInfos._12_4_ != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)&StaticRegistry.TypeInfos,0,
               (int *)&StaticRegistry.TypeInfos.field_0xc);
  }
  StaticRegistry.TypeInfos._48_4_ = 0xffffffff;
  StaticRegistry.TypeInfos._52_4_ = 0;
  StaticRegistry.TypeInfos._40_4_ = 0;
  if (0x80 < (uint)StaticRegistry.TypeInfos._44_4_) {
    StaticRegistry.TypeInfos._44_4_ = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&StaticRegistry.TypeInfos.field_0x10,0);
  }
  if (StaticRegistry.TypeInfos._32_8_ != 0) {
    FMemory::Free((void *)StaticRegistry.TypeInfos._32_8_);
  }
  if (StaticRegistry.TypeInfos._0_8_ != 0) {
    FMemory::Free((void *)StaticRegistry.TypeInfos._0_8_);
  }
  StaticRegistry.TypeIDsByName._72_4_ = 0;
  if (StaticRegistry.TypeIDsByName._64_8_ != 0) {
    FMemory::Free((void *)StaticRegistry.TypeIDsByName._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&StaticRegistry);
  return;
}

