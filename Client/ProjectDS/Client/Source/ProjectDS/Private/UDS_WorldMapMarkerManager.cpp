// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 32

// StaticClass @ 14b76ae90

UClass * __cdecl UDS_WorldMapMarkerManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_WorldMapMarkerManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_WorldMapMarkerManager",
               &Z_Registration_Info_UClass_UDS_WorldMapMarkerManager.InnerSingleton,
               StaticRegisterNativesUDS_WorldMapMarkerManager,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_WorldMapMarkerManager>,
               InternalVTableHelperCtorCaller<UDS_WorldMapMarkerManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_WorldMapMarkerManager.InnerSingleton;
}

// UDS_WorldMapMarkerManager @ 14b76f810

UDS_WorldMapMarkerManager * __thiscall
UDS_WorldMapMarkerManager::UDS_WorldMapMarkerManager
          (UDS_WorldMapMarkerManager *this,FVTableHelper *param_1)

{
  TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr> *this_00;
  undefined8 local_res8;
  
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_WorldMapMarkerManager__6B_;
  this_00 = &(this->SharedMarkInfo).Widget;
  local_res8 = 0;
  (this->SharedMarkInfo).MarkerGlobalPos.field0_0x0._s_0.X = 0.0;
  (this->SharedMarkInfo).MarkerGlobalPos.field0_0x0._s_0.Y = 0.0;
  (this->SharedMarkInfo).CurMapPositionOffset.field0_0x0._s_0.X = 0.0;
  (this->SharedMarkInfo).CurMapPositionOffset.field0_0x0._s_0.Y = 0.0;
  (this->SharedMarkInfo).MakerVector2D.field0_0x0._s_0.X = 0.0;
  (this->SharedMarkInfo).MakerVector2D.field0_0x0._s_0.Y = 0.0;
  (this->SharedMarkInfo).Widget.WeakPtr = (FWeakObjectPtr)0x0;
  (this->SharedMarkInfo).key = 0;
  (this->SharedMarkInfo).Floor = 0;
  (this->SharedMarkInfo).IslandID = 0;
  (this->SharedMarkInfo).IndoorGroupID = 0;
  (this->SharedMarkInfo).SavedScale = 0.0;
  (this->SharedMarkInfo).Memo.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SharedMarkInfo).Memo.Data.ArrayNum = 0;
  (this->SharedMarkInfo).Memo.Data.ArrayMax = 0;
  (this->SharedMarkInfo).MarkerGlobalPos.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->SharedMarkInfo).CurMapPositionOffset.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->SharedMarkInfo).MakerVector2D.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  this_00->WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)&local_res8);
  (this->WorldMapMarkerInfoList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorldMapMarkerInfoList).ArrayNum = 0;
  (this->WorldMapMarkerInfoList).ArrayMax = 0;
  this->WoldMapMarkerHttpVersion = 1;
  this->AutoIncrementKey = 0;
  return this;
}

// UDS_WorldMapMarkerManager @ 14b76f8d0

UDS_WorldMapMarkerManager * __thiscall
UDS_WorldMapMarkerManager::UDS_WorldMapMarkerManager
          (UDS_WorldMapMarkerManager *this,FObjectInitializer *param_1)

{
  TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr> *this_00;
  undefined8 local_res8;
  
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_WorldMapMarkerManager__6B_;
  this_00 = &(this->SharedMarkInfo).Widget;
  local_res8 = 0;
  (this->SharedMarkInfo).MarkerGlobalPos.field0_0x0._s_0.X = 0.0;
  (this->SharedMarkInfo).MarkerGlobalPos.field0_0x0._s_0.Y = 0.0;
  (this->SharedMarkInfo).CurMapPositionOffset.field0_0x0._s_0.X = 0.0;
  (this->SharedMarkInfo).CurMapPositionOffset.field0_0x0._s_0.Y = 0.0;
  (this->SharedMarkInfo).MakerVector2D.field0_0x0._s_0.X = 0.0;
  (this->SharedMarkInfo).MakerVector2D.field0_0x0._s_0.Y = 0.0;
  (this->SharedMarkInfo).Widget.WeakPtr = (FWeakObjectPtr)0x0;
  (this->SharedMarkInfo).key = 0;
  (this->SharedMarkInfo).Floor = 0;
  (this->SharedMarkInfo).IslandID = 0;
  (this->SharedMarkInfo).IndoorGroupID = 0;
  (this->SharedMarkInfo).SavedScale = 0.0;
  (this->SharedMarkInfo).Memo.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SharedMarkInfo).Memo.Data.ArrayNum = 0;
  (this->SharedMarkInfo).Memo.Data.ArrayMax = 0;
  (this->SharedMarkInfo).MarkerGlobalPos.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->SharedMarkInfo).CurMapPositionOffset.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->SharedMarkInfo).MakerVector2D.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  this_00->WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)&local_res8);
  (this->WorldMapMarkerInfoList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorldMapMarkerInfoList).ArrayNum = 0;
  (this->WorldMapMarkerInfoList).ArrayMax = 0;
  this->WoldMapMarkerHttpVersion = 1;
  this->AutoIncrementKey = 0;
  return this;
}

// ~UDS_WorldMapMarkerManager @ 14b771d10

