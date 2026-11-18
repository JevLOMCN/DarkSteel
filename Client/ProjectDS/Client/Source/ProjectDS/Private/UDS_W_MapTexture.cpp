// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 33

// SetMapLocationOffset_WrapperImpl @ 14b77def0

void __cdecl UDS_W_MapTexture::SetMapLocationOffset_WrapperImpl(void *param_1,void *param_2)

{
  TVector2<double>_u_0 local_18;
  
  local_18._s_0.X = (double)*(undefined8 *)param_2;
  local_18._s_0.Y = *(double *)((longlong)param_2 + 8);
  OnMapLocationOffset(param_1,(TVector2<double> *)&local_18._s_0);
  return;
}

// SetCurLookIslandID_WrapperImpl @ 14b77df20

void __cdecl UDS_W_MapTexture::SetCurLookIslandID_WrapperImpl(void *param_1,void *param_2)

{
  OnCurLookIslandIDChanged(param_1,*(int *)param_2);
  return;
}

// SetCurLookIndoorID_WrapperImpl @ 14b77df30

void __cdecl UDS_W_MapTexture::SetCurLookIndoorID_WrapperImpl(void *param_1,void *param_2)

{
  OnCurLookIndoorIDChanged(param_1,*(int *)param_2);
  return;
}

// StaticClass @ 14b77df40

UClass * __cdecl UDS_W_MapTexture::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_MapTexture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_MapTexture",
               &Z_Registration_Info_UClass_UDS_W_MapTexture.InnerSingleton,
               StaticRegisterNativesUDS_W_MapTexture,0xa48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_W_MapTexture>,
               InternalVTableHelperCtorCaller<UDS_W_MapTexture>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_MapTexture.InnerSingleton;
}

// UDS_W_MapTexture @ 14b782400

UDS_W_MapTexture * __thiscall
UDS_W_MapTexture::UDS_W_MapTexture(UDS_W_MapTexture *this,FVTableHelper *param_1)

{
  TVector2<double> TVar1;
  
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  this->CurCharIslandID = 0;
  this->CurLookIslandID = 0;
  this->CurLookIndoorID = 0;
  (this->MapLocationOffset).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  this->MapType = 0;
  this->MapAngle = 0.0;
  this->OrthoWidth = 0.0;
  (this->MapPositionOffset).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  *(undefined8 *)&(this->MapTextureList).field_0x8 = 0;
  *(undefined8 *)&this->MapTextureList = 0;
  *(undefined8 *)&(this->MapTextureList).field_0x20 = 0;
  this->TextureSize = 1024.0;
  *(undefined4 *)&(this->MapTextureList).field_0x28 = 0;
  *(undefined4 *)&(this->MapTextureList).field_0x2c = 0x80;
  *(undefined4 *)&(this->MapTextureList).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MapTextureList).field_0x34 = 0;
  *(undefined8 *)&(this->MapTextureList).field_0x40 = 0;
  *(undefined4 *)&(this->MapTextureList).field_0x48 = 0;
  *(undefined8 *)&(this->MapCellList).field_0x8 = 0;
  *(undefined8 *)&this->MapCellList = 0;
  *(undefined8 *)&(this->MapCellList).field_0x20 = 0;
  *(undefined4 *)&(this->MapCellList).field_0x28 = 0;
  *(undefined4 *)&(this->MapCellList).field_0x2c = 0x80;
  *(undefined4 *)&(this->MapCellList).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MapCellList).field_0x34 = 0;
  *(undefined8 *)&(this->MapCellList).field_0x40 = 0;
  *(undefined4 *)&(this->MapCellList).field_0x48 = 0;
  (this->OffSetPosition).field0_0x0._s_0.X = 150000.0;
  (this->OffSetPosition).field0_0x0._s_0.Y = 150000.0;
  (this->CharInfoData).WeakPtr = (FWeakObjectPtr)0x0;
  this->IsIndoor = false;
  this->CurCharIndoorGroupID = 0;
  this->CurLookIndoorGroupID = 0;
  (this->ReferencePosition).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->MapSize).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->MapStartPos).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->IndoorMapStartPos).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->IndoorMapEndPos).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->MapEndPos).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->MaxCell).field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  (this->CurCell).field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  (this->MaxTextureNum).field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  (this->GeometrySize).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->OwnerMovementCore).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UDS_W_MapTexture @ 14b7825e0

UDS_W_MapTexture * __thiscall
UDS_W_MapTexture::UDS_W_MapTexture(UDS_W_MapTexture *this,FObjectInitializer *param_1)

{
  TVector2<double> TVar1;
  
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  this->CurCharIslandID = 0;
  this->CurLookIslandID = 0;
  this->CurLookIndoorID = 0;
  (this->MapLocationOffset).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  this->MapType = 0;
  this->MapAngle = 0.0;
  this->OrthoWidth = 0.0;
  (this->MapPositionOffset).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  *(undefined8 *)&(this->MapTextureList).field_0x8 = 0;
  *(undefined8 *)&this->MapTextureList = 0;
  *(undefined8 *)&(this->MapTextureList).field_0x20 = 0;
  this->TextureSize = 1024.0;
  *(undefined4 *)&(this->MapTextureList).field_0x28 = 0;
  *(undefined4 *)&(this->MapTextureList).field_0x2c = 0x80;
  *(undefined4 *)&(this->MapTextureList).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MapTextureList).field_0x34 = 0;
  *(undefined8 *)&(this->MapTextureList).field_0x40 = 0;
  *(undefined4 *)&(this->MapTextureList).field_0x48 = 0;
  *(undefined8 *)&(this->MapCellList).field_0x8 = 0;
  *(undefined8 *)&this->MapCellList = 0;
  *(undefined8 *)&(this->MapCellList).field_0x20 = 0;
  *(undefined4 *)&(this->MapCellList).field_0x28 = 0;
  *(undefined4 *)&(this->MapCellList).field_0x2c = 0x80;
  *(undefined4 *)&(this->MapCellList).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MapCellList).field_0x34 = 0;
  *(undefined8 *)&(this->MapCellList).field_0x40 = 0;
  *(undefined4 *)&(this->MapCellList).field_0x48 = 0;
  (this->OffSetPosition).field0_0x0._s_0.X = 150000.0;
  (this->OffSetPosition).field0_0x0._s_0.Y = 150000.0;
  (this->CharInfoData).WeakPtr = (FWeakObjectPtr)0x0;
  this->IsIndoor = false;
  this->CurCharIndoorGroupID = 0;
  this->CurLookIndoorGroupID = 0;
  (this->ReferencePosition).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->MapSize).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->MapStartPos).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->IndoorMapStartPos).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->IndoorMapEndPos).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->MapEndPos).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->MaxCell).field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  (this->CurCell).field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  (this->MaxTextureNum).field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  (this->GeometrySize).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->OwnerMovementCore).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UDS_W_MapTexture @ 14b7833b0

