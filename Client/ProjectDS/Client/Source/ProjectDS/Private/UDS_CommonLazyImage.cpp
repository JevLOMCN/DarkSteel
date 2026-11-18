// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 32

// SetIconID_WrapperImpl @ 14b462020

void __cdecl UDS_CommonLazyImage::SetIconID_WrapperImpl(void *param_1,void *param_2)

{
  SetIconID(param_1,*(int *)param_2);
  return;
}

// SetDSTextIcon_WrapperImpl @ 14b462030

void __cdecl UDS_CommonLazyImage::SetDSTextIcon_WrapperImpl(void *param_1,void *param_2)

{
  longlong lVar1;
  FString *pFVar2;
  FString FStack_18;
  
  lVar1 = *(longlong *)param_2;
  ((FDS_TextIcon *)((longlong)param_1 + 0x4b8))->TextIconID = lVar1;
  if (0 < lVar1) {
    pFVar2 = FDS_TextIcon::GetIconPath((FDS_TextIcon *)((longlong)param_1 + 0x4b8),&FStack_18);
    SetIconByPath(param_1,pFVar2);
    if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// SetBrushObjectPath_WrapperImpl @ 14b462040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UDS_CommonLazyImage::SetBrushObjectPath_WrapperImpl(void *param_1,void *param_2)

{
  FScriptContainerElement *pFVar1;
  FSoftObjectPath *pFVar2;
  UObject *pUVar3;
  code **ppcVar4;
  undefined1 auStack_118 [32];
  FWeakObjectPtr FStack_f8;
  TPersistentObjectPtr<FSoftObjectPath> TStack_f0;
  void *pvStack_c8;
  FWeakObjectPtr FStack_c0;
  FName FStack_b8;
  FSoftObjectPath FStack_b0;
  undefined1 uStack_90;
  undefined1 auStack_88 [48];
  code *apcStack_58 [2];
  code *apcStack_48 [3];
  code **ppcStack_30;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStack_118;
  if (*(longlong *)param_2 != 0) {
    pFVar2 = FSoftObjectPath::FSoftObjectPath((FSoftObjectPath *)auStack_88,param_2);
    TStack_f0.WeakPtr.ObjectIndex = 0;
    TStack_f0.WeakPtr.ObjectSerialNumber = 0;
    FSoftObjectPath::FSoftObjectPath(&TStack_f0.ObjectID,pFVar2);
    pFVar1 = (pFVar2->SubPathString).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pUVar3 = TPersistentObjectPtr<FSoftObjectPath>::Get(&TStack_f0);
    if (pUVar3 == (UObject *)0x0) {
      if (TStack_f0.ObjectID.AssetPath.PackageName == (FName)0x0) {
        FStack_f8 = (FWeakObjectPtr)&TStack_f0;
        `UDS_CommonLazyImage::SetBrushObjectPath'::__l14::<lambda_1>::operator()(&FStack_f8);
      }
      else if (TStack_f0.ObjectID.AssetPath.PackageName != (FName)0x0) {
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (void *)0x0)) {
          UE::GC::MarkAsReachable(param_1);
        }
        FStack_f8.ObjectIndex = 0;
        FStack_f8.ObjectSerialNumber = 0;
        pvStack_c8 = param_1;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (void *)0x0)) {
          UE::GC::MarkAsReachable(param_1);
        }
        FWeakObjectPtr::operator=(&FStack_f8,(FObjectPtr)&pvStack_c8);
        FStack_c0 = FStack_f8;
        FStack_b8.ComparisonIndex.Value = TStack_f0.WeakPtr.ObjectIndex;
        FStack_b8.Number = TStack_f0.WeakPtr.ObjectSerialNumber;
        FSoftObjectPath::FSoftObjectPath(&FStack_b0,&TStack_f0.ObjectID);
        uStack_90 = 0;
        apcStack_58[0] = (code *)0x0;
        ppcVar4 = FMemory::Malloc(0x40,8);
        *ppcVar4 = (code *)&UE::Core::Private::Function::
                            TFunction_OwnedObject<`UDS_CommonLazyImage::SetBrushFromLazyDisplayAssetOverride'::`5'::<lambda_1>,0,1>
                            ::_vftable_;
        *(FWeakObjectPtr *)(ppcVar4 + 1) = FStack_c0;
        *(FName *)(ppcVar4 + 2) = FStack_b8;
        ppcStack_30 = ppcVar4;
        FSoftObjectPath::FSoftObjectPath((FSoftObjectPath *)(ppcVar4 + 3),&FStack_b0);
        *(undefined1 *)(ppcVar4 + 7) = uStack_90;
        if ((FWeakObjectPtr *)(ppcVar4 + 1) != (FWeakObjectPtr *)0x0) {
          apcStack_58[0] =
               UE::Core::Private::Function::
               TFunctionRefCaller<`UDS_CommonLazyImage::SetBrushFromLazyDisplayAssetOverride'::__l5::<lambda_1>,void>
               ::Call;
        }
        auStack_88._0_4_ = TStack_f0.WeakPtr.ObjectIndex;
        auStack_88._4_4_ = TStack_f0.WeakPtr.ObjectSerialNumber;
        FSoftObjectPath::FSoftObjectPath((FSoftObjectPath *)(auStack_88 + 8),&TStack_f0.ObjectID);
        UImage::RequestAsyncLoad
                  (param_1,(TSoftObjectPtr<UObject> *)auStack_88,
                   (TFunction<void___cdecl(void)> *)apcStack_58);
        if (apcStack_58[0] != (code *)0x0) {
          ppcVar4 = apcStack_58 + 2;
          if (ppcStack_30 != (code **)0x0) {
            ppcVar4 = ppcStack_30;
          }
          (**(code **)(*ppcVar4 + 0x10))();
        }
        if (FStack_b0.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_b0.SubPathString.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      SetBrushObject(param_1,pUVar3);
    }
    if (TStack_f0.ObjectID.SubPathString.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_f0.ObjectID.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// SetCoolTimeRatio_WrapperImpl @ 14b462050

void __cdecl UDS_CommonLazyImage::SetCoolTimeRatio_WrapperImpl(void *param_1,void *param_2)

{
  OnUpdateCoolTime(param_1,*(float *)param_2);
  return;
}

// SetButtonTableID_WrapperImpl @ 14b462060

void __cdecl UDS_CommonLazyImage::SetButtonTableID_WrapperImpl(void *param_1,void *param_2)

{
  UDS_ButtonData *pUVar1;
  
  if (*(longlong *)param_2 < 1) {
    pUVar1 = (UDS_ButtonData *)0x0;
    *(undefined8 *)((longlong)param_1 + 0x4f8) = 0;
  }
  else {
    *(longlong *)((longlong)param_1 + 0x4f8) = *(longlong *)param_2;
    pUVar1 = LoadButtonDataByTableID(param_1);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_ButtonData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
  }
  *(UDS_ButtonData **)((longlong)param_1 + 0x508) = pUVar1;
                    /* WARNING: Could not recover jumptable at 0x00014bcc537c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x380))(param_1);
  return;
}

// StaticClass @ 14b462070

UClass * __cdecl UDS_CommonLazyImage::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CommonLazyImage.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CommonLazyImage",
               &Z_Registration_Info_UClass_UDS_CommonLazyImage.InnerSingleton,
               StaticRegisterNativesUDS_CommonLazyImage,0x5d0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_CommonLazyImage>,
               InternalVTableHelperCtorCaller<UDS_CommonLazyImage>,local_res8,
               UCommonLazyImage::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CommonLazyImage.InnerSingleton;
}

// UDS_CommonLazyImage @ 14b465860

UDS_CommonLazyImage * __thiscall
UDS_CommonLazyImage::UDS_CommonLazyImage(UDS_CommonLazyImage *this,FVTableHelper *param_1)

{
  UCommonLazyImage::UCommonLazyImage((UCommonLazyImage *)this,param_1);
  this->ButtonStateType = Normal;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->IconID = 0;
  (this->DSTextIcon).TextIconID = 0;
  (this->BrushObjectPath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->BrushObjectPath).AssetPath.PackageName.Number = 0;
  (this->BrushObjectPath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->BrushObjectPath).AssetPath.AssetName.Number = 0;
  (this->BrushObjectPath).SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->BrushObjectPath).SubPathString.Data.ArrayNum = 0;
  (this->BrushObjectPath).SubPathString.Data.ArrayMax = 0;
  this->CoolTimeRatio = 0.0;
  this->ButtonStateType_Else = 0;
  (this->ButtonData).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  this->ButtonTableID = 0;
  (this->ButtonDataPtr).field0_0x0.DebugPtr = (UDS_ButtonData *)0x0;
  (this->IconPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IconPath).Data.ArrayNum = 0;
  (this->IconPath).Data.ArrayMax = 0;
  FSlateBrush::FSlateBrush(&this->BeforeBrush);
  return this;
}

// ~UDS_CommonLazyImage @ 14b466550

void __thiscall UDS_CommonLazyImage::~UDS_CommonLazyImage(UDS_CommonLazyImage *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->BeforeBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->BeforeBrush).ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  pFVar1 = (this->IconPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BrushObjectPath).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UCommonLazyImage::~UCommonLazyImage((UCommonLazyImage *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b467b90

IClassDescriptor * __thiscall
UDS_CommonLazyImage::GetFieldNotificationDescriptor(UDS_CommonLazyImage *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_CommonLazyImage::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b4681a0

UClass * __cdecl UDS_CommonLazyImage::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CommonLazyImage.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CommonLazyImage",
               &Z_Registration_Info_UClass_UDS_CommonLazyImage.InnerSingleton,
               StaticRegisterNativesUDS_CommonLazyImage,0x5d0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_CommonLazyImage>,
               InternalVTableHelperCtorCaller<UDS_CommonLazyImage>,local_res8,
               UCommonLazyImage::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CommonLazyImage.InnerSingleton;
}

// StaticRegisterNativesUDS_CommonLazyImage @ 14b468c70

void __cdecl UDS_CommonLazyImage::StaticRegisterNativesUDS_CommonLazyImage(void)

{
  return;
}

// UDS_CommonLazyImage @ 14bc83590

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_CommonLazyImage * __thiscall
UDS_CommonLazyImage::UDS_CommonLazyImage(UDS_CommonLazyImage *this,FObjectInitializer *param_1)

{
  UCommonLazyImage::UCommonLazyImage((UCommonLazyImage *)this,param_1);
  this->ButtonStateType = Normal;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->IconID = 0;
  (this->DSTextIcon).TextIconID = 0;
  (this->BrushObjectPath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->BrushObjectPath).AssetPath.PackageName.Number = 0;
  (this->BrushObjectPath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->BrushObjectPath).AssetPath.AssetName.Number = 0;
  (this->BrushObjectPath).SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->BrushObjectPath).SubPathString.Data.ArrayNum = 0;
  (this->BrushObjectPath).SubPathString.Data.ArrayMax = 0;
  this->CoolTimeRatio = 0.0;
  this->ButtonStateType_Else = 0;
  (this->ButtonData).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  this->ButtonTableID = 0;
  (this->ButtonDataPtr).field0_0x0.DebugPtr = (UDS_ButtonData *)0x0;
  (this->IconPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IconPath).Data.ArrayNum = 0;
  (this->IconPath).Data.ArrayMax = 0;
  FSlateBrush::FSlateBrush(&this->BeforeBrush);
  UWidget::SetVisibility((UWidget *)this,SelfHitTestInvisible);
  return this;
}

// GetTextureSize @ 14bca1dd0

TVector2<double> * __thiscall
UDS_CommonLazyImage::GetTextureSize
          (UDS_CommonLazyImage *this,TVector2<double> *__return_storage_ptr__)

{
  UTexture2D *this_00;
  int iVar1;
  int iVar2;
  FSlateBrush *pFVar3;
  UClass *pUVar4;
  UTexture2D *pUVar5;
  float fVar6;
  double dVar7;
  longlong *local_48 [3];
  double local_30;
  double local_28;
  
  pFVar3 = UImage::GetBrush((UImage *)this);
  this_00 = (UTexture2D *)(pFVar3->ResourceObject).field0_0x0.DebugPtr;
  if (this_00 != (UTexture2D *)0x0) {
    pUVar4 = Z_Construct_UClass_UPaperSprite_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(this_00->_padding_ + 0x38) < iVar1) ||
       (pUVar5 = this_00,
       (longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
       != &pUVar4->_padding_)) {
      pUVar5 = (UTexture2D *)0x0;
    }
    if (pUVar5 != (UTexture2D *)0x0) {
      (**(code **)(pUVar5->_padding_ + 0x10))(&pUVar5->_padding_,local_48);
      if (local_48[0] == (longlong *)0x0) {
        dVar7 = 0.0;
        local_30 = 0.0;
      }
      else {
        fVar6 = (float)(**(code **)(*local_48[0] + 0x370))();
        dVar7 = (double)fVar6 * local_28;
        fVar6 = (float)(**(code **)(*local_48[0] + 0x368))();
        local_30 = (double)fVar6 * local_30;
      }
      (__return_storage_ptr__->field0_0x0)._s_0.X = local_30;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar7;
      return __return_storage_ptr__;
    }
    pUVar4 = Z_Construct_UClass_UTexture2D_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      iVar1 = UTexture2D::GetSizeY(this_00);
      iVar2 = UTexture2D::GetSizeX(this_00);
      (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)iVar1;
      (__return_storage_ptr__->field0_0x0)._s_0.X = (double)iVar2;
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  return __return_storage_ptr__;
}

// LoadButtonDataByTableID @ 14bca9270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_ButtonData * __thiscall UDS_CommonLazyImage::LoadButtonDataByTableID(UDS_CommonLazyImage *this)

{
  int iVar1;
  FDS_ResourceStyleTableRow *pFVar2;
  UDS_LogManager *pUVar3;
  FString *pFVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UDS_ButtonData *pUVar7;
  undefined1 auStackY_1f8 [32];
  uint uVar8;
  wchar_t *pwVar9;
  FSoftObjectPath local_1b8;
  FSoftObjectPath local_198;
  TStringView<wchar_t> local_178;
  FString local_168;
  FString local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  if (this->ButtonTableID < 1) {
    return (UDS_ButtonData *)0x0;
  }
  local_1b8.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_1b8.AssetPath.PackageName.Number = 0;
  local_1b8.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_1b8.AssetPath.AssetName.Number = 0;
  local_1b8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.SubPathString.Data.ArrayNum = 0;
  local_1b8.SubPathString.Data.ArrayMax = 0;
  pFVar2 = FDS_ResourceStyleTableRow::Get(this->ButtonTableID,true);
  if (pFVar2 == (FDS_ResourceStyleTableRow *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_CommonLazyImage::LoadButtonDataByTableID",0x2c,Yes);
      pwVar9 = L"FDS_ResourceStyleTableRow is nullptr DataID - %d";
      uVar8 = 0xef;
      goto LAB_14bca9555;
    }
  }
  else {
    pFVar4 = FSoftObjectPath::ToString(&pFVar2->Path,&local_158);
    pFVar4 = FWN_SoftObjectUtils::GetObjectPath(&local_168,pFVar4,false);
    local_198.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_198.AssetPath.PackageName.Number = 0;
    local_198.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_198.AssetPath.AssetName.Number = 0;
    local_198.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_198.SubPathString.Data.ArrayNum = 0;
    local_198.SubPathString.Data.ArrayMax = 0;
    local_178.DataPtr = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    iVar1 = (pFVar4->Data).ArrayNum;
    local_178.Size = iVar1 + -1;
    if (iVar1 == 0) {
      local_178.Size = 0;
    }
    FSoftObjectPath::SetPath(&local_198,&local_178);
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
    local_1b8.AssetPath.PackageName = local_198.AssetPath.PackageName;
    local_1b8.AssetPath.AssetName = local_198.AssetPath.AssetName;
    if (local_1b8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.SubPathString.Data.AllocatorInstance.Data);
    }
    local_1b8.SubPathString.Data.AllocatorInstance.Data =
         local_198.SubPathString.Data.AllocatorInstance.Data;
    local_1b8.SubPathString.Data.ArrayNum = local_198.SubPathString.Data.ArrayNum;
    local_1b8.SubPathString.Data.ArrayMax = local_198.SubPathString.Data.ArrayMax;
    local_198.SubPathString.Data.ArrayNum = 0;
    local_198.SubPathString.Data.ArrayMax = 0;
    local_198.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
    if (local_1b8.AssetPath.PackageName != (FName)0x0) {
      pUVar5 = (UClass *)FSoftObjectPath::ResolveObject(&local_1b8);
      if ((pUVar5 == (UClass *)0x0) &&
         (pUVar5 = (UClass *)FSoftObjectPath::TryLoad(&local_1b8,(FUObjectSerializeContext *)0x0),
         pUVar5 == (UClass *)0x0)) {
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 != (UDS_LogManager *)0x0) {
          pUVar3 = UDS_LogManager::GetInst();
          local_148._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_148,"UDS_CommonLazyImage::LoadButtonDataByTableID",0x2c,Yes);
          pwVar9 = L"UObject is nullptr DataID - %d";
          uVar8 = 0x101;
LAB_14bca9555:
          UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,uVar8,pwVar9);
          if ((void *)local_148._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_148._padding_);
          }
        }
      }
      else {
        pUVar6 = Z_Construct_UClass_UClass_NoRegister();
        iVar1 = (int)pUVar6->_padding_;
        if (((*(int *)(pUVar5->_padding_ + 0x38) < iVar1) ||
            ((longlong *)
             *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
             &pUVar6->_padding_)) || (pUVar5 == (UClass *)0x0)) {
          pUVar3 = UDS_LogManager::GetInst();
          if (pUVar3 != (UDS_LogManager *)0x0) {
            pUVar3 = UDS_LogManager::GetInst();
            local_148._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_148,"UDS_CommonLazyImage::LoadButtonDataByTableID",0x2c,Yes);
            pwVar9 = L"UClass is nullptr DataID - %d";
            uVar8 = 0x109;
            goto LAB_14bca9555;
          }
        }
        else {
          if ((pUVar5->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
            UClass::InternalCreateDefaultObjectWrapper(pUVar5);
          }
          pUVar7 = (UDS_ButtonData *)(pUVar5->ClassDefaultObject).field0_0x0.DebugPtr;
          if (pUVar7 != (UDS_ButtonData *)0x0) {
            pUVar5 = Z_Construct_UClass_UDS_ButtonData_NoRegister();
            iVar1 = (int)pUVar5->_padding_;
            if ((iVar1 <= *(int *)(pUVar7->_padding_ + 0x38)) &&
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
                &pUVar5->_padding_)) goto LAB_14bca9583;
          }
        }
      }
    }
  }
  pUVar7 = (UDS_ButtonData *)0x0;
LAB_14bca9583:
  if (local_1b8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.SubPathString.Data.AllocatorInstance.Data);
  }
  return pUVar7;
}

// OnImageStreamingComplete @ 14bcb6280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_CommonLazyImage::OnImageStreamingComplete
          (UDS_CommonLazyImage *this,TSoftObjectPtr<UObject> *param_1)

{
  void *pvVar1;
  UObject *pUVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pUVar2 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)param_1);
  if (pUVar2 == (UObject *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_CommonLazyImage::OnImageStreamingComplete",0x2d,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0xc6,L"LoadedSoftObject is not valid.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    (**(code **)(this->_padding_ + 0x358))(this);
    pUVar2 = TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)param_1);
    SetBrushObject(this,pUVar2);
  }
  pvVar1 = *(void **)&(param_1->SoftObjectPtr).field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  return;
}

// OnUpdateCoolTime @ 14bcbc7d0

void __thiscall UDS_CommonLazyImage::OnUpdateCoolTime(UDS_CommonLazyImage *this,float param_1)

{
  FSlateBrush *pFVar1;
  UMaterialInstanceDynamic *this_00;
  FName *pFVar2;
  FName local_res8;
  FSlateBrush local_c8;
  
  if (param_1 != this->CoolTimeRatio) {
    this->CoolTimeRatio = param_1;
    pFVar1 = UImage::GetBrush((UImage *)this);
    FSlateBrush::FSlateBrush(&local_c8,pFVar1);
    this_00 = UWidgetBlueprintLibrary::GetDynamicMaterial(&local_c8);
    if (this_00 != (UMaterialInstanceDynamic *)0x0) {
      pFVar2 = ::FName::FName(&local_res8,"CurValue");
      UMaterialInstanceDynamic::SetScalarParameterValue(this_00,*pFVar2,param_1);
      pFVar2 = ::FName::FName(&local_res8,"TotalValue");
      UMaterialInstanceDynamic::SetScalarParameterValue(this_00,*pFVar2,__real_3f800000);
    }
    (**(code **)(this->_padding_ + 0x310))(this,&local_c8);
    local_c8._padding_ = (longlong)&___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  }
  return;
}

// SetAdjustTextureSize @ 14bcc47a0

void __thiscall UDS_CommonLazyImage::SetAdjustTextureSize(UDS_CommonLazyImage *this)

{
  TVector2<double> local_18;
  
  GetTextureSize(this,&local_18);
  UImage::SetDesiredSizeOverride((UImage *)this,&local_18);
  return;
}

// SetBrushByButtonData @ 14bcc4870

void __thiscall UDS_CommonLazyImage::SetBrushByButtonData(UDS_CommonLazyImage *this)

{
  EDS_ButtonStateType *pEVar1;
  int iVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  Type TVar8;
  UClass *pUVar9;
  UDS_ButtonData *this_00;
  FMargin *pFVar10;
  FSlateBrush *pFVar11;
  TVector2<double> *pTVar12;
  UObject *pUVar13;
  FLinearColor *pFVar14;
  UClass *pUVar15;
  double dVar16;
  float local_res8;
  float fStackX_c;
  FLinearColor_u_0 local_28;
  FMargin local_18;
  
  if (this->ButtonImageType == Else) {
                    /* WARNING: Could not recover jumptable at 0x00014bcc488c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x388))();
    return;
  }
  if (this->ButtonImageType == None) {
    return;
  }
  this_00 = (this->ButtonDataPtr).field0_0x0.DebugPtr;
  if (this_00 == (UDS_ButtonData *)0x0) {
    pUVar15 = (this->ButtonData).Class.field0_0x0.DebugPtr;
    if (pUVar15 == (UClass *)0x0) {
      return;
    }
    pUVar9 = Z_Construct_UClass_UDS_ButtonData_NoRegister();
    if (pUVar9 == (UClass *)0x0) {
      return;
    }
    iVar2 = (int)pUVar9->_padding_;
    if (((int)pUVar15->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(pUVar15->_padding_ + (longlong)iVar2 * 8) != &pUVar9->_padding_
       )) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) {
      return;
    }
    pUVar15 = (this->ButtonData).Class.field0_0x0.DebugPtr;
    if (pUVar15 == (UClass *)0x0) {
      return;
    }
    pUVar9 = Z_Construct_UClass_UDS_ButtonData_NoRegister();
    if (pUVar9 == (UClass *)0x0) {
LAB_14bcc4942:
      pUVar15 = (UClass *)0x0;
    }
    else {
      iVar2 = (int)pUVar9->_padding_;
      if (((int)pUVar15->_padding_ < iVar2) ||
         ((longlong *)*(undefined1 **)(pUVar15->_padding_ + (longlong)iVar2 * 8) !=
          &pUVar9->_padding_)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (!bVar7) goto LAB_14bcc4942;
      pUVar15 = (this->ButtonData).Class.field0_0x0.DebugPtr;
    }
    this_00 = UClass::GetDefaultObject<UDS_ButtonData>(pUVar15);
    if (this_00 == (UDS_ButtonData *)0x0) {
      return;
    }
  }
  if (this->ButtonImageType != Background) {
    if (this->ButtonImageType != Icon) {
      return;
    }
    pEVar1 = &this->ButtonStateType;
    UDS_ButtonData::GetIconDrawType(this_00,pEVar1);
    TVar8 = UDS_ButtonData::GetIconDrawType(this_00,pEVar1);
    (this->BeforeBrush).DrawAs.Value = (uchar)TVar8;
    (this->BeforeBrush).Tiling.Value = '\0';
    pFVar10 = UDS_ButtonData::GetIconMargin(this_00,&local_18,pEVar1);
    fVar4 = pFVar10->Top;
    fVar5 = pFVar10->Right;
    fVar6 = pFVar10->Bottom;
    lVar3 = this->_padding_;
    (this->BeforeBrush).Margin.Left = pFVar10->Left;
    (this->BeforeBrush).Margin.Top = fVar4;
    (this->BeforeBrush).Margin.Right = fVar5;
    (this->BeforeBrush).Margin.Bottom = fVar6;
    (**(code **)(lVar3 + 0x310))(this,&this->BeforeBrush);
    pUVar13 = UDS_ButtonData::GetIconObject(this_00,pEVar1);
    SetBrushObject(this,pUVar13);
    bVar7 = UDS_ButtonData::IsIconSizeZero(this_00,pEVar1);
    if (bVar7) {
      pFVar11 = UImage::GetBrush((UImage *)this);
      local_res8 = SUB84(pFVar11->ImageSize,0);
      fStackX_c = SUB84(pFVar11->ImageSize,4);
      if (((local_res8 == 0.0) || (fStackX_c == 0.0)) &&
         (pFVar11 = UImage::GetBrush((UImage *)this),
         (pFVar11->ResourceObject).field0_0x0.DebugPtr != (UObject *)0x0)) {
        pTVar12 = GetTextureSize(this,(TVector2<double> *)&local_18);
        goto LAB_14bcc4b5a;
      }
    }
    else {
      pTVar12 = UDS_ButtonData::GetIconSize(this_00,(TVector2<double> *)&local_18,pEVar1);
LAB_14bcc4b5a:
      local_28._0_8_ = (pTVar12->field0_0x0)._s_0.X;
      local_28._8_8_ = (pTVar12->field0_0x0)._s_0.Y;
      UImage::SetDesiredSizeOverride((UImage *)this,(TVector2<double> *)&local_28._s_0);
    }
    pFVar14 = UDS_ButtonData::GetIconColor(this_00,(FLinearColor *)&local_18,pEVar1);
    goto LAB_14bcc4b7f;
  }
  UDS_ButtonData::GetImageDrawType(this_00,&this->ButtonStateType);
  TVar8 = UDS_ButtonData::GetImageDrawType(this_00,&this->ButtonStateType);
  (this->BeforeBrush).DrawAs.Value = (uchar)TVar8;
  (this->BeforeBrush).Tiling.Value = '\0';
  pFVar10 = UDS_ButtonData::GetImageMargin(this_00,(FMargin *)&local_28._s_0,&this->ButtonStateType)
  ;
  fVar4 = pFVar10->Top;
  fVar5 = pFVar10->Right;
  fVar6 = pFVar10->Bottom;
  (this->BeforeBrush).Margin.Left = pFVar10->Left;
  (this->BeforeBrush).Margin.Top = fVar4;
  (this->BeforeBrush).Margin.Right = fVar5;
  (this->BeforeBrush).Margin.Bottom = fVar6;
  pFVar11 = UImage::GetBrush((UImage *)this);
  local_res8 = SUB84(pFVar11->ImageSize,0);
  fStackX_c = SUB84(pFVar11->ImageSize,4);
  dVar16 = (double)fStackX_c;
  if ((local_res8 == 0.0) || (dVar16 == 0.0)) {
    pFVar11 = UImage::GetBrush((UImage *)this);
    if ((pFVar11->ResourceObject).field0_0x0.DebugPtr != (UObject *)0x0) {
      pTVar12 = GetTextureSize(this,(TVector2<double> *)&local_28._s_0);
      *(float *)&(this->BeforeBrush).ImageSize = (float)(pTVar12->field0_0x0)._s_0.X;
      dVar16 = (pTVar12->field0_0x0)._s_0.Y;
      goto LAB_14bcc4a24;
    }
  }
  else {
    *(float *)&(this->BeforeBrush).ImageSize = local_res8;
LAB_14bcc4a24:
    *(float *)&(this->BeforeBrush).ImageSize.field_0x4 = (float)dVar16;
  }
  (**(code **)(this->_padding_ + 0x310))(this,&this->BeforeBrush);
  pUVar13 = UDS_ButtonData::GetImageObject(this_00,&this->ButtonStateType);
  SetBrushObject(this,pUVar13);
  pFVar14 = UDS_ButtonData::GetImageColor(this_00,(FLinearColor *)&local_18,&this->ButtonStateType);
LAB_14bcc4b7f:
  local_28._0_8_ = *(undefined8 *)&pFVar14->field0_0x0;
  local_28._8_8_ = *(undefined8 *)((longlong)&pFVar14->field0_0x0 + 8);
  UImage::SetColorAndOpacity((UImage *)this,(FLinearColor *)&local_28._s_0);
  return;
}

// SetBrushFromLazyDisplayAssetOverride @ 14bcc4bb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UDS_CommonLazyImage::SetBrushFromLazyDisplayAssetOverride
          (UDS_CommonLazyImage *this,TSoftObjectPtr<UObject> *param_1,bool param_2)

{
  code **ppcVar1;
  undefined1 auStack_e8 [32];
  FWeakObjectPtr local_c8;
  UDS_CommonLazyImage *local_c0;
  FWeakObjectPtr local_b8;
  code *local_b0;
  FSoftObjectPath local_a8;
  undefined1 local_88;
  undefined1 local_80 [40];
  code *local_58 [2];
  code *local_48 [3];
  code **local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (*(longlong *)&(param_1->SoftObjectPtr).field_0x8 != 0) {
    if ((UE::GC::GIsIncrementalReachabilityPending) && (this != (UDS_CommonLazyImage *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_c8.ObjectIndex = 0;
    local_c8.ObjectSerialNumber = 0;
    local_c0 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_CommonLazyImage *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&local_c8,(FObjectPtr)&local_c0);
    local_b8 = local_c8;
    local_b0 = *(code **)&param_1->SoftObjectPtr;
    FSoftObjectPath::FSoftObjectPath
              (&local_a8,(FSoftObjectPath *)&(param_1->SoftObjectPtr).field_0x8);
    local_58[0] = (code *)0x0;
    local_88 = param_2;
    ppcVar1 = FMemory::Malloc(0x40,8);
    *ppcVar1 = (code *)&UE::Core::Private::Function::
                        TFunction_OwnedObject<`UDS_CommonLazyImage::SetBrushFromLazyDisplayAssetOverride'::`5'::<lambda_1>,0,1>
                        ::_vftable_;
    *(FWeakObjectPtr *)(ppcVar1 + 1) = local_b8;
    ppcVar1[2] = local_b0;
    local_30 = ppcVar1;
    FSoftObjectPath::FSoftObjectPath((FSoftObjectPath *)(ppcVar1 + 3),&local_a8);
    *(undefined1 *)(ppcVar1 + 7) = local_88;
    if ((FWeakObjectPtr *)(ppcVar1 + 1) != (FWeakObjectPtr *)0x0) {
      local_58[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UDS_CommonLazyImage::SetBrushFromLazyDisplayAssetOverride'::__l5::<lambda_1>,void>
                    ::Call;
    }
    local_80._0_8_ = *(undefined8 *)&param_1->SoftObjectPtr;
    FSoftObjectPath::FSoftObjectPath
              ((FSoftObjectPath *)(local_80 + 8),
               (FSoftObjectPath *)&(param_1->SoftObjectPtr).field_0x8);
    UImage::RequestAsyncLoad
              ((UImage *)this,(TSoftObjectPtr<UObject> *)local_80,
               (TFunction<void___cdecl(void)> *)local_58);
    if (local_58[0] != (code *)0x0) {
      ppcVar1 = local_58 + 2;
      if (local_30 != (code **)0x0) {
        ppcVar1 = local_30;
      }
      (**(code **)(*ppcVar1 + 0x10))();
    }
    if (local_a8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// SetBrushFromTexture @ 14bcc4d30

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

void __thiscall
UDS_CommonLazyImage::SetBrushFromTexture(UDS_CommonLazyImage *this,UTexture2D *param_1,bool param_2)

{
  int iVar1;
  UMaterialInstanceDynamic *this_00;
  FSlateBrush *pFVar2;
  UClass *pUVar3;
  undefined1 auStack_b8 [36];
  float fStack_94;
  FSharedReferencer<1> FStack_18;
  
  if (param_1 == (UTexture2D *)0x0) {
    return;
  }
  if ((this->_padding_ != 0) &&
     (this_00 = UImage::GetDynamicMaterial((UImage *)this),
     this_00 != (UMaterialInstanceDynamic *)0x0)) {
    UMaterialInstanceDynamic::SetTextureParameterValue
              (this_00,(FName)this->_padding_,(UTexture *)param_1);
    if (!param_2) {
      return;
    }
    pFVar2 = UImage::GetBrush((UImage *)this);
    FSlateBrush::FSlateBrush((FSlateBrush *)auStack_b8,pFVar2);
    if (param_1 != (UTexture2D *)0x0) {
      pUVar3 = Z_Construct_UClass_UTexture2DDynamic_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) {
        if (param_1 != (UTexture2D *)0x0) {
          pUVar3 = Z_Construct_UClass_UTexture2D_NoRegister();
          iVar1 = (int)pUVar3->_padding_;
          if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
              &pUVar3->_padding_)) {
            iVar1 = UTexture2D::GetSizeX(param_1);
            auStack_b8._32_4_ = (undefined4)iVar1;
            iVar1 = UTexture2D::GetSizeY(param_1);
            fStack_94 = (float)iVar1;
          }
        }
      }
      else {
        auStack_b8._32_4_ = (undefined4)param_1->FirstResourceMemMip;
        fStack_94 = (float)*(int *)&param_1->field_0x154;
      }
    }
    UImage::SetBrush((UImage *)this,(FSlateBrush *)auStack_b8);
    auStack_b8._0_8_ = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_18.ReferenceController);
    return;
  }
  if (param_1 != (UTexture2D *)0x0) {
    pUVar3 = Z_Construct_UClass_UTexture2DDynamic_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      UImage::SetBrushFromTextureDynamic((UImage *)this,(UTexture2DDynamic *)param_1,false);
      return;
    }
    pUVar3 = Z_Construct_UClass_UTexture2D_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_14a8174af;
  }
  param_1 = (UTexture2D *)0x0;
LAB_14a8174af:
  UImage::SetBrushFromTexture((UImage *)this,param_1,param_2);
  return;
}

// SetBrushObject @ 14bcc4d40

void __thiscall UDS_CommonLazyImage::SetBrushObject(UDS_CommonLazyImage *this,UObject *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FSlateBrush *pFVar4;
  UClass *pUVar5;
  UTexture2D *pUVar6;
  TVector2<double> local_c8;
  FSlateBrush local_b8;
  
  pFVar4 = UImage::GetBrush((UImage *)this);
  FSlateBrush::FSlateBrush(&local_b8,pFVar4);
  bVar3 = UpdateDynamicMaterial(this,param_1,&local_b8);
  if (!bVar3) {
    if (param_1 != (UObject *)0x0) {
      pUVar5 = Z_Construct_UClass_UPaperSprite_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        pcVar2 = *(code **)(this->_padding_ + 800);
        pUVar6 = UPaperSprite::GetBakedTexture((UPaperSprite *)param_1);
        (*pcVar2)(this,pUVar6,0);
      }
    }
    UImage::SetBrushResourceObject((UImage *)this,param_1);
  }
  if ((this->bAdjustTextureSize != false) && (this->ButtonImageType == None)) {
    GetTextureSize(this,&local_c8);
    UImage::SetDesiredSizeOverride((UImage *)this,&local_c8);
  }
  local_b8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  return;
}

// SetBrushObjectPath @ 14bcc4e50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UDS_CommonLazyImage::SetBrushObjectPath(UDS_CommonLazyImage *this,FSoftObjectPath *param_1)

{
  FScriptContainerElement *pFVar1;
  FSoftObjectPath *pFVar2;
  UObject *pUVar3;
  code **ppcVar4;
  undefined1 auStack_118 [32];
  FWeakObjectPtr local_f8;
  TPersistentObjectPtr<FSoftObjectPath> local_f0;
  UDS_CommonLazyImage *local_c8;
  FWeakObjectPtr local_c0;
  FName local_b8;
  FSoftObjectPath local_b0;
  undefined1 local_90;
  undefined1 local_88 [48];
  code *local_58 [2];
  code *local_48 [3];
  code **local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_118;
  if ((param_1->AssetPath).PackageName != (FName)0x0) {
    pFVar2 = FSoftObjectPath::FSoftObjectPath((FSoftObjectPath *)local_88,param_1);
    local_f0.WeakPtr.ObjectIndex = 0;
    local_f0.WeakPtr.ObjectSerialNumber = 0;
    FSoftObjectPath::FSoftObjectPath(&local_f0.ObjectID,pFVar2);
    pFVar1 = (pFVar2->SubPathString).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pUVar3 = TPersistentObjectPtr<FSoftObjectPath>::Get(&local_f0);
    if (pUVar3 == (UObject *)0x0) {
      if (local_f0.ObjectID.AssetPath.PackageName == (FName)0x0) {
        local_f8 = (FWeakObjectPtr)&local_f0;
        `UDS_CommonLazyImage::SetBrushObjectPath'::__l14::<lambda_1>::operator()(&local_f8);
      }
      else if (local_f0.ObjectID.AssetPath.PackageName != (FName)0x0) {
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_CommonLazyImage *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        local_f8.ObjectIndex = 0;
        local_f8.ObjectSerialNumber = 0;
        local_c8 = this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_CommonLazyImage *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=(&local_f8,(FObjectPtr)&local_c8);
        local_c0 = local_f8;
        local_b8.ComparisonIndex.Value = local_f0.WeakPtr.ObjectIndex;
        local_b8.Number = local_f0.WeakPtr.ObjectSerialNumber;
        FSoftObjectPath::FSoftObjectPath(&local_b0,&local_f0.ObjectID);
        local_90 = 0;
        local_58[0] = (code *)0x0;
        ppcVar4 = FMemory::Malloc(0x40,8);
        *ppcVar4 = (code *)&UE::Core::Private::Function::
                            TFunction_OwnedObject<`UDS_CommonLazyImage::SetBrushFromLazyDisplayAssetOverride'::`5'::<lambda_1>,0,1>
                            ::_vftable_;
        *(FWeakObjectPtr *)(ppcVar4 + 1) = local_c0;
        *(FName *)(ppcVar4 + 2) = local_b8;
        local_30 = ppcVar4;
        FSoftObjectPath::FSoftObjectPath((FSoftObjectPath *)(ppcVar4 + 3),&local_b0);
        *(undefined1 *)(ppcVar4 + 7) = local_90;
        if ((FWeakObjectPtr *)(ppcVar4 + 1) != (FWeakObjectPtr *)0x0) {
          local_58[0] = UE::Core::Private::Function::
                        TFunctionRefCaller<`UDS_CommonLazyImage::SetBrushFromLazyDisplayAssetOverride'::__l5::<lambda_1>,void>
                        ::Call;
        }
        local_88._0_4_ = local_f0.WeakPtr.ObjectIndex;
        local_88._4_4_ = local_f0.WeakPtr.ObjectSerialNumber;
        FSoftObjectPath::FSoftObjectPath((FSoftObjectPath *)(local_88 + 8),&local_f0.ObjectID);
        UImage::RequestAsyncLoad
                  ((UImage *)this,(TSoftObjectPtr<UObject> *)local_88,
                   (TFunction<void___cdecl(void)> *)local_58);
        if (local_58[0] != (code *)0x0) {
          ppcVar4 = local_58 + 2;
          if (local_30 != (code **)0x0) {
            ppcVar4 = local_30;
          }
          (**(code **)(*ppcVar4 + 0x10))();
        }
        if (local_b0.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.SubPathString.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      SetBrushObject(this,pUVar3);
    }
    if (local_f0.ObjectID.SubPathString.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.ObjectID.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// SetButtonStateType @ 14bcc52c0

void __thiscall
UDS_CommonLazyImage::SetButtonStateType(UDS_CommonLazyImage *this,EDS_ButtonStateType *param_1)

{
  this->ButtonStateType = *param_1;
                    /* WARNING: Could not recover jumptable at 0x00014bcc52cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x380))();
  return;
}

// SetButtonTableID @ 14bcc5320

void __thiscall UDS_CommonLazyImage::SetButtonTableID(UDS_CommonLazyImage *this,long64 *param_1)

{
  UDS_ButtonData *pUVar1;
  
  if (*param_1 < 1) {
    pUVar1 = (UDS_ButtonData *)0x0;
    this->ButtonTableID = 0;
  }
  else {
    this->ButtonTableID = *param_1;
    pUVar1 = LoadButtonDataByTableID(this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_ButtonData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
  }
  (this->ButtonDataPtr).field0_0x0.DebugPtr = pUVar1;
                    /* WARNING: Could not recover jumptable at 0x00014bcc537c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x380))(this);
  return;
}

// SetCoolTimeRatio @ 14bcc58c0

void __thiscall UDS_CommonLazyImage::SetCoolTimeRatio(UDS_CommonLazyImage *this)

{
  bool bVar1;
  FSlateBrush *pFVar2;
  UMaterialInstanceDynamic *this_00;
  FName *pFVar3;
  FName local_res10 [3];
  FMemoryImageMaterialParameterInfo local_e8;
  FMaterialParameterInfo local_d0;
  FSlateBrush local_b8;
  
  pFVar2 = UImage::GetBrush((UImage *)this);
  FSlateBrush::FSlateBrush(&local_b8,pFVar2);
  this_00 = UWidgetBlueprintLibrary::GetDynamicMaterial(&local_b8);
  if (this_00 != (UMaterialInstanceDynamic *)0x0) {
    pFVar3 = ::FName::FName(local_res10,"CurValue");
    UMaterialInterface::GetParameterInfo
              ((UMaterialInterface *)this_00,&local_d0,GlobalParameter,*pFVar3,
               (UMaterialFunctionInterface *)0x0);
    local_e8.Name.ComparisonIndex = local_d0.Name.ComparisonIndex.Value;
    local_e8.Name.Number = local_d0.Name.Number;
    local_e8.Index = local_d0.Index;
    local_e8.Association.Value = local_d0.Association.Value;
    local_e8.Name.DisplayIndex.Value = 0;
    bVar1 = UMaterialInterface::GetScalarParameterValue
                      ((UMaterialInterface *)this_00,&local_e8,&this->CoolTimeRatio,false);
    if (!bVar1) {
      this->CoolTimeRatio = 0.0;
    }
  }
  local_b8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  return;
}

// SetDSTextIcon @ 14bcc5c00

void __thiscall UDS_CommonLazyImage::SetDSTextIcon(UDS_CommonLazyImage *this,FDS_TextIcon *param_1)

{
  longlong lVar1;
  FString *pFVar2;
  FString local_18;
  
  lVar1 = param_1->TextIconID;
  (this->DSTextIcon).TextIconID = lVar1;
  if (0 < lVar1) {
    pFVar2 = FDS_TextIcon::GetIconPath(&this->DSTextIcon,&local_18);
    SetIconByPath(this,pFVar2);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// SetElseVisibility @ 14bcc6080

void __thiscall UDS_CommonLazyImage::SetElseVisibility(UDS_CommonLazyImage *this)

{
  EDS_ButtonStateType EVar1;
  code *UNRECOVERED_JUMPTABLE;
  uint3 uVar2;
  ulonglong uVar3;
  
  if (this->ButtonImageType == Else) {
    EVar1 = this->ButtonStateType;
    UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x2c0);
    uVar2 = (uint3)(EVar1 >> 8);
    uVar3 = CONCAT71((uint7)uVar2,4);
    if ((this->ButtonStateType_Else & EVar1) != EVar1) {
      uVar3 = (ulonglong)CONCAT31(uVar2,1);
    }
                    /* WARNING: Could not recover jumptable at 0x00014bcc60a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(this,uVar3,UNRECOVERED_JUMPTABLE);
    return;
  }
  return;
}

// SetIconByPath @ 14bcc6720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_CommonLazyImage::SetIconByPath(UDS_CommonLazyImage *this,FString *param_1)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  UDS_LogManager *pUVar5;
  UObject *pUVar6;
  code **ppcVar7;
  FNameEntryId FVar8;
  FScriptContainerElement *pFVar9;
  ForAnyElementType FVar10;
  size_t sVar11;
  bool bVar12;
  undefined1 auStackY_288 [32];
  FWeakObjectPtr local_248 [2];
  undefined1 local_238 [8];
  FName FStack_230;
  ForAnyElementType local_228;
  ForAnyElementType local_220;
  int local_218;
  int local_214 [3];
  TPersistentObjectPtr<FSoftObjectPath> local_208;
  FSoftObjectPath local_1e0;
  FWeakObjectPtr local_1c0;
  FName local_1b8;
  code *local_1b0;
  code *pcStack_1a8;
  ForAnyElementType local_1a0;
  int local_198;
  int local_194;
  undefined1 local_190;
  code *local_188 [2];
  code *local_178 [3];
  code **local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_288;
  iVar4 = (this->IconPath).Data.ArrayNum;
  iVar2 = (param_1->Data).ArrayNum;
  if (iVar4 == iVar2) {
    if (iVar4 < 2) {
      return;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->IconPath).Data.AllocatorInstance.Data,
                       (wchar_t *)(param_1->Data).AllocatorInstance.Data);
    bVar12 = iVar4 == 0;
  }
  else {
    bVar12 = iVar4 + iVar2 == 1;
  }
  if (!bVar12) {
    ::FString::operator=(&this->IconPath,param_1);
    pFVar3 = (param_1->Data).AllocatorInstance.Data;
    for (pFVar9 = pFVar3; pFVar9 != pFVar3 + (longlong)(param_1->Data).ArrayNum * 2;
        pFVar9 = pFVar9 + 2) {
      if (*(short *)pFVar9 == 0x2e) {
        if ((int)((longlong)pFVar9 - (longlong)pFVar3 >> 1) != -1) {
          local_238 = (undefined1  [8])(this->IconPath).Data.AllocatorInstance.Data;
          iVar4 = (this->IconPath).Data.ArrayNum;
          local_1e0.AssetPath.PackageName.ComparisonIndex.Value = 0;
          local_1e0.AssetPath.PackageName.Number = 0;
          local_1e0.AssetPath.AssetName.ComparisonIndex.Value = 0;
          local_1e0.AssetPath.AssetName.Number = 0;
          local_1e0.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1e0.SubPathString.Data.ArrayNum = 0;
          local_1e0.SubPathString.Data.ArrayMax = 0;
          FVar8.Value = iVar4 - 1;
          if (iVar4 == 0) {
            FVar8.Value = 0;
          }
          FStack_230.ComparisonIndex.Value = FVar8.Value;
          FSoftObjectPath::SetPath(&local_1e0,(TStringView<wchar_t> *)local_238);
          FVar10.Data = local_1e0.SubPathString.Data.AllocatorInstance.Data;
          if (local_1e0.AssetPath.PackageName != (FName)0x0) {
            sVar11 = (size_t)local_1e0.SubPathString.Data.ArrayNum;
            local_228.Data = (FScriptContainerElement *)0x0;
            local_220.Data._0_4_ = local_1e0.SubPathString.Data.ArrayNum;
            local_238 = (undefined1  [8])local_1e0.AssetPath.PackageName;
            FStack_230 = local_1e0.AssetPath.AssetName;
            if (local_1e0.SubPathString.Data.ArrayNum == 0) {
              local_220.Data =
                   (FScriptContainerElement *)(local_1e0.SubPathString.Data._8_8_ & 0xffffffff);
              local_208.ObjectID.AssetPath.PackageName.ComparisonIndex.Value =
                   local_1e0.AssetPath.PackageName.ComparisonIndex.Value;
              local_208.ObjectID.AssetPath.PackageName.Number =
                   local_1e0.AssetPath.PackageName.Number;
              local_208.ObjectID.AssetPath.AssetName.ComparisonIndex.Value =
                   local_1e0.AssetPath.AssetName.ComparisonIndex.Value;
              local_208.ObjectID.AssetPath.AssetName.Number = local_1e0.AssetPath.AssetName.Number;
              iVar4 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,local_1e0.SubPathString.Data.ArrayNum,0,&local_228,
                         local_1e0.SubPathString.Data.ArrayNum,
                         (int *)((longlong)&local_220.Data + 4));
              memcpy(local_228.Data,FVar10.Data,sVar11);
              local_208.ObjectID.AssetPath.PackageName.ComparisonIndex.Value = local_238._0_4_;
              local_208.ObjectID.AssetPath.PackageName.Number = local_238._4_4_;
              local_208.ObjectID.AssetPath.AssetName.ComparisonIndex.Value =
                   FStack_230.ComparisonIndex.Value;
              local_208.ObjectID.AssetPath.AssetName.Number = FStack_230.Number;
              iVar4 = (int)local_220.Data;
            }
            FVar10.Data = local_228.Data;
            local_208.WeakPtr.ObjectIndex = 0;
            local_208.WeakPtr.ObjectSerialNumber = 0;
            local_208.ObjectID.SubPathString.Data.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            local_208.ObjectID.SubPathString.Data.ArrayNum = iVar4;
            if (iVar4 == 0) {
              local_208.ObjectID.SubPathString.Data.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,iVar4,0,(ForAnyElementType *)&local_208.ObjectID.SubPathString,iVar4,
                         &local_208.ObjectID.SubPathString.Data.ArrayMax);
              memcpy(local_208.ObjectID.SubPathString.Data.AllocatorInstance.Data,FVar10.Data,
                     (longlong)iVar4);
            }
            if (local_228.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_228.Data);
            }
            pUVar6 = TPersistentObjectPtr<FSoftObjectPath>::Get(&local_208);
            if (pUVar6 == (UObject *)0x0) {
              if (CONCAT44(local_208.ObjectID.AssetPath.PackageName.Number,
                           local_208.ObjectID.AssetPath.PackageName.ComparisonIndex.Value) == 0) {
                local_248[0] = (FWeakObjectPtr)&local_208;
                `UDS_CommonLazyImage::SetBrushObjectPath'::__l14::<lambda_1>::operator()(local_248);
              }
              else if (CONCAT44(local_208.ObjectID.AssetPath.PackageName.Number,
                                local_208.ObjectID.AssetPath.PackageName.ComparisonIndex.Value) != 0
                      ) {
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (this != (UDS_CommonLazyImage *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)this);
                }
                local_248[0].ObjectIndex = 0;
                local_248[0].ObjectSerialNumber = 0;
                local_238 = (undefined1  [8])this;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (this != (UDS_CommonLazyImage *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)this);
                }
                FWeakObjectPtr::operator=(local_248,(FObjectPtr)local_238);
                FVar10.Data = local_208.ObjectID.SubPathString.Data.AllocatorInstance.Data;
                sVar11 = (size_t)local_208.ObjectID.SubPathString.Data.ArrayNum;
                local_1c0 = local_248[0];
                local_1b8.ComparisonIndex.Value = local_208.WeakPtr.ObjectIndex;
                local_1b8.Number = local_208.WeakPtr.ObjectSerialNumber;
                local_1a0.Data = (FScriptContainerElement *)0x0;
                local_198 = local_208.ObjectID.SubPathString.Data.ArrayNum;
                local_1b0 = (code *)CONCAT44(local_208.ObjectID.AssetPath.PackageName.Number,
                                             local_208.ObjectID.AssetPath.PackageName.
                                             ComparisonIndex.Value);
                pcStack_1a8 = (code *)CONCAT44(local_208.ObjectID.AssetPath.AssetName.Number,
                                               local_208.ObjectID.AssetPath.AssetName.
                                               ComparisonIndex.Value);
                if (local_208.ObjectID.SubPathString.Data.ArrayNum == 0) {
                  local_194 = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (1,1,local_208.ObjectID.SubPathString.Data.ArrayNum,0,&local_1a0,
                             local_208.ObjectID.SubPathString.Data.ArrayNum,&local_194);
                  memcpy(local_1a0.Data,FVar10.Data,sVar11);
                }
                local_190 = 0;
                local_188[0] = (code *)0x0;
                ppcVar7 = FMemory::Malloc(0x40,8);
                FVar10.Data = local_1a0.Data;
                *ppcVar7 = (code *)&UE::Core::Private::Function::
                                    TFunction_OwnedObject<`UDS_CommonLazyImage::SetBrushFromLazyDisplayAssetOverride'::`5'::<lambda_1>,0,1>
                                    ::_vftable_;
                pFVar1 = (ForAnyElementType *)(ppcVar7 + 5);
                *(FWeakObjectPtr *)(ppcVar7 + 1) = local_1c0;
                *(FName *)(ppcVar7 + 2) = local_1b8;
                ppcVar7[3] = local_1b0;
                ppcVar7[4] = pcStack_1a8;
                pFVar1->Data = (FScriptContainerElement *)0x0;
                sVar11 = (size_t)local_198;
                *(int *)(ppcVar7 + 6) = local_198;
                local_160 = ppcVar7;
                if (local_198 == 0) {
                  *(int *)((longlong)ppcVar7 + 0x34) = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (1,1,local_198,0,pFVar1,local_198,(int *)((longlong)ppcVar7 + 0x34));
                  memcpy(pFVar1->Data,FVar10.Data,sVar11);
                }
                FVar10.Data = local_208.ObjectID.SubPathString.Data.AllocatorInstance.Data;
                *(undefined1 *)(ppcVar7 + 7) = local_190;
                sVar11 = (size_t)local_208.ObjectID.SubPathString.Data.ArrayNum;
                if ((FWeakObjectPtr *)(ppcVar7 + 1) != (FWeakObjectPtr *)0x0) {
                  local_188[0] = UE::Core::Private::Function::
                                 TFunctionRefCaller<`UDS_CommonLazyImage::SetBrushFromLazyDisplayAssetOverride'::__l5::<lambda_1>,void>
                                 ::Call;
                }
                local_238._0_4_ = local_208.WeakPtr.ObjectIndex;
                local_238._4_4_ = local_208.WeakPtr.ObjectSerialNumber;
                local_220.Data = (FScriptContainerElement *)0x0;
                local_218 = local_208.ObjectID.SubPathString.Data.ArrayNum;
                FStack_230.Number = local_208.ObjectID.AssetPath.PackageName.Number;
                FStack_230.ComparisonIndex.Value =
                     local_208.ObjectID.AssetPath.PackageName.ComparisonIndex.Value;
                local_228.Data =
                     (FScriptContainerElement *)
                     CONCAT44(local_208.ObjectID.AssetPath.AssetName.Number,
                              local_208.ObjectID.AssetPath.AssetName.ComparisonIndex.Value);
                if (local_208.ObjectID.SubPathString.Data.ArrayNum == 0) {
                  local_214[0] = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (1,1,local_208.ObjectID.SubPathString.Data.ArrayNum,0,&local_220,
                             local_208.ObjectID.SubPathString.Data.ArrayNum,local_214);
                  memcpy(local_220.Data,FVar10.Data,sVar11);
                }
                UImage::RequestAsyncLoad
                          ((UImage *)this,(TSoftObjectPtr<UObject> *)local_238,
                           (TFunction<void___cdecl(void)> *)local_188);
                if (local_188[0] != (code *)0x0) {
                  ppcVar7 = local_188 + 2;
                  if (local_160 != (code **)0x0) {
                    ppcVar7 = local_160;
                  }
                  (**(code **)(*ppcVar7 + 0x10))();
                }
                if (local_1a0.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1a0.Data);
                }
              }
            }
            else {
              SetBrushObject(this,pUVar6);
            }
            FVar10.Data = local_1e0.SubPathString.Data.AllocatorInstance.Data;
            if (local_208.ObjectID.SubPathString.Data.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_208.ObjectID.SubPathString.Data.AllocatorInstance.Data);
              FVar10.Data = local_1e0.SubPathString.Data.AllocatorInstance.Data;
            }
          }
          goto LAB_14bcc6bff;
        }
        break;
      }
    }
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_CommonLazyImage::SetIconByPath",0x22,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_158.Ptr,0x8e,L"Invalid IconPath. (%s)");
      FVar10.Data = (FScriptContainerElement *)local_158._padding_;
LAB_14bcc6bff:
      if (FVar10.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar10.Data);
      }
    }
  }
  return;
}

// SetIconID @ 14bcc6e70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_CommonLazyImage::SetIconID(UDS_CommonLazyImage *this,int param_1)

{
  FDS_ResourceIconTableRow *pFVar1;
  UDS_LogManager *pUVar2;
  FString *pFVar3;
  undefined1 auStackY_188 [32];
  FString local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  if (0 < param_1) {
    local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
    this->IconID = param_1;
    pFVar1 = FDS_ResourceIconTableRow::Get((longlong)param_1,true);
    if (pFVar1 == (FDS_ResourceIconTableRow *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_CommonLazyImage::SetIconID",0x1e,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x71,L"Couldn\'t find ResourceIconTableRow. (%d)");
      local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_138._padding_;
    }
    else {
      pFVar3 = FSoftObjectPath::ToString(&pFVar1->IconPath,&local_148);
      SetIconByPath(this,pFVar3);
    }
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// SynchronizeProperties @ 14bcca670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_CommonLazyImage::SynchronizeProperties(UDS_CommonLazyImage *this)

{
  bool bVar1;
  FDS_ResourceIconTableRow *pFVar2;
  UDS_LogManager *pUVar3;
  FString *pFVar4;
  UDS_ButtonData *pUVar5;
  FSlateBrush *pFVar6;
  UMaterialInstanceDynamic *this_00;
  FName *pFVar7;
  undefined8 uVar8;
  undefined1 auStackY_1b8 [32];
  TVector2<double>_u_0 local_178;
  FMemoryImageMaterialParameterInfo local_168;
  FName local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  UCommonLazyImage::SynchronizeProperties((UCommonLazyImage *)this);
  if (0 < this->IconID) {
    pFVar2 = FDS_ResourceIconTableRow::Get((longlong)this->IconID,true);
    if (pFVar2 == (FDS_ResourceIconTableRow *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 == (UDS_LogManager *)0x0) goto LAB_14bcca763;
      pUVar3 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_CommonLazyImage::SetIconID",0x1e,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_148.Ptr,0x71,L"Couldn\'t find ResourceIconTableRow. (%d)");
      uVar8 = local_148._padding_;
    }
    else {
      pFVar4 = FSoftObjectPath::ToString(&pFVar2->IconPath,(FString *)&local_178._s_0);
      SetIconByPath(this,pFVar4);
      uVar8 = local_178._s_0.X;
    }
    if ((void *)uVar8 != (void *)0x0) {
      FMemory::Free((void *)uVar8);
    }
  }
LAB_14bcca763:
  if (0 < this->ButtonTableID) {
    this->ButtonTableID = this->ButtonTableID;
    pUVar5 = LoadButtonDataByTableID(this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UDS_ButtonData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->ButtonDataPtr).field0_0x0.DebugPtr = pUVar5;
    (**(code **)(this->_padding_ + 0x380))(this);
  }
  (**(code **)(this->_padding_ + 0x380))(this);
  pFVar6 = UImage::GetBrush((UImage *)this);
  FSlateBrush::FSlateBrush((FSlateBrush *)&local_148,pFVar6);
  this_00 = UWidgetBlueprintLibrary::GetDynamicMaterial((FSlateBrush *)&local_148);
  if (this_00 != (UMaterialInstanceDynamic *)0x0) {
    pFVar7 = ::FName::FName(&local_150,"CurValue");
    UMaterialInterface::GetParameterInfo
              ((UMaterialInterface *)this_00,(FMaterialParameterInfo *)&local_178._s_0,
               GlobalParameter,*pFVar7,(UMaterialFunctionInterface *)0x0);
    local_168.Name.ComparisonIndex.Value = SUB84(local_178._s_0.X,0);
    local_168.Name.Number = (uint)((ulonglong)local_178._0_8_ >> 0x20);
    local_168.Index = local_178._12_4_;
    local_168.Association.Value = local_178._8_1_;
    local_168.Name.DisplayIndex.Value = 0;
    bVar1 = UMaterialInterface::GetScalarParameterValue
                      ((UMaterialInterface *)this_00,&local_168,&this->CoolTimeRatio,false);
    if (!bVar1) {
      this->CoolTimeRatio = 0.0;
    }
  }
  local_148._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_148._padding_);
  if ((this->bAdjustTextureSize != false) && (this->ButtonImageType == None)) {
    GetTextureSize(this,(TVector2<double> *)&local_178._s_0);
    UImage::SetDesiredSizeOverride((UImage *)this,(TVector2<double> *)&local_178._s_0);
  }
  return;
}

// UpdateDynamicMaterial @ 14bcce990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_CommonLazyImage::UpdateDynamicMaterial
          (UDS_CommonLazyImage *this,UObject *param_1,FSlateBrush *param_2)

{
  int iVar1;
  UMaterialInstanceDynamic *this_00;
  UClass *pUVar2;
  FName *pFVar3;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  undefined1 auStackY_218 [32];
  FLinearColor_u_0 local_1d8;
  FName local_1c8;
  UTexture *local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  FName local_198 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_188;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_218;
  if (param_1 != (UObject *)0x0) {
    ::FName::FName(&local_1c8,"UI_Main_Tex");
    this_00 = UWidgetBlueprintLibrary::GetDynamicMaterial(param_2);
    if (this_00 != (UMaterialInstanceDynamic *)0x0) {
      pUVar2 = Z_Construct_UClass_UTexture_NoRegister();
      iVar1 = (int)pUVar2->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar2->_padding_)) {
        UMaterialInstanceDynamic::SetTextureParameterValue(this_00,local_1c8,(UTexture *)param_1);
        (**(code **)(this->_padding_ + 0x310))(this,param_2);
        return true;
      }
      pUVar2 = Z_Construct_UClass_UPaperSprite_NoRegister();
      iVar1 = (int)pUVar2->_padding_;
      if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
         (pUVar5 = param_1,
         (longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
         &pUVar2->_padding_)) {
        pUVar5 = (UObject *)0x0;
      }
      if (pUVar5 != (UObject *)0x0) {
        (**(code **)(*(longlong *)&pUVar5[1].field_0x8 + 0x10))(&pUVar5[1].field_0x8,&local_1c0);
        UMaterialInstanceDynamic::SetTextureParameterValue(this_00,local_1c8,local_1c0);
        local_1d8._s_0.R = (float)local_1b8;
        local_1d8._s_0.G = (float)local_1b0;
        local_1d8._s_0.B = (float)local_1a8;
        local_1d8._s_0.A = (float)local_1a0;
        pFVar3 = ::FName::FName(local_198,"StartSizeUV");
        UMaterialInstanceDynamic::SetVectorParameterValue
                  (this_00,*pFVar3,(FLinearColor *)&local_1d8._s_0);
        (**(code **)(this->_padding_ + 0x310))(this,param_2);
        return true;
      }
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        UObjectBaseUtility::GetPathName
                  ((UObjectBaseUtility *)param_1,(FString *)&local_1d8._s_0,(UObject *)0x0);
        local_188._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_188,"UDS_CommonLazyImage::UpdateDynamicMaterial",0x2a,Yes);
        UDS_LogManager::PrintLog
                  (pUVar4,1,Warning,local_188.Ptr,0x133,L"Couldn\'t cast to UTexture. (%s)");
        if ((void *)local_188._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_188._padding_);
        }
        if ((void *)CONCAT44(local_1d8._s_0.G,local_1d8._s_0.R) != (void *)0x0) {
          FMemory::Free((void *)CONCAT44(local_1d8._s_0.G,local_1d8._s_0.R));
        }
      }
      return true;
    }
  }
  return false;
}

// operator() @ 15056e740

bool __thiscall `UDS_CommonLazyImage::SetBrushObjectPath'::__l14::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8601115023231680328>);
  if (bVar2) {
    FSoftObjectPath::ToString((FSoftObjectPath *)(*(longlong *)this + 8),&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8601115023231680328>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15056e7ab;
    }
  }
  bVar2 = false;
LAB_15056e7ab:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

