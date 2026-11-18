// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticStruct @ 147ba4410

UScriptStruct * __cdecl FActiveForceFeedbackEffect::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FActiveForceFeedbackEffect.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FActiveForceFeedbackEffect.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FActiveForceFeedbackEffect,(UObject *)pUVar1,
                         L"ActiveForceFeedbackEffect");
  }
  return Z_Registration_Info_UScriptStruct_FActiveForceFeedbackEffect.OuterSingleton;
}

// ~FActiveForceFeedbackEffect @ 147bbe990

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FActiveForceFeedbackEffect::~FActiveForceFeedbackEffect(FActiveForceFeedbackEffect *this)

{
  undefined1 *puVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  bool bVar4;
  UInputDeviceSubsystem *pUVar5;
  
  if ((*(int *)&(this->ActiveDeviceProperties).Elements.field_0x8 !=
       *(int *)&(this->ActiveDeviceProperties).Elements.field_0x34) &&
     (pUVar5 = UInputDeviceSubsystem::Get(), pUVar5 != (UInputDeviceSubsystem *)0x0)) {
    if (*(int *)&(this->ActiveDeviceProperties).Elements.field_0x8 ==
        *(int *)&(this->ActiveDeviceProperties).Elements.field_0x34) {
      if (2 < (byte)LogInputDeviceProperties._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&::LOG_Static,(FLogCategoryBase *)&LogInputDeviceProperties);
      }
    }
    else {
      TSet<FInputDevicePropertyHandle,DefaultKeyFuncs<FInputDevicePropertyHandle,0>,FDefaultSetAllocator>
      ::Append<FDefaultSetAllocator>
                (&pUVar5->PropertiesPendingRemoval,&this->ActiveDeviceProperties);
    }
    bVar4 = 1 < (this->ActiveDeviceProperties).HashSize;
    if (!bVar4) {
      TSet<FInputDevicePropertyHandle,DefaultKeyFuncs<FInputDevicePropertyHandle,0>,FDefaultSetAllocator>
      ::UnhashElements(&this->ActiveDeviceProperties);
    }
    puVar1 = &(this->ActiveDeviceProperties).Elements.field_0xc;
    *(undefined4 *)&(this->ActiveDeviceProperties).Elements.field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)&this->ActiveDeviceProperties,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->ActiveDeviceProperties).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->ActiveDeviceProperties).Elements.field_0x34 = 0;
    iVar2 = *(int *)&(this->ActiveDeviceProperties).Elements.field_0x2c;
    *(undefined4 *)&(this->ActiveDeviceProperties).Elements.field_0x28 = 0;
    if ((iVar2 < 0) || (0x80 < iVar2)) {
      *(undefined4 *)&(this->ActiveDeviceProperties).Elements.field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)
                 &(this->ActiveDeviceProperties).Elements.field_0x10,0);
    }
    if (bVar4) {
      (this->ActiveDeviceProperties).HashSize = 1;
      TSet<FInputDevicePropertyHandle,DefaultKeyFuncs<FInputDevicePropertyHandle,0>,FDefaultSetAllocator>
      ::Rehash(&this->ActiveDeviceProperties);
    }
  }
  (this->ActiveDeviceProperties).HashSize = 0;
  FVar3 = (this->ActiveDeviceProperties).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<FInputDevicePropertyHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FInputDevicePropertyHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ActiveDeviceProperties).Elements);
  return;
}

// ActivateDeviceProperties @ 147bc7d00