void __thiscall UDS_W_MapTexture::~UDS_W_MapTexture(UDS_W_MapTexture *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  *(undefined4 *)&(this->MapCellList).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MapCellList).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,FDS_MapCellData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,FDS_MapCellData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,FDS_MapCellData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MapCellList);
  *(undefined4 *)&(this->MapTextureList).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MapTextureList).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,FDS_MapImageData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,FDS_MapImageData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,FDS_MapImageData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MapTextureList);
  UDS_UserWidget::~UDS_UserWidget((UDS_UserWidget *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b785280

IClassDescriptor * __thiscall
UDS_W_MapTexture::GetFieldNotificationDescriptor(UDS_W_MapTexture *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_W_MapTexture::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b7861a0

UClass * __cdecl UDS_W_MapTexture::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_MapTexture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_MapTexture",
               &Z_Registration_Info_UClass_UDS_W_MapTexture.InnerSingleton,
               StaticRegisterNativesUDS_W_MapTexture,0xa48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_W_MapTexture>,
               InternalVTableHelperCtorCaller<UDS_W_MapTexture>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_MapTexture.InnerSingleton;
}

// StaticRegisterNativesUDS_W_MapTexture @ 14b7865d0

void __cdecl UDS_W_MapTexture::StaticRegisterNativesUDS_W_MapTexture(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UDS_W_MapTexture_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnMapTextureLoaded @ 14b787a90

void __cdecl
UDS_W_MapTexture::execOnMapTextureLoaded(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FWeakObjectPtr FVar2;
  void *_Src;
  size_t _Size;
  FWeakObjectPtr local_res10;
  FName local_58;
  FName FStack_50;
  void *local_48;
  undefined8 local_40;
  FSoftObjectPath local_38;
  
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FStack_50.ComparisonIndex.Value = 0;
  FStack_50.Number = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  FWeakObjectProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  _Src = local_48;
  FVar2 = local_res10;
  _Size = (size_t)(int)local_40;
  local_38.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38.SubPathString.Data.ArrayNum = (int)local_40;
  local_38.AssetPath.PackageName = local_58;
  local_38.AssetPath.AssetName = FStack_50;
  if ((int)local_40 == 0) {
    local_38.SubPathString.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,(int)local_40,0,(ForAnyElementType *)&local_38.SubPathString,(int)local_40,
               &local_38.SubPathString.Data.ArrayMax);
    memcpy(local_38.SubPathString.Data.AllocatorInstance.Data,_Src,_Size);
  }
  OnMapTextureLoaded((UDS_W_MapTexture *)param_1,&local_38,
                     (TWeakObjectPtr<UDS_Image,FWeakObjectPtr>)FVar2);
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}

// execOnUpdatePosition @ 14b787c80

void __cdecl UDS_W_MapTexture::execOnUpdatePosition(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TVector<double> *pTVar2;
  TVector<double> local_28;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pTVar2 = &local_28;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar2 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnUpdatePosition((UDS_W_MapTexture *)param_1,pTVar2);
  return;
}

// AddGridSlot @ 14c06afa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_MapTexture::AddGridSlot(UDS_W_MapTexture *this,int param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  UGridPanel *pUVar3;
  UClass *pUVar4;
  UWidget *pUVar5;
  UDS_LogManager *pUVar6;
  uint uVar7;
  longlong *plVar8;
  uint uVar9;
  undefined1 *puVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStackY_2f8 [32];
  TPairInitializer<UE::Math::TIntPoint<int>_&,FDS_MapImageData_&> local_2c8;
  UWidget *local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  FDS_MapImageData **local_2a0;
  UWidget **local_298;
  FSlateBrush local_288;
  undefined1 local_1d8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  uVar9 = param_1 - param_2 ^ (uint)param_2 >> 0xd;
  uVar7 = (-0x61c88647 - uVar9) - param_2 ^ uVar9 << 8;
  uVar11 = (param_2 - uVar9) - uVar7 ^ uVar7 >> 0xd;
  uVar9 = (uVar9 - uVar11) - uVar7 ^ uVar11 >> 0xc;
  uVar7 = (uVar7 - uVar9) - uVar11 ^ uVar9 << 0x10;
  uVar11 = (uVar11 - uVar7) - uVar9 ^ uVar7 >> 5;
  uVar9 = (uVar9 - uVar11) - uVar7 ^ uVar11 >> 3;
  uVar7 = (uVar7 - uVar9) - uVar11 ^ uVar9 << 10;
  local_2c8.Value._0_4_ = param_1;
  local_2c8.Value._4_4_ = param_2;
  if (*(int *)&(this->MapTextureList).field_0x8 != *(int *)&(this->MapTextureList).field_0x34) {
    puVar10 = *(undefined1 **)&(this->MapTextureList).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->MapTextureList).field_0x38;
    }
    iVar12 = *(int *)(puVar10 +
                     (ulonglong)
                     (*(int *)&(this->MapTextureList).field_0x48 - 1U &
                     ((uVar11 - uVar7) - uVar9 ^ uVar7 >> 0xf)) * 4);
    if (iVar12 != -1) {
      lVar1 = *(longlong *)&(this->MapTextureList).field_0x0;
      do {
        uVar2 = *(undefined8 *)(lVar1 + (longlong)iVar12 * 0x28);
        if (((int)uVar2 == param_1) && ((int)((ulonglong)uVar2 >> 0x20) == param_2)) {
          if (iVar12 != -1) {
            pUVar6 = UDS_LogManager::GetInst();
            if (pUVar6 == (UDS_LogManager *)0x0) {
              return;
            }
            pUVar6 = UDS_LogManager::GetInst();
            local_158._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_158,"UDS_W_MapTexture::AddGridSlot",0x1d,Yes);
            UDS_LogManager::PrintLog
                      (pUVar6,1,Warning,local_158.Ptr,0x1c0,L"Exist MapTextureList key");
            if ((void *)local_158._padding_ == (void *)0x0) {
              return;
            }
            FMemory::Free((void *)local_158._padding_);
            return;
          }
          break;
        }
        iVar12 = *(int *)(lVar1 + 0x20 + (longlong)iVar12 * 0x28);
      } while (iVar12 != -1);
    }
  }
  pUVar3 = this->GridPanel;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar3,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = Z_Construct_UClass_UDS_Image_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1d8,pUVar4);
  local_1d8._8_8_ = pUVar3;
  pUVar5 = (UWidget *)StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1d8);
  if (local_1d8._64_8_ != 0) {
    plVar8 = (longlong *)(local_1d8 + 0x50);
    if ((longlong *)local_1d8._104_8_ != (longlong *)0x0) {
      plVar8 = (longlong *)local_1d8._104_8_;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  FSlateBrush::FSlateBrush(&local_288);
  local_2c8.Key = (TIntPoint<int> *)0x4480000044800000;
  local_288.ImageSize._0_4_ = 0x44800000;
  local_288.ImageSize._4_4_ = 0x44800000;
  (**(code **)(pUVar5->_padding_ + 0x310))(pUVar5,&local_288);
  UGridPanel::AddChildToGrid(this->GridPanel,pUVar5,param_2,param_1);
  local_2a8 = CONCAT44(local_2c8.Value._4_4_,(int)local_2c8.Value);
  local_2a0 = &local_2c8.Value;
  local_298 = &local_2b8;
  local_2b0 = 0xffffffffffffffff;
  local_2b8 = pUVar5;
  TSet<TTuple<UE::Math::TIntPoint<int>,FDS_MapImageData>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FDS_MapImageData,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UE::Math::TIntPoint<int>_&,FDS_MapImageData_&>_>
            ((TSet<TTuple<UE::Math::TIntPoint<int>,FDS_MapImageData>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FDS_MapImageData,0>,FDefaultSetAllocator>
              *)&this->MapTextureList,&local_2c8,(bool *)&local_2a0);
  local_288._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_288.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  return;
}

// GetCurCell @ 14c085690

TIntPoint<int> __thiscall
UDS_W_MapTexture::GetCurCell(UDS_W_MapTexture *this,TVector2<double> *param_1)

{
  double *pdVar1;
  double *in_R8;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar4 = *in_R8;
  if (((((this->MapBound).Min.field0_0x0._s_0.X <= dVar4 &&
         dVar4 != (this->MapBound).Min.field0_0x0._s_0.X) &&
       (dVar4 < (this->MapBound).Max.field0_0x0._s_0.X)) &&
      (dVar3 = in_R8[1], pdVar1 = &(this->MapBound).Min.field0_0x0._s_0.Y,
      *pdVar1 <= dVar3 && dVar3 != *pdVar1)) && (dVar3 < (this->MapBound).Max.field0_0x0._s_0.Y)) {
    dVar4 = dVar4 - (this->MapStartPos).field0_0x0._s_0.X;
    dVar3 = dVar3 - (this->MapStartPos).field0_0x0._s_0.Y;
    dVar2 = __real_3ff0000000000000 / (double)this->OrthoWidth;
    dVar3 = (dVar3 + dVar3) * dVar2 - __real_3fe0000000000000;
    *(int *)&param_1->field0_0x0 =
         (int)((longlong)ROUND((dVar4 + dVar4) * dVar2 - __real_3fe0000000000000) >> 1);
    *(int *)((longlong)&param_1->field0_0x0 + 4) = (int)((longlong)ROUND(dVar3) >> 1);
    return (TIntPoint<int>)(TIntPoint<int>_u_0)param_1;
  }
  (param_1->field0_0x0)._s_0.X = (double)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  return (TIntPoint<int>)(TIntPoint<int>_u_0)param_1;
}

// InitCellData @ 14c08b3d0

void __thiscall
UDS_W_MapTexture::InitCellData
          (UDS_W_MapTexture *this,int param_1,int param_2,int param_3,FString *param_4)

{
  undefined1 *puVar1;
  TMap<UE::Math::TIntPoint<int>,FDS_MapImageData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FDS_MapImageData,0>_>
  *this_00;
  TMap<UE::Math::TIntPoint<int>,FDS_MapCellData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FDS_MapCellData,0>_>
  *this_01;
  int iVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  FString *pFVar5;
  FString *pFVar6;
  ForAnyElementType _Src;
  int iVar7;
  longlong lVar8;
  int iVar9;
  ForAnyElementType local_b0;
  int local_a8;
  int local_a4;
  FString local_a0;
  FString local_90;
  undefined8 *local_80;
  double *local_78;
  double local_70;
  double local_68;
  ForAnyElementType local_60;
  int local_58;
  int local_54;
  undefined8 local_50 [3];
  
  this_00 = &this->MapTextureList;
  bVar4 = 1 < *(int *)&(this->MapTextureList).field_0x48;
  if (!bVar4) {
    TSet<TTuple<UE::Math::TIntPoint<int>,FDS_MapImageData>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FDS_MapImageData,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UE::Math::TIntPoint<int>,FDS_MapImageData>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FDS_MapImageData,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar1 = &(this->MapTextureList).field_0xc;
  *(undefined4 *)&(this->MapTextureList).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->MapTextureList).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MapTextureList).field_0x34 = 0;
  iVar2 = *(int *)&(this->MapTextureList).field_0x2c;
  *(undefined4 *)&(this->MapTextureList).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->MapTextureList).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->MapTextureList).field_0x10,0);
  }
  if (bVar4) {
    *(undefined4 *)&(this->MapTextureList).field_0x48 = 1;
    TSet<TTuple<UE::Math::TIntPoint<int>,FDS_MapImageData>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FDS_MapImageData,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UE::Math::TIntPoint<int>,FDS_MapImageData>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FDS_MapImageData,0>,FDefaultSetAllocator>
              *)this_00);
  }
  this_01 = &this->MapCellList;
  bVar4 = 1 < *(int *)&(this->MapCellList).field_0x48;
  if (!bVar4) {
    TSet<TTuple<UE::Math::TIntPoint<int>,FDS_MapCellData>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FDS_MapCellData,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UE::Math::TIntPoint<int>,FDS_MapCellData>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FDS_MapCellData,0>,FDefaultSetAllocator>
                      *)this_01);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,FDS_MapCellData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,FDS_MapCellData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_01,0,*(int *)&(this->MapCellList).field_0x8);
  puVar1 = &(this->MapCellList).field_0xc;
  *(undefined4 *)&(this->MapCellList).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,(ForAnyElementType *)this_01,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->MapCellList).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MapCellList).field_0x34 = 0;
  iVar2 = *(int *)&(this->MapCellList).field_0x2c;
  *(undefined4 *)&(this->MapCellList).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->MapCellList).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->MapCellList).field_0x10,0);
  }
  iVar2 = param_1;
  pFVar5 = param_4;
  if (bVar4) {
    *(undefined4 *)&(this->MapCellList).field_0x48 = 1;
    TSet<TTuple<UE::Math::TIntPoint<int>,FDS_MapCellData>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FDS_MapCellData,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UE::Math::TIntPoint<int>,FDS_MapCellData>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FDS_MapCellData,0>,FDefaultSetAllocator>
              *)this_01);
    pFVar5 = param_4;
  }
  for (; pFVar6 = param_4, iVar2 < param_2; iVar2 = iVar2 + 1) {
    param_4 = pFVar5;
    if (param_1 < param_3) {
      local_80 = local_50;
      local_78 = &local_70;
      iVar9 = param_1;
      do {
        local_a8 = (pFVar6->Data).ArrayNum;
        lVar8 = (longlong)local_a8;
        pFVar3 = (pFVar6->Data).AllocatorInstance.Data;
        local_b0.Data = (FScriptContainerElement *)0x0;
        if (local_a8 == 0) {
          local_a4 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_a8,0,&local_b0,local_a8,&local_a4);
          memcpy(local_b0.Data,pFVar3,lVar8 * 2);
        }
        ::FString::PrintfImpl(&local_90,L"T_MapTexture_%02d_%02d");
        ::FString::PrintfImpl(&local_a0,L"%s/%s.%s");
        _Src.Data = local_a0.Data.AllocatorInstance.Data;
        local_60.Data = (FScriptContainerElement *)0x0;
        local_54 = 0;
        local_50[0] = CONCAT44(iVar9,iVar2);
        iVar7 = local_a0.Data.ArrayNum;
        local_70 = (double)((float)iVar2 * this->OrthoWidth);
        local_68 = (double)((float)iVar9 * this->OrthoWidth);
        local_58 = iVar7;
        if (iVar7 != 0) {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar7,0,&local_60,iVar7,&local_54);
          memcpy(local_60.Data,_Src.Data,(longlong)iVar7 * 2);
        }
        TSet<TTuple<UE::Math::TIntPoint<int>,FDS_MapCellData>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FDS_MapCellData,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<UE::Math::TIntPoint<int>_&,FDS_MapCellData_&>_>
                  ((TSet<TTuple<UE::Math::TIntPoint<int>,FDS_MapCellData>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FDS_MapCellData,0>,FDefaultSetAllocator>
                    *)this_01,
                   (TPairInitializer<UE::Math::TIntPoint<int>_&,FDS_MapCellData_&> *)&param_4,
                   (bool *)&local_80);
        AddGridSlot(this,iVar2,iVar9);
        if (local_60.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Data);
        }
        if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data.AllocatorInstance.Data);
        }
        if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.Data.AllocatorInstance.Data);
        }
        if (local_b0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data);
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < param_3);
    }
    pFVar5 = param_4;
    param_4 = pFVar6;
  }
  pFVar3 = (param_4->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    param_4 = pFVar5;
    FMemory::Free(pFVar3);
  }
  return;
}

// NativeConstruct @ 14c090c20

void __thiscall UDS_W_MapTexture::NativeConstruct(UDS_W_MapTexture *this)

{
  FName *pFVar1;
  UDS_WorldMapEvent *pUVar2;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *pTVar3;
  FName local_res8;
  
  UDS_UserWidget::NativeConstruct((UDS_UserWidget *)this);
  pFVar1 = ::FName::FName(&local_res8,"Grid_Minimap");
  UDS_UserWidget::BindWidget<UGridPanel>((UDS_UserWidget *)this,&this->GridPanel,*pFVar1);
  pFVar1 = ::FName::FName(&local_res8,"Panel_Main");
  UDS_UserWidget::BindWidget<UDS_CanvasPanel>((UDS_UserWidget *)this,&this->MainPanel,*pFVar1);
  pUVar2 = UDS_WorldMapEvent::GetEvent();
  if (pUVar2 != (UDS_WorldMapEvent *)0x0) {
    FDS_FilteredEventDelegate<int_const_>::Remove<UDS_W_MapTexture>
              (&pUVar2->ReferencePosChangeDelegate,this);
    FDS_FilteredEventDelegate<int_const_,bool_const_,int_const_,int_const_>::
    Remove<UDS_W_MapTexture>(&pUVar2->IndoorDataChanageDelegate,this);
    pTVar3 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             TMapBase<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>_>
             ::FindOrAddImpl<int_const_&>
                       ((TMapBase<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>_>
                         *)&(pUVar2->ReferencePosChangeDelegate).Subscriptions,this->MapType,
                        &this->MapType);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(pTVar3,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>::
    AddUObject<UDS_W_MapTexture>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)
               pTVar3,(UDS_W_MapTexture *)&local_res8,(pmf_94fa5a3a *)this);
    pTVar3 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             TMapBase<int_const_,TMulticastDelegate<void___cdecl(bool,int,int),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(bool,int,int),FDefaultTSDelegateUserPolicy>,0>_>
             ::FindOrAddImpl<int_const_&>
                       ((TMapBase<int_const_,TMulticastDelegate<void___cdecl(bool,int,int),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(bool,int,int),FDefaultTSDelegateUserPolicy>,0>_>
                         *)&(pUVar2->IndoorDataChanageDelegate).Subscriptions,this->MapType,
                        &this->MapType);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(pTVar3,this);
    TMulticastDelegateRegistration<void___cdecl(bool,int,int),FDefaultTSDelegateUserPolicy>::
    AddUObject<UDS_W_MapTexture>
              ((TMulticastDelegateRegistration<void___cdecl(bool,int,int),FDefaultTSDelegateUserPolicy>
                *)pTVar3,(UDS_W_MapTexture *)&local_res8,(pmf_e3c0d040 *)this);
  }
  return;
}

