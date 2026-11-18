// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 5

// GetStaticFields @ 14d61de60

TArray<UE::Cameras::FCameraDebugBlockField_*,TSizedDefaultAllocator<32>_> * __cdecl
UE::Cameras::FCollisionPushCameraDebugBlock::GetStaticFields(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_TArray<UE::Cameras::FCameraDebugBlockField*___ptr64,TSizedDefaultAllocator<32>_>&___ptr64___cdecl_UE::Cameras::FCollisionPushCameraDebugBlock::GetStaticFields(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_TArray<UE::Cameras::FCameraDebugBlockField*___ptr64,TSizedDefaultAllocator<32>_>&___ptr64___cdecl_UE::Cameras::FCollisionPushCameraDebugBlock::GetStaticFields(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_TArray<UE::Cameras::FCameraDebugBlockField*___ptr64,TSizedDefaultAllocator<32>_>&___ptr64___cdecl_UE::Cameras::FCollisionPushCameraDebugBlock::GetStaticFields(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`UE::Cameras::FCollisionPushCameraDebugBlock::GetStaticFields'::__l2::
             _dynamic_atexit_destructor_for__StaticFields__);
      _Init_thread_footer(&`private:_static_class_TArray<UE::Cameras::FCameraDebugBlockField*___ptr64,TSizedDefaultAllocator<32>_>&___ptr64___cdecl_UE::Cameras::FCollisionPushCameraDebugBlock::GetStaticFields(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return (TArray<UE::Cameras::FCameraDebugBlockField_*,TSizedDefaultAllocator<32>_> *)
         &`private:_static_class_TArray<UE::Cameras::FCameraDebugBlockField*___ptr64,TSizedDefaultAllocator<32>_>&___ptr64___cdecl_UE::Cameras::FCollisionPushCameraDebugBlock::GetStaticFields(void)'
          ::__l2::StaticFields;
}

// GetTypeID @ 14d61e550

FCameraObjectTypeID * __thiscall
UE::Cameras::FCollisionPushCameraDebugBlock::GetTypeID(FCollisionPushCameraDebugBlock *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d621120

bool __thiscall
UE::Cameras::FCollisionPushCameraDebugBlock::IsKindOf
          (FCollisionPushCameraDebugBlock *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FCollisionPushCameraDebugBlock>)param_1->ID !=
       PrivateTypeID) &&
     ((TCameraObjectTypeID<UE::Cameras::FCameraDebugBlock>)param_1->ID !=
      FCameraDebugBlock::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnDebugDraw @ 14d6268d0

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
UE::Cameras::FCollisionPushCameraDebugBlock::OnDebugDraw
          (FCollisionPushCameraDebugBlock *this,FCameraDebugBlockDrawParams *param_1,
          FCameraDebugRenderer *param_2)

{
  ECollisionSafePosition EVar1;
  ECollisionSafePositionOffsetSpace EVar2;
  UFont *pUVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FColor local_res8 [2];
  TStringView<wchar_t> local_38;
  TVector2<double>_u_0 local_28;
  
  if (this->bCollisionEnabled == false) {
    FCameraDebugRenderer::AddText(param_2,L"collision disabled");
    return;
  }
  if (this->DampedPushFactor <= 0.0) {
    FCameraDebugRenderer::AddText(param_2,L"not pushing");
  }
  else {
    FCameraDebugRenderer::AddText(param_2,L"need to push by %.2f%%, currently %.2f%% [%s]");
    if (this->bFoundHit != false) {
      if ((this->HitObjectName).Data.ArrayNum == 0) {
        FCameraDebugRenderer::AddText(param_2,L" (colliding with \'%s\')");
      }
      else {
        FCameraDebugRenderer::AddText(param_2,L" (colliding with \'%s\')");
      }
    }
  }
  FCameraDebugColors::Get();
  pwVar5 = L"unknown error";
  if (this->bGotSafePosition == false) {
    FCameraDebugRenderer::NewLine(param_2,false);
    FCameraDebugRenderer::SetTextColor(param_2,local_res8);
    FCameraDebugRenderer::AddText(param_2,L"can\'t get safe position: ");
    EVar1 = this->SafePositionType;
    if (EVar1 == ActiveContext) {
      pwVar4 = L"no active context";
    }
    else if (EVar1 == Pivot) {
      pwVar4 = L"no pivot nor active context";
    }
    else if (EVar1 == Pawn) {
      pwVar4 = L"no active context nor player controller";
    }
    else {
      pwVar4 = L"unknown error";
    }
    FCameraDebugRenderer::AddText(param_2,pwVar4);
    FCameraDebugRenderer::SetTextColor(param_2,local_res8);
  }
  if (this->bGotSafePositionOffset == false) {
    FCameraDebugRenderer::NewLine(param_2,false);
    FCameraDebugRenderer::SetTextColor(param_2,local_res8);
    FCameraDebugRenderer::AddText(param_2,L"can\'t get safe position offset space: ");
    EVar2 = this->SafePositionOffsetSpace;
    if (EVar2 == ActiveContext) {
      pwVar5 = L"no active context";
    }
    else if (EVar2 == Pivot) {
      pwVar5 = L"no pivot nor active context";
    }
    else if (EVar2 == Pawn) {
      pwVar5 = L"no active context nor player controller";
    }
    FCameraDebugRenderer::AddText(param_2,pwVar5);
    FCameraDebugRenderer::SetTextColor(param_2,local_res8);
  }
  if ((param_2->bIsExternalRendering != false) && (this->bGotSafePosition != false)) {
    local_28._s_0.X = ___xmm_c034000000000000c034000000000000;
    local_28._s_0.Y = _UNK_152b53ab8;
    FCameraDebugRenderer::DrawPoint
              (param_2,&this->SafePosition,__real_40000000,&FLinearColor::Gray,__real_40000000);
    pUVar3 = UEngine::GetTinyFont();
    local_38.Size = 0xd;
    local_38.DataPtr = L"Safe Position";
    FCameraDebugRenderer::DrawTextView
              (param_2,&this->SafePosition,(TVector2<double> *)&local_28._s_0,&local_38,
               &FLinearColor::Gray,pUVar3,__real_3f800000);
  }
  return;
}

// OnSerialize @ 14d62d950

void __thiscall
UE::Cameras::FCollisionPushCameraDebugBlock::OnSerialize
          (FCollisionPushCameraDebugBlock *this,FArchive *param_1)

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