void __thiscall
FActiveForceFeedbackEffect::ActivateDeviceProperties(FActiveForceFeedbackEffect *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UForceFeedbackEffect *pUVar3;
  code *pcVar4;
  bool bVar5;
  FInputDevicePropertyHandle FVar6;
  UInputDeviceSubsystem *this_00;
  undefined4 extraout_var;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [16];
  FInputDevicePropertyHandle local_res18 [4];
  
  if ((this->ForceFeedbackEffect).field0_0x0.DebugPtr == (UForceFeedbackEffect *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5285384280556437692>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameFramework\\ForceFeedbackEffect.cpp"
                       ,0xbc,"ForceFeedbackEffect");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    this_00 = UInputDeviceSubsystem::Get();
    if (this_00 != (UInputDeviceSubsystem *)0x0) {
      pUVar3 = (this->ForceFeedbackEffect).field0_0x0.DebugPtr;
      pFVar7 = (pUVar3->DeviceProperties).AllocatorInstance.Data;
      iVar2 = (pUVar3->DeviceProperties).ArrayNum;
      pFVar1 = pFVar7 + (longlong)iVar2 * 8;
      while( true ) {
        if ((pUVar3->DeviceProperties).ArrayNum != iVar2) {
          `TCheckedPointerIterator<TObjectPtr<UInputDeviceProperty>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (pFVar7 == pFVar1) break;
        if (*(FActivateDevicePropertyParams **)pFVar7 != (FActivateDevicePropertyParams *)0x0) {
          FVar6 = UInputDeviceSubsystem::ActivateDeviceProperty
                            (this_00,(UInputDeviceProperty *)(local_res8 + 8),
                             *(FActivateDevicePropertyParams **)pFVar7);
          TSet<FInputDevicePropertyHandle,DefaultKeyFuncs<FInputDevicePropertyHandle,0>,FDefaultSetAllocator>
          ::Emplace<FInputDevicePropertyHandle>
                    (&this->ActiveDeviceProperties,local_res18,
                     (bool *)CONCAT44(extraout_var,FVar6.InternalId));
        }
        pFVar7 = pFVar7 + 8;
      }
    }
    this->bActivatedDeviceProperties = true;
  }
  return;
}

// GetValues @ 147bec7d0

void __thiscall
FActiveForceFeedbackEffect::GetValues
          (FActiveForceFeedbackEffect *this,FForceFeedbackValues *param_1)

{
  float fVar1;
  FPlatformUserId FVar2;
  UForceFeedbackEffect *pUVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  float fVar6;
  bool bVar7;
  uint uVar8;
  UInputDeviceSubsystem *this_00;
  TArray<FForceFeedbackChannelDetails,TSizedDefaultAllocator<32>_> *pTVar9;
  FRichCurve *this_01;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 in_XMM3 [16];
  undefined1 auVar16 [16];
  FHardwareDeviceIdentifier local_58 [3];
  
  pUVar3 = (this->ForceFeedbackEffect).field0_0x0.DebugPtr;
  if (pUVar3 == (UForceFeedbackEffect *)0x0) {
    param_1->LeftLarge = 0.0;
    param_1->LeftSmall = 0.0;
    param_1->RightLarge = 0.0;
    param_1->RightSmall = 0.0;
    return;
  }
  fVar13 = UForceFeedbackEffect::GetDuration(pUVar3);
  fVar1 = this->PlayTime;
  pUVar3 = (this->ForceFeedbackEffect).field0_0x0.DebugPtr;
  FVar2.InternalId = (this->PlatformUser).InternalId;
  auVar16 = roundps(in_XMM3,ZEXT416((uint)(fVar1 / fVar13)),1);
  this_00 = UInputDeviceSubsystem::Get();
  if (this_00 != (UInputDeviceSubsystem *)0x0) {
    UInputDeviceSubsystem::GetMostRecentlyUsedHardwareDevice(this_00,local_58,FVar2);
    pTVar9 = &TMapBase<FName,FForceFeedbackEffectOverridenChannelDetails,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FForceFeedbackEffectOverridenChannelDetails,0>_>
              ::Find((TMapBase<FName,FForceFeedbackEffectOverridenChannelDetails,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FForceFeedbackEffectOverridenChannelDetails,0>_>
                      *)&pUVar3->PerDeviceOverrides,local_58[0].HardwareDeviceIdentifier)->
              ChannelDetails;
    if (pTVar9 != (TArray<FForceFeedbackChannelDetails,TSizedDefaultAllocator<32>_> *)0x0)
    goto LAB_147bec856;
  }
  pTVar9 = &pUVar3->ChannelDetails;
LAB_147bec856:
  fVar6 = __real_3f800000;
  iVar10 = pTVar9->ArrayNum;
  uVar12 = 0;
  if (0 < iVar10) {
    lVar11 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar12 < iVar10) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (((TArray<FForceFeedbackChannelDetails,TSizedDefaultAllocator<32>_> *)
                &pTVar9->AllocatorInstance)->AllocatorInstance).Data;
      this_01 = FRuntimeFloatCurve::GetRichCurveConst((FRuntimeFloatCurve *)(pFVar4 + lVar11 + 8));
      fVar14 = FRichCurve::Eval(this_01,fVar1 - auVar16._0_4_ * fVar13,0.0);
      if (fVar6 <= fVar14) {
        fVar14 = fVar6;
      }
      if (((byte)pFVar4[lVar11] & 1) != 0) {
        fVar15 = fVar14;
        if (fVar14 <= param_1->LeftLarge) {
          fVar15 = param_1->LeftLarge;
        }
        param_1->LeftLarge = fVar15;
      }
      if (((byte)pFVar4[lVar11] & 2) != 0) {
        fVar15 = fVar14;
        if (fVar14 <= param_1->LeftSmall) {
          fVar15 = param_1->LeftSmall;
        }
        param_1->LeftSmall = fVar15;
      }
      if (((byte)pFVar4[lVar11] & 4) != 0) {
        fVar15 = fVar14;
        if (fVar14 <= param_1->RightLarge) {
          fVar15 = param_1->RightLarge;
        }
        param_1->RightLarge = fVar15;
      }
      if (((byte)pFVar4[lVar11] & 8) != 0) {
        if (fVar14 <= param_1->RightSmall) {
          fVar14 = param_1->RightSmall;
        }
        param_1->RightSmall = fVar14;
      }
      iVar10 = pTVar9->ArrayNum;
      uVar12 = uVar12 + 1;
      lVar11 = lVar11 + 0x90;
    } while ((int)uVar12 < iVar10);
  }
  return;
}

// ResetDeviceProperties @ 147bfda30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FActiveForceFeedbackEffect::ResetDeviceProperties(FActiveForceFeedbackEffect *this)

{
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  UInputDeviceSubsystem *pUVar4;
  TSet<FInputDevicePropertyHandle,DefaultKeyFuncs<FInputDevicePropertyHandle,0>,FDefaultSetAllocator>
  *this_00;
  
  if ((*(int *)&(this->ActiveDeviceProperties).Elements.field_0x8 !=
       *(int *)&(this->ActiveDeviceProperties).Elements.field_0x34) &&
     (pUVar4 = UInputDeviceSubsystem::Get(), pUVar4 != (UInputDeviceSubsystem *)0x0)) {
    this_00 = &this->ActiveDeviceProperties;
    if (*(int *)&(this->ActiveDeviceProperties).Elements.field_0x8 ==
        *(int *)&(this->ActiveDeviceProperties).Elements.field_0x34) {
      if (2 < (byte)LogInputDeviceProperties._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&::LOG_Static,(FLogCategoryBase *)&LogInputDeviceProperties);
      }
    }
    else {
      TSet<FInputDevicePropertyHandle,DefaultKeyFuncs<FInputDevicePropertyHandle,0>,FDefaultSetAllocator>
      ::Append<FDefaultSetAllocator>(&pUVar4->PropertiesPendingRemoval,this_00);
    }
    bVar3 = 1 < (this->ActiveDeviceProperties).HashSize;
    if (!bVar3) {
      TSet<FInputDevicePropertyHandle,DefaultKeyFuncs<FInputDevicePropertyHandle,0>,FDefaultSetAllocator>
      ::UnhashElements(this_00);
    }
    puVar1 = &(this->ActiveDeviceProperties).Elements.field_0xc;
    *(undefined4 *)&(this->ActiveDeviceProperties).Elements.field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->ActiveDeviceProperties).Elements.field_0x34 = 0;
    *(undefined4 *)&(this->ActiveDeviceProperties).Elements.field_0x30 = 0xffffffff;
    iVar2 = *(int *)&(this->ActiveDeviceProperties).Elements.field_0x2c;
    *(undefined4 *)&(this->ActiveDeviceProperties).Elements.field_0x28 = 0;
    if ((iVar2 < 0) || (0x80 < iVar2)) {
      *(undefined4 *)&(this->ActiveDeviceProperties).Elements.field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)
                 &(this->ActiveDeviceProperties).Elements.field_0x10,0);
    }
    if (bVar3) {
      (this->ActiveDeviceProperties).HashSize = 1;
      TSet<FInputDevicePropertyHandle,DefaultKeyFuncs<FInputDevicePropertyHandle,0>,FDefaultSetAllocator>
      ::Rehash(this_00);
      return;
    }
  }
  return;
}

// Update @ 147c09b40

bool __thiscall
FActiveForceFeedbackEffect::Update
          (FActiveForceFeedbackEffect *this,float param_1,FForceFeedbackValues *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UForceFeedbackEffect *pUVar3;
  code *pcVar4;
  atomic<double> aVar5;
  bool bVar6;
  undefined1 uVar7;
  FInputDevicePropertyHandle FVar8;
  UInputDeviceSubsystem *this_00;
  undefined4 extraout_var;
  FScriptContainerElement *pFVar9;
  byte bVar10;
  float fVar11;
  float fVar12;
  undefined1 local_res8 [8];
  FInputDevicePropertyHandle local_78 [2];
  int local_70;
  undefined4 local_6c;
  byte local_68;
  
  pUVar3 = (this->ForceFeedbackEffect).field0_0x0.DebugPtr;
  if (pUVar3 != (UForceFeedbackEffect *)0x0) {
    fVar11 = UForceFeedbackEffect::GetDuration(pUVar3);
    if (this->bActivatedDeviceProperties == false) {
      if ((this->ForceFeedbackEffect).field0_0x0.DebugPtr == (UForceFeedbackEffect *)0x0) {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<5285384280556437692>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameFramework\\ForceFeedbackEffect.cpp"
                           ,0xbc,"ForceFeedbackEffect");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
      }
      else {
        this_00 = UInputDeviceSubsystem::Get();
        if (this_00 != (UInputDeviceSubsystem *)0x0) {
          pUVar3 = (this->ForceFeedbackEffect).field0_0x0.DebugPtr;
          pFVar9 = (pUVar3->DeviceProperties).AllocatorInstance.Data;
          iVar2 = (pUVar3->DeviceProperties).ArrayNum;
          pFVar1 = pFVar9 + (longlong)iVar2 * 8;
          bVar10 = local_68;
          while( true ) {
            if ((pUVar3->DeviceProperties).ArrayNum != iVar2) {
              `TCheckedPointerIterator<TObjectPtr<UInputDeviceProperty>,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_res8);
            }
            if (pFVar9 == pFVar1) break;
            if (*(FActivateDevicePropertyParams **)pFVar9 != (FActivateDevicePropertyParams *)0x0) {
              local_70 = (this->PlatformUser).InternalId;
              local_6c = 0xffffffff;
              bVar10 = (((this->Parameters).bPlayWhilePaused & 1U) * '\x02' |
                       (this->Parameters).bIgnoreTimeDilation & 1U) * '\x02' |
                       (this->Parameters).bLooping & 1U | bVar10 & 0xf8;
              local_68 = bVar10;
              FVar8 = UInputDeviceSubsystem::ActivateDeviceProperty
                                (this_00,(UInputDeviceProperty *)&stack0x00000020,
                                 *(FActivateDevicePropertyParams **)pFVar9);
              TSet<FInputDevicePropertyHandle,DefaultKeyFuncs<FInputDevicePropertyHandle,0>,FDefaultSetAllocator>
              ::Emplace<FInputDevicePropertyHandle>
                        (&this->ActiveDeviceProperties,local_78,
                         (bool *)CONCAT44(extraout_var,FVar8.InternalId));
            }
            pFVar9 = pFVar9 + 8;
          }
        }
        this->bActivatedDeviceProperties = true;
      }
    }
    aVar5 = FApp::DeltaTime;
    if ((this->Parameters).bIgnoreTimeDilation == false) {
      aVar5 = (atomic<double>)(double)param_1;
    }
    fVar12 = (float)((double)this->PlayTime + (double)aVar5);
    this->PlayTime = fVar12;
    if ((fVar12 <= fVar11) || (((this->Parameters).bLooping != false && (fVar11 != 0.0)))) {
      GetValues(this,param_2);
      return true;
    }
  }
  return false;
}