// NativeDestruct @ 14c090e20

void __thiscall UDS_W_MapTexture::NativeDestruct(UDS_W_MapTexture *this)

{
  UDS_ZoneManager *pUVar1;
  UDS_WorldMapEvent *pUVar2;
  
  UDS_UserWidget::NativeDestruct((UDS_UserWidget *)this);
  pUVar1 = UDS_ZoneManager::GetInst();
  if (pUVar1 != (UDS_ZoneManager *)0x0) {
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &pUVar1->IslandIdChangeDelegate,(UObject *)this);
  }
  pUVar2 = UDS_WorldMapEvent::GetEvent();
  if (pUVar2 != (UDS_WorldMapEvent *)0x0) {
    FDS_FilteredEventDelegate<int_const_>::Remove<UDS_W_MapTexture>
              (&pUVar2->ReferencePosChangeDelegate,this);
    FDS_FilteredEventDelegate<int_const_,bool_const_,int_const_,int_const_>::
    Remove<UDS_W_MapTexture>(&pUVar2->IndoorDataChanageDelegate,this);
  }
  return;
}

// NativeTick @ 14c091a30

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_W_MapTexture::NativeTick(UDS_W_MapTexture *this,FGeometry *param_1,float param_2)

{
  float fVar1;
  bool bVar2;
  UDS_MovementCore *this_00;
  UDS_WindowManager *pUVar3;
  double dVar4;
  double dVar5;
  TVector<double> local_28;
  
  UDS_UserWidget::NativeTick((UDS_UserWidget *)this,param_1,param_2);
  if (((char)this->MapType == '\0') &&
     (bVar2 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                        (&this->OwnerMovementCore,(void *)0x0), !bVar2)) {
    this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get(&(this->OwnerMovementCore).WeakPtr);
    UDS_MovementCore::GetActorLocation(this_00,&local_28);
    OnUpdatePosition(this,&local_28);
  }
  pUVar3 = UDS_WindowManager::GetInst();
  if (pUVar3 != (UDS_WindowManager *)0x0) {
    dVar5 = (double)*(float *)&param_1->Size;
    dVar4 = (double)*(float *)&(param_1->Size).field_0x4;
    if ((__real_3f1a36e2e0000000 <
         (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
       (__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
      fVar1 = this->TextureSize;
      if (dVar5 < (double)fVar1) {
        (this->MaxTextureNum).field0_0x0._s_0.X = 2;
      }
      if (dVar4 < (double)fVar1) {
        (this->MaxTextureNum).field0_0x0._s_0.Y = 2;
      }
    }
  }
  return;
}

// OnCloseInit @ 14c093820

void __thiscall UDS_W_MapTexture::OnCloseInit(UDS_W_MapTexture *this)

{
  UDS_UserWidget::OnCloseInit((UDS_UserWidget *)this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &ADS_MainCharacter::MainCharacterSwitchCompleteDelegate,this);
  return;
}

// OnCurLookIndoorIDChanged @ 14c093f00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UDS_W_MapTexture::OnCurLookIndoorIDChanged(UDS_W_MapTexture *this,int param_1)

{
  undefined1 *puVar1;
  TMap<UE::Math::TIntPoint<int>,FDS_MapImageData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FDS_MapImageData,0>_>
  *this_00;
  TMap<UE::Math::TIntPoint<int>,FDS_MapCellData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FDS_MapCellData,0>_>
  *this_01;
  float fVar2;
  UGridPanel *pUVar3;
  TIntPoint<int>_u_0_s_0 TVar4;
  bool bVar5;
  double dVar6;
  uint uVar7;
  uint uVar8;
  FDS_MapIndoorGroupTableRow *pFVar9;
  FString *pFVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  ForAnyElementType FVar15;
  int iVar16;
  ulonglong uVar17;
  int iVar18;
  ulonglong uVar19;
  int iVar20;
  int *piVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  uint uVar25;
  double dVar26;
  uint uVar27;
  undefined1 auStackY_148 [32];
  TVector2<double>_u_0 local_118;
  int local_108;
  int iStack_104;
  int *local_100;
  FString local_f8;
  FString local_e8;
  double local_d8;
  double local_d0;
  FString local_c8;
  undefined8 local_b8;
  FString local_b0;
  undefined1 local_a0 [24];
  int local_88 [10];
  ulonglong local_60;
  
  if (param_1 != 0) {
    local_60 = __security_cookie.value ^ (ulonglong)auStackY_148;
    pFVar9 = FDS_MapIndoorGroupTableRow::Get((longlong)param_1,true);
    if (pFVar9 != (FDS_MapIndoorGroupTableRow *)0x0) {
      this->IsIndoor = true;
      this->CurLookIndoorID = param_1;
      this->OrthoWidth = (float)pFVar9->TextureOrthoWidth;
      ::FString::PrintfImpl(&local_b0,L"/Game/UIs/MIR_FIVE/Atlas_Resources_N/MiniMap/Indoor/%d");
      dVar6 = __real_40f86a0000000000;
      uVar8 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar7 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      dVar23 = (pFVar9->StartPosition).field0_0x0._s_0.X;
      dVar24 = (pFVar9->StartPosition).field0_0x0._s_0.Y;
      dVar22 = dVar23 - (pFVar9->EndPosition).field0_0x0._s_0.X;
      dVar26 = dVar24 - (pFVar9->EndPosition).field0_0x0._s_0.Y;
      uVar25 = SUB84(dVar26,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar27 = (uint)((ulonglong)dVar26 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      if (__real_40f86a0000000000 <
          (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar22,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
        (this->MapStartPos).field0_0x0._s_0.X = dVar23;
        (this->MapStartPos).field0_0x0._s_0.Y = dVar24;
        dVar23 = (pFVar9->EndPosition).field0_0x0._s_0.Y;
        (this->MapEndPos).field0_0x0._s_0.X = (pFVar9->EndPosition).field0_0x0._s_0.X;
        (this->MapEndPos).field0_0x0._s_0.Y = dVar23;
        dVar23 = (this->MapStartPos).field0_0x0._s_0.Y - dVar23;
        dVar24 = (this->MapStartPos).field0_0x0._s_0.X - (this->MapEndPos).field0_0x0._s_0.X;
        (this->MapSize).field0_0x0._s_0.X =
             (double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) & uVar8,SUB84(dVar24,0) & uVar7);
        (this->MapSize).field0_0x0._s_0.Y =
             (double)CONCAT44((uint)((ulonglong)dVar23 >> 0x20) & uVar8,SUB84(dVar23,0) & uVar7);
        dVar26 = __real_bfe0000000000000;
        dVar23 = (this->MapStartPos).field0_0x0._s_0.Y;
        pUVar3 = this->GridPanel;
        fVar2 = this->OrthoWidth;
        dVar24 = (this->MapEndPos).field0_0x0._s_0.X;
        dVar6 = (this->MapEndPos).field0_0x0._s_0.Y;
        local_b8 = CONCAT71(local_b8._1_7_,1);
        (this->MapBound).Min.field0_0x0._s_0.X = (this->MapStartPos).field0_0x0._s_0.X;
        (this->MapBound).Min.field0_0x0._s_0.Y = dVar23;
        dVar22 = __real_4000000000000000;
        (this->MapBound).Max.field0_0x0._s_0.X = dVar24;
        (this->MapBound).Max.field0_0x0._s_0.Y = dVar6;
        *(undefined8 *)&(this->MapBound).bIsValid = local_b8;
        dVar23 = (this->MapSize).field0_0x0._s_0.Y;
        iVar13 = -((int)ROUND(dVar26 - (dVar22 / (double)fVar2) * (this->MapSize).field0_0x0._s_0.X)
                  >> 1);
        (this->MaxCell).field0_0x0._s_0.X = iVar13;
        (this->MaxCell).field0_0x0._s_0.Y =
             -((int)ROUND(dVar26 - (dVar23 + dVar23) / (double)fVar2) >> 1);
        TArray<float,TSizedDefaultAllocator<32>_>::SetNumZeroed(&pUVar3->ColumnFill,iVar13,Default);
        TArray<float,TSizedDefaultAllocator<32>_>::SetNumZeroed
                  (&this->GridPanel->RowFill,(this->MaxCell).field0_0x0._s_0.Y,Default);
        (**(code **)(this->GridPanel->_padding_ + 0x310))();
        pFVar10 = ::FString::FString((FString *)&local_118._s_0,&local_b0);
        InitCellData(this,0,(this->MaxCell).field0_0x0._s_0.X,(this->MaxCell).field0_0x0._s_0.Y,
                     pFVar10);
      }
      else {
        dVar22 = (double)this->OrthoWidth;
        (this->MapStartPos).field0_0x0._s_0.X = dVar23 - dVar22;
        (this->MapStartPos).field0_0x0._s_0.Y = dVar24 - dVar22;
        dVar23 = (pFVar9->StartPosition).field0_0x0._s_0.Y;
        (this->IndoorMapStartPos).field0_0x0._s_0.X = (pFVar9->StartPosition).field0_0x0._s_0.X;
        (this->IndoorMapStartPos).field0_0x0._s_0.Y = dVar23;
        dVar23 = (pFVar9->EndPosition).field0_0x0._s_0.Y;
        (this->MapEndPos).field0_0x0._s_0.X = (pFVar9->EndPosition).field0_0x0._s_0.X + dVar22;
        (this->MapEndPos).field0_0x0._s_0.Y = dVar23 + dVar22;
        dVar23 = (pFVar9->EndPosition).field0_0x0._s_0.Y;
        lVar14 = 3;
        (this->IndoorMapEndPos).field0_0x0._s_0.X = (pFVar9->EndPosition).field0_0x0._s_0.X;
        (this->IndoorMapEndPos).field0_0x0._s_0.Y = dVar23;
        dVar23 = (this->MapEndPos).field0_0x0._s_0.X - (this->MapStartPos).field0_0x0._s_0.X;
        dVar24 = (this->MapEndPos).field0_0x0._s_0.Y - (this->MapStartPos).field0_0x0._s_0.Y;
        (this->MapSize).field0_0x0._s_0.X =
             (double)CONCAT44((uint)((ulonglong)dVar23 >> 0x20) & uVar8,SUB84(dVar23,0) & uVar7);
        (this->MapSize).field0_0x0._s_0.Y =
             (double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) & uVar8,SUB84(dVar24,0) & uVar7);
        dVar23 = (this->MapEndPos).field0_0x0._s_0.X;
        dVar24 = (this->MapEndPos).field0_0x0._s_0.Y;
        pUVar3 = this->GridPanel;
        dVar22 = (this->MapStartPos).field0_0x0._s_0.X;
        dVar26 = (this->MapStartPos).field0_0x0._s_0.Y;
        local_b8 = CONCAT71(local_b8._1_7_,1);
        (this->MaxCell).field0_0x0._s_0.X = 3;
        (this->MapBound).Min.field0_0x0._s_0.X = dVar22;
        (this->MapBound).Min.field0_0x0._s_0.Y = dVar26;
        (this->MaxCell).field0_0x0._s_0.Y = 3;
        (this->MapBound).Max.field0_0x0._s_0.X = dVar23;
        (this->MapBound).Max.field0_0x0._s_0.Y = dVar24;
        *(undefined8 *)&(this->MapBound).bIsValid = local_b8;
        TArray<float,TSizedDefaultAllocator<32>_>::SetNumZeroed(&pUVar3->ColumnFill,3,Default);
        TArray<float,TSizedDefaultAllocator<32>_>::SetNumZeroed
                  (&this->GridPanel->RowFill,(this->MaxCell).field0_0x0._s_0.Y,Default);
        (**(code **)(this->GridPanel->_padding_ + 0x310))();
        this_00 = &this->MapTextureList;
        bVar5 = 1 < *(int *)&(this->MapTextureList).field_0x48;
        if (!bVar5) {
          TSet<TTuple<UE::Math::TIntPoint<int>,FDS_MapImageData>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FDS_MapImageData,0>,FDefaultSetAllocator>
          ::UnhashElements((TSet<TTuple<UE::Math::TIntPoint<int>,FDS_MapImageData>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FDS_MapImageData,0>,FDefaultSetAllocator>
                            *)this_00);
        }
        uVar19 = 0;
        puVar1 = &(this->MapTextureList).field_0xc;
        *(undefined4 *)&(this->MapTextureList).field_0x8 = 0;
        if (*(int *)puVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
        }
        *(undefined4 *)&(this->MapTextureList).field_0x30 = 0xffffffff;
        *(undefined4 *)&(this->MapTextureList).field_0x34 = 0;
        iVar13 = *(int *)&(this->MapTextureList).field_0x2c;
        *(undefined4 *)&(this->MapTextureList).field_0x28 = 0;
        if ((iVar13 < 0) || (0x80 < iVar13)) {
          *(undefined4 *)&(this->MapTextureList).field_0x2c = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)&(this->MapTextureList).field_0x10,0);
        }
        if (bVar5) {
          *(undefined4 *)&(this->MapTextureList).field_0x48 = 1;
          TSet<TTuple<UE::Math::TIntPoint<int>,FDS_MapImageData>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FDS_MapImageData,0>,FDefaultSetAllocator>
          ::Rehash((TSet<TTuple<UE::Math::TIntPoint<int>,FDS_MapImageData>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FDS_MapImageData,0>,FDefaultSetAllocator>
                    *)this_00);
        }
        this_01 = &this->MapCellList;
        bVar5 = 1 < *(int *)&(this->MapCellList).field_0x48;
        if (!bVar5) {
          TSet<TTuple<UE::Math::TIntPoint<int>,FDS_MapCellData>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FDS_MapCellData,0>,FDefaultSetAllocator>
          ::UnhashElements((TSet<TTuple<UE::Math::TIntPoint<int>,FDS_MapCellData>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FDS_MapCellData,0>,FDefaultSetAllocator>
                            *)this_01);
        }
        TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,FDS_MapCellData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,FDS_MapCellData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)this_01,0,*(int *)&(this->MapCellList).field_0x8);
        puVar1 = &(this->MapCellList).field_0xc;
        *(undefined4 *)&(this->MapCellList).field_0x8 = 0;
        if (*(int *)puVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x38,8,0,(ForAnyElementType *)this_01,0,(int *)puVar1);
        }
        *(undefined4 *)&(this->MapCellList).field_0x30 = 0xffffffff;
        *(undefined4 *)&(this->MapCellList).field_0x34 = 0;
        iVar13 = *(int *)&(this->MapCellList).field_0x2c;
        *(undefined4 *)&(this->MapCellList).field_0x28 = 0;
        if ((iVar13 < 0) || (0x80 < iVar13)) {
          *(undefined4 *)&(this->MapCellList).field_0x2c = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)&(this->MapCellList).field_0x10,0);
        }
        if (bVar5) {
          *(undefined4 *)&(this->MapCellList).field_0x48 = 1;
          TSet<TTuple<UE::Math::TIntPoint<int>,FDS_MapCellData>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FDS_MapCellData,0>,FDefaultSetAllocator>
          ::Rehash((TSet<TTuple<UE::Math::TIntPoint<int>,FDS_MapCellData>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FDS_MapCellData,0>,FDefaultSetAllocator>
                    *)this_01);
        }
        local_88[8] = 0;
        local_88[0] = 0;
        local_88[1] = 0;
        local_88[2] = 0;
        local_88[3] = 0;
        local_88[4] = 0;
        local_88[5] = 0;
        local_88[6] = 0;
        local_88[7] = 0;
        uVar17 = uVar19;
        do {
          uVar17 = uVar17 + 1;
          uVar11 = 1;
          lVar12 = (ulonglong)(dVar6 < (double)CONCAT44(uVar27,uVar25)) + 1;
          do {
            if ((uVar17 < 3) && (uVar11 < 3)) {
              local_88[lVar14 + uVar11] = 1;
            }
            uVar11 = uVar11 + 1;
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
          lVar14 = lVar14 + 3;
        } while ((longlong)uVar17 < 1);
        if (0 < (this->MaxCell).field0_0x0._s_0.X) {
          local_100 = local_88;
          do {
            iVar13 = 0;
            iVar18 = (int)uVar19;
            if (0 < (this->MaxCell).field0_0x0._s_0.Y) {
              local_118._s_0.X = (double)&local_b8;
              local_118._s_0.Y = (double)&local_d8;
              piVar21 = local_100;
              local_108 = iVar18;
              do {
                if (*piVar21 == 1) {
                  ::FString::PrintfImpl((FString *)(local_a0 + 8),L"T_MapTexture_%02d_%02d");
                  ::FString::PrintfImpl(&local_f8,L"%s/%s.%s");
                  FVar15.Data = local_f8.Data.AllocatorInstance.Data;
                  iVar20 = local_f8.Data.ArrayNum;
                  local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_f8.Data.ArrayNum = 0;
                  local_f8.Data.ArrayMax = 0;
                  if ((FDS_MapCellData *)local_a0._8_8_ != (FDS_MapCellData *)0x0) {
                    FMemory::Free((void *)local_a0._8_8_);
                  }
                }
                else {
                  ::FString::PrintfImpl
                            (&local_e8,
                             L"/Game/UIs/MIR_FIVE/Atlas_Resources_N/MiniMap/Map_Default_Texture_01.Map_Default_Texture_01"
                            );
                  FVar15.Data = local_e8.Data.AllocatorInstance.Data;
                  iVar20 = local_e8.Data.ArrayNum;
                  local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_e8.Data.ArrayNum = 0;
                  local_e8.Data.ArrayMax = 0;
                }
                iVar16 = iVar20 + -1;
                local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                if (iVar20 == 0) {
                  iVar16 = 0;
                }
                local_b8 = CONCAT44(iVar13,local_108);
                local_c8.Data.ArrayNum = 0;
                local_c8.Data.ArrayMax = 0;
                local_d8 = (double)((float)iVar18 * this->OrthoWidth);
                local_d0 = (double)((float)iVar13 * this->OrthoWidth);
                iStack_104 = iVar13;
                ::FString::AssignRange(&local_c8,(wchar_t *)FVar15.Data,iVar16);
                TSet<TTuple<UE::Math::TIntPoint<int>,FDS_MapCellData>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FDS_MapCellData,0>,FDefaultSetAllocator>
                ::Emplace<TPairInitializer<UE::Math::TIntPoint<int>_&,FDS_MapCellData_&>_>
                          ((TSet<TTuple<UE::Math::TIntPoint<int>,FDS_MapCellData>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FDS_MapCellData,0>,FDefaultSetAllocator>
                            *)this_01,
                           (TPairInitializer<UE::Math::TIntPoint<int>_&,FDS_MapCellData_&> *)
                           local_a0,(bool *)&local_118);
                AddGridSlot(this,iVar18,iVar13);
                if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_c8.Data.AllocatorInstance.Data);
                }
                if (FVar15.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(FVar15.Data);
                }
                iVar13 = iVar13 + 1;
                piVar21 = piVar21 + 1;
              } while (iVar13 < (this->MaxCell).field0_0x0._s_0.Y);
            }
            local_100 = local_100 + 3;
            uVar19 = (ulonglong)(iVar18 + 1U);
          } while ((int)(iVar18 + 1U) < (this->MaxCell).field0_0x0._s_0.X);
        }
      }
      if ((char)this->MapType == '\x01') {
        ReferencePosChange(this);
        TVar4 = (this->MaxCell).field0_0x0._s_0;
        UpdateWorldMapGridPanelTransform(this);
        local_118._s_0.X = (double)TVar4.X;
        local_118._s_0.Y = (double)TVar4.Y;
        UpdateWorldMapTextureInfo(this,(TVector2<double> *)&local_118._s_0);
      }
      if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// OnCurLookIslandIDChanged @ 14c094780

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UDS_W_MapTexture::OnCurLookIslandIDChanged(UDS_W_MapTexture *this,int param_1)

