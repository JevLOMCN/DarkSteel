// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 16

// SetIconID_WrapperImpl @ 14b4ad7b0

void __cdecl UDS_Image::SetIconID_WrapperImpl(void *param_1,void *param_2)

{
  SetIconID(param_1,*(int *)param_2);
  return;
}

// SetCooldownRatio_WrapperImpl @ 14b4ad7c0

void __cdecl UDS_Image::SetCooldownRatio_WrapperImpl(void *param_1,void *param_2)

{
  OnUpdateCooldown(param_1,*(float *)param_2);
  return;
}

// StaticClass @ 14b4ad7d0

UClass * __cdecl UDS_Image::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_Image.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_Image",&Z_Registration_Info_UClass_UDS_Image.InnerSingleton
               ,StaticRegisterNativesUDS_Image,800,0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_Image>,InternalVTableHelperCtorCaller<UDS_Image>,local_res8,
               UImage::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_Image.InnerSingleton;
}

// UDS_Image @ 14b4b2770

UDS_Image * __thiscall UDS_Image::UDS_Image(UDS_Image *this,FVTableHelper *param_1)

{
  UImage::UImage((UImage *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->IconID = 0;
  this->CooldownRatio = 0.0;
  (this->IconPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IconPath).Data.ArrayNum = 0;
  (this->IconPath).Data.ArrayMax = 0;
  return this;
}

// ~UDS_Image @ 14b4b3940

void __thiscall UDS_Image::~UDS_Image(UDS_Image *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  pFVar1 = (this->IconPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UImage::~UImage((UImage *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b4b66b0

IClassDescriptor * __thiscall UDS_Image::GetFieldNotificationDescriptor(UDS_Image *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_Image::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b4b7840

UClass * __cdecl UDS_Image::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_Image.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_Image",&Z_Registration_Info_UClass_UDS_Image.InnerSingleton
               ,StaticRegisterNativesUDS_Image,800,0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_Image>,InternalVTableHelperCtorCaller<UDS_Image>,local_res8,
               UImage::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_Image.InnerSingleton;
}

// StaticRegisterNativesUDS_Image @ 14b4b85c0

void __cdecl UDS_Image::StaticRegisterNativesUDS_Image(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_Image_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnImageClick @ 14b4ba8f0

void __cdecl UDS_Image::execOnImageClick(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnImageClick((UDS_Image *)param_1);
  return;
}

// UDS_Image @ 14bc83e40

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_Image * __thiscall UDS_Image::UDS_Image(UDS_Image *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  UDS_Image *local_res8;
  FName local_res18 [2];
  FDestructionSentinel local_28;
  
  UImage::UImage((UImage *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 & 0xfe;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->IconID = 0;
  this->CooldownRatio = 0.0;
  (this->IconPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IconPath).Data.ArrayNum = 0;
  (this->IconPath).Data.ArrayMax = 0;
  UWidget::SetVisibility((UWidget *)this,SelfHitTestInvisible);
  ::FName::FName(local_res18,L"OnImageClick");
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
             (FWriteAccessScope *)&local_28);
  local_res8 = this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->_padding_,(FObjectPtr)&local_res8);
  this->_padding_ = (longlong)local_res18[0];
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return this;
}

// OnImageClick @ 14bcb6240

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_Image::OnImageClick(UDS_Image *this)

{
  FFieldId local_18 [2];
  
  local_18[0].FieldName = FFieldNotificationClassDescriptor::ClickEvent.FieldName;
  local_18[0].BitNumber = FFieldNotificationClassDescriptor::ClickEvent.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,local_18);
  return;
}

// OnUpdateCooldown @ 14bcbc8c0

void __thiscall UDS_Image::OnUpdateCooldown(UDS_Image *this,float param_1)

{
  FSlateBrush *pFVar1;
  UMaterialInstanceDynamic *this_00;
  FName *pFVar2;
  FName local_res8;
  FSlateBrush local_c8;
  
  if (param_1 != this->CooldownRatio) {
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

// SetIconByPath @ 14bcc6c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_Image::SetIconByPath(UDS_Image *this,FString *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FSlateBrush *pFVar4;
  UDS_LogManager *pUVar5;
  UObject *pUVar6;
  FScriptContainerElement *pFVar7;
  ForAnyElementType FVar8;
  bool bVar9;
  undefined1 auStackY_258 [32];
  FSoftObjectPath local_218;
  TStringView<wchar_t> local_1f8;
  FSlateBrush local_1e8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_258;
  iVar3 = (this->IconPath).Data.ArrayNum;
  iVar1 = (param_1->Data).ArrayNum;
  if (iVar3 == iVar1) {
    if (iVar3 < 2) {
      return;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->IconPath).Data.AllocatorInstance.Data,
                       (wchar_t *)(param_1->Data).AllocatorInstance.Data);
    bVar9 = iVar3 == 0;
  }
  else {
    bVar9 = iVar3 + iVar1 == 1;
  }
  if (!bVar9) {
    ::FString::operator=(&this->IconPath,param_1);
    pFVar4 = UImage::GetBrush((UImage *)this);
    FSlateBrush::FSlateBrush(&local_1e8,pFVar4);
    pFVar2 = (param_1->Data).AllocatorInstance.Data;
    for (pFVar7 = pFVar2; pFVar7 != pFVar2 + (longlong)(param_1->Data).ArrayNum * 2;
        pFVar7 = pFVar7 + 2) {
      if (*(short *)pFVar7 == 0x2e) {
        if ((int)((longlong)pFVar7 - (longlong)pFVar2 >> 1) != -1) {
          local_1f8.DataPtr = (wchar_t *)(this->IconPath).Data.AllocatorInstance.Data;
          iVar1 = (this->IconPath).Data.ArrayNum;
          local_218.AssetPath.PackageName.ComparisonIndex.Value = 0;
          local_218.AssetPath.PackageName.Number = 0;
          local_218.AssetPath.AssetName.ComparisonIndex.Value = 0;
          local_218.AssetPath.AssetName.Number = 0;
          local_218.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          iVar3 = iVar1 + -1;
          local_218.SubPathString.Data.ArrayNum = 0;
          local_218.SubPathString.Data.ArrayMax = 0;
          if (iVar1 == 0) {
            iVar3 = 0;
          }
          local_1f8.Size = iVar3;
          FSoftObjectPath::SetPath(&local_218,&local_1f8);
          pUVar6 = FSoftObjectPath::ResolveObject(&local_218);
          if (pUVar6 == (UObject *)0x0) {
            pUVar6 = FSoftObjectPath::TryLoad(&local_218,(FUObjectSerializeContext *)0x0);
          }
          bVar9 = UpdateDynamicMaterial(this,pUVar6,&local_1e8);
          FVar8.Data = local_218.SubPathString.Data.AllocatorInstance.Data;
          if (!bVar9) {
            UImage::SetBrushResourceObject((UImage *)this,pUVar6);
            FVar8.Data = local_218.SubPathString.Data.AllocatorInstance.Data;
          }
          goto LAB_14bcc6e14;
        }
        break;
      }
    }
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_Image::SetIconByPath",0x18,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_138.Ptr,100,L"Invalid IconPath. (%s)");
      FVar8.Data = (FScriptContainerElement *)local_138._padding_;
LAB_14bcc6e14:
      if (FVar8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar8.Data);
      }
    }
    local_1e8._padding_ = (longlong)&___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1e8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  }
  return;
}

// SetIconID @ 14bcc6f90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_Image::SetIconID(UDS_Image *this,int param_1)

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
                (&local_138,"UDS_Image::SetIconID",0x14,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x4f,
                 L"Couldn\'t find FDS_ResourceIconTableRow. (%d)");
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

// SynchronizeProperties @ 14bccb460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_Image::SynchronizeProperties(UDS_Image *this)

{
  FDS_ResourceIconTableRow *pFVar1;
  UDS_LogManager *pUVar2;
  FString *pFVar3;
  undefined1 auStackY_188 [32];
  FString local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  UImage::SynchronizeProperties((UImage *)this);
  if (0 < this->IconID) {
    pFVar1 = FDS_ResourceIconTableRow::Get((longlong)this->IconID,true);
    if (pFVar1 == (FDS_ResourceIconTableRow *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_Image::SetIconID",0x14,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x4f,
                 L"Couldn\'t find FDS_ResourceIconTableRow. (%d)");
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

// UpdateDynamicMaterial @ 14bccec40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_Image::UpdateDynamicMaterial(UDS_Image *this,UObject *param_1,FSlateBrush *param_2)

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
                  (&local_188,"UDS_Image::UpdateDynamicMaterial",0x20,Yes);
        UDS_LogManager::PrintLog
                  (pUVar4,1,Warning,local_188.Ptr,0xc0,L"Couldn\'t cast to UTexture. (%s)");
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