// FActiveForceFeedbackEffect @ 14834a050

FActiveForceFeedbackEffect * __thiscall
FActiveForceFeedbackEffect::FActiveForceFeedbackEffect
          (FActiveForceFeedbackEffect *this,FActiveForceFeedbackEffect *param_1)

{
  UForceFeedbackEffect *pUVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  
  pUVar1 = (param_1->ForceFeedbackEffect).field0_0x0.DebugPtr;
  (this->ForceFeedbackEffect).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (UForceFeedbackEffect *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->Parameters).Tag = (param_1->Parameters).Tag;
  bVar2 = (param_1->Parameters).bIgnoreTimeDilation;
  bVar3 = (param_1->Parameters).bPlayWhilePaused;
  uVar4 = (param_1->Parameters).field_0xb;
  (this->Parameters).bLooping = (param_1->Parameters).bLooping;
  (this->Parameters).bIgnoreTimeDilation = bVar2;
  (this->Parameters).bPlayWhilePaused = bVar3;
  (this->Parameters).field_0xb = uVar4;
  this->PlayTime = param_1->PlayTime;
  (this->PlatformUser).InternalId = (param_1->PlatformUser).InternalId;
  this->bActivatedDeviceProperties = param_1->bActivatedDeviceProperties;
  *(undefined8 *)&(this->ActiveDeviceProperties).Elements = 0;
  *(undefined8 *)&(this->ActiveDeviceProperties).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ActiveDeviceProperties).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ActiveDeviceProperties).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ActiveDeviceProperties).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ActiveDeviceProperties).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ActiveDeviceProperties).Elements.field_0x34 = 0;
  (this->ActiveDeviceProperties).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ActiveDeviceProperties).HashSize = 0;
  TSet<FInputDevicePropertyHandle,DefaultKeyFuncs<FInputDevicePropertyHandle,0>,FDefaultSetAllocator>
  ::operator=(&this->ActiveDeviceProperties,&param_1->ActiveDeviceProperties);
  return this;
}

