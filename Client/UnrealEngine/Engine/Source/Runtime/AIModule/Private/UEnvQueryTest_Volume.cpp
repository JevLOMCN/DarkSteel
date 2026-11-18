// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 9

// StaticClass @ 146f144e0

UClass * __cdecl UEnvQueryTest_Volume::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryTest_Volume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryTest_Volume",
               &Z_Registration_Info_UClass_UEnvQueryTest_Volume.InnerSingleton,
               StaticRegisterNativesUEnvQueryTest_Volume,0x210,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UEnvQueryTest_Volume>,
               InternalVTableHelperCtorCaller<UEnvQueryTest_Volume>,local_res8,
               UEnvQueryTest::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryTest_Volume.InnerSingleton;
}

// UEnvQueryTest_Volume @ 146f2db80

UEnvQueryTest_Volume * __thiscall
UEnvQueryTest_Volume::UEnvQueryTest_Volume(UEnvQueryTest_Volume *this,FVTableHelper *param_1)

{
  UEnvQueryTest::UEnvQueryTest((UEnvQueryTest *)this,param_1);
  this->_padding_ = (longlong)&___7UEnvQueryTest_Volume__6B_;
  (this->VolumeContext).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->VolumeClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  return this;
}

// UEnvQueryTest_Volume @ 146f2dbc0

UEnvQueryTest_Volume * __thiscall
UEnvQueryTest_Volume::UEnvQueryTest_Volume(UEnvQueryTest_Volume *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  UClass *pUVar2;
  
  UEnvQueryTest::UEnvQueryTest((UEnvQueryTest *)this,param_1);
  this->_padding_ = (longlong)&___7UEnvQueryTest_Volume__6B_;
  (this->VolumeContext).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->VolumeClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  *(undefined1 *)&this->_padding_ = 1;
  pUVar2 = UEnvQueryItemType_VectorBase::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  this->_padding_ = (longlong)pUVar2;
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffe;
  if (*(char *)((longlong)&this->_padding_ + 2) != '\x03') {
    *(undefined1 *)((longlong)&this->_padding_ + 2) = 3;
  }
  this->bDoComplexVolumeTest = 0;
  this->bSkipTestIfNoVolumes = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 4;
  return this;
}

// ~UEnvQueryTest_Volume @ 146f2f2f0

void __thiscall UEnvQueryTest_Volume::~UEnvQueryTest_Volume(UEnvQueryTest_Volume *this)

{
  this->_padding_ = (longlong)&___7UEnvQueryTest_Volume__6B_;
  UEnvQueryTest::~UEnvQueryTest((UEnvQueryTest *)this);
  return;
}

// GetDescriptionDetails @ 146f53740

FText * __thiscall
UEnvQueryTest_Volume::GetDescriptionDetails
          (UEnvQueryTest_Volume *this,FText *__return_storage_ptr__)

{
  (**(code **)(this->_padding_ + 0x2b8))();
  return __return_storage_ptr__;
}

// GetDescriptionTitle @ 146f55730