{
  int iVar1;
  UGridPanel *pUVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  ForAnyElementType _Src;
  FDS_ZoneIslandTableRow *pFVar6;
  int iVar7;
  double dVar8;
  uint uVar9;
  double dVar10;
  uint uVar11;
  FString local_88;
  FString local_78;
  TVector2<double>_u_0 local_68 [3];
  undefined1 local_38;
  undefined7 uStack_37;
  
  if (param_1 != 0) {
    this->CurLookIslandID = param_1;
    this->IsIndoor = false;
    pFVar6 = FDS_ZoneIslandTableRow::GetRef((longlong)param_1,true);
    dVar8 = (double)pFVar6->_padding_;
    (this->MapStartPos).field0_0x0._s_0.X = (double)pFVar6->_padding_;
    (this->MapStartPos).field0_0x0._s_0.Y = dVar8;
    dVar8 = (double)pFVar6->_padding_;
    (this->MapEndPos).field0_0x0._s_0.X = (double)pFVar6->_padding_;
    (this->MapEndPos).field0_0x0._s_0.Y = dVar8;
    dVar8 = (this->MapStartPos).field0_0x0._s_0.X - (this->MapEndPos).field0_0x0._s_0.X;
    dVar10 = (this->MapStartPos).field0_0x0._s_0.Y - (this->MapEndPos).field0_0x0._s_0.Y;
    uVar9 = SUB84(dVar10,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar11 = (uint)((ulonglong)dVar10 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    (this->MapSize).field0_0x0._s_0.X =
         (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    (this->MapSize).field0_0x0._s_0.Y = (double)CONCAT44(uVar11,uVar9);
    dVar5 = __real_bfe0000000000000;
    dVar4 = __real_4000000000000000;
    dVar8 = (this->MapStartPos).field0_0x0._s_0.Y;
    pUVar2 = this->GridPanel;
    dVar10 = (this->MapEndPos).field0_0x0._s_0.X;
    dVar3 = (this->MapEndPos).field0_0x0._s_0.Y;
    local_38 = 1;
    (this->MapBound).Min.field0_0x0._s_0.X = (this->MapStartPos).field0_0x0._s_0.X;
    (this->MapBound).Min.field0_0x0._s_0.Y = dVar8;
    (this->MapBound).Max.field0_0x0._s_0.X = dVar10;
    (this->MapBound).Max.field0_0x0._s_0.Y = dVar3;
    *(ulonglong *)&(this->MapBound).bIsValid = CONCAT71(uStack_37,1);
    dVar10 = (double)pFVar6->TextureOrthoWidth;
    this->OrthoWidth = (float)pFVar6->TextureOrthoWidth;
    dVar8 = (this->MapSize).field0_0x0._s_0.Y;
    iVar7 = -((int)ROUND(dVar5 - (dVar4 / dVar10) * (this->MapSize).field0_0x0._s_0.X) >> 1);
    (this->MaxCell).field0_0x0._s_0.X = iVar7;
    (this->MaxCell).field0_0x0._s_0.Y = -((int)ROUND(dVar5 - (dVar8 + dVar8) / dVar10) >> 1);
    TArray<float,TSizedDefaultAllocator<32>_>::SetNumZeroed(&pUVar2->ColumnFill,iVar7,Default);
    TArray<float,TSizedDefaultAllocator<32>_>::SetNumZeroed
              (&this->GridPanel->RowFill,(this->MaxCell).field0_0x0._s_0.Y,Default);
    (**(code **)(this->GridPanel->_padding_ + 0x310))();
    ::FString::PrintfImpl(&local_78,L"/Game/UIs/MIR_FIVE/Atlas_Resources_N/MiniMap/%d");
    _Src.Data = local_78.Data.AllocatorInstance.Data;
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_78.Data.ArrayNum == 0) {
      local_88.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_78.Data.ArrayNum,0,(ForAnyElementType *)&local_88,local_78.Data.ArrayNum,
                 &local_88.Data.ArrayMax);
      memcpy(local_88.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_78.Data.ArrayNum * 2);
    }
    InitCellData(this,0,(this->MaxCell).field0_0x0._s_0.X,(this->MaxCell).field0_0x0._s_0.Y,
                 &local_88);
    if ((char)this->MapType == '\x01') {
      ReferencePosChange(this);
      iVar7 = (this->MaxCell).field0_0x0._s_0.X;
      iVar1 = (this->MaxCell).field0_0x0._s_0.Y;
      UpdateWorldMapGridPanelTransform(this);
      local_68[0]._0_8_ = (double)iVar7;
      local_68[0]._8_8_ = (double)iVar1;
      UpdateWorldMapTextureInfo(this,(TVector2<double> *)&local_68[0]._s_0);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// OnIndoorDataChanged @ 14c095c20

void __thiscall
UDS_W_MapTexture::OnIndoorDataChanged(UDS_W_MapTexture *this,bool param_1,int param_2,int param_3)

{
  this->CurCharIndoorGroupID = param_2;
  this->CurLookIndoorGroupID = param_3;
  return;
}

// OnMainCharChanged @ 14c0966d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_W_MapTexture::OnMainCharChanged
          (UDS_W_MapTexture *this,FDS_EntityBase *param_1,FDS_EntityBase *param_2)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr *pFVar3;
  FWeakObjectPtr local_res20;
  undefined1 local_18 [16];
  
  ADS_MainCharacter::GetMainPlayer();
  bVar1 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&local_res20);
    pFVar3 = (FWeakObjectPtr *)
             (**(code **)(*(longlong *)&pUVar2[0x29].field_0x10 + 0x78))
                       (&pUVar2[0x29].field_0x10,local_18);
    (this->OwnerMovementCore).WeakPtr = *pFVar3;
  }
  return;
}

// OnMapLocationOffset @ 14c0967c0

void __thiscall
UDS_W_MapTexture::OnMapLocationOffset(UDS_W_MapTexture *this,TVector2<double> *param_1)

{
  bool bVar1;
  
  if ((char)this->MapType == '\x01') {
    bVar1 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                      (&this->OwnerMovementCore,(void *)0x0);
    if (!bVar1) {
      UpdateWorldMapGridPanelTransform(this);
      return;
    }
  }
  return;
}

// OnMapTextureLoaded @ 14c0969a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_W_MapTexture::OnMapTextureLoaded
          (UDS_W_MapTexture *this,FSoftObjectPath *param_1,
          TWeakObjectPtr<UDS_Image,FWeakObjectPtr> param_2)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  UImage *this_00;
  FSlateBrush *pFVar5;
  void *pvVar6;
  FWeakObjectPtr local_res18;
  undefined1 auStackY_2b8 [32];
  FString local_278;
  undefined1 local_268 [28];
  TEnumAsByte<ESlateBrushDrawType::Type> local_24c;
  TEnumAsByte<ESlateBrushTileType::Type> local_24b;
  TEnumAsByte<ESlateBrushMirrorType::Type> local_24a;
  TEnumAsByte<ESlateBrushImageType::Type> local_249;
  FDeprecateSlateVector2D local_248;
  longlong local_240;
  longlong lStack_238;
  TObjectPtr<UObject>_u_0 local_230;
  TVector4<double>_u_0 local_228;
  FLinearColor_u_0 local_208;
  longlong local_1f8;
  longlong lStack_1f0;
  TVector2<float>_u_0 local_1e8;
  TVector2<float>_u_0 TStack_1e0;
  undefined4 local_1d8;
  byte local_1d4;
  FSlateSharedHandleData *local_1d0;
  FSharedReferencer<1> local_1c8;
  FName local_1c0;
  void *local_168;
  wchar_t *local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  local_res18 = param_2.WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar2) {
    pUVar4 = FSoftObjectPath::ResolveObject(param_1);
    if (pUVar4 != (UObject *)0x0) {
      this_00 = (UImage *)FWeakObjectPtr::Get(&local_res18);
      pFVar5 = UImage::GetBrush(this_00);
      local_268._0_8_ = &___7FSlateBrush__6B_;
      local_268._8_8_ = *(undefined8 *)&(pFVar5->TintColor).SpecifiedColor.field0_0x0;
      local_268._16_8_ = *(longlong *)((longlong)&(pFVar5->TintColor).SpecifiedColor.field0_0x0 + 8)
      ;
      local_268[0x18] = (pFVar5->TintColor).ColorUseRule;
      local_268[0x19] = (pFVar5->TintColor).ColorTableId;
      local_268._26_2_ = *(undefined2 *)&(pFVar5->TintColor).field_0x12;
      local_24c.Value = (pFVar5->DrawAs).Value;
      local_24b.Value = (pFVar5->Tiling).Value;
      local_24a.Value = (pFVar5->Mirroring).Value;
      local_249.Value = (pFVar5->ImageType).Value;
      local_248 = pFVar5->ImageSize;
      local_240._0_4_ = (pFVar5->Margin).Left;
      local_240._4_4_ = (pFVar5->Margin).Top;
      lStack_238._0_4_ = (pFVar5->Margin).Right;
      lStack_238._4_4_ = (pFVar5->Margin).Bottom;
      local_230 = (TObjectPtr<UObject>_u_0)(pFVar5->ResourceObject).field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_230.DebugPtr != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_230.DebugPtr);
      }
      local_228._s_0.X = (pFVar5->OutlineSettings).CornerRadii.field0_0x0._s_0.X;
      local_228._s_0.Y = (pFVar5->OutlineSettings).CornerRadii.field0_0x0._s_0.Y;
      local_228._s_0.Z = (pFVar5->OutlineSettings).CornerRadii.field0_0x0._s_0.Z;
      local_228._s_0.W = (pFVar5->OutlineSettings).CornerRadii.field0_0x0._s_0.W;
      local_208._0_8_ = *(undefined8 *)&(pFVar5->OutlineSettings).Color.SpecifiedColor.field0_0x0;
      local_208._8_8_ =
           *(longlong *)((longlong)&(pFVar5->OutlineSettings).Color.SpecifiedColor.field0_0x0 + 8);
      local_1f8 = *(longlong *)&(pFVar5->OutlineSettings).Color.ColorUseRule;
      lStack_1f0._0_1_ = (pFVar5->OutlineSettings).RoundingType;
      lStack_1f0._1_1_ = (pFVar5->OutlineSettings).bUseBrushTransparency;
      lStack_1f0._2_6_ = *(undefined6 *)&(pFVar5->OutlineSettings).field_0x3a;
      local_1e8 = (pFVar5->UVRegion).Min.field0_0x0;
      TStack_1e0 = (pFVar5->UVRegion).Max.field0_0x0;
      local_1d8._0_1_ = (pFVar5->UVRegion).bIsValid;
      local_1d8._1_3_ = *(undefined3 *)&(pFVar5->UVRegion).field_0x11;
      local_1d4 = local_1d4 & 0xfe | pFVar5->bIsDynamicallyLoaded;
      local_1d4 = (local_1d4 ^ pFVar5->field_0x94) & 2 ^ local_1d4;
      local_1d4 = (local_1d4 ^ pFVar5->field_0x94) & 4 ^ local_1d4;
      local_1d0 = (pFVar5->ResourceHandle).Data.Object;
      local_1c8.ReferenceController =
           (pFVar5->ResourceHandle).Data.SharedReferenceCount.ReferenceController;
      if (local_1c8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_1c8.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_1c8.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_1c0 = pFVar5->ResourceName;
      FSlateBrush::SetResourceObject((FSlateBrush *)local_268,pUVar4);
      pUVar4 = FWeakObjectPtr::Get(&local_res18);
      (**(code **)(*(longlong *)pUVar4 + 0x310))(pUVar4,local_268);
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        FSoftObjectPath::ToString(param_1,&local_278);
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_W_MapTexture::OnMapTextureLoaded",0x24,Yes);
        UDS_LogManager::PrintLog
                  (pUVar3,1,Display,local_148.Ptr,0x201,L"Successfully loaded texture: %s");
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
        if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_278.Data.AllocatorInstance.Data);
        }
      }
      local_268._0_8_ = &___7FSlateBrush__6B_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1c8.ReferenceController);
      goto LAB_14c096d48;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) goto LAB_14c096d48;
    pUVar3 = UDS_LogManager::GetInst();
    FSoftObjectPath::ToString(param_1,&local_278);
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_W_MapTexture::OnMapTextureLoaded",0x24,Yes);
    UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,0x205,L"Failed to load texture: %s");
    pvVar6 = (void *)local_148._padding_;
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) goto LAB_14c096d48;
    pUVar3 = UDS_LogManager::GetInst();
    FSoftObjectPath::ToString(param_1,&local_278);
    local_168 = (void *)0x0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              ((TStringConversion<TStringConvert<char,wchar_t>,128> *)local_268,
               "UDS_W_MapTexture::OnMapTextureLoaded",0x24,Yes);
    UDS_LogManager::PrintLog
              (pUVar3,1,Warning,local_160,0x1f6,L"Image is no longer valid during async load: %s");
    pvVar6 = local_168;
  }
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.Data.AllocatorInstance.Data);
  }