void __thiscall
UDS_WorldMapMarkerManager::~UDS_WorldMapMarkerManager(UDS_WorldMapMarkerManager *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDS_WorldMapMarkerManager__6B_;
  DestructItems<FDS_WorldMapMarkerInfo,int>
            ((FDS_WorldMapMarkerInfo *)(this->WorldMapMarkerInfoList).AllocatorInstance.Data,
             (this->WorldMapMarkerInfoList).ArrayNum);
  pFVar1 = (this->WorldMapMarkerInfoList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SharedMarkInfo).Memo.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ManagerBase::~UDS_ManagerBase((UDS_ManagerBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b775b20

UClass * __cdecl UDS_WorldMapMarkerManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_WorldMapMarkerManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_WorldMapMarkerManager",
               &Z_Registration_Info_UClass_UDS_WorldMapMarkerManager.InnerSingleton,
               StaticRegisterNativesUDS_WorldMapMarkerManager,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_WorldMapMarkerManager>,
               InternalVTableHelperCtorCaller<UDS_WorldMapMarkerManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_WorldMapMarkerManager.InnerSingleton;
}

// StaticRegisterNativesUDS_WorldMapMarkerManager @ 14b777c70

void __cdecl UDS_WorldMapMarkerManager::StaticRegisterNativesUDS_WorldMapMarkerManager(void)

{
  return;
}

// AddChatLocationLink @ 14bb4eff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_WorldMapMarkerManager::AddChatLocationLink
          (UDS_WorldMapMarkerManager *this,ChatLocation *param_1)

{
  uint uVar1;
  FString *pFVar2;
  int *piVar3;
  int iVar4;
  Vector *pVVar5;
  int iVar6;
  UDS_GameInstance *this_00;
  UClass *pUVar7;
  UDS_ManagerBase *pUVar8;
  size_t sVar9;
  UDS_ContentManager *this_01;
  UDS_LogManager *pUVar10;
  ForAnyElementType FVar11;
  Vector *pVVar12;
  uchar *_Str;
  longlong lVar13;
  uint uVar14;
  undefined1 auStackY_238 [32];
  EDS_ContentsTabFrameType local_1f8 [4];
  long64 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  FString local_1d0;
  undefined1 local_1c0 [16];
  undefined1 local_1b0 [16];
  undefined1 local_1a0 [16];
  FWeakObjectPtr local_190;
  undefined8 local_188;
  TVector<double>_u_0 local_180;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_238;
  this_00 = UDS_GameInstance::GetInst();
  if (this_00 != (UDS_GameInstance *)0x0) {
    pUVar7 = Z_Construct_UClass_UDS_WorldMapManager_NoRegister();
    pUVar8 = UDS_GameInstance::GetManager(this_00,(FName)pUVar7->_padding_);
    if (pUVar8 == (UDS_ManagerBase *)0x0) {
LAB_14bb4f070:
      pUVar8 = (UDS_ManagerBase *)0x0;
    }
    else {
      pUVar7 = Z_Construct_UClass_UDS_WorldMapManager_NoRegister();
      iVar4 = (int)pUVar7->_padding_;
      if ((*(int *)(pUVar8->_padding_ + 0x38) < iVar4) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar4 * 8) !=
          &pUVar7->_padding_)) goto LAB_14bb4f070;
    }
    if (pUVar8 != (UDS_ManagerBase *)0x0) {
      local_1e8 = 0;
      local_1e0 = 0;
      local_1c0 = (undefined1  [16])UE::Math::TVector2<double>::ZeroVector.field0_0x0;
      local_1d8 = 0;
      local_1b0 = (undefined1  [16])UE::Math::TVector2<double>::ZeroVector.field0_0x0;
      local_1d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1a0 = (undefined1  [16])UE::Math::TVector2<double>::ZeroVector.field0_0x0;
      local_1d0.Data.ArrayNum = 0;
      local_1d0.Data.ArrayMax = 0;
      local_190.ObjectIndex = 0;
      local_190.ObjectSerialNumber = 0;
      local_1f8[0] = None;
      local_1f8[1] = None;
      FWeakObjectPtr::operator=(&local_190,(FObjectPtr)local_1f8);
      local_1e0 = CONCAT44((param_1->_impl_).island_id_,(int)local_1e0);
      pVVar5 = (param_1->_impl_).position_;
      pVVar12 = &_Vector_default_instance_._instance;
      if (pVVar5 != (Vector *)0x0) {
        pVVar12 = pVVar5;
      }
      DS_Util::SetFVector((TVector<double> *)&local_180._s_0,pVVar12);
      _Str = (uchar *)((ulonglong)(param_1->_impl_).memo_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      local_1c0._8_8_ = local_180._s_0.Y;
      local_1c0._0_8_ = local_180._s_0.X;
      if (0xf < *(ulonglong *)(_Str + 0x18)) {
        _Str = *(uchar **)_Str;
      }
      local_168._padding_ = 0;
      if (_Str == (uchar *)0x0) {
        local_168.StringLength = 0;
        local_168.Ptr = (wchar_t *)0x0;
      }
      else {
        sVar9 = strlen((char *)_Str);
        local_168.StringLength =
             UE::Core::Private::GetConvertedLength((wchar_t *)0x0,_Str,(int)sVar9);
        uVar1 = local_168.StringLength + 1;
        uVar14 = uVar1;
        if (uVar1 < 0x81) {
          if ((TStringConversion<TStringConvert<char,wchar_t>,128> *)local_168._padding_ !=
              (TStringConversion<TStringConvert<char,wchar_t>,128> *)0x0) {
            uVar14 = 0;
            goto LAB_14bb4f163;
          }
        }
        else {
LAB_14bb4f163:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_168._padding_,0,uVar14,2);
        }
        local_168.Ptr = (wchar_t *)&local_168;
        if ((TStringConversion<TStringConvert<char,wchar_t>,128> *)local_168._padding_ !=
            (TStringConversion<TStringConvert<char,wchar_t>,128> *)0x0) {
          local_168.Ptr = (wchar_t *)local_168._padding_;
        }
        UE::Core::Private::Convert(local_168.Ptr,uVar1,_Str,(int)sVar9 + 1);
      }
      ::FString::operator=(&local_1d0,local_168.Ptr);
      if ((TStringConversion<TStringConvert<char,wchar_t>,128> *)local_168._padding_ !=
          (TStringConversion<TStringConvert<char,wchar_t>,128> *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
      FVar11.Data = local_1d0.Data.AllocatorInstance.Data;
      iVar4 = (param_1->_impl_).indoor_group_id_;
      pFVar2 = &(this->SharedMarkInfo).Memo;
      (this->SharedMarkInfo).key = local_1e8;
      (this->SharedMarkInfo).Floor = (int)local_1e0;
      (this->SharedMarkInfo).IslandID = local_1e0._4_4_;
      (this->SharedMarkInfo).SavedScale = local_1d8._4_4_;
      local_1d8 = CONCAT44(local_1d8._4_4_,iVar4);
      (this->SharedMarkInfo).IndoorGroupID = iVar4;
      if (pFVar2 != &local_1d0) {
        iVar6 = local_1d0.Data.ArrayNum;
        lVar13 = (longlong)local_1d0.Data.ArrayNum;
        piVar3 = &(this->SharedMarkInfo).Memo.Data.ArrayMax;
        iVar4 = *piVar3;
        (this->SharedMarkInfo).Memo.Data.ArrayNum = local_1d0.Data.ArrayNum;
        if ((local_1d0.Data.ArrayNum == 0) && (iVar4 == 0)) {
          *piVar3 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_1d0.Data.ArrayNum,iVar4,(ForAnyElementType *)pFVar2,
                     local_1d0.Data.ArrayNum,piVar3);
          if (iVar6 != 0) {
            memcpy((pFVar2->Data).AllocatorInstance.Data,FVar11.Data,lVar13 * 2);
          }
        }
      }
      (this->SharedMarkInfo).Widget.WeakPtr = local_190;
      (this->SharedMarkInfo).MarkerGlobalPos.field0_0x0._s_0.X = (double)local_1c0._0_8_;
      (this->SharedMarkInfo).MarkerGlobalPos.field0_0x0._s_0.Y = (double)local_1c0._8_8_;
      (this->SharedMarkInfo).CurMapPositionOffset.field0_0x0._s_0.X = (double)local_1b0._0_8_;
      (this->SharedMarkInfo).CurMapPositionOffset.field0_0x0._s_0.Y = (double)local_1b0._8_8_;
      (this->SharedMarkInfo).MakerVector2D.field0_0x0._s_0.X = (double)local_1a0._0_8_;
      (this->SharedMarkInfo).MakerVector2D.field0_0x0._s_0.Y = (double)local_1a0._8_8_;
      *(undefined1 *)((longlong)&pUVar8[0x11]._padding_ + 6) = 1;
      *(undefined8 *)&pUVar8[0x11].bIsBeingDestroyed = local_1c0._0_8_;
      pUVar8[0x12]._padding_ = local_1c0._8_8_;
      this_01 = UDS_ContentManager::GetInst();
      FVar11.Data = local_1d0.Data.AllocatorInstance.Data;
      if (this_01 != (UDS_ContentManager *)0x0) {
        local_188 = 0;
        local_1f8[0] = 10000;
        UDS_ContentManager::OpenContent
                  (this_01,local_1f8,(TObjectPtr<UDS_ContentArguments>)&local_188);
        FVar11.Data = local_1d0.Data.AllocatorInstance.Data;
      }
      goto LAB_14bb4f33e;
    }
  }
  pUVar10 = UDS_LogManager::GetInst();
  if (pUVar10 == (UDS_LogManager *)0x0) {
    return;
  }
  pUVar10 = UDS_LogManager::GetInst();
  local_168._padding_ = 0;
  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
            (&local_168,"UDS_WorldMapMarkerManager::AddChatLocationLink",0x2e,Yes);
  UDS_LogManager::PrintLog(pUVar10,1,Warning,local_168.Ptr,0xaa,L"worldMapManager is nullptr");
  FVar11.Data = (FScriptContainerElement *)local_168._padding_;
LAB_14bb4f33e:
  if ((TStringConversion<TStringConvert<char,wchar_t>,128> *)FVar11.Data !=
      (TStringConversion<TStringConvert<char,wchar_t>,128> *)0x0) {
    FMemory::Free(FVar11.Data);
  }
  return;
}

// AddWorldMapMakerInfo @ 14bb4fba0

void __thiscall
UDS_WorldMapMarkerManager::AddWorldMapMakerInfo
          (UDS_WorldMapMarkerManager *this,FDS_WorldMapMarkerInfo *param_1)

{
  int *piVar1;
  TArray<FDS_WorldMapMarkerInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  FDS_WorldMapMarkerInfo *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  
  pTVar2 = &this->WorldMapMarkerInfoList;
  pFVar3 = (FDS_WorldMapMarkerInfo *)(pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->WorldMapMarkerInfoList).ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = (this->WorldMapMarkerInfoList).ArrayNum;
  piVar1 = &(this->WorldMapMarkerInfoList).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x860,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->WorldMapMarkerInfoList).ArrayNum = iVar7 + 1;
  FDS_WorldMapMarkerInfo::FDS_WorldMapMarkerInfo
            ((FDS_WorldMapMarkerInfo *)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x60),
             param_1);
  SaveMarkerInfo(this);
  pFVar4 = (param_1->Memo).Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return;
}