FText * __thiscall
UEnvQueryTest_Volume::GetDescriptionTitle(UEnvQueryTest_Volume *this,FText *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *_Src;
  bool bVar2;
  UClass *pUVar3;
  FString *pFVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  FString local_48;
  FText local_38;
  FText local_28;
  
  ::FString::FString(&local_48,L"No Source Volume Context/Class set");
  pUVar6 = (this->VolumeContext).Class.field0_0x0.DebugPtr;
  if ((pUVar6 != (UClass *)0x0) &&
     (pUVar3 = UEnvQueryContext::StaticClass(), pUVar3 != (UClass *)0x0)) {
    iVar1 = (int)pUVar3->_padding_;
    if (((int)pUVar6->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar1 * 8) != &pUVar3->_padding_)
       ) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) &&
       (pUVar6 = (this->VolumeContext).Class.field0_0x0.DebugPtr, pUVar6 != (UClass *)0x0)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      pUVar3 = UEnvQueryContext::StaticClass();
      if (pUVar3 == (UClass *)0x0) {
LAB_146f557f8:
        pUVar6 = (UClass *)0x0;
      }
      else {
        iVar1 = (int)pUVar3->_padding_;
        if (((int)pUVar6->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar3->_padding_)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) goto LAB_146f557f8;
      }
      UEnvQueryTypes::GetShortTypeName(&local_38,(UObject *)pUVar6);
      pFVar4 = FText::ToString(&local_38);
      if (&local_48 != pFVar4) {
        iVar1 = (pFVar4->Data).ArrayNum;
        _Src = (pFVar4->Data).AllocatorInstance.Data;
        local_48.Data.ArrayNum = iVar1;
        if ((iVar1 == 0) && (local_48.Data.ArrayMax == 0)) {
          local_48.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar1,local_48.Data.ArrayMax,(ForAnyElementType *)&local_48,iVar1,
                     &local_48.Data.ArrayMax);
          if (iVar1 != 0) {
            memcpy(local_48.Data.AllocatorInstance.Data,_Src,(longlong)iVar1 * 2);
          }
        }
      }
      if (local_38.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
      }
      goto LAB_146f55965;
    }
  }
  pUVar6 = (this->VolumeClass).Class.field0_0x0.DebugPtr;
  if ((pUVar6 != (UClass *)0x0) &&
     (pUVar3 = Z_Construct_UClass_AVolume_NoRegister(), pUVar3 != (UClass *)0x0)) {
    iVar1 = (int)pUVar3->_padding_;
    if (((int)pUVar6->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar1 * 8) != &pUVar3->_padding_)
       ) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (pUVar6 = (this->VolumeClass).Class.field0_0x0.DebugPtr, pUVar6 != (UClass *)0x0)
       ) {
      pUVar5 = Z_Construct_UClass_AVolume_NoRegister();
      pUVar3 = (UClass *)0x0;
      if (pUVar5 != (UClass *)0x0) {
        iVar1 = (int)pUVar5->_padding_;
        if (((int)pUVar6->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar5->_padding_)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          pUVar3 = (this->VolumeClass).Class.field0_0x0.DebugPtr;
        }
      }
      pFVar4 = UClass::GetDescription(pUVar3,(FString *)&local_28);
      if (&local_48 != pFVar4) {
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        local_48.Data.AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
        (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_48.Data.ArrayNum = (pFVar4->Data).ArrayNum;
        local_48.Data.ArrayMax = (pFVar4->Data).ArrayMax;
        (pFVar4->Data).ArrayNum = 0;
        (pFVar4->Data).ArrayMax = 0;
      }
      if (local_28.TextData.Reference != (ITextData *)0x0) {
        FMemory::Free(local_28.TextData.Reference);
      }
    }
  }
LAB_146f55965:
  UEnvQueryTypes::GetShortTypeName(&local_28,(UObject *)this);
  FText::ToString(&local_28);
  ::FString::PrintfImpl((FString *)&local_38,L"%s : %s (%s)");
  FText::FromString(__return_storage_ptr__,(FString *)&local_38);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_38.TextData.Reference);
  }
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146f596d0

UClass * __cdecl UEnvQueryTest_Volume::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryTest_Volume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryTest_Volume",
               &Z_Registration_Info_UClass_UEnvQueryTest_Volume.InnerSingleton,
               StaticRegisterNativesUEnvQueryTest_Volume,0x210,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UEnvQueryTest_Volume>,
               InternalVTableHelperCtorCaller<UEnvQueryTest_Volume>,local_res8,
               UEnvQueryTest::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryTest_Volume.InnerSingleton;
}

// RunTest @ 146f724c0

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

void __thiscall UEnvQueryTest_Volume::RunTest(UEnvQueryTest_Volume *this,FEnvQueryInstance *param_1)