LAB_14c096d48:
  pFVar1 = (param_1->SubPathString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// OnOpenInit @ 14c097d40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_W_MapTexture::OnOpenInit(UDS_W_MapTexture *this)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr *pFVar3;
  UDS_ZoneManager *pUVar4;
  UDS_LogManager *pUVar5;
  FDS_ZoneBaseTableRow *pFVar6;
  undefined1 auStackY_198 [32];
  uint uVar7;
  wchar_t *pwVar8;
  FWeakObjectPtr local_168 [2];
  undefined1 local_158 [288];
  void *local_38;
  wchar_t *local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  UDS_UserWidget::OnOpenInit((UDS_UserWidget *)this);
  ADS_MainCharacter::GetMainPlayer();
  bVar1 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *)local_168,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_168);
    pFVar3 = (FWeakObjectPtr *)
             (**(code **)(*(longlong *)&pUVar2[0x29].field_0x10 + 0x78))
                       (&pUVar2[0x29].field_0x10,local_158);
    (this->OwnerMovementCore).WeakPtr = *pFVar3;
  }
  pUVar4 = UDS_ZoneManager::GetInst();
  if (pUVar4 == (UDS_ZoneManager *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_38 = (void *)0x0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_158 + 0x20),
               "UDS_W_MapTexture::OnOpenInit",0x1c,Yes);
    pwVar8 = L"worldmapZoomStepCommonDataTableRow nullptr";
    uVar7 = 0x4c;
  }
  else {
    pFVar6 = FDS_ZoneBaseTableRow::Get((ulonglong)pUVar4->ZoneID,true);
    if (pFVar6 != (FDS_ZoneBaseTableRow *)0x0) {
      if (pFVar6->ID_MapIndoorGroup < 1) {
        this->CurCharIslandID = pUVar4->IslandID;
      }
      local_158._8_4_ = 0;
      local_158._0_8_ = OnMainCharChanged;
      local_158._24_8_ = (ulonglong)(uint)local_158._12_4_ << 0x20;
      local_158._16_8_ = OnMainCharChanged;
      TMulticastDelegateRegistration<void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
      ::AddUObject<UDS_W_MapTexture>
                ((TMulticastDelegateRegistration<void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
                  *)&ADS_MainCharacter::MainCharacterSwitchCompleteDelegate,
                 (UDS_W_MapTexture *)local_158,(pmf_fae02a90 *)this);
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_38 = (void *)0x0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_158 + 0x20),
               "UDS_W_MapTexture::OnOpenInit",0x1c,Yes);
    pwVar8 = L"FDS_ZoneBaseTableRow nullptr";
    uVar7 = 0x54;
  }
  UDS_LogManager::PrintLog(pUVar5,1,Warning,local_30,uVar7,pwVar8);
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// OnReferencePosChange @ 14c099290