// BeginMarkerInfoShare @ 14bb515f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_WorldMapMarkerManager::BeginMarkerInfoShare
          (UDS_WorldMapMarkerManager *this,FDS_WorldMapMarkerInfo *param_1)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  char cVar3;
  UDS_ChattingManager *this_00;
  UDS_LogManager *pUVar4;
  UDS_ChattingManager *this_01;
  UDS_WindowManager *this_02;
  UObject *pUVar5;
  undefined1 auStackY_178 [32];
  uint uVar6;
  wchar_t *pwVar7;
  float local_148;
  uint local_144;
  FWeakObjectPtr local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this_00 = UDS_ChattingManager::GetInst();
  if (this_00 == (UDS_ChattingManager *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = (longlong)this_00;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_WorldMapMarkerManager::BeginMarkerInfoShare",0x2f,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0x141,L"chattingManager is nullptr");
      if ((UDS_ChattingManager *)local_138._padding_ != (UDS_ChattingManager *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    pFVar1 = (param_1->Memo).Data.AllocatorInstance.Data;
    if (pFVar1 == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(pFVar1);
    return;
  }
  this_01 = (UDS_ChattingManager *)UDS_ContentManager::GetInst();
  if (this_01 == (UDS_ChattingManager *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) goto LAB_14bb5188d;
    pUVar4 = UDS_LogManager::GetInst();
    local_138._padding_ = (longlong)this_01;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_WorldMapMarkerManager::BeginMarkerInfoShare",0x2f,Yes);
    pwVar7 = L"contentManager is nullptr.";
    uVar6 = 0x148;
  }
  else {
    this_02 = UDS_WindowManager::GetInst();
    if (this_02 == (UDS_WindowManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 == (UDS_LogManager *)0x0) goto LAB_14bb5188d;
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_WorldMapMarkerManager::BeginMarkerInfoShare",0x2f,Yes);
      pwVar7 = L"windowManager is nullptr";
      uVar6 = 0x14f;
    }
    else {
      UDS_WindowManager::GetWindowInfo(this_02,(int)&local_140);
      bVar2 = TWeakObjectPtr<UDS_WindowInfo,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_WindowInfo,FWeakObjectPtr> *)&local_140,(void *)0x0);
      if (!bVar2) {
        UDS_ChattingManager::SendLocationInfoLink(this_00,param_1);
        UDS_ContentManager::CloseContent((UDS_ContentManager *)this_01);
        pUVar5 = FWeakObjectPtr::Get(&local_140);
        cVar3 = (**(code **)(*(longlong *)pUVar5 + 0x2c8))(pUVar5);
        if (cVar3 == '\x01') {
          local_148 = 0.0;
          local_144 = 0;
          UDS_WindowManager::CloseWindow(this_02,0x14c,&local_144,&local_148);
        }
        goto LAB_14bb5188d;
      }
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 == (UDS_LogManager *)0x0) goto LAB_14bb5188d;
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_WorldMapMarkerManager::BeginMarkerInfoShare",0x2f,Yes);
      pwVar7 = L"windowInfo is nullptr";
      uVar6 = 0x156;
    }
  }
  UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,uVar6,pwVar7);
  if ((UDS_ChattingManager *)local_138._padding_ != (UDS_ChattingManager *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
LAB_14bb5188d:
  pFVar1 = (param_1->Memo).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ConvertJsonToMarker @ 14bb56f20

void __thiscall
UDS_WorldMapMarkerManager::ConvertJsonToMarker(UDS_WorldMapMarkerManager *this,FString *param_1)

{
  undefined1 *puVar1;
  FString *pFVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  TReferenceControllerBase<1> *pTVar6;
  FJsonObject *pFVar7;
  code *pcVar8;
  double dVar9;
  FDS_WorldMapMarkerInfo *pFVar10;
  FJsonObject *pFVar11;
  ForAnyElementType _Src;
  FSharedReferencer<1> FVar12;
  bool bVar13;
  int iVar14;
  TJsonStringReader<wchar_t> *this_00;
  int *piVar15;
  TSharedPtr<FJsonObject,1> *pTVar16;
  UScriptStruct *pUVar17;
  longlong lVar18;
  wchar_t *pwVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  undefined1 *puVar23;
  uint *puVar24;
  undefined1 local_res18 [8];
  int local_res20;
  FDS_WorldMapMarkerInfo *local_1d8;
  undefined8 local_1d0;
  TArray<FDS_WorldMapMarkerInfo,TSizedDefaultAllocator<32>_> local_1c8;
  TSharedPtr<FJsonObject,1> local_1b8;
  TSharedPtr<FJsonObject,1> local_1a8;
  StackState local_198;
  StackState local_160;
  TSharedRef<FJsonObject,1> local_128;
  int local_118;
  TRawPtrProxy<TJsonStringReader<wchar_t>_> local_110;
  FString local_108;
  FJsonObject *local_f8;
  int iStack_f0;
  uint uStack_ec;
  undefined1 *local_e8;
  undefined4 uStack_e0;
  int iStack_dc;
  int local_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  FJsonObject *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  TSharedRef<TJsonStringReader<wchar_t>,1> local_98;
  wchar_t *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  TSharedRef<TJsonReader<wchar_t>,1> local_78;
  TStringView<wchar_t> local_68 [2];
  undefined4 local_3c;
  
  TJsonReaderFactory<wchar_t>::Create(&local_78,param_1);
  local_198.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a8.Object = (FJsonObject *)0x0;
  local_1a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_198.Identifier.Data.ArrayNum = 0;
  local_198.Identifier.Data.ArrayMax = 0;
  local_198.Object.Object = (FJsonObject *)0x0;
  local_198.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_198.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_198.Array.ArrayNum = 0;
  local_198.Array.ArrayMax = 0;
  bVar13 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                     (local_78.Object,&local_198,None);
  if (bVar13) {
    bVar13 = FJsonSerializerPolicy_JsonObject::GetValueFromState(&local_198,&local_1a8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_198.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_198.Array.AllocatorInstance.Data,
               local_198.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_198.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_198.Array.AllocatorInstance.Data);
    }
    if (local_198.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Identifier.Data.AllocatorInstance.Data);
    }
    if ((bVar13) && (local_1a8.Object != (FJsonObject *)0x0)) {
      if ((local_1a8.Object == (FJsonObject *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar13)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar11 = local_1a8.Object;
      iVar14 = *(int *)&((local_1a8.Object)->Values).field_0x28;
      puVar1 = &((local_1a8.Object)->Values).field_0x10;
      uStack_ec = 1;
      local_d8 = 0;
      iStack_dc = local_d8;
      iStack_f0 = 0;
      if (iVar14 != 0) {
        puVar24 = *(uint **)&((local_1a8.Object)->Values).field_0x20;
        if (puVar24 == (uint *)0x0) {
          puVar24 = (uint *)puVar1;
        }
        uVar22 = *puVar24;
        local_d8 = 0;
        while (uVar22 == 0) {
          lVar18 = (longlong)iStack_f0;
          local_d8 = local_d8 + 0x20;
          iStack_f0 = iStack_f0 + 1;
          iStack_dc = iVar14;
          if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_f0)
          goto LAB_14bb570f0;
          uVar22 = puVar24[lVar18 + 1];
        }
        uStack_ec = -uVar22 & uVar22;
        uVar3 = (ulonglong)uStack_ec * 2 + 1;
        lVar18 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        local_res20 = (int)lVar18;
        iStack_dc = local_d8 + -1 + local_res20;
        if (iVar14 < iStack_dc) {
          iStack_dc = iVar14;
        }
      }
LAB_14bb570f0:
      uVar22 = *(uint *)&((local_1a8.Object)->Values).field_0x28;
      uStack_d4 = local_3c;
      uVar21 = uVar22 & 0xffffffe0;
      iStack_d0 = *(int *)&((local_1a8.Object)->Values).field_0x8 -
                  *(int *)&((local_1a8.Object)->Values).field_0x34;
      uStack_e0 = 0xffffffff;
      local_f8 = local_1a8.Object;
      TStack_c0._padding_ = CONCAT44(uStack_ec,iStack_f0);
      TStack_c0.CurrentBitIndex = iStack_dc;
      TStack_c0.UnvisitedBitMask = 0xffffffff;
      local_c8 = local_1a8.Object;
      iVar20 = (int)uVar22 >> 5;
      TStack_c0._28_4_ = local_3c;
      TStack_c0.BaseBitIndex = local_d8;
      uStack_a0 = CONCAT44(uStack_cc,iStack_d0);
      local_e8 = puVar1;
      TStack_c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar22 < 0) || (iVar14 < (int)uVar22)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar13)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar4 = *(uint *)&(pFVar11->Values).field_0x28;
      if (uVar22 != uVar4) {
        puVar23 = *(undefined1 **)&(pFVar11->Values).field_0x20;
        if (puVar23 == (undefined1 *)0x0) {
          puVar23 = puVar1;
        }
        uVar22 = -1 << ((byte)uVar22 & 0x1f) & *(uint *)(puVar23 + (longlong)iVar20 * 4);
        while (uVar22 == 0) {
          lVar18 = (longlong)iVar20;
          uVar21 = uVar21 + 0x20;
          iVar20 = iVar20 + 1;
          uVar22 = uVar4;
          if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
          goto LAB_14bb57200;
          uVar22 = *(uint *)(puVar23 + lVar18 * 4 + 4);
        }
        uVar3 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
        lVar18 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        local_118 = (int)lVar18;
        uVar22 = local_118 + -1 + uVar21;
        if ((int)uVar4 < (int)uVar22) {
          uVar22 = uVar4;
        }
      }
LAB_14bb57200:
      while( true ) {
        pFVar7 = local_c8;
        if (*(int *)&(local_c8->Values).field_0x8 - *(int *)&(local_c8->Values).field_0x34 !=
            (int)uStack_a0) {
          local_res18[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FJsonValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        lVar18 = (longlong)TStack_c0.CurrentBitIndex;
        if (((TStack_c0.CurrentBitIndex == uVar22) &&
            (TStack_c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (pFVar7 == pFVar11)) break;
        lVar5 = *(longlong *)&pFVar7->Values;
        if (*(int *)(lVar5 + 8 + lVar18 * 0x28) == 0) {
          pwVar19 = L"";
        }
        else {
          pwVar19 = *(wchar_t **)(lVar5 + lVar18 * 0x28);
        }
        iVar14 = FGenericPlatformStricmp::Stricmp(pwVar19,"minimap_marker");
        if (iVar14 == 0) {
          if ((*(longlong *)(lVar5 + 0x10 + lVar18 * 0x28) == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          FJsonValue::AsString(*(FJsonValue **)(lVar5 + 0x10 + lVar18 * 0x28),&local_108);
          local_1b8.Object = (FJsonObject *)0x0;
          local_1b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          this_00 = ::operator_new(0x88);
          _Src.Data = local_108.Data.AllocatorInstance.Data;
          if (this_00 == (TJsonStringReader<wchar_t> *)0x0) {
            this_00 = (TJsonStringReader<wchar_t> *)0x0;
          }
          else {
            this_00->_padding_ = 0;
            this_00->_padding_ = 0;
            *(undefined4 *)&this_00->_padding_ = 0;
            this_00->_padding_ = 0;
            this_00->_padding_ = 0;
            this_00->_padding_ = 0;
            this_00->_padding_ = 0;
            this_00->_padding_ = 0;
            this_00->_padding_ = (longlong)&___7__TJsonStringReader__W__6B_;
            pFVar2 = &this_00->Content;
            this_00->_padding_ = 0;
            this_00->_padding_ = 0;
            this_00->_padding_ = 0;
            this_00->_padding_ = 1;
            *(undefined2 *)&this_00->_padding_ = 0;
            piVar15 = &(this_00->Content).Data.ArrayMax;
            (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            iVar14 = local_108.Data.ArrayNum;
            (this_00->Content).Data.ArrayNum = iVar14;
            if (iVar14 == 0) {
              *piVar15 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,iVar14,0,(ForAnyElementType *)pFVar2,iVar14,piVar15);
              memcpy((pFVar2->Data).AllocatorInstance.Data,_Src.Data,(longlong)iVar14 * 2);
            }
            (this_00->Reader).Ptr = (FBufferReader *)0x0;
            TJsonStringReader<wchar_t>::InitReader(this_00);
          }
          local_110.Object = this_00;
          TSharedRef<TJsonStringReader<wchar_t>,1>::
          TSharedRef<TJsonStringReader<wchar_t>,1><TJsonStringReader<wchar_t>_>
                    (&local_98,&local_110);
          FVar12.ReferenceController = local_98.SharedReferenceCount.ReferenceController;
          if (local_98.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_98.SharedReferenceCount.ReferenceController);
          local_1d8 = (FDS_WorldMapMarkerInfo *)0x0;
          local_1d0 = 0;
          local_160.Object.Object = (FJsonObject *)0x0;
          local_160.Object.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
          local_160.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_160.Identifier.Data.ArrayNum = 0;
          local_160.Identifier.Data.ArrayMax = 0;
          local_160.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_160.Array.ArrayNum = 0;
          local_160.Array.ArrayMax = 0;
          bVar13 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                             ((TJsonReader<wchar_t> *)local_98.Object,&local_160,None);
          if (bVar13) {
            bVar13 = FJsonSerializerPolicy_JsonObject::GetValueFromState(&local_160,&local_1b8);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_160.Object.SharedReferenceCount.ReferenceController);
            DestructItems<TSharedPtr<FJsonValue,1>,int>
                      ((TSharedPtr<FJsonValue,1> *)local_160.Array.AllocatorInstance.Data,
                       local_160.Array.ArrayNum);
            if ((TSharedPtr<FJsonValue,1> *)local_160.Array.AllocatorInstance.Data !=
                (TSharedPtr<FJsonValue,1> *)0x0) {
              FMemory::Free(local_160.Array.AllocatorInstance.Data);
            }
            if (local_160.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_160.Identifier.Data.AllocatorInstance.Data);
            }
            if ((bVar13) && (local_1b8.Object != (FJsonObject *)0x0)) {
              if ((local_1b8.Object == (FJsonObject *)0x0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar13)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              uStack_80 = 0xb;
              local_88 = L"MarkerInfos";
              local_68[0]._12_4_ = uStack_7c;
              local_68[0].Size = 0xb;
              local_68[0].DataPtr = L"MarkerInfos";
              pTVar16 = FJsonObject::GetObjectField(local_1b8.Object,local_68);
              pTVar6 = (pTVar16->SharedReferenceCount).ReferenceController;
              pFVar7 = pTVar16->Object;
              if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
                UNLOCK();
              }
              if ((pFVar7 == (FJsonObject *)0x0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x408,L""), bVar13)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
                UNLOCK();
              }
              local_128.Object = pFVar7;
              local_128.SharedReferenceCount.ReferenceController = pTVar6;
              if ((pFVar7 == (FJsonObject *)0x0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x25d,L""), bVar13)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pUVar17 = FDS_WorldMapMarkerInfoContainer::StaticStruct();
              FJsonObjectConverter::JsonObjectToUStruct
                        (&local_128,(UStruct *)pUVar17,&local_1d8,0,0,false,(FText *)0x0,
                         (TDelegate<bool___cdecl(TSharedPtr<FJsonValue,1>_const_&,FProperty_*,void_*),FDefaultDelegateUserPolicy>
                          *)0x0);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_128.SharedReferenceCount.ReferenceController);
              pFVar10 = local_1d8;
              iVar14 = (int)local_1d0;
              local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_1c8.ArrayNum = (int)local_1d0;
              if ((int)local_1d0 == 0) {
                local_1c8.ArrayMax = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x60,8,(int)local_1d0,0,&local_1c8.AllocatorInstance,(int)local_1d0,
                           &local_1c8.ArrayMax);
                ConstructItems<FDS_WorldMapMarkerInfo,FDS_WorldMapMarkerInfo,int>
                          (local_1c8.AllocatorInstance.Data,pFVar10,iVar14);
              }
              UpdateWorldMapMarkerData(this,&local_1c8);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar6);
            }
          }
          else {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_160.Object.SharedReferenceCount.ReferenceController);
            DestructItems<TSharedPtr<FJsonValue,1>,int>
                      ((TSharedPtr<FJsonValue,1> *)local_160.Array.AllocatorInstance.Data,
                       local_160.Array.ArrayNum);
            if ((TSharedPtr<FJsonValue,1> *)local_160.Array.AllocatorInstance.Data !=
                (TSharedPtr<FJsonValue,1> *)0x0) {
              FMemory::Free(local_160.Array.AllocatorInstance.Data);
            }
            if (local_160.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_160.Identifier.Data.AllocatorInstance.Data);
            }
          }
          DestructItems<FDS_WorldMapMarkerInfo,int>(local_1d8,(int)local_1d0);
          if (local_1d8 != (FDS_WorldMapMarkerInfo *)0x0) {
            FMemory::Free(local_1d8);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar12.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1b8.SharedReferenceCount.ReferenceController);
          if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_108.Data.AllocatorInstance.Data);
          }
        }
        else {
          if (*(int *)(lVar5 + 8 + lVar18 * 0x28) == 0) {
            pwVar19 = L"";
          }
          else {
            pwVar19 = *(wchar_t **)(lVar5 + lVar18 * 0x28);
          }
          iVar14 = FGenericPlatformStricmp::Stricmp(pwVar19,"version");
          if (iVar14 == 0) {
            if ((*(longlong *)(lVar5 + 0x10 + lVar18 * 0x28) == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar13)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            dVar9 = FJsonValue::AsNumber(*(FJsonValue **)(lVar5 + 0x10 + lVar18 * 0x28));
            this->WoldMapMarkerHttpVersion = (int)dVar9;
          }
        }
        TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
      }
    }
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_198.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_198.Array.AllocatorInstance.Data,
               local_198.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_198.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_198.Array.AllocatorInstance.Data);
    }
    if (local_198.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Identifier.Data.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  return;
}