{
  double dVar1;
  UWorld *pUVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  bool bVar11;
  char cVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  UObject *pUVar16;
  FProperty *pFVar17;
  UClass *pUVar18;
  UClass *pUVar19;
  TBoxSphereBounds<double,double> *pTVar20;
  longlong lVar21;
  UClass *pUVar22;
  AActor *pAVar23;
  AVolume *pAVar24;
  FVolumeBoundsCache *pFVar25;
  undefined1 *puVar26;
  FScriptContainerElement *pFVar27;
  ForAnyElementType FVar28;
  FScriptContainerElement *pFVar29;
  undefined1 uVar30;
  undefined1 auStackY_2e8 [32];
  ForAnyElementType local_298;
  undefined8 local_290;
  undefined1 local_288;
  undefined1 local_287;
  undefined1 local_286 [6];
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_280;
  FItemIterator local_270;
  UClass *local_248;
  LARGE_INTEGER local_240;
  TVector<double>_u_0 local_238;
  TActorIteratorBase<TActorIterator<AVolume>_> local_218;
  TVector<double>_u_0 local_1b8 [3];
  undefined1 local_168;
  undefined7 uStack_167;
  TBoxSphereBounds<double,double> local_160;
  FVolumeBoundsCache local_128;
  undefined1 local_e8 [64];
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  pUVar16 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&param_1->_padding_ + 4));
  pUVar19 = (UClass *)0x0;
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
    if (pUVar16 == (UObject *)0x0) {
      bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<1120252505884721189>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\DataProviders\\AIDataProvider.cpp"
                          ,0x25,"Owner");
      if (bVar11) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      this->_padding_ = 0;
      (**(code **)(*(longlong *)this->_padding_ + 0x2b0))();
      if ((FName)this->_padding_ != (FName)0x0) {
        pFVar17 = UStruct::FindPropertyByName
                            (*(UStruct **)(this->_padding_ + 0x10),(FName)this->_padding_);
        if ((pFVar17 == (FProperty *)0x0) ||
           (cVar12 = (**(code **)(this->_padding_ + 8))(&this->_padding_,pFVar17), cVar12 == '\0'))
        {
          local_288 = 0;
          bVar11 = `FAIDataProviderValue::BindData'::__l9::<lambda_1>::operator()(&local_288);
          if (!bVar11) goto LAB_146f72599;
        }
        this->_padding_ = (longlong)pFVar17;
      }
    }
  }
LAB_146f72599:
  pUVar22 = (this->VolumeContext).Class.field0_0x0.DebugPtr;
  local_280.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_280.ArrayNum = 0;
  local_280.ArrayMax = 0;
  local_298.Data = (FScriptContainerElement *)0x0;
  local_290 = 0;
  if ((pUVar22 != (UClass *)0x0) &&
     (pUVar18 = UEnvQueryContext::StaticClass(), pUVar18 != (UClass *)0x0)) {
    iVar15 = (int)pUVar18->_padding_;
    if (((int)pUVar22->_padding_ < iVar15) ||
       ((longlong *)*(undefined1 **)(pUVar22->_padding_ + (longlong)iVar15 * 8) !=
        &pUVar18->_padding_)) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    if ((bVar11) &&
       (pUVar22 = (this->VolumeContext).Class.field0_0x0.DebugPtr, pUVar22 != (UClass *)0x0)) {
      pUVar18 = UEnvQueryContext::StaticClass();
      if (pUVar18 != (UClass *)0x0) {
        iVar15 = (int)pUVar18->_padding_;
        if (((int)pUVar22->_padding_ < iVar15) ||
           ((longlong *)*(undefined1 **)(pUVar22->_padding_ + (longlong)iVar15 * 8) !=
            &pUVar18->_padding_)) {
          bVar11 = false;
        }
        else {
          bVar11 = true;
        }
        if (bVar11) {
          pUVar19 = (this->VolumeContext).Class.field0_0x0.DebugPtr;
        }
      }
      FEnvQueryInstance::PrepareContext(param_1,pUVar19,&local_280);
      if (local_280.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(local_280._8_8_ & 0xffffffff);
      }
      if (local_290._4_4_ < local_280.ArrayNum) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,8,local_280.ArrayNum,&local_298,(int)local_290,
                   (int *)((longlong)&local_290 + 4));
      }
      iVar15 = local_280.ArrayNum;
      pFVar27 = local_280.AllocatorInstance.Data + (longlong)local_280.ArrayNum * 8;
      FVar28.Data = local_280.AllocatorInstance.Data;
      while( true ) {
        if (local_280.ArrayNum != iVar15) {
          local_287 = 0;
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_287);
        }
        if (FVar28.Data == pFVar27) break;
        pAVar24 = *(AVolume **)FVar28.Data;
        if (pAVar24 == (AVolume *)0x0) {
LAB_146f726ea:
          pAVar24 = (AVolume *)0x0;
        }
        else {
          pUVar19 = Z_Construct_UClass_AVolume_NoRegister();
          iVar14 = (int)pUVar19->_padding_;
          if ((*(int *)(*(longlong *)&pAVar24->field_0x10 + 0x38) < iVar14) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pAVar24->field_0x10 + 0x30) + (longlong)iVar14 * 8) !=
              &pUVar19->_padding_)) goto LAB_146f726ea;
        }
        if (pAVar24 != (AVolume *)0x0) {
          local_128.BoundingBox._48_8_ = local_128.BoundingBox._48_8_ & 0xffffffffffffff00;
          local_128.Volume = pAVar24;
          pTVar20 = AVolume::GetBounds(pAVar24,&local_160);
          local_168 = 1;
          dVar1 = (pTVar20->BoxExtent).field0_0x0._s_0.X;
          local_128.BoundingBox.Min.field0_0x0._s_0.X = (pTVar20->Origin).field0_0x0._s_0.X - dVar1;
          local_128.BoundingBox.Max.field0_0x0._s_0.X = dVar1 + (pTVar20->Origin).field0_0x0._s_0.X;
          local_128.BoundingBox.Min.field0_0x0._s_0.Y =
               (pTVar20->Origin).field0_0x0._s_0.Y - (pTVar20->BoxExtent).field0_0x0._s_0.Y;
          local_128.BoundingBox.Min.field0_0x0._s_0.Z =
               (pTVar20->Origin).field0_0x0._s_0.Z - (pTVar20->BoxExtent).field0_0x0._s_0.Z;
          dVar1 = (pTVar20->BoxExtent).field0_0x0._s_0.Z + (pTVar20->Origin).field0_0x0._s_0.Z;
          local_128.BoundingBox._48_8_ = CONCAT71(uStack_167,1);
          local_128.BoundingBox.Max.field0_0x0._16_4_ = SUB84(dVar1,0);
          local_128.BoundingBox.Max.field0_0x0._s_0.Y =
               (pTVar20->BoxExtent).field0_0x0._s_0.Y + (pTVar20->Origin).field0_0x0._s_0.Y;
          local_128.BoundingBox.Max.field0_0x0._20_4_ = (int)((ulonglong)dVar1 >> 0x20);
          if (((local_298.Data <= &local_128) &&
              (&local_128 <
               (FVolumeBoundsCache *)(local_298.Data + (longlong)local_290._4_4_ * 0x40))) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar11)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar14 = (int)local_290;
          if ((int)local_290 == local_290._4_4_) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x840,&local_298,(int *)((longlong)&local_290 + 4));
          }
          local_290 = CONCAT44(local_290._4_4_,iVar14 + 1);
          lVar21 = (longlong)iVar14 * 0x40;
          *(AVolume **)&local_298.Data[lVar21].field_0x0 = local_128.Volume;
          *(double *)(local_298.Data + lVar21 + 8) = local_128.BoundingBox.Min.field0_0x0._s_0.X;
          *(double *)(local_298.Data + lVar21 + 0x10) = local_128.BoundingBox.Min.field0_0x0._s_0.Y;
          *(double *)(local_298.Data + lVar21 + 0x10 + 8) =
               local_128.BoundingBox.Min.field0_0x0._s_0.Z;
          *(double *)(local_298.Data + lVar21 + 0x20) = local_128.BoundingBox.Max.field0_0x0._s_0.X;
          *(double *)(local_298.Data + lVar21 + 0x20 + 8) =
               local_128.BoundingBox.Max.field0_0x0._s_0.Y;
          *(double *)(local_298.Data + lVar21 + 0x30) = local_128.BoundingBox.Max.field0_0x0._s_0.Z;
          *(undefined8 *)(local_298.Data + lVar21 + 0x30 + 8) = local_128.BoundingBox._48_8_;
        }
        FVar28.Data = FVar28.Data + 8;
      }
      goto LAB_146f72a9d;
    }
  }
  pUVar19 = (this->VolumeClass).Class.field0_0x0.DebugPtr;
  if ((pUVar19 != (UClass *)0x0) &&
     (pUVar22 = Z_Construct_UClass_AVolume_NoRegister(), pUVar22 != (UClass *)0x0)) {
    iVar15 = (int)pUVar22->_padding_;
    if (((int)pUVar19->_padding_ < iVar15) ||
       ((longlong *)*(undefined1 **)(pUVar19->_padding_ + (longlong)iVar15 * 8) !=
        &pUVar22->_padding_)) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    if ((bVar11) &&
       (pUVar19 = (this->VolumeClass).Class.field0_0x0.DebugPtr, pUVar19 != (UClass *)0x0)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar19);
      }
      pUVar2 = (param_1->World).field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar19);
      }
      local_218.Flags = OnlyActiveLevels|SkipPendingKill;
      local_218.State.bIsSet = false;
      local_248 = pUVar19;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar19);
      }
      FActorIteratorState::FActorIteratorState
                (&local_218.State.TypedValue,pUVar2,(TSubclassOf<AActor>)&local_248);
      local_218.State.bIsSet = true;
      while( true ) {
        TActorIteratorBase<TActorIterator<AVolume>_>::operator++(&local_218);
        if ((local_218.State.bIsSet == false) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar11)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (local_218.State.TypedValue.ReachedEnd != false) break;
        if ((local_218.State.bIsSet == false) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar11)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pAVar23 = FActorIteratorState::GetActorChecked(&local_218.State.TypedValue);
        pAVar24 = CastChecked<AVolume,AActor>(pAVar23);
        if (pAVar24 != (AVolume *)0x0) {
          pFVar25 = `UEnvQueryTest_Volume::RunTest'::__l2::FVolumeBoundsCache::FVolumeBoundsCache
                              (local_e8,pAVar24);
          if (((local_298.Data <= pFVar25) &&
              (pFVar25 < (FVolumeBoundsCache *)(local_298.Data + (longlong)local_290._4_4_ * 0x40)))
             && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar11)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar15 = (int)local_290;
          if ((int)local_290 == local_290._4_4_) {
            iVar15 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x840,&local_298,(int *)((longlong)&local_290 + 4));
          }
          local_290 = CONCAT44(local_290._4_4_,iVar15 + 1);
          dVar1 = (pFVar25->BoundingBox).Min.field0_0x0._s_0.X;
          lVar21 = (longlong)iVar15 * 0x40;
          *(AVolume **)&local_298.Data[lVar21].field_0x0 = pFVar25->Volume;
          *(double *)(local_298.Data + lVar21 + 8) = dVar1;
          dVar1 = (pFVar25->BoundingBox).Min.field0_0x0._s_0.Z;
          *(double *)(local_298.Data + lVar21 + 0x10) = (pFVar25->BoundingBox).Min.field0_0x0._s_0.Y
          ;
          *(double *)(local_298.Data + lVar21 + 0x10 + 8) = dVar1;
          dVar1 = (pFVar25->BoundingBox).Max.field0_0x0._s_0.Y;
          *(double *)(local_298.Data + lVar21 + 0x20) = (pFVar25->BoundingBox).Max.field0_0x0._s_0.X
          ;
          *(double *)(local_298.Data + lVar21 + 0x20 + 8) = dVar1;
          dVar1 = *(double *)&(pFVar25->BoundingBox).IsValid;
          *(double *)(local_298.Data + lVar21 + 0x30) = (pFVar25->BoundingBox).Max.field0_0x0._s_0.Z
          ;
          *(double *)(local_298.Data + lVar21 + 0x30 + 8) = dVar1;
        }
      }
      if (local_218.State.bIsSet != false) {
        UWorld::RemoveOnActorSpawnedHandler
                  (local_218.State.TypedValue.CurrentWorld,
                   local_218.State.TypedValue.ActorSpawnedDelegateHandle);
        if (local_218.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_218.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
        }
        if (local_218.State.TypedValue.ActorArray.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_218.State.TypedValue.ActorArray.AllocatorInstance.Data);
        }
      }
    }
  }