void __thiscall UDS_W_MapTexture::OnReferencePosChange(UDS_W_MapTexture *this)

{
  if ((UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X ==
       (this->MapEndPos).field0_0x0._s_0.X) &&
     (UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y ==
      (this->MapEndPos).field0_0x0._s_0.Y)) {
    return;
  }
  ReferencePosChange(this);
  return;
}

// OnUpdatePosition @ 14c09d040

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_MapTexture::OnUpdatePosition(UDS_W_MapTexture *this,TVector<double> *param_1)

{
  double *pdVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  longlong lVar5;
  FName FVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  TIntPoint<int>_u_0_s_0 TVar10;
  double dVar11;
  FWeakObjectPtr FVar12;
  void *_Src;
  bool bVar13;
  FWidgetTransform *pFVar14;
  FDS_MapCellData *pFVar15;
  FDS_MapImageData *pFVar16;
  FName *pFVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  size_t _Size;
  uint uVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  TIntPoint<int>_u_0 TVar27;
  int iVar28;
  int iVar29;
  double dVar30;
  FWeakObjectPtr local_res20;
  FSoftObjectPath local_128;
  TVector2<double>_u_0 local_108;
  void *local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  undefined8 local_d8;
  FName local_c8;
  uint uStack_c0;
  uint uStack_bc;
  FString local_b8 [8];
  
  dVar11 = __real_3ff0000000000000;
  fVar2 = this->OrthoWidth;
  if (this->IsIndoor == true) {
    dVar7 = (this->IndoorMapStartPos).field0_0x0._s_0.X - (this->IndoorMapEndPos).field0_0x0._s_0.X;
    dVar8 = (this->IndoorMapStartPos).field0_0x0._s_0.Y - (this->IndoorMapEndPos).field0_0x0._s_0.Y;
    dVar7 = ((double)fVar2 -
            (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) *
            __real_3fe0000000000000 + (param_1->field0_0x0)._s_0.X;
    dVar8 = ((double)fVar2 -
            (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) *
            __real_3fe0000000000000 + (param_1->field0_0x0)._s_0.Y;
  }
  else {
    dVar7 = (param_1->field0_0x0)._s_0.X;
    dVar8 = (param_1->field0_0x0)._s_0.Y;
  }
  TVar27 = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  if (((((this->MapBound).Min.field0_0x0._s_0.X <= dVar7 &&
         dVar7 != (this->MapBound).Min.field0_0x0._s_0.X) &&
       (dVar7 < (this->MapBound).Max.field0_0x0._s_0.X)) &&
      (pdVar1 = &(this->MapBound).Min.field0_0x0._s_0.Y, *pdVar1 <= dVar8 && dVar8 != *pdVar1)) &&
     (dVar8 < (this->MapBound).Max.field0_0x0._s_0.Y)) {
    dVar30 = dVar8 - (this->MapStartPos).field0_0x0._s_0.Y;
    dVar9 = dVar7 - (this->MapStartPos).field0_0x0._s_0.X;
    TVar27 = (TIntPoint<int>_u_0)
             (((longlong)
               ROUND((dVar30 + dVar30) * (__real_3ff0000000000000 / (double)fVar2) -
                     __real_3fe0000000000000) >> 1) << 0x20 |
             (longlong)
             ROUND((dVar9 + dVar9) * (__real_3ff0000000000000 / (double)fVar2) -
                   __real_3fe0000000000000) >> 1 & 0xffffffffU);
  }
  fVar3 = this->TextureSize;
  (this->CurCell).field0_0x0._s_0 = (TIntPoint<int>_u_0_s_0)TVar27;
  dVar9 = (this->MapStartPos).field0_0x0._s_0.X;
  dVar30 = (this->MapStartPos).field0_0x0._s_0.Y;
  uVar24 = TVar27._s_0.Y;
  uVar20 = TVar27._s_0.X - uVar24 ^ uVar24 >> 0xd;
  uVar18 = (-0x61c88647 - uVar20) - uVar24 ^ uVar20 << 8;
  uVar23 = (uVar24 - uVar20) - uVar18 ^ uVar18 >> 0xd;
  uVar20 = (uVar20 - uVar23) - uVar18 ^ uVar23 >> 0xc;
  uVar18 = (uVar18 - uVar20) - uVar23 ^ uVar20 << 0x10;
  uVar23 = (uVar23 - uVar18) - uVar20 ^ uVar18 >> 5;
  uVar20 = (uVar20 - uVar23) - uVar18 ^ uVar23 >> 3;
  uVar18 = (uVar18 - uVar20) - uVar23 ^ uVar20 << 10;
  if (*(int *)&(this->MapCellList).field_0x8 != *(int *)&(this->MapCellList).field_0x34) {
    puVar21 = *(undefined1 **)&(this->MapCellList).field_0x40;
    if (puVar21 == (undefined1 *)0x0) {
      puVar21 = &(this->MapCellList).field_0x38;
    }
    iVar28 = *(int *)(puVar21 +
                     (ulonglong)
                     (*(int *)&(this->MapCellList).field_0x48 - 1U &
                     ((uVar23 - uVar18) - uVar20 ^ uVar18 >> 0xf)) * 4);
    if (iVar28 != -1) {
      do {
        uVar4 = *(undefined8 *)((longlong)iVar28 * 0x38 + *(longlong *)&this->MapCellList);
        if (((int)uVar4 == TVar27._s_0.X) && ((uint)((ulonglong)uVar4 >> 0x20) == uVar24)) {
          if (iVar28 == -1) {
            return;
          }
          pFVar14 = UWidget::GetRenderTransform((UWidget *)this->GridPanel);
          local_f8 = (void *)(pFVar14->Scale).field0_0x0._s_0.X;
          dStack_f0 = (pFVar14->Scale).field0_0x0._s_0.Y;
          local_e8 = (pFVar14->Shear).field0_0x0._s_0.X;
          dStack_e0 = (pFVar14->Shear).field0_0x0._s_0.Y;
          local_d8 = *(undefined8 *)&pFVar14->Angle;
          dVar8 = ((double)fVar3 / (double)fVar2) * (dVar30 - dVar8);
          local_108._8_4_ = SUB84(dVar8,0);
          local_108._s_0.X = (dVar9 - dVar7) * (dVar11 / (double)fVar2) * (double)fVar3;
          local_108._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
          UWidget::SetRenderTransform
                    ((UWidget *)this->GridPanel,(FWidgetTransform *)&local_108._s_0);
          iVar28 = (this->MaxTextureNum).field0_0x0._s_0.X;
          iVar19 = -((int)ROUND((float)iVar28 - __real_3f000000) >> 1);
          iVar26 = iVar19;
          if (iVar28 <= iVar19) {
            return;
          }
          while (iVar28 = iVar19, (this->MaxTextureNum).field0_0x0._s_0.Y <= iVar19) {
LAB_14c09d5c9:
            iVar26 = iVar26 + 1;
            if ((this->MaxTextureNum).field0_0x0._s_0.X <= iVar26) {
              return;
            }
          }
LAB_14c09d380:
          uVar23 = (this->CurCell).field0_0x0._s_0.Y + iVar28;
          iVar29 = (this->CurCell).field0_0x0._s_0.X + iVar26;
          uVar20 = iVar29 - uVar23 ^ uVar23 >> 0xd;
          uVar18 = (-0x61c88647 - uVar20) - uVar23 ^ uVar20 << 8;
          uVar24 = (uVar23 - uVar20) - uVar18 ^ uVar18 >> 0xd;
          uVar20 = (uVar20 - uVar24) - uVar18 ^ uVar24 >> 0xc;
          uVar18 = (uVar18 - uVar20) - uVar24 ^ uVar20 << 0x10;
          uVar24 = (uVar24 - uVar18) - uVar20 ^ uVar18 >> 5;
          uVar20 = (uVar20 - uVar24) - uVar18 ^ uVar24 >> 3;
          uVar18 = (uVar18 - uVar20) - uVar24 ^ uVar20 << 10;
          if (*(int *)&(this->MapCellList).field_0x8 != *(int *)&(this->MapCellList).field_0x34) {
            puVar21 = *(undefined1 **)&(this->MapCellList).field_0x40;
            puVar22 = &(this->MapCellList).field_0x38;
            if (puVar21 != (undefined1 *)0x0) {
              puVar22 = puVar21;
            }
            iVar25 = *(int *)(puVar22 +
                             (ulonglong)
                             (*(int *)&(this->MapCellList).field_0x48 - 1U &
                             ((uVar24 - uVar18) - uVar20 ^ uVar18 >> 0xf)) * 4);
            if (iVar25 != -1) {
              lVar5 = *(longlong *)&this->MapCellList;
              do {
                uVar4 = *(undefined8 *)((longlong)iVar25 * 0x38 + lVar5);
                if (((int)uVar4 == iVar29) && ((uint)((ulonglong)uVar4 >> 0x20) == uVar23)) {
                  if (iVar25 != -1) {
                    TVar10.Y = uVar23;
                    TVar10.X = iVar29;
                    pFVar15 = TMapBase<UE::Math::TIntPoint<int>,FDS_MapCellData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FDS_MapCellData,0>_>
                              ::FindChecked((TMapBase<UE::Math::TIntPoint<int>,FDS_MapCellData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FDS_MapCellData,0>_>
                                             *)&this->MapCellList,(TIntPoint<int>)TVar10);
                    uVar20 = iVar29 - uVar23 ^ uVar23 >> 0xd;
                    uVar18 = (-0x61c88647 - uVar23) - uVar20 ^ uVar20 << 8;
                    uVar24 = (uVar23 - uVar18) - uVar20 ^ uVar18 >> 0xd;
                    uVar20 = (uVar20 - uVar24) - uVar18 ^ uVar24 >> 0xc;
                    uVar18 = (uVar18 - uVar20) - uVar24 ^ uVar20 << 0x10;
                    uVar24 = (uVar24 - uVar18) - uVar20 ^ uVar18 >> 5;
                    uVar20 = (uVar20 - uVar24) - uVar18 ^ uVar24 >> 3;
                    uVar18 = (uVar18 - uVar20) - uVar24 ^ uVar20 << 10;
                    if (*(int *)&(this->MapTextureList).field_0x8 !=
                        *(int *)&(this->MapTextureList).field_0x34) {
                      puVar21 = *(undefined1 **)&(this->MapTextureList).field_0x40;
                      puVar22 = &(this->MapTextureList).field_0x38;
                      if (puVar21 != (undefined1 *)0x0) {
                        puVar22 = puVar21;
                      }
                      iVar25 = *(int *)(puVar22 +
                                       (ulonglong)
                                       (*(int *)&(this->MapTextureList).field_0x48 - 1U &
                                       ((uVar24 - uVar18) - uVar20 ^ uVar18 >> 0xf)) * 4);
                      if (iVar25 != -1) {
                        goto LAB_14c09d580;
                      }
                    }
                  }
                  break;
                }
                iVar25 = *(int *)((longlong)iVar25 * 0x38 + 0x30 + lVar5);
              } while (iVar25 != -1);
            }
          }
          goto LAB_14c09d5b3;
        }
        iVar28 = *(int *)((longlong)iVar28 * 0x38 + 0x30 + *(longlong *)&this->MapCellList);
      } while (iVar28 != -1);
    }
  }
  return;
  while (iVar25 = *(int *)(*(longlong *)&this->MapTextureList + 0x20 + (longlong)iVar25 * 0x28),
        iVar25 != -1) {
LAB_14c09d580:
    uVar4 = *(undefined8 *)(*(longlong *)&this->MapTextureList + (longlong)iVar25 * 0x28);
    if (((int)uVar4 == iVar29) && ((uint)((ulonglong)uVar4 >> 0x20) == uVar23)) {
      if (iVar25 != -1) {
        pFVar16 = TMapBase<UE::Math::TIntPoint<int>,FDS_MapImageData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FDS_MapImageData,0>_>
                  ::FindChecked((TMapBase<UE::Math::TIntPoint<int>,FDS_MapImageData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FDS_MapImageData,0>_>
                                 *)&this->MapTextureList,(TIntPoint<int>)TVar10);
        FVar6 = (FName)pFVar16->TargetImage;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar6 != (FName)0x0)) {
          UE::GC::MarkAsReachable((UObject *)FVar6);
        }
        local_res20.ObjectIndex = 0;
        local_res20.ObjectSerialNumber = 0;
        local_128.AssetPath.PackageName = FVar6;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar6 != (FName)0x0)) {
          UE::GC::MarkAsReachable((UObject *)FVar6);
        }
        FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_128);
        bVar13 = FWeakObjectPtr::IsValid(&local_res20);
        if ((bVar13) &&
           (((pFVar16->TargetCellIndex).field0_0x0._s_0.X != iVar29 ||
            ((pFVar16->TargetCellIndex).field0_0x0._s_0.Y != uVar23)))) {
          (pFVar16->TargetCellIndex).field0_0x0._s_0 = TVar10;
          pFVar17 = (FName *)FWN_SoftObjectUtils::GetObjectPath(local_b8,&pFVar15->ResPath,false);
          local_108 = (TVector2<double>_u_0)ZEXT816(0);
          local_f8 = (void *)0x0;
          dStack_f0 = 0.0;
          local_128.AssetPath.PackageName = *pFVar17;
          uVar18 = pFVar17[1].ComparisonIndex.Value;
          uStack_c0 = uVar18 - 1;
          if (uVar18 == 0) {
            uStack_c0 = 0;
          }
          local_128.AssetPath.AssetName.Number = uStack_bc;
          local_128.AssetPath.AssetName.ComparisonIndex.Value = uStack_c0;
          local_c8 = local_128.AssetPath.PackageName;
          FSoftObjectPath::SetPath
                    ((FSoftObjectPath *)&local_108._s_0,(TStringView<wchar_t> *)&local_128);
          if (local_b8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b8[0].Data.AllocatorInstance.Data);
          }
          _Src = local_f8;
          FVar12 = local_res20;
          _Size = (size_t)dStack_f0._0_4_;
          local_128.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_128.SubPathString.Data.ArrayNum = dStack_f0._0_4_;
          local_128.AssetPath.PackageName = (FName)local_108._s_0.X;
          local_128.AssetPath.AssetName = (FName)local_108._s_0.Y;
          if (dStack_f0._0_4_ == 0) {
            local_128.SubPathString.Data.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,dStack_f0._0_4_,0,(ForAnyElementType *)&local_128.SubPathString,
                       dStack_f0._0_4_,&local_128.SubPathString.Data.ArrayMax);
            memcpy(local_128.SubPathString.Data.AllocatorInstance.Data,_Src,_Size);
          }
          SetBrushByPath(this,&local_128,(TWeakObjectPtr<UDS_Image,FWeakObjectPtr>)FVar12);
          if (local_f8 != (void *)0x0) {
            FMemory::Free(local_f8);
          }
        }
      }
      break;
    }
  }