// Created @ 14bb5ce10

void __thiscall UDS_WorldMapMarkerManager::Created(UDS_WorldMapMarkerManager *this)

{
  *(undefined1 *)&this->_padding_ = 0;
  return;
}

// Destroyed @ 14bb5da60

void __thiscall UDS_WorldMapMarkerManager::Destroyed(UDS_WorldMapMarkerManager *this)

{
  return;
}

// GetAutoIncrementKey @ 14bb636e0

long64 __thiscall UDS_WorldMapMarkerManager::GetAutoIncrementKey(UDS_WorldMapMarkerManager *this)

{
  this->AutoIncrementKey = this->AutoIncrementKey + 1;
  return this->AutoIncrementKey;
}

// GetInst @ 14bb665d0

UDS_WorldMapMarkerManager * __cdecl UDS_WorldMapMarkerManager::GetInst(void)

{
  int iVar1;
  UDS_GameInstance *this;
  UClass *pUVar2;
  UDS_WorldMapMarkerManager *pUVar3;
  
  this = UDS_GameInstance::GetInst();
  if (this == (UDS_GameInstance *)0x0) {
    return (UDS_WorldMapMarkerManager *)0x0;
  }
  pUVar2 = Z_Construct_UClass_UDS_WorldMapMarkerManager_NoRegister();
  pUVar3 = (UDS_WorldMapMarkerManager *)UDS_GameInstance::GetManager(this,(FName)pUVar2->_padding_);
  if (pUVar3 != (UDS_WorldMapMarkerManager *)0x0) {
    pUVar2 = Z_Construct_UClass_UDS_WorldMapMarkerManager_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return pUVar3;
    }
  }
  return (UDS_WorldMapMarkerManager *)0x0;
}

// GetMarkerIndex @ 14bb66910

int __thiscall
UDS_WorldMapMarkerManager::GetMarkerIndex
          (UDS_WorldMapMarkerManager *this,FDS_WorldMapMarkerInfo *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar6 = 0;
  if (0 < (this->WorldMapMarkerInfoList).ArrayNum) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->WorldMapMarkerInfoList).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      if (*(longlong *)((this->WorldMapMarkerInfoList).AllocatorInstance.Data + lVar7) ==
          param_1->key) {
        pFVar1 = (param_1->Memo).Data.AllocatorInstance.Data;
        if (pFVar1 == (FScriptContainerElement *)0x0) {
          return uVar6;
        }
        FMemory::Free(pFVar1);
        return uVar6;
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x60;
    } while ((int)uVar6 < (this->WorldMapMarkerInfoList).ArrayNum);
  }
  pFVar1 = (param_1->Memo).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return 0;
}

// GetWorldMapMarkerInfoArray @ 14bb691b0

TArray<FDS_WorldMapMarkerInfo,TSizedDefaultAllocator<32>_> * __thiscall
UDS_WorldMapMarkerManager::GetWorldMapMarkerInfoArray
          (UDS_WorldMapMarkerManager *this,
          TArray<FDS_WorldMapMarkerInfo,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  FDS_WorldMapMarkerInfo *pFVar2;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = (this->WorldMapMarkerInfoList).ArrayNum;
  pFVar2 = (FDS_WorldMapMarkerInfo *)(this->WorldMapMarkerInfoList).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x60,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
             &__return_storage_ptr__->ArrayMax);
  ConstructItems<FDS_WorldMapMarkerInfo,FDS_WorldMapMarkerInfo,int>
            ((__return_storage_ptr__->AllocatorInstance).Data,pFVar2,iVar1);
  return __return_storage_ptr__;
}

// GetWorldMapMarkerInfoCount @ 14bb69240

int __thiscall
UDS_WorldMapMarkerManager::GetWorldMapMarkerInfoCount(UDS_WorldMapMarkerManager *this)

{
  return (this->WorldMapMarkerInfoList).ArrayNum;
}

// Init @ 14bb6ab80

void __thiscall UDS_WorldMapMarkerManager::Init(UDS_WorldMapMarkerManager *this)

{
  return;
}