LAB_146f72a9d:
  if (((FProperty *)this->_padding_ == (FProperty *)0x0) ||
     (puVar26 = FProperty::ContainerUObjectPtrToValuePtrInternal
                          ((FProperty *)this->_padding_,(UObject *)this->_padding_,0),
     puVar26 == (undefined1 *)0x0)) {
    uVar30 = (undefined1)this->_padding_;
  }
  else {
    uVar30 = *puVar26;
  }
  if (((int)local_290 < 1) && ((this->bSkipTestIfNoVolumes != 0 || ((bool)uVar30 != true)))) {
LAB_146f72cfa:
    if ((FVolumeBoundsCache *)local_298.Data != (FVolumeBoundsCache *)0x0) {
      FMemory::Free(local_298.Data);
    }
    if (local_280.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_280.AllocatorInstance.Data);
    }
    return;
  }
  FEnvQueryInstance::FItemIterator::FItemIterator(&local_270,(UEnvQueryTest *)this,param_1,-1);
  dVar1 = __real_4170000000000000;
LAB_146f72b50:
  dVar4 = local_270.Deadline;
  iVar15 = (int)local_270._padding_;
  lVar21 = local_270._padding_;
  if ((((int)local_270._padding_ < *(int *)(local_270._padding_ + 8)) &&
      ((*(byte *)(local_270._padding_ + 0x10c) & 2) == 0)) &&
     ((local_270.Deadline < 0.0 ||
      (QueryPerformanceCounter(&local_240),
      (double)local_240.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar1 < dVar4)))) {
    UEnvQueryTest::GetItemLocation
              ((UEnvQueryTest *)this,(TVector<double> *)&local_238._s_0,param_1,iVar15);
    uVar10 = local_238._s_0.Z;
    uVar9 = local_238._12_4_;
    uVar8 = local_238._8_4_;
    uVar7 = local_238._4_4_;
    uVar6 = local_238._0_4_;
    dVar4 = (double)CONCAT44(local_238._4_4_,local_238._0_4_);
    bVar11 = false;
    dVar5 = (double)CONCAT44(local_238._12_4_,local_238._8_4_);
    iVar15 = (int)local_290;
    pFVar27 = local_298.Data + 0x10;
    pFVar29 = local_298.Data + (longlong)(int)local_290 * 0x40;
    do {
      if ((int)local_290 != iVar15) {
        `TCheckedPointerIterator<`UEnvQueryTest_Volume::RunTest'::__l2::FVolumeBoundsCache,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_286);
      }
      if (pFVar27 + -0x10 == pFVar29) goto LAB_146f72c68;
      if (((((*(double *)(pFVar27 + -8) <= dVar4 && dVar4 != *(double *)(pFVar27 + -8)) &&
            (dVar4 < *(double *)(pFVar27 + 0x10))) &&
           (*(double *)pFVar27 <= dVar5 && dVar5 != *(double *)pFVar27)) &&
          ((dVar5 < *(double *)(pFVar27 + 0x18) &&
           (*(double *)(pFVar27 + 8) <= (double)uVar10 && (double)uVar10 != *(double *)(pFVar27 + 8)
           )))) && ((double)uVar10 < *(double *)(pFVar27 + 0x20))) {
        if (this->bDoComplexVolumeTest == 0) goto LAB_146f72c65;
        local_1b8[0]._0_4_ = uVar6;
        local_1b8[0]._4_4_ = uVar7;
        local_1b8[0]._8_4_ = uVar8;
        local_1b8[0]._12_4_ = uVar9;
        local_1b8[0]._s_0.Z = uVar10;
        bVar13 = AVolume::EncompassesPoint
                           (*(AVolume **)(pFVar27 + -0x10),(TVector<double> *)&local_1b8[0]._s_0,0.0
                            ,(float *)0x0);
        if (bVar13) goto LAB_146f72c65;
      }
      pFVar27 = pFVar27 + 0x40;
    } while( true );
  }
  *(int *)(lVar21 + 0xec) = iVar15;
  goto LAB_146f72cfa;
LAB_146f72c65:
  bVar11 = true;
LAB_146f72c68:
  FEnvQueryInstance::FItemIterator::SetScore
            (&local_270,(uint)*(byte *)((longlong)&this->_padding_ + 4),
             (uint)*(byte *)((longlong)&this->_padding_ + 2),bVar11,(bool)uVar30);
  FEnvQueryInstance::FItemIterator::StoreTestResult(&local_270);
  if ((*(byte *)(local_270._padding_ + 0x10c) & 2) == 0) {
    local_270.ItemScore = 0.0;
    local_270.NumPassedForItem = 0;
    local_270.NumTestsForItem = 0;
    local_270.bForced = '\0';
    local_270.bPassed = '\x01';
    FEnvQueryInstance::FConstItemIterator::operator++((FConstItemIterator *)&local_270);
  }
  goto LAB_146f72b50;
}

// StaticRegisterNativesUEnvQueryTest_Volume @ 146f76f30

void __cdecl UEnvQueryTest_Volume::StaticRegisterNativesUEnvQueryTest_Volume(void)

{
  return;
}