LAB_14c09d5b3:
  iVar28 = iVar28 + 1;
  if ((this->MaxTextureNum).field0_0x0._s_0.Y <= iVar28) goto LAB_14c09d5c9;
  goto LAB_14c09d380;
}

// ReferencePosChange @ 14c09f710

void __thiscall UDS_W_MapTexture::ReferencePosChange(UDS_W_MapTexture *this)

{
  bool bVar1;
  UDS_MovementCore *pUVar2;
  TVector<double> *pTVar3;
  bool bVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  TVector<double> local_58;
  TVector<double> local_40 [2];
  
  bVar1 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                    (&this->OwnerMovementCore,(void *)0x0);
  if (!bVar1) {
    bVar1 = this->IsIndoor;
    if (bVar1 == true) {
      bVar4 = this->CurLookIndoorGroupID == this->CurCharIndoorGroupID;
    }
    else {
      bVar4 = this->CurCharIslandID == this->CurLookIslandID;
    }
    if (bVar4) {
      if (bVar1 == true) {
        dVar5 = (this->IndoorMapStartPos).field0_0x0._s_0.X -
                (this->IndoorMapEndPos).field0_0x0._s_0.X;
        dVar6 = (this->IndoorMapStartPos).field0_0x0._s_0.Y -
                (this->IndoorMapEndPos).field0_0x0._s_0.Y;
        dVar7 = ((double)this->OrthoWidth -
                (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) &
                                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                 SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) *
                __real_3fe0000000000000;
        dVar5 = ((double)this->OrthoWidth -
                (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                 SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) *
                __real_3fe0000000000000;
        pUVar2 = (UDS_MovementCore *)FWeakObjectPtr::Get(&(this->OwnerMovementCore).WeakPtr);
        pTVar3 = UDS_MovementCore::GetActorLocation(pUVar2,&local_58);
        dVar5 = dVar5 + (pTVar3->field0_0x0)._s_0.Y;
        pUVar2 = (UDS_MovementCore *)FWeakObjectPtr::Get(&(this->OwnerMovementCore).WeakPtr);
        pTVar3 = UDS_MovementCore::GetActorLocation(pUVar2,local_40);
        dVar7 = dVar7 + (pTVar3->field0_0x0)._s_0.X;
      }
      else {
        pUVar2 = (UDS_MovementCore *)FWeakObjectPtr::Get(&(this->OwnerMovementCore).WeakPtr);
        pTVar3 = UDS_MovementCore::GetActorLocation(pUVar2,local_40);
        dVar5 = (pTVar3->field0_0x0)._s_0.Y;
        pUVar2 = (UDS_MovementCore *)FWeakObjectPtr::Get(&(this->OwnerMovementCore).WeakPtr);
        pTVar3 = UDS_MovementCore::GetActorLocation(pUVar2,&local_58);
        dVar7 = (pTVar3->field0_0x0)._s_0.X;
      }
      (this->ReferencePosition).field0_0x0._s_0.X = dVar7;
      (this->ReferencePosition).field0_0x0._s_0.Y = dVar5;
      return;
    }
    if (bVar1 == true) {
      dVar7 = (double)this->OrthoWidth * __real_3fe0000000000000;
      dVar5 = (this->IndoorMapStartPos).field0_0x0._s_0.Y;
      (this->ReferencePosition).field0_0x0._s_0.X =
           (double)this->OrthoWidth * __real_3fe0000000000000 +
           (this->IndoorMapStartPos).field0_0x0._s_0.X;
      (this->ReferencePosition).field0_0x0._s_0.Y = dVar7 + dVar5;
      return;
    }
    dVar5 = (this->MapStartPos).field0_0x0._s_0.Y;
    dVar7 = (this->MapStartPos).field0_0x0._s_0.X;
    dVar6 = (this->MapEndPos).field0_0x0._s_0.Y - dVar5;
    dVar8 = (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
            __real_3fe0000000000000;
    dVar6 = (this->MapEndPos).field0_0x0._s_0.X - dVar7;
    (this->ReferencePosition).field0_0x0._s_0.X =
         (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
         __real_3fe0000000000000 + dVar7;
    (this->ReferencePosition).field0_0x0._s_0.Y = dVar8 + dVar5;
  }
  return;
}

// SetBrushByPath @ 14c0a0a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_W_MapTexture::SetBrushByPath
          (UDS_W_MapTexture *this,FSoftObjectPath *param_1,
          TWeakObjectPtr<UDS_Image,FWeakObjectPtr> param_2)

{
  FScriptContainerElement *pFVar1;
  UDS_LogManager *pUVar2;
  UAssetManager *pUVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  undefined1 auStackY_258 [32];
  undefined1 local_208 [8];
  FDelegateAllocation local_200;
  undefined1 local_1f0 [24];
  FString local_1d8;
  code *local_1c8;
  FMRSWRecursiveAccessDetector *pFStack_1c0;
  char *local_1b8;
  UDS_W_MapTexture *local_1a8;
  TSharedPtr<FStreamableHandle,1> local_1a0;
  FDestructionSentinel local_190;
  FDelegateAllocation *local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_258;
  if ((param_1->AssetPath).PackageName == (FName)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      FSoftObjectPath::ToString(param_1,&local_1d8);
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_W_MapTexture::SetBrushByPath",0x20,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_168.Ptr,0x1e8,L"Invalid Brush Path: %s");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
      if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    pUVar3 = UAssetManager::Get();
    local_1f0._0_4_ = 0x1ef;
    local_1f0._4_4_ = 0x14;
    local_1d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1f0._8_8_ =
         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\View\\Minimap\\DS_W_MapTexture.cpp"
    ;
    local_1d8.Data.ArrayNum = 0;
    local_1d8.Data.ArrayMax = 0;
    local_1f0._16_8_ =
         "void __cdecl UDS_W_MapTexture::SetBrushByPath(struct FSoftObjectPath,struct TWeakObjectPtr<class UDS_Image,struct FWeakObjectPtr>)"
    ;
    local_1c8 = OnMapTextureLoaded;
    pFStack_1c0 = (FMRSWRecursiveAccessDetector *)
                  ((ulonglong)local_1a0.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
    local_208 = (undefined1  [8])0x0;
    local_200.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_200.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_208,
               (FWriteAccessScope *)&local_190);
    local_178 = &local_200;
    puVar4 = UE::Core::Private::DelegateAllocate(0x50,&local_200);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__UFSoftObjectPath__U__TWeakObjectPtr_VUDS_Image__UFWeakObjectPtr______6B_
      ;
      FSoftObjectPath::FSoftObjectPath((FSoftObjectPath *)(puVar4 + 1),param_1);
      *(FWeakObjectPtr *)(puVar4 + 5) = param_2.WeakPtr;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[6] = uVar5;
      *puVar4 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_W_MapTexture____A6AXXZUFDefaultDelegateUserPolicy__UFSoftObjectPath__U__TWeakObjectPtr_VUDS_Image__UFWeakObjectPtr______6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_W_MapTexture *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar4[7] = 0;
      local_1a8 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_W_MapTexture *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 7),(FObjectPtr)&local_1a8);
      puVar4[8] = local_1c8;
      puVar4[9] = pFStack_1c0;
    }
    if (local_190.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_190.Accessor,&local_190);
    }
    local_1c8._4_4_ = local_1f0._4_4_;
    local_1c8._0_4_ = local_1f0._0_4_;
    pFStack_1c0 = (FMRSWRecursiveAccessDetector *)local_1f0._8_8_;
    local_1b8 = (char *)local_1f0._16_8_;
    FStreamableManager::
    RequestAsyncLoad<FSoftObjectPath_&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,void>
              (&pUVar3->StreamableManager,&local_1a0,param_1,
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_208,0,false,false,
               &local_1d8,(FSourceLocation *)&local_1c8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_1a0.SharedReferenceCount.ReferenceController._4_4_,
                        local_1a0.SharedReferenceCount.ReferenceController._0_4_));
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_208,
               (FWriteAccessScope *)local_1f0);
    if ((local_200.DelegateSize != 0) &&
       (local_200.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_200.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_200,0,0,0x10);
      local_200.DelegateSize = 0;
    }
    if (local_1f0[0x10] == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_1f0._8_8_,(FDestructionSentinel *)local_1f0);
    }
    if (local_200.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_200.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_208);
  }
  pFVar1 = (param_1->SubPathString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// UpdateWorldMapData @ 14c0b0400

void __thiscall
UDS_W_MapTexture::UpdateWorldMapData(UDS_W_MapTexture *this,TVector2<double> *param_1)

{
  TVector2<double>_u_0 local_18;
  
  UpdateWorldMapGridPanelTransform(this);
  local_18._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_18._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  UpdateWorldMapTextureInfo(this,(TVector2<double> *)&local_18._s_0);
  return;
}

// UpdateWorldMapGridPanelTransform @ 14c0b0440

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_MapTexture::UpdateWorldMapGridPanelTransform(UDS_W_MapTexture *this)

{
  double dVar1;
  double dVar2;
  FWidgetTransform *pFVar3;
  FWidgetTransform local_68;
  
  dVar1 = __real_3ff0000000000000 / (double)this->OrthoWidth;
  dVar2 = ((this->ReferencePosition).field0_0x0._s_0.X - (this->MapStartPos).field0_0x0._s_0.X) *
          dVar1 * (double)this->TextureSize;
  dVar1 = ((this->ReferencePosition).field0_0x0._s_0.Y - (this->MapStartPos).field0_0x0._s_0.Y) *
          dVar1 * (double)this->TextureSize;
  pFVar3 = UWidget::GetRenderTransform((UWidget *)this->GridPanel);
  local_68.Scale.field0_0x0._s_0.X = (pFVar3->Scale).field0_0x0._s_0.X;
  local_68.Scale.field0_0x0._s_0.Y = (pFVar3->Scale).field0_0x0._s_0.Y;
  local_68.Shear.field0_0x0._s_0.X = (pFVar3->Shear).field0_0x0._s_0.X;
  local_68.Shear.field0_0x0._s_0.Y = (pFVar3->Shear).field0_0x0._s_0.Y;
  local_68.Angle = pFVar3->Angle;
  local_68._52_4_ = *(undefined4 *)&pFVar3->field_0x34;
  local_68.Translation.field0_0x0._4_4_ =
       (uint)((ulonglong)dVar2 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
  local_68.Translation.field0_0x0._0_4_ =
       SUB84(dVar2,0) ^ (uint)__xmm_80000000000000008000000000000000;
  local_68.Translation.field0_0x0._12_4_ =
       (uint)((ulonglong)dVar1 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
  local_68.Translation.field0_0x0._8_4_ =
       SUB84(dVar1,0) ^ (uint)__xmm_80000000000000008000000000000000;
  UWidget::SetRenderTransform((UWidget *)this->GridPanel,&local_68);
  return;
}

// UpdateWorldMapTextureInfo @ 14c0b0520

void __thiscall
UDS_W_MapTexture::UpdateWorldMapTextureInfo(UDS_W_MapTexture *this,TVector2<double> *param_1)

{
  double dVar1;
  double dVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  UDS_Image *pUVar6;
  TIntPoint<int>_u_0_s_0 TVar7;
  FWeakObjectPtr FVar8;
  ForAnyElementType _Src;
  bool bVar9;
  FDS_MapCellData *pFVar10;
  FDS_MapImageData *pFVar11;
  FName *pFVar12;
  uint uVar13;
  FNameEntryId FVar14;
  uint uVar15;
  undefined1 *puVar16;
  size_t _Size;
  uint uVar17;
  int iVar18;
  ulonglong uVar19;
  int iVar20;
  uint uVar21;
  FWeakObjectPtr local_res10;
  int local_res18;
  uint uStackX_1c;
  UDS_Image *local_res20;
  uint uStack_cc;
  FSoftObjectPath local_c8;
  FString local_a8;
  FSoftObjectPath local_98 [2];
  
  iVar20 = 0;
  dVar1 = (param_1->field0_0x0)._s_0.X;
  if (0.0 < dVar1) {
    dVar2 = (param_1->field0_0x0)._s_0.Y;
    do {
      uVar19 = 0;
      if (0.0 < dVar2) {
        local_res18 = iVar20;
LAB_14c0b05a0:
        uVar21 = (uint)uVar19;
        uVar15 = iVar20 - uVar21 ^ (uint)(uVar19 >> 0xd);
        uVar13 = (-0x61c88647 - uVar15) - uVar21 ^ uVar15 << 8;
        uVar17 = (uVar21 - uVar15) - uVar13 ^ uVar13 >> 0xd;
        uVar15 = (uVar15 - uVar17) - uVar13 ^ uVar17 >> 0xc;
        uVar13 = (uVar13 - uVar15) - uVar17 ^ uVar15 << 0x10;
        uVar17 = (uVar17 - uVar13) - uVar15 ^ uVar13 >> 5;
        uVar15 = (uVar15 - uVar17) - uVar13 ^ uVar17 >> 3;
        uVar13 = (uVar13 - uVar15) - uVar17 ^ uVar15 << 10;
        if (*(int *)&(this->MapCellList).field_0x8 != *(int *)&(this->MapCellList).field_0x34) {
          puVar3 = *(undefined1 **)&(this->MapCellList).field_0x40;
          puVar16 = &(this->MapCellList).field_0x38;
          if (puVar3 != (undefined1 *)0x0) {
            puVar16 = puVar3;
          }
          iVar18 = *(int *)(puVar16 +
                           (ulonglong)
                           (*(int *)&(this->MapCellList).field_0x48 - 1U &
                           ((uVar17 - uVar13) - uVar15 ^ uVar13 >> 0xf)) * 4);
          if (iVar18 != -1) {
            lVar4 = *(longlong *)&this->MapCellList;
            do {
              uVar5 = *(undefined8 *)((longlong)iVar18 * 0x38 + lVar4);
              if (((int)uVar5 == iVar20) && ((uint)((ulonglong)uVar5 >> 0x20) == uVar21)) {
                if (iVar18 != -1) {
                  TVar7.Y = uVar21;
                  TVar7.X = local_res18;
                  uStackX_1c = uVar21;
                  pFVar10 = TMapBase<UE::Math::TIntPoint<int>,FDS_MapCellData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FDS_MapCellData,0>_>
                            ::FindChecked((TMapBase<UE::Math::TIntPoint<int>,FDS_MapCellData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FDS_MapCellData,0>_>
                                           *)&this->MapCellList,(TIntPoint<int>)TVar7);
                  uVar15 = iVar20 - uVar21 ^ uVar21 >> 0xd;
                  uVar13 = (-0x61c88647 - uVar15) - uVar21 ^ uVar15 << 8;
                  uVar17 = (uVar21 - uVar15) - uVar13 ^ uVar13 >> 0xd;
                  uVar15 = (uVar15 - uVar17) - uVar13 ^ uVar17 >> 0xc;
                  uVar13 = (uVar13 - uVar15) - uVar17 ^ uVar15 << 0x10;
                  uVar17 = (uVar17 - uVar13) - uVar15 ^ uVar13 >> 5;
                  uVar15 = (uVar15 - uVar17) - uVar13 ^ uVar17 >> 3;
                  uVar13 = (uVar13 - uVar15) - uVar17 ^ uVar15 << 10;
                  if (*(int *)&(this->MapTextureList).field_0x8 !=
                      *(int *)&(this->MapTextureList).field_0x34) {
                    puVar3 = *(undefined1 **)&(this->MapTextureList).field_0x40;
                    puVar16 = &(this->MapTextureList).field_0x38;
                    if (puVar3 != (undefined1 *)0x0) {
                      puVar16 = puVar3;
                    }
                    iVar18 = *(int *)(puVar16 +
                                     (ulonglong)
                                     (*(int *)&(this->MapTextureList).field_0x48 - 1U &
                                     ((uVar17 - uVar13) - uVar15 ^ uVar13 >> 0xf)) * 4);
                    if (iVar18 != -1) {
                      goto LAB_14c0b0790;
                    }
                  }
                }
                break;
              }
              iVar18 = *(int *)((longlong)iVar18 * 0x38 + 0x30 + lVar4);
            } while (iVar18 != -1);
          }
        }
        goto LAB_14c0b0927;
      }
LAB_14c0b0940:
      iVar20 = iVar20 + 1;
    } while ((double)iVar20 < dVar1);
  }
  return;
  while (iVar18 = *(int *)(*(longlong *)&this->MapTextureList + 0x20 + (longlong)iVar18 * 0x28),
        iVar18 != -1) {
LAB_14c0b0790:
    uVar5 = *(undefined8 *)(*(longlong *)&this->MapTextureList + (longlong)iVar18 * 0x28);
    if (((int)uVar5 == iVar20) && ((uint)((ulonglong)uVar5 >> 0x20) == uVar21)) {
      if (iVar18 != -1) {
        pFVar11 = TMapBase<UE::Math::TIntPoint<int>,FDS_MapImageData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FDS_MapImageData,0>_>
                  ::FindChecked((TMapBase<UE::Math::TIntPoint<int>,FDS_MapImageData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FDS_MapImageData,0>_>
                                 *)&this->MapTextureList,(TIntPoint<int>)TVar7);
        pUVar6 = pFVar11->TargetImage;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UDS_Image *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar6);
        }
        local_res10.ObjectIndex = 0;
        local_res10.ObjectSerialNumber = 0;
        local_res20 = pUVar6;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UDS_Image *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar6);
        }
        FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res20);
        bVar9 = FWeakObjectPtr::IsValid(&local_res10);
        if ((bVar9) &&
           (((pFVar11->TargetCellIndex).field0_0x0._s_0.X != iVar20 ||
            ((pFVar11->TargetCellIndex).field0_0x0._s_0.Y != uVar21)))) {
          (pFVar11->TargetCellIndex).field0_0x0._s_0 = TVar7;
          pFVar12 = (FName *)FWN_SoftObjectUtils::GetObjectPath(&local_a8,&pFVar10->ResPath,false);
          local_98[0].AssetPath.PackageName.ComparisonIndex.Value = 0;
          local_98[0].AssetPath.PackageName.Number = 0;
          local_98[0].AssetPath.AssetName.ComparisonIndex.Value = 0;
          local_98[0].AssetPath.AssetName.Number = 0;
          local_98[0].SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_98[0].SubPathString.Data.ArrayNum = 0;
          local_98[0].SubPathString.Data.ArrayMax = 0;
          local_c8.AssetPath.PackageName = *pFVar12;
          uVar13 = pFVar12[1].ComparisonIndex.Value;
          FVar14.Value = uVar13 - 1;
          if (uVar13 == 0) {
            FVar14.Value = 0;
          }
          local_c8.AssetPath.AssetName.Number = uStack_cc;
          local_c8.AssetPath.AssetName.ComparisonIndex.Value = FVar14.Value;
          FSoftObjectPath::SetPath(local_98,(TStringView<wchar_t> *)&local_c8);
          if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.Data.AllocatorInstance.Data);
          }
          _Src.Data = local_98[0].SubPathString.Data.AllocatorInstance.Data;
          FVar8 = local_res10;
          _Size = (size_t)local_98[0].SubPathString.Data.ArrayNum;
          local_c8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_c8.SubPathString.Data.ArrayNum = local_98[0].SubPathString.Data.ArrayNum;
          local_c8.AssetPath.PackageName = local_98[0].AssetPath.PackageName;
          local_c8.AssetPath.AssetName = local_98[0].AssetPath.AssetName;
          if (local_98[0].SubPathString.Data.ArrayNum == 0) {
            local_c8.SubPathString.Data.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,local_98[0].SubPathString.Data.ArrayNum,0,
                       (ForAnyElementType *)&local_c8.SubPathString,
                       local_98[0].SubPathString.Data.ArrayNum,&local_c8.SubPathString.Data.ArrayMax
                      );
            memcpy(local_c8.SubPathString.Data.AllocatorInstance.Data,_Src.Data,_Size);
          }
          SetBrushByPath(this,&local_c8,(TWeakObjectPtr<UDS_Image,FWeakObjectPtr>)FVar8);
          if (local_98[0].SubPathString.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98[0].SubPathString.Data.AllocatorInstance.Data);
          }
        }
      }
      break;
    }
  }
LAB_14c0b0927:
  uVar19 = (ulonglong)(uVar21 + 1);
  if (dVar2 <= (double)(int)(uVar21 + 1)) goto LAB_14c0b0940;
  goto LAB_14c0b05a0;
}