// LoadMarkerDataDB @ 14bb6ff10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_WorldMapMarkerManager::LoadMarkerDataDB(UDS_WorldMapMarkerManager *this)

{
  FScriptContainerElement *_Src;
  FDS_AuthData *pFVar1;
  FDS_HttpServer *pFVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  longlong lVar5;
  UDS_WorldMapMarkerManager *local_res8;
  ForAnyElementType local_78;
  int local_70;
  int local_6c;
  FString local_68;
  TSharedRef<FDS_HttpRequest,1> local_58;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  
  pFVar1 = TDS_Singleton<FDS_AuthData>::GetInst();
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = (pFVar1->JwtKey).Data.ArrayNum;
  lVar5 = (longlong)local_70;
  _Src = (pFVar1->JwtKey).Data.AllocatorInstance.Data;
  if (local_70 == 0) {
    local_6c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_70,0,&local_78,local_70,&local_6c);
    memcpy(local_78.Data,_Src,lVar5 * 2);
  }
  pFVar2 = TDS_Singleton<FDS_HttpServer>::GetInst();
  FDS_Urls::GetMinimapMarker(&pFVar2->Urls);
  ::FString::PrintfImpl(&local_68,L"%s&player_uid=%lld&version=%d&region_index=%d&jwt_key=%s");
  MakeShared<FDS_HttpRequest,1>(&local_58);
  ::FString::operator=(&(local_58.Object)->URL,&local_68);
  (local_58.Object)->Verb = GET;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(local_58.Object)->SuccessDel,(FWriteAccessScope *)&local_48);
  local_30 = &((local_58.Object)->SuccessDel).field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_30);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpResponse___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_WorldMapMarkerManager____A6AXV__TSharedPtr_VIHttpResponse___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar3[3] = 0;
    local_res8 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_res8);
    puVar3[4] = OnResponseWorldMapMarkerDB;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(local_58.Object)->FailDel,
             (FWriteAccessScope *)&local_48);
  local_30 = &((local_58.Object)->FailDel).field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_30);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_NV__TSharedPtr_VIHttpResponse___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_WorldMapMarkerManager____A6A_NV__TSharedPtr_VIHttpResponse___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar3[3] = 0;
    local_res8 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_res8);
    puVar3[4] = OnResponseFail_WorldMapMarkerDB;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  pFVar2 = TDS_Singleton<FDS_HttpServer>::GetInst();
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FDS_HttpServer::Request(pFVar2,(TSharedPtr<FDS_HttpRequest,1> *)&local_58);
  if (2 < (byte)DS_CommonLog._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&DS_CommonLog);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  return;
}

// MakeMarkerInfoToJson @ 14bb70bb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FString * __thiscall
UDS_WorldMapMarkerManager::MakeMarkerInfoToJson
          (UDS_WorldMapMarkerManager *this,FString *__return_storage_ptr__)

