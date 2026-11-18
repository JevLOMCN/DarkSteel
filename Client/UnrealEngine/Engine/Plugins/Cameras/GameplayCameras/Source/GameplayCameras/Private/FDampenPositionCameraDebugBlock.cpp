// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 5

// GetStaticFields @ 14d61ded0

TArray<UE::Cameras::FCameraDebugBlockField_*,TSizedDefaultAllocator<32>_> * __cdecl
UE::Cameras::FDampenPositionCameraDebugBlock::GetStaticFields(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_TArray<UE::Cameras::FCameraDebugBlockField*___ptr64,TSizedDefaultAllocator<32>_>&___ptr64___cdecl_UE::Cameras::FDampenPositionCameraDebugBlock::GetStaticFields(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_TArray<UE::Cameras::FCameraDebugBlockField*___ptr64,TSizedDefaultAllocator<32>_>&___ptr64___cdecl_UE::Cameras::FDampenPositionCameraDebugBlock::GetStaticFields(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_TArray<UE::Cameras::FCameraDebugBlockField*___ptr64,TSizedDefaultAllocator<32>_>&___ptr64___cdecl_UE::Cameras::FDampenPositionCameraDebugBlock::GetStaticFields(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`UE::Cameras::FDampenPositionCameraDebugBlock::GetStaticFields'::__l2::
             _dynamic_atexit_destructor_for__StaticFields__);
      _Init_thread_footer(&`private:_static_class_TArray<UE::Cameras::FCameraDebugBlockField*___ptr64,TSizedDefaultAllocator<32>_>&___ptr64___cdecl_UE::Cameras::FDampenPositionCameraDebugBlock::GetStaticFields(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return (TArray<UE::Cameras::FCameraDebugBlockField_*,TSizedDefaultAllocator<32>_> *)
         &`private:_static_class_TArray<UE::Cameras::FCameraDebugBlockField*___ptr64,TSizedDefaultAllocator<32>_>&___ptr64___cdecl_UE::Cameras::FDampenPositionCameraDebugBlock::GetStaticFields(void)'
          ::__l2::StaticFields;
}

// GetTypeID @ 14d61e570

FCameraObjectTypeID * __thiscall
UE::Cameras::FDampenPositionCameraDebugBlock::GetTypeID(FDampenPositionCameraDebugBlock *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d621160

bool __thiscall
UE::Cameras::FDampenPositionCameraDebugBlock::IsKindOf
          (FDampenPositionCameraDebugBlock *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FDampenPositionCameraDebugBlock>)param_1->ID !=
       PrivateTypeID) &&
     ((TCameraObjectTypeID<UE::Cameras::FCameraDebugBlock>)param_1->ID !=
      FCameraDebugBlock::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnDebugDraw @ 14d626b90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Cameras::FDampenPositionCameraDebugBlock::OnDebugDraw
          (FDampenPositionCameraDebugBlock *this,FCameraDebugBlockDrawParams *param_1,
          FCameraDebugRenderer *param_2)

{
  double dVar1;
  double dVar2;
  float fVar3;
  double dVar4;
  TVector<double> *pTVar5;
  double local_78;
  double dStack_70;
  undefined8 local_68;
  double local_60;
  double dStack_58;
  undefined8 local_50;
  TVector<double> local_48 [2];
  
  FCameraDebugRenderer::AddText
            (param_2,
             L"forward %.3f (factor %.3f)  lateral %.3f (factor %.3f)  vertical %.3f (factor %.3f)")
  ;
  dVar2 = _UNK_1512468d8;
  dVar4 = ___xmm_40590000000000004059000000000000;
  fVar3 = __real_3f800000;
  if (param_2->bIsExternalRendering != false) {
    if (GGameplayCamerasDebugDampingShowLocalSpace != false) {
      local_68 = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z *
                 ___xmm_40590000000000004059000000000000;
      unique0x100000d4 =
           SUB84(UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y * _UNK_1512468d8,0);
      local_78 = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X *
                 ___xmm_40590000000000004059000000000000;
      unique0x100000d8 =
           (int)((ulonglong)
                 (UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y * _UNK_1512468d8) >>
                0x20);
      pTVar5 = UE::Math::TRotator<double>::RotateVector
                         (&this->DampingRotation,local_48,(TVector<double> *)&local_78);
      local_50 = (pTVar5->field0_0x0)._s_0.Z + (this->UndampedPosition).field0_0x0._s_0.Z;
      dStack_58 = (pTVar5->field0_0x0)._s_0.Y + (this->UndampedPosition).field0_0x0._s_0.Y;
      local_60 = (pTVar5->field0_0x0)._s_0.X + (this->UndampedPosition).field0_0x0._s_0.X;
      FCameraDebugRenderer::DrawLine
                (param_2,&this->UndampedPosition,(TVector<double> *)&local_60,&FLinearColor::Red,
                 fVar3);
      dVar1 = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y * dVar2;
      unique0x100000f8 = SUB84(dVar1,0);
      local_60 = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X * dVar4;
      unique0x100000fc = (int)((ulonglong)dVar1 >> 0x20);
      local_50 = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z * dVar4;
      pTVar5 = UE::Math::TRotator<double>::RotateVector
                         (&this->DampingRotation,local_48,(TVector<double> *)&local_60);
      local_68 = (pTVar5->field0_0x0)._s_0.Z + (this->UndampedPosition).field0_0x0._s_0.Z;
      dStack_70 = (pTVar5->field0_0x0)._s_0.Y + (this->UndampedPosition).field0_0x0._s_0.Y;
      local_78 = (pTVar5->field0_0x0)._s_0.X + (this->UndampedPosition).field0_0x0._s_0.X;
      FCameraDebugRenderer::DrawLine
                (param_2,&this->UndampedPosition,(TVector<double> *)&local_78,&FLinearColor::Green,
                 fVar3);
      dVar2 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y * dVar2;
      unique0x1000011c = SUB84(dVar2,0);
      local_60 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X * dVar4;
      unique0x10000120 = (int)((ulonglong)dVar2 >> 0x20);
      local_50 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z * dVar4;
      pTVar5 = UE::Math::TRotator<double>::RotateVector
                         (&this->DampingRotation,local_48,(TVector<double> *)&local_60);
      local_68 = (pTVar5->field0_0x0)._s_0.Z + (this->UndampedPosition).field0_0x0._s_0.Z;
      dStack_70 = (pTVar5->field0_0x0)._s_0.Y + (this->UndampedPosition).field0_0x0._s_0.Y;
      local_78 = (pTVar5->field0_0x0)._s_0.X + (this->UndampedPosition).field0_0x0._s_0.X;
      FCameraDebugRenderer::DrawLine
                (param_2,&this->UndampedPosition,(TVector<double> *)&local_78,&FLinearColor::Blue,
                 fVar3);
    }
    FCameraDebugRenderer::DrawLine
              (param_2,&this->UndampedPosition,&this->DampedPosition,&FLinearColor::Yellow,fVar3);
  }
  return;
}

// OnSerialize @ 14d62d9d0

void __thiscall
UE::Cameras::FDampenPositionCameraDebugBlock::OnSerialize
          (FDampenPositionCameraDebugBlock *this,FArchive *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TArray<UE::Cameras::FCameraDebugBlockField_*,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res18 [8];
  
  pTVar3 = GetStaticFields();
  pFVar4 = (pTVar3->AllocatorInstance).Data;
  iVar2 = pTVar3->ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if (pTVar3->ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Cameras::FCameraDebugBlockField_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar4 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar4 + 8))(*(longlong **)pFVar4,this,param_1);
    pFVar4 = pFVar4 + 8;
  }
  return;
}