{
  undefined1 *puVar1;
  FDS_WorldMapMarkerInfo *pFVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  FSharedReferencer<1> FVar5;
  bool bVar6;
  FArchiveState *pFVar7;
  FString *pFVar8;
  UScriptStruct *pUVar9;
  FArchiveState *this_00;
  FArchiveState *pFVar10;
  uint uVar11;
  FArchiveState *pFVar12;
  TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_> *pTVar13;
  FFastPathLoadBuffer *pFVar14;
  FFastPathLoadBuffer **ppFVar15;
  TRawPtrProxy<FJsonObject> local_res18;
  TRawPtrProxy<TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>_> local_res20;
  ForAnyElementType local_e8;
  uint local_e0;
  int local_dc;
  FString local_d8;
  TSharedPtr<FJsonObject,1> local_c8;
  TSharedPtr<FJsonObject,1> local_b8;
  TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> local_a8;
  TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_> *local_98;
  TSharedRef<FJsonObject,1> local_90;
  FString local_80;
  TSharedRef<TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>,1> local_70;
  TSharedPtr<FJsonObject,1> local_60 [2];
  
  pFVar7 = ::operator_new(0x50);
  pFVar12 = (FArchiveState *)0x0;
  local_res18.Object = (FJsonObject *)pFVar12;
  if (pFVar7 != (FArchiveState *)0x0) {
    (pFVar7->InlineFPLB).StartFastPathLoadBuffer = (uchar *)0x0;
    (pFVar7->InlineFPLB).EndFastPathLoadBuffer = (uchar *)0x0;
    pFVar7->ArMaxSerializeSize = 0;
    pFVar7->ArLicenseeUEVer = 0;
    (pFVar7->ArEngineVer).Major = 0;
    (pFVar7->ArEngineVer).Minor = 0;
    pFVar7->_padding_ = 0;
    pFVar7->ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    (pFVar7->InlineFPLB).OriginalFastPathLoadBuffer = (uchar *)0x0;
    puVar1 = &pFVar7->field_0x28;
    pFVar7->ArIsLoading = '\0';
    pFVar7->ArIsNetArchive = '\0';
    pFVar7->ArIsSaveGame = '\0';
    pFVar7->ArIsSavingOptionalObject = '\0';
    pFVar7->ArIsFilterEditorOnly = '\0';
    pFVar7->ArShouldSkipBulkData = '\0';
    pFVar7->ArIsCountingMemory = '\0';
    pFVar7->ArIsModifyingWeakAndStrongReferences = '\0';
    pFVar7->ArIsObjectReferenceCollector = '\0';
    pFVar7->ArAllowLazyLoading = '\0';
    pFVar7->ArIgnoreClassRef = '\0';
    pFVar7->ArIgnoreClassGeneratedByRef = '\0';
    pFVar7->ArIgnoreOuterRef = '\0';
    pFVar7->ArNoIntraPropertyDelta = '\0';
    pFVar7->ArNoDelta = '\0';
    pFVar7->ArIgnoreArchetypeRef = '\0';
    pFVar7->ArForceByteSwapping = '\0';
    pFVar7->ArRequiresLocalizationGather = '\0';
    pFVar7->ArContainsMap = '\0';
    pFVar7->ArContainsCode = '\0';
    pFVar7->ArShouldSkipUpdateCustomVersion = '\0';
    pFVar7->ArShouldSkipCompilingAssets = '\0';
    pFVar7->ArIsCriticalError = '\0';
    pFVar7->ArIsError = '\0';
    pFVar7->ArIsPersistent = '\0';
    pFVar7->ArForceUnicode = '\0';
    pFVar7->ArUseUnversionedPropertySerialization = '\0';
    pFVar7->ArWantBinaryPropertySerialization = '\0';
    pFVar7->ArIsTextFormat = '\0';
    pFVar7->ArIsTransacting = '\0';
    pFVar7->ArIsSaving = '\0';
    pFVar7->ArIsLoadingFromCookedPackage = '\0';
    *(undefined4 *)&pFVar7->field_0x2c = 0x80;
    pFVar7->ArSerializingDefaults = -1;
    pFVar7->ArPortFlags = 0;
    (pFVar7->ArUEVer).FileVersionUE4 = 0;
    (pFVar7->ArUEVer).FileVersionUE5 = 0;
    local_res18.Object = (FJsonObject *)pFVar7;
  }
  TSharedPtr<FJsonObject,1>::TSharedPtr<FJsonObject,1><FJsonObject>(&local_c8,&local_res18);
  local_e0 = 0;
  local_e8.Data = (FScriptContainerElement *)0x0;
  ppFVar15 = (FFastPathLoadBuffer **)&DAT_00000008;
  local_dc = 0;
  if (0 < (this->WorldMapMarkerInfoList).ArrayNum) {
    pFVar7 = pFVar12;
    pFVar10 = pFVar12;
    do {
      if ((TArray<FDS_WorldMapMarkerInfo,TSizedDefaultAllocator<32>_> *)&local_e8 !=
          &this->WorldMapMarkerInfoList) {
        DestructItems<FDS_WorldMapMarkerInfo,int>
                  ((FDS_WorldMapMarkerInfo *)local_e8.Data,(int)pFVar7);
        uVar11 = (this->WorldMapMarkerInfoList).ArrayNum;
        pFVar2 = (FDS_WorldMapMarkerInfo *)(this->WorldMapMarkerInfoList).AllocatorInstance.Data;
        local_e0 = uVar11;
        if ((uVar11 == 0) && (local_dc == 0)) {
          local_dc = 0;
          pFVar7 = (FArchiveState *)0x0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x60,8,uVar11,local_dc,&local_e8,uVar11,&local_dc);
          ConstructItems<FDS_WorldMapMarkerInfo,FDS_WorldMapMarkerInfo,int>
                    (local_e8.Data,pFVar2,uVar11);
          pFVar7 = (FArchiveState *)(ulonglong)local_e0;
        }
      }
      uVar11 = (int)pFVar10 + 1;
      pFVar10 = (FArchiveState *)(ulonglong)uVar11;
    } while ((int)uVar11 < (this->WorldMapMarkerInfoList).ArrayNum);
  }
  local_90.SharedReferenceCount.ReferenceController = ::operator_new(0x60);
  if ((FArchiveState *)local_90.SharedReferenceCount.ReferenceController == (FArchiveState *)0x0) {
    local_90.Object = (FJsonObject *)___xmm_00000000000000000000000000000010;
    local_90.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)_UNK_150651568;
    pFVar14 = (FFastPathLoadBuffer *)&DAT_00000010;
    pFVar7 = pFVar12;
  }
  else {
    *(undefined4 *)&((FArchiveState *)local_90.SharedReferenceCount.ReferenceController)->ActiveFPLB
         = 1;
    pFVar14 = &((FArchiveState *)local_90.SharedReferenceCount.ReferenceController)->InlineFPLB;
    *(undefined4 *)
     ((longlong)&((FArchiveState *)local_90.SharedReferenceCount.ReferenceController)->ActiveFPLB +
     4) = 1;
    ((FArchiveState *)local_90.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFJsonObject___00_SharedPointerInternals__6B_;
    (((FArchiveState *)local_90.SharedReferenceCount.ReferenceController)->InlineFPLB).
    OriginalFastPathLoadBuffer = (uchar *)0x0;
    *(undefined8 *)&((FArchiveState *)local_90.SharedReferenceCount.ReferenceController)->field_0x28
         = 0;
    ((FArchiveState *)local_90.SharedReferenceCount.ReferenceController)->ArLicenseeUEVer = 0;
    (((FArchiveState *)local_90.SharedReferenceCount.ReferenceController)->ArEngineVer).Major = 0;
    (((FArchiveState *)local_90.SharedReferenceCount.ReferenceController)->ArEngineVer).Minor = 0;
    ((FArchiveState *)local_90.SharedReferenceCount.ReferenceController)->CustomVersionContainer =
         (FCustomVersionContainer *)0x0;
    (((FArchiveState *)local_90.SharedReferenceCount.ReferenceController)->InlineFPLB).
    StartFastPathLoadBuffer = (uchar *)0x0;
    (((FArchiveState *)local_90.SharedReferenceCount.ReferenceController)->InlineFPLB).
    EndFastPathLoadBuffer = (uchar *)0x0;
    ((FArchiveState *)local_90.SharedReferenceCount.ReferenceController)->ArSerializingDefaults = 0;
    ((FArchiveState *)local_90.SharedReferenceCount.ReferenceController)->ArPortFlags = 0;
    *(undefined4 *)
     &((FArchiveState *)local_90.SharedReferenceCount.ReferenceController)->ArMaxSerializeSize = 0;
    *(undefined4 *)
     ((longlong)
      &((FArchiveState *)local_90.SharedReferenceCount.ReferenceController)->ArMaxSerializeSize + 4)
         = 0x80;
    (((FArchiveState *)local_90.SharedReferenceCount.ReferenceController)->ArUEVer).FileVersionUE4 =
         -1;
    (((FArchiveState *)local_90.SharedReferenceCount.ReferenceController)->ArUEVer).FileVersionUE5 =
         0;
    (((FArchiveState *)local_90.SharedReferenceCount.ReferenceController)->ArEngineVer).Patch = 0;
    *(undefined2 *)
     &(((FArchiveState *)local_90.SharedReferenceCount.ReferenceController)->ArEngineVer).field_0x6
         = 0;
    (((FArchiveState *)local_90.SharedReferenceCount.ReferenceController)->ArEngineVer).Changelist =
         0;
    if ((pFVar14 == (FFastPathLoadBuffer *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FString *)(*pcVar3)();
      return pFVar8;
    }
    ppFVar15 = &((FArchiveState *)local_90.SharedReferenceCount.ReferenceController)->ActiveFPLB;
    LOCK();
    *(int *)ppFVar15 = *(int *)ppFVar15 + 1;
    UNLOCK();
    pFVar7 = (FArchiveState *)local_90.SharedReferenceCount.ReferenceController;
    local_90.Object = (FJsonObject *)pFVar14;
  }
  pUVar9 = FDS_WorldMapMarkerInfoContainer::StaticStruct();
  bVar6 = FJsonObjectConverter::UStructToJsonObject
                    ((UStruct *)pUVar9,&local_e8,&local_90,0,0,
                     (TDelegate<TSharedPtr<FJsonValue,1>___cdecl(FProperty_*,void_const_*),FDefaultDelegateUserPolicy>
                      *)0x0,None);
  if (bVar6) {
    local_b8.Object = (FJsonObject *)pFVar14;
    local_b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar7;
    if (pFVar7 != (FArchiveState *)0x0) {
      LOCK();
      *(int *)ppFVar15 = *(int *)ppFVar15 + 1;
      UNLOCK();
    }
  }
  else {
    local_b8.Object = (FJsonObject *)0x0;
    local_b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar7);
  if ((FFastPathLoadBuffer *)local_b8.Object != (FFastPathLoadBuffer *)0x0) {
    if ((local_c8.Object == (FJsonObject *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FString *)(*pcVar3)();
      return pFVar8;
    }
    ::FString::FString(&local_80,"MarkerInfos");
    FJsonObject::SetObjectField(local_c8.Object,&local_80,&local_b8);
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
  }
  local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.Data.ArrayNum = 0;
  local_d8.Data.ArrayMax = 0;
  pFVar7 = ::operator_new(0x40);
  local_res20.Object = (TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_> *)pFVar12;
  if (pFVar7 != (FArchiveState *)0x0) {
    this_00 = ::operator_new(0xa8);
    pFVar10 = pFVar12;
    if (this_00 != (FArchiveState *)0x0) {
      this_00->_padding_ = 0;
      this_00->ActiveFPLB = (FFastPathLoadBuffer *)0x0;
      (this_00->InlineFPLB).StartFastPathLoadBuffer = (uchar *)0x0;
      (this_00->InlineFPLB).EndFastPathLoadBuffer = (uchar *)0x0;
      (this_00->InlineFPLB).OriginalFastPathLoadBuffer = (uchar *)0x0;
      *(undefined8 *)&this_00->field_0x28 = 0;
      this_00->ArSerializingDefaults = 0;
      this_00->ArPortFlags = 0;
      this_00->ArMaxSerializeSize = 0;
      (this_00->ArUEVer).FileVersionUE4 = 0;
      (this_00->ArUEVer).FileVersionUE5 = 0;
      this_00->ArLicenseeUEVer = 0;
      (this_00->ArEngineVer).Major = 0;
      (this_00->ArEngineVer).Minor = 0;
      (this_00->ArEngineVer).Patch = 0;
      *(undefined2 *)&(this_00->ArEngineVer).field_0x6 = 0;
      (this_00->ArEngineVer).Changelist = 0;
      this_00->CustomVersionContainer = (FCustomVersionContainer *)0x0;
      this_00->ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
      this_00->SavePackageData = (FArchiveSavePackageData *)0x0;
      this_00->SerializedProperty = (FProperty *)0x0;
      this_00->SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
      *(undefined8 *)&this_00->bCustomVersionsAreReset = 0;
      this_00->NextProxy = (FArchiveState *)0x0;
      FArchiveState::FArchiveState(this_00);
      this_00[1]._padding_ = 0;
      this_00->_padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_
      ;
      this_00[1].InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
      this_00[1].ActiveFPLB = (FFastPathLoadBuffer *)&pFVar7->field_0x28;
      FArchiveState::SetIsSaving(this_00,true);
      (**(code **)(this_00->_padding_ + 0x108))(this_00,0);
      this_00->_padding_ = (longlong)&___7FMemoryWriter__6B_;
      pFVar10 = this_00;
    }
    pFVar7->ActiveFPLB = (FFastPathLoadBuffer *)pFVar10;
    pFVar7->_padding_ = (longlong)&___7__TJsonStringWriter_U__TPrettyJsonPrintPolicy__W____6B_;
    pFVar7->ArMaxSerializeSize = (long64)&local_d8;
    (pFVar7->InlineFPLB).StartFastPathLoadBuffer = (uchar *)0x0;
    (pFVar7->InlineFPLB).EndFastPathLoadBuffer = (uchar *)0x0;
    (pFVar7->InlineFPLB).OriginalFastPathLoadBuffer = (uchar *)0x0;
    *(undefined8 *)&pFVar7->field_0x28 = 0;
    pFVar7->ArSerializingDefaults = 0;
    pFVar7->ArPortFlags = 0;
    local_res20.Object = (TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_> *)pFVar7;
  }
  TSharedRef<TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>,1>::
  TSharedRef<TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>,1><TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>_>
            (&local_70,&local_res20);
  local_98 = local_70.Object;
  if (local_70.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_70.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_70.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_70.SharedReferenceCount.ReferenceController);
  if ((local_c8.Object == (FJsonObject *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FString *)(*pcVar3)();
    return pFVar8;
  }
  FVar5.ReferenceController = local_c8.SharedReferenceCount.ReferenceController;
  if (local_c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_c8.Object == (FJsonObject *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FString *)(*pcVar3)();
    return pFVar8;
  }
  if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar5.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar7 = ::operator_new(0x38);
  if (pFVar7 == (FArchiveState *)0x0) {
    local_a8.Object = ___xmm_00000000000000000000000000000010;
    local_a8.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)_UNK_150651568;
  }
  else {
    *(undefined4 *)&pFVar7->ActiveFPLB = 1;
    *(undefined4 *)((longlong)&pFVar7->ActiveFPLB + 4) = 1;
    pFVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFElement_FJsonSerializerPolicy_JsonObject___00_SharedPointerInternals__6B_
    ;
    (pFVar7->InlineFPLB).StartFastPathLoadBuffer = (uchar *)0x0;
    (pFVar7->InlineFPLB).EndFastPathLoadBuffer = (uchar *)0x0;
    pFVar10 = ::operator_new(0x30);
    if (pFVar10 == (FArchiveState *)0x0) {
      (pFVar7->InlineFPLB).OriginalFastPathLoadBuffer = &DAT_00000010;
      *(undefined8 *)&pFVar7->field_0x28 = 0;
      pTVar13 = local_70.Object;
    }
    else {
      *(undefined4 *)&pFVar10->ActiveFPLB = 1;
      *(undefined4 *)((longlong)&pFVar10->ActiveFPLB + 4) = 1;
      pFVar10->_padding_ =
           (longlong)
           &___7__TIntrusiveReferenceController_VFJsonValueObject___00_SharedPointerInternals__6B_;
      local_60[0].Object = local_c8.Object;
      local_60[0].SharedReferenceCount.ReferenceController = FVar5.ReferenceController;
      if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar5.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FJsonValueObject::FJsonValueObject((FJsonValueObject *)&pFVar10->InlineFPLB,local_60);
      if ((&pFVar10->InlineFPLB == (FFastPathLoadBuffer *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FString *)(*pcVar3)();
        return pFVar8;
      }
      (pFVar7->InlineFPLB).OriginalFastPathLoadBuffer = (uchar *)&pFVar10->InlineFPLB;
      *(FArchiveState **)&pFVar7->field_0x28 = pFVar10;
      LOCK();
      *(int *)&pFVar10->ActiveFPLB = *(int *)&pFVar10->ActiveFPLB + 1;
      UNLOCK();
      pTVar13 = local_98;
      pFVar12 = pFVar10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar12);
    local_a8.Object = (FElement *)&pFVar7->InlineFPLB;
    *(undefined2 *)&pFVar7->ArSerializingDefaults = 0;
    local_70.Object = pTVar13;
    local_a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar7;
    if ((local_a8.Object == (FElement *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FString *)(*pcVar3)();
      return pFVar8;
    }
  }
  bVar6 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
          Serialize<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>
                    (&local_a8,
                     (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)local_70.Object,true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  if (bVar6) {
    ::FString::ReplaceInline(&local_d8,L"\\",L"",IgnoreCase);
    ::FString::ReplaceInline(&local_d8,L"\r",L"",IgnoreCase);
    ::FString::ReplaceInline(&local_d8,L"\n",L"",IgnoreCase);
    ::FString::ReplaceInline(&local_d8,L"\t",L"",IgnoreCase);
    FVar4.Data = local_d8.Data.AllocatorInstance.Data;
    local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).AllocatorInstance.Data = FVar4.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_d8.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_d8.Data.ArrayMax;
    local_d8.Data.ArrayNum = 0;
    local_d8.Data.ArrayMax = 0;
  }
  else {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_70.SharedReferenceCount.ReferenceController);
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  DestructItems<FDS_WorldMapMarkerInfo,int>((FDS_WorldMapMarkerInfo *)local_e8.Data,local_e0);
  if ((FDS_WorldMapMarkerInfo *)local_e8.Data != (FDS_WorldMapMarkerInfo *)0x0) {
    FMemory::Free(local_e8.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// MarkerAllDelete @ 14bb71250

void __thiscall UDS_WorldMapMarkerManager::MarkerAllDelete(UDS_WorldMapMarkerManager *this)

{
  int *piVar1;
  
  DestructItems<FDS_WorldMapMarkerInfo,int>
            ((FDS_WorldMapMarkerInfo *)(this->WorldMapMarkerInfoList).AllocatorInstance.Data,
             (this->WorldMapMarkerInfoList).ArrayNum);
  piVar1 = &(this->WorldMapMarkerInfoList).ArrayMax;
  (this->WorldMapMarkerInfoList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,0,&(this->WorldMapMarkerInfoList).AllocatorInstance,0,piVar1);
  }
  SaveMarkerInfo(this);
  return;
}

// OnResponseFail_WorldMapMarkerDB @ 14bb78580

bool __thiscall
UDS_WorldMapMarkerManager::OnResponseFail_WorldMapMarkerDB
          (UDS_WorldMapMarkerManager *this,TSharedPtr<IHttpResponse,1> *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  if (param_1->Object == (IHttpResponse *)0x0) {
    pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  }
  else {
    iVar1 = (**(code **)((longlong)*param_1->Object + 0x58))();
    pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
    if (iVar1 == 0x194) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      return true;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return false;
}

// OnResponseSaveMarkerInfo @ 14bb78b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_WorldMapMarkerManager::OnResponseSaveMarkerInfo
          (UDS_WorldMapMarkerManager *this,TSharedPtr<IHttpRequest,1> *param_1,
          TSharedPtr<IHttpResponse,1> *param_2,bool param_3)

{
  UDS_LogManager *pUVar1;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if (param_2->Object == (IHttpResponse *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_WorldMapMarkerManager::OnResponseSaveMarkerInfo",0x33,Yes);
      UDS_LogManager::PrintLog
                (pUVar1,1,Warning,local_138.Ptr,0xc6,
                 L"OnResponseSaveMarkerInfo InResponse IsValid false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// OnResponseWorldMapMarkerDB @ 14bb78c70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_WorldMapMarkerManager::OnResponseWorldMapMarkerDB
          (UDS_WorldMapMarkerManager *this,TSharedPtr<IHttpResponse,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FString *pFVar4;
  UDS_LogManager *pUVar5;
  IHttpResponse *pIVar6;
  undefined1 auStackY_188 [32];
  void *local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if (param_1->Object != (IHttpResponse *)0x0) {
    iVar3 = (**(code **)((longlong)*param_1->Object + 0x58))();
    if (iVar3 == 200) {
      if (param_1->Object == (IHttpResponse *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      pFVar4 = (FString *)
               (**(code **)((longlong)*param_1->Object + 0x60))(param_1->Object,local_148);
      ConvertJsonToMarker(this,pFVar4);
    }
    else {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 == (UDS_LogManager *)0x0) goto LAB_14bb78da7;
      pUVar5 = UDS_LogManager::GetInst();
      pIVar6 = TSharedPtr<IHttpResponse,1>::operator->(param_1);
      (**(code **)((longlong)*pIVar6 + 0x58))(pIVar6);
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_WorldMapMarkerManager::OnResponseWorldMapMarkerDB",0x35,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_138.Ptr,0x39,L"OnResponseWorldMapMarkerDB ErrorCode = %d");
      local_148[0] = (void *)local_138._padding_;
    }
    if (local_148[0] != (void *)0x0) {
      FMemory::Free(local_148[0]);
    }
  }
LAB_14bb78da7:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// RegisterWorldMapMarkerNote @ 14bb80770

void __thiscall
UDS_WorldMapMarkerManager::RegisterWorldMapMarkerNote
          (UDS_WorldMapMarkerManager *this,FDS_WorldMapMarkerInfo *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  
  uVar7 = 0;
  if (0 < (this->WorldMapMarkerInfoList).ArrayNum) {
    lVar6 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar7 < (this->WorldMapMarkerInfoList).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(longlong *)((this->WorldMapMarkerInfoList).AllocatorInstance.Data + lVar6) ==
          param_1->key) {
        uVar5 = 0;
        if ((int)uVar7 < (this->WorldMapMarkerInfoList).ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (this->WorldMapMarkerInfoList).AllocatorInstance.Data;
        *(long64 *)(pFVar1 + lVar6) = param_1->key;
        *(int *)(pFVar1 + lVar6 + 8) = param_1->Floor;
        *(int *)(pFVar1 + lVar6 + 0xc) = param_1->IslandID;
        *(int *)(pFVar1 + lVar6 + 0x10) = param_1->IndoorGroupID;
        *(float *)(pFVar1 + lVar6 + 0x14) = param_1->SavedScale;
        ::FString::operator=((FString *)(pFVar1 + lVar6 + 0x18),&param_1->Memo);
        dVar3 = (param_1->MarkerGlobalPos).field0_0x0._s_0.Y;
        *(double *)(pFVar1 + lVar6 + 0x28) = (param_1->MarkerGlobalPos).field0_0x0._s_0.X;
        *(double *)(pFVar1 + lVar6 + 0x28 + 8) = dVar3;
        dVar3 = (param_1->CurMapPositionOffset).field0_0x0._s_0.Y;
        *(double *)(pFVar1 + lVar6 + 0x38) = (param_1->CurMapPositionOffset).field0_0x0._s_0.X;
        *(double *)(pFVar1 + lVar6 + 0x38 + 8) = dVar3;
        dVar3 = (param_1->MakerVector2D).field0_0x0._s_0.Y;
        *(double *)(pFVar1 + lVar6 + 0x48) = (param_1->MakerVector2D).field0_0x0._s_0.X;
        *(double *)(pFVar1 + lVar6 + 0x48 + 8) = dVar3;
        *(FWeakObjectPtr *)(pFVar1 + lVar6 + 0x58) = (param_1->Widget).WeakPtr;
      }
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x60;
    } while ((int)uVar7 < (this->WorldMapMarkerInfoList).ArrayNum);
  }
  SaveMarkerInfo(this);
  pFVar1 = (param_1->Memo).Data.AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(pFVar1);
  return;
}

// RemoveSharedMarkerInfo @ 14bb84110

void __thiscall UDS_WorldMapMarkerManager::RemoveSharedMarkerInfo(UDS_WorldMapMarkerManager *this)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  undefined8 local_res8;
  ForAnyElementType local_50;
  undefined8 uStack_48;
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined1 local_20 [16];
  FWeakObjectPtr local_10;
  
  local_40 = (undefined1  [16])UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  local_50.Data = (FScriptContainerElement *)0x0;
  local_30 = (undefined1  [16])UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  uStack_48 = 0;
  local_20 = (undefined1  [16])UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  local_10.ObjectIndex = 0;
  local_10.ObjectSerialNumber = 0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&local_10,(FObjectPtr)&local_res8);
  pFVar1 = &(this->SharedMarkInfo).Memo;
  (this->SharedMarkInfo).key = 0;
  (this->SharedMarkInfo).Floor = 0;
  (this->SharedMarkInfo).IslandID = 0;
  (this->SharedMarkInfo).IndoorGroupID = 0;
  (this->SharedMarkInfo).SavedScale = 0.0;
  if (pFVar1 != (FString *)&local_50) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_50.Data;
    (this->SharedMarkInfo).Memo.Data.ArrayNum = (int)uStack_48;
    (this->SharedMarkInfo).Memo.Data.ArrayMax = uStack_48._4_4_;
    uStack_48 = 0;
    local_50.Data = (FScriptContainerElement *)0x0;
  }
  (this->SharedMarkInfo).Widget.WeakPtr = local_10;
  (this->SharedMarkInfo).MarkerGlobalPos.field0_0x0._s_0.X = (double)local_40._0_8_;
  (this->SharedMarkInfo).MarkerGlobalPos.field0_0x0._s_0.Y = (double)local_40._8_8_;
  (this->SharedMarkInfo).CurMapPositionOffset.field0_0x0._s_0.X = (double)local_30._0_8_;
  (this->SharedMarkInfo).CurMapPositionOffset.field0_0x0._s_0.Y = (double)local_30._8_8_;
  (this->SharedMarkInfo).MakerVector2D.field0_0x0._s_0.X = (double)local_20._0_8_;
  (this->SharedMarkInfo).MakerVector2D.field0_0x0._s_0.Y = (double)local_20._8_8_;
  if (local_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data);
  }
  return;
}

// RemoveWorldMapMarkerInfo @ 14bb84410

void __thiscall
UDS_WorldMapMarkerManager::RemoveWorldMapMarkerInfo
          (UDS_WorldMapMarkerManager *this,FDS_WorldMapMarkerInfo *param_1)

{
  int *piVar1;
  TArray<FDS_WorldMapMarkerInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  uint uVar10;
  
  uVar7 = 0;
  if (0 < (this->WorldMapMarkerInfoList).ArrayNum) {
    lVar9 = 0;
    pTVar2 = &this->WorldMapMarkerInfoList;
    do {
      uVar10 = ~uVar7 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar7 < (this->WorldMapMarkerInfoList).ArrayNum) {
        uVar5 = uVar10;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(longlong *)((pTVar2->AllocatorInstance).Data + lVar9) == param_1->key) {
        uVar5 = 0;
        if ((int)uVar7 < (this->WorldMapMarkerInfoList).ArrayNum) {
          uVar5 = uVar10;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar8 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar7 * 0x60;
        if (*(void **)(pFVar8 + 0x18) != (void *)0x0) {
          FMemory::Free(*(void **)(pFVar8 + 0x18));
        }
        iVar6 = (this->WorldMapMarkerInfoList).ArrayNum + ~uVar7;
        if (iVar6 != 0) {
          memmove(pFVar8,pFVar8 + 0x60,(longlong)iVar6 * 0x60);
        }
        piVar1 = &(this->WorldMapMarkerInfoList).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,8,&pTVar2->AllocatorInstance,(this->WorldMapMarkerInfoList).ArrayNum,
                   &(this->WorldMapMarkerInfoList).ArrayMax);
        break;
      }
      uVar7 = uVar7 + 1;
      lVar9 = lVar9 + 0x60;
    } while ((int)uVar7 < (this->WorldMapMarkerInfoList).ArrayNum);
  }
  SaveMarkerInfo(this);
  pFVar8 = (param_1->Memo).Data.AllocatorInstance.Data;
  if (pFVar8 == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(pFVar8);
  return;
}

// SaveMarkerInfo @ 14bb877f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_WorldMapMarkerManager::SaveMarkerInfo(UDS_WorldMapMarkerManager *this)

{
  FScriptContainerElement *pFVar1;
  FDS_HttpRequest *pFVar2;
  FDS_AuthData *pFVar3;
  FDS_HttpServer *pFVar4;
  FString *pFVar5;
  int iVar6;
  longlong lVar7;
  FString *pFVar8;
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  FString local_48;
  TSharedRef<FDS_HttpRequest,1> local_38;
  TSharedPtr<FDS_HttpRequest,1> local_28;
  
  iVar6 = 1;
  if (this->WoldMapMarkerHttpVersion < 0x65) {
    iVar6 = this->WoldMapMarkerHttpVersion + 1;
  }
  this->WoldMapMarkerHttpVersion = iVar6;
  pFVar3 = TDS_Singleton<FDS_AuthData>::GetInst();
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = (pFVar3->JwtKey).Data.ArrayNum;
  lVar7 = (longlong)local_50;
  pFVar1 = (pFVar3->JwtKey).Data.AllocatorInstance.Data;
  if (local_50 == 0) {
    local_4c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_50,0,&local_58,local_50,&local_4c);
    memcpy(local_58.Data,pFVar1,lVar7 * 2);
  }
  pFVar4 = TDS_Singleton<FDS_HttpServer>::GetInst();
  FDS_Urls::GetUpdateMinimapMarker(&pFVar4->Urls);
  ::FString::PrintfImpl(&local_48,L"%s&player_uid=%lld&version=%d&region_index=%d&jwt_key=%s");
  MakeShared<FDS_HttpRequest,1>(&local_38);
  pFVar2 = local_38.Object;
  ::FString::operator=(&(local_38.Object)->URL,&local_48);
  pFVar2->Verb = POST;
  pFVar5 = MakeMarkerInfoToJson(this,(FString *)&local_28);
  pFVar8 = &pFVar2->ContentString;
  if (pFVar8 != pFVar5) {
    pFVar1 = (pFVar8->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar8->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar2->ContentString).Data.ArrayNum = (pFVar5->Data).ArrayNum;
    (pFVar2->ContentString).Data.ArrayMax = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
  }
  if (local_28.Object != (FDS_HttpRequest *)0x0) {
    FMemory::Free(local_28.Object);
  }
  pFVar4 = TDS_Singleton<FDS_HttpServer>::GetInst();
  local_28.Object = local_38.Object;
  local_28.SharedReferenceCount.ReferenceController =
       local_38.SharedReferenceCount.ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FDS_HttpServer::Request(pFVar4,&local_28);
  if (2 < (byte)DS_CommonLog._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&DS_CommonLog);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  return;
}

// SetLoadedUserWidget @ 14bb8aff0

void __thiscall
UDS_WorldMapMarkerManager::SetLoadedUserWidget
          (UDS_WorldMapMarkerManager *this,FDS_WorldMapMarkerInfo *param_1,
          TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr> param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->WorldMapMarkerInfoList).ArrayNum;
  pFVar3 = (this->WorldMapMarkerInfoList).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0x60;
  while( true ) {
    if ((this->WorldMapMarkerInfoList).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FDS_WorldMapMarkerInfo,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar2) goto LAB_14bb8b05a;
    if (*(longlong *)pFVar3 == param_1->key) break;
    pFVar3 = pFVar3 + 0x60;
  }
  *(FWeakObjectPtr *)(pFVar3 + 0x58) = param_2.WeakPtr;
LAB_14bb8b05a:
  pFVar3 = (param_1->Memo).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// UpdateAutoIncrementKeyValue @ 14bb96510

void __thiscall
UDS_WorldMapMarkerManager::UpdateAutoIncrementKeyValue(UDS_WorldMapMarkerManager *this)

{
  this->AutoIncrementKey = this->AutoIncrementKey + 1;
  return;
}

// UpdateWorldMapMarkerData @ 14bb99880

void __thiscall
UDS_WorldMapMarkerManager::UpdateWorldMapMarkerData
          (UDS_WorldMapMarkerManager *this,
          TArray<FDS_WorldMapMarkerInfo,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  TArray<FDS_WorldMapMarkerInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FDS_WorldMapMarkerInfo *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FDS_WorldMapMarkerInfo *pFVar9;
  FDS_WorldMapMarkerInfo *pFVar10;
  undefined1 local_res8 [8];
  
  pTVar2 = &this->WorldMapMarkerInfoList;
  DestructItems<FDS_WorldMapMarkerInfo,int>
            ((FDS_WorldMapMarkerInfo *)(pTVar2->AllocatorInstance).Data,
             (this->WorldMapMarkerInfoList).ArrayNum);
  piVar1 = &(this->WorldMapMarkerInfoList).ArrayMax;
  (this->WorldMapMarkerInfoList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  iVar3 = param_1->ArrayNum;
  pFVar9 = (FDS_WorldMapMarkerInfo *)(param_1->AllocatorInstance).Data;
  pFVar10 = pFVar9 + iVar3;
  while( true ) {
    if (param_1->ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FDS_WorldMapMarkerInfo,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar9 == pFVar10) break;
    this->AutoIncrementKey = this->AutoIncrementKey + 1;
    pFVar9->key = this->AutoIncrementKey;
    pFVar4 = (FDS_WorldMapMarkerInfo *)(pTVar2->AllocatorInstance).Data;
    if ((pFVar4 <= pFVar9) && (pFVar9 < pFVar4 + *piVar1)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar8 = (this->WorldMapMarkerInfoList).ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x860,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->WorldMapMarkerInfoList).ArrayNum = iVar8 + 1;
    FDS_WorldMapMarkerInfo::FDS_WorldMapMarkerInfo
              ((FDS_WorldMapMarkerInfo *)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0x60)
               ,pFVar9);
    pFVar9 = pFVar9 + 1;
  }
  DestructItems<FDS_WorldMapMarkerInfo,int>
            ((FDS_WorldMapMarkerInfo *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  pFVar5 = (param_1->AllocatorInstance).Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  return;
}

// UpdateWorldMapMarkerHttpVersion @ 14bb99a00

void __thiscall
UDS_WorldMapMarkerManager::UpdateWorldMapMarkerHttpVersion(UDS_WorldMapMarkerManager *this)

{
  int iVar1;
  
  iVar1 = 1;
  if (this->WoldMapMarkerHttpVersion < 0x65) {
    iVar1 = this->WoldMapMarkerHttpVersion + 1;
  }
  this->WoldMapMarkerHttpVersion = iVar1;
  return;
}

