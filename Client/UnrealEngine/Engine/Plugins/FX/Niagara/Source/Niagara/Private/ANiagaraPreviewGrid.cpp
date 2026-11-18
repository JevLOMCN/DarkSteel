// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 21

// StaticClass @ 149314fc0

UClass * __cdecl ANiagaraPreviewGrid::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ANiagaraPreviewGrid.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraPreviewGrid",
               &Z_Registration_Info_UClass_ANiagaraPreviewGrid.InnerSingleton,
               StaticRegisterNativesANiagaraPreviewGrid,0x310,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ANiagaraPreviewGrid>,
               InternalVTableHelperCtorCaller<ANiagaraPreviewGrid>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ANiagaraPreviewGrid.InnerSingleton;
}

// ANiagaraPreviewGrid @ 1493322f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ANiagaraPreviewGrid * __thiscall
ANiagaraPreviewGrid::ANiagaraPreviewGrid(ANiagaraPreviewGrid *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7ANiagaraPreviewGrid__6B_;
  (this->System).field0_0x0.DebugPtr = (UNiagaraSystem *)0x0;
  (this->PreviewAxisX).field0_0x0.DebugPtr = (UNiagaraPreviewAxis *)0x0;
  (this->PreviewAxisY).field0_0x0.DebugPtr = (UNiagaraPreviewAxis *)0x0;
  (this->PreviewClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->PreviewComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreviewComponents).ArrayNum = 0;
  (this->PreviewComponents).ArrayMax = 0;
  return this;
}

// ANiagaraPreviewGrid @ 149332350

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ANiagaraPreviewGrid * __thiscall
ANiagaraPreviewGrid::ANiagaraPreviewGrid(ANiagaraPreviewGrid *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  ANiagaraPreviewGrid *pAVar8;
  FName local_res8;
  
  AActor::AActor((AActor *)this);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 6;
  this->_padding_ = (longlong)&___7ANiagaraPreviewGrid__6B_;
  this->SpacingX = 250.0;
  (this->System).field0_0x0.DebugPtr = (UNiagaraSystem *)0x0;
  this->ResetMode = Never;
  (this->PreviewAxisX).field0_0x0.DebugPtr = (UNiagaraPreviewAxis *)0x0;
  (this->PreviewAxisY).field0_0x0.DebugPtr = (UNiagaraPreviewAxis *)0x0;
  (this->PreviewClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  this->NumY = 0;
  (this->PreviewComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreviewComponents).ArrayNum = 0;
  (this->PreviewComponents).ArrayMax = 0;
  this->SpacingY = 250.0;
  this->NumX = 0;
  this->bPreviewDirty = 1;
  this->bPreviewActive = 0;
  pFVar5 = ::FName::FName(&local_res8,L"SceneComp");
  FVar2 = *pFVar5;
  pUVar6 = Z_Construct_UClass_USceneComponent_NoRegister();
  pUVar7 = UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar6,pUVar6,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
    this->_padding_ = (longlong)pUVar7;
    return this;
  }
  this->_padding_ = (longlong)pUVar7;
  if (pUVar7 == (UObject *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("RootComponent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraPreviewGrid.cpp"
                       ,0x3b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pAVar8 = (ANiagaraPreviewGrid *)(*pcVar3)();
      return pAVar8;
    }
  }
  return this;
}

// ~ANiagaraPreviewGrid @ 149335f80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ANiagaraPreviewGrid::~ANiagaraPreviewGrid(ANiagaraPreviewGrid *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ANiagaraPreviewGrid__6B_;
  pFVar1 = (this->PreviewComponents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  AActor::~AActor((AActor *)this);
  return;
}

// ActivatePreviews @ 14933b310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall ANiagaraPreviewGrid::ActivatePreviews(ANiagaraPreviewGrid *this,bool param_1)

{
  undefined8 *puVar1;
  AActor *this_00;
  UNiagaraComponent *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  FString *pFVar10;
  ulonglong uVar11;
  uint uVar12;
  wchar_t *pwVar13;
  undefined8 *puVar14;
  wchar_t *pwVar15;
  int iVar16;
  undefined1 auStackY_f8 [32];
  undefined1 local_c8 [4];
  int local_c4;
  FString local_c0;
  FString local_b0;
  UClass *local_a0;
  UClass *local_98;
  FString local_90;
  FString local_80;
  FString local_70;
  undefined8 local_60 [4];
  undefined8 *local_40;
  uint local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  if (ZPULL(*(undefined4 *)&this->field_0x308,0,1) != 0) {
    *(uint *)&this->field_0x308 = *(undefined4 *)&this->field_0x308 & 0xfffffffe;
    GeneratePreviews(this);
  }
  local_b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c4 = 0;
  local_c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0.Data.ArrayNum = 0;
  local_c0.Data.ArrayMax = 0;
  local_b0.Data.ArrayNum = 0;
  local_b0.Data.ArrayMax = 0;
  if (0 < this->NumX) {
    do {
      iVar16 = 0;
      iVar5 = this->NumY;
      if (0 < iVar5) {
        do {
          uVar12 = iVar5 * local_c4 + iVar16;
          uVar6 = 0;
          if ((int)uVar12 < (this->PreviewComponents).ArrayNum) {
            uVar6 = ~uVar12 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          this_00 = *(AActor **)
                     (*(longlong *)
                       ((this->PreviewComponents).AllocatorInstance.Data + (longlong)(int)uVar12 * 8
                       ) + 600);
          if (this_00 == (AActor *)0x0) {
            pFVar10 = GetTypeName<ANiagaraPreviewBase>(&local_70);
            if ((pFVar10->Data).ArrayNum == 0) {
              pwVar13 = L"";
            }
            else {
              pwVar13 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
            }
                    /* WARNING: Subroutine does not return */
            CastLogError(L"nullptr",pwVar13);
          }
          pUVar7 = ANiagaraPreviewBase::StaticClass();
          iVar5 = (int)pUVar7->_padding_;
          if ((*(int *)(this_00->_padding_ + 0x38) < iVar5) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar5 * 8) !=
              &pUVar7->_padding_)) {
            pFVar10 = GetTypeName<ANiagaraPreviewBase>(&local_90);
            pwVar13 = L"";
            if ((pFVar10->Data).ArrayNum == 0) {
              pwVar15 = L"";
            }
            else {
              pwVar15 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
            }
            pFVar10 = GetFullNameForCastLogError<AActor>(&local_80,this_00);
            if ((pFVar10->Data).ArrayNum != 0) {
              pwVar13 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
            }
                    /* WARNING: Subroutine does not return */
            CastLogError(pwVar13,pwVar15);
          }
          local_40 = (undefined8 *)0x0;
          local_34 = 4;
          local_38 = 0;
          pUVar7 = Z_Construct_UClass_UNiagaraComponent_NoRegister();
          if (UE::GC::GIsIncrementalReachabilityPending == false) {
            if (pUVar7 != (UClass *)0x0) goto LAB_14933b483;
LAB_14933b4b4:
            pUVar8 = (UClass *)0x0;
          }
          else {
            if (pUVar7 == (UClass *)0x0) goto LAB_14933b4b4;
            UE::GC::MarkAsReachable((UObject *)pUVar7);
LAB_14933b483:
            pUVar8 = Z_Construct_UClass_UActorComponent_NoRegister();
            if (pUVar8 == (UClass *)0x0) goto LAB_14933b4b4;
            iVar5 = (int)pUVar8->_padding_;
            if (((int)pUVar7->_padding_ < iVar5) ||
               ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar5 * 8) !=
                &pUVar8->_padding_)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            pUVar8 = pUVar7;
            if (!bVar4) goto LAB_14933b4b4;
          }
          pUVar9 = Z_Construct_UClass_UActorComponent_NoRegister();
          if (pUVar8 == pUVar9) {
            local_a0 = pUVar7;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar7);
            }
            AActor::
            ForEachComponent_Internal<UNiagaraComponent,1,0,_AActor::GetComponents<UNiagaraComponent,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                      (this_00,(TSubclassOf<UActorComponent>)&local_a0,
                       (TArray<UNiagaraComponent_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                        *)local_60);
          }
          else {
            local_98 = pUVar7;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar7);
            }
            AActor::
            ForEachComponent_Internal<UNiagaraComponent,0,0,_AActor::GetComponents<UNiagaraComponent,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                      (this_00,(TSubclassOf<UActorComponent>)&local_98,
                       (TArray<UNiagaraComponent_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                        *)local_60);
          }
          uVar6 = local_38;
          iVar5 = local_c4;
          uVar11 = (ulonglong)(int)local_38;
          puVar14 = local_60;
          if (local_40 != (undefined8 *)0x0) {
            puVar14 = local_40;
          }
          puVar1 = puVar14 + uVar11;
          while( true ) {
            if ((uint)uVar11 != uVar6) {
              local_c8[0] = 0;
              `TCheckedPointerIterator<UNiagaraComponent_*,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_c8);
            }
            if (puVar14 == puVar1) break;
            pUVar2 = (UNiagaraComponent *)*puVar14;
            UNiagaraPreviewAxis::ApplyToPreview
                      ((this->PreviewAxisX).field0_0x0.DebugPtr,pUVar2,iVar5,true,&local_c0);
            UNiagaraPreviewAxis::ApplyToPreview
                      ((this->PreviewAxisY).field0_0x0.DebugPtr,pUVar2,iVar16,false,&local_b0);
            (**(code **)(pUVar2->_padding_ + 0x2b8))(pUVar2,1);
            uVar11 = (ulonglong)local_38;
            puVar14 = puVar14 + 1;
          }
          if (local_40 != (undefined8 *)0x0) {
            FMemory::Free(local_40);
          }
          iVar5 = this->NumY;
          iVar16 = iVar16 + 1;
        } while (iVar16 < iVar5);
      }
      local_c4 = local_c4 + 1;
    } while (local_c4 < this->NumX);
  }
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  return;
}

// BeginDestroy @ 14933dc30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ANiagaraPreviewGrid::BeginDestroy(ANiagaraPreviewGrid *this)

{
  AActor::BeginDestroy((AActor *)this);
  DestroyPreviews(this);
  return;
}

// DeactivatePreviews @ 1493449f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ANiagaraPreviewGrid::DeactivatePreviews(ANiagaraPreviewGrid *this)

{
  undefined8 *puVar1;
  int iVar2;
  AActor *this_00;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  FString *pFVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined8 *puVar12;
  wchar_t *pwVar13;
  uint uVar14;
  wchar_t *pwVar16;
  UClass *pUVar17;
  UClass *pUVar18;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong local_b0;
  undefined1 local_a8 [8];
  UClass *local_a0;
  UClass *local_98;
  FString local_90;
  FString local_80;
  FString local_70;
  undefined8 local_60 [4];
  undefined8 *local_40;
  uint local_38;
  undefined4 local_34;
  ulonglong local_30;
  UClass *pUVar15;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pUVar17 = (UClass *)0x0;
  pUVar18 = pUVar17;
  if (0 < this->NumX) {
    do {
      iVar5 = this->NumY;
      pUVar15 = pUVar17;
      if (0 < iVar5) {
        do {
          iVar2 = (this->PreviewComponents).ArrayNum;
          uVar11 = iVar5 * (int)pUVar18 + (int)pUVar15;
          uVar14 = 0;
          if ((int)uVar11 < iVar2) {
            uVar14 = ~uVar11 >> 0x1f;
          }
          if (uVar14 == 0) {
            local_b8 = (longlong)(int)uVar11;
            local_b0 = (longlong)iVar2;
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          this_00 = *(AActor **)
                     (*(longlong *)
                       ((this->PreviewComponents).AllocatorInstance.Data + (longlong)(int)uVar11 * 8
                       ) + 600);
          if (this_00 == (AActor *)0x0) {
            pFVar9 = GetTypeName<ANiagaraPreviewBase>(&local_70);
            if ((pFVar9->Data).ArrayNum == 0) {
              pwVar13 = L"";
            }
            else {
              pwVar13 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
            }
                    /* WARNING: Subroutine does not return */
            CastLogError(L"nullptr",pwVar13);
          }
          pUVar6 = ANiagaraPreviewBase::StaticClass();
          iVar5 = (int)pUVar6->_padding_;
          if ((*(int *)(this_00->_padding_ + 0x38) < iVar5) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar5 * 8) !=
              &pUVar6->_padding_)) {
            pFVar9 = GetTypeName<ANiagaraPreviewBase>(&local_90);
            pwVar13 = L"";
            if ((pFVar9->Data).ArrayNum == 0) {
              pwVar16 = L"";
            }
            else {
              pwVar16 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
            }
            pFVar9 = GetFullNameForCastLogError<AActor>(&local_80,this_00);
            if ((pFVar9->Data).ArrayNum != 0) {
              pwVar13 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
            }
                    /* WARNING: Subroutine does not return */
            CastLogError(pwVar13,pwVar16);
          }
          local_40 = (undefined8 *)0x0;
          local_34 = 4;
          local_38 = 0;
          pUVar6 = Z_Construct_UClass_UNiagaraComponent_NoRegister();
          if (UE::GC::GIsIncrementalReachabilityPending == false) {
            if (pUVar6 != (UClass *)0x0) goto LAB_149344b2f;
LAB_149344b60:
            pUVar7 = pUVar17;
          }
          else {
            if (pUVar6 == (UClass *)0x0) goto LAB_149344b60;
            UE::GC::MarkAsReachable((UObject *)pUVar6);
LAB_149344b2f:
            pUVar7 = Z_Construct_UClass_UActorComponent_NoRegister();
            if (pUVar7 == (UClass *)0x0) goto LAB_149344b60;
            iVar5 = (int)pUVar7->_padding_;
            if (((int)pUVar6->_padding_ < iVar5) ||
               ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar5 * 8) !=
                &pUVar7->_padding_)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            pUVar7 = pUVar6;
            if (!bVar4) goto LAB_149344b60;
          }
          pUVar8 = Z_Construct_UClass_UActorComponent_NoRegister();
          if (pUVar7 == pUVar8) {
            local_a0 = pUVar6;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar6);
            }
            AActor::
            ForEachComponent_Internal<UNiagaraComponent,1,0,_AActor::GetComponents<UNiagaraComponent,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                      (this_00,(TSubclassOf<UActorComponent>)&local_a0,
                       (TArray<UNiagaraComponent_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                        *)local_60);
          }
          else {
            local_98 = pUVar6;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar6);
            }
            AActor::
            ForEachComponent_Internal<UNiagaraComponent,0,0,_AActor::GetComponents<UNiagaraComponent,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                      (this_00,(TSubclassOf<UActorComponent>)&local_98,
                       (TArray<UNiagaraComponent_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                        *)local_60);
          }
          uVar14 = local_38;
          uVar10 = (ulonglong)(int)local_38;
          puVar12 = local_60;
          if (local_40 != (undefined8 *)0x0) {
            puVar12 = local_40;
          }
          puVar1 = puVar12 + uVar10;
          while( true ) {
            if ((uint)uVar10 != uVar14) {
              local_a8[0] = 0;
              `TCheckedPointerIterator<UNiagaraComponent_*,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_a8);
            }
            if (puVar12 == puVar1) break;
            (**(code **)(*(longlong *)*puVar12 + 0x2c0))();
            uVar10 = (ulonglong)local_38;
            puVar12 = puVar12 + 1;
          }
          if (local_40 != (undefined8 *)0x0) {
            FMemory::Free(local_40);
          }
          iVar5 = this->NumY;
          uVar14 = (int)pUVar15 + 1;
          pUVar15 = (UClass *)(ulonglong)uVar14;
        } while ((int)uVar14 < iVar5);
      }
      uVar14 = (int)pUVar18 + 1;
      pUVar18 = (UClass *)(ulonglong)uVar14;
    } while ((int)uVar14 < this->NumX);
  }
  return;
}

// DestroyPreviews @ 1493451b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall ANiagaraPreviewGrid::DestroyPreviews(ANiagaraPreviewGrid *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->PreviewComponents).AllocatorInstance.Data;
  iVar2 = (this->PreviewComponents).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->PreviewComponents).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UChildActorComponent>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    plVar3 = *(longlong **)pFVar4;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x4a0))(plVar3,0);
    }
    pFVar4 = pFVar4 + 8;
  }
  (this->PreviewComponents).ArrayNum = 0;
  if ((this->PreviewComponents).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->PreviewComponents).AllocatorInstance,0,
               &(this->PreviewComponents).ArrayMax);
  }
  this->NumX = 0;
  this->NumY = 0;
  return;
}

// GeneratePreviews @ 14934b920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ANiagaraPreviewGrid::GeneratePreviews(ANiagaraPreviewGrid *this)

{
  int *piVar1;
  byte *pbVar2;
  TArray<TObjectPtr<UChildActorComponent>,TSizedDefaultAllocator<32>_> *pTVar3;
  ForElementType<UNiagaraComponent_*> FVar4;
  UNiagaraPreviewAxis *this_00;
  FName FVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  UClass *pUVar11;
  FName *pFVar12;
  UClass *pUVar13;
  UChildActorComponent *this_01;
  UWorld *pUVar14;
  AActor *this_02;
  UFunction *pUVar15;
  longlong *plVar16;
  ForAnyElementType FVar17;
  ulonglong uVar18;
  uint uVar19;
  ForElementType<UNiagaraComponent_*> FVar20;
  uint uVar21;
  int iVar22;
  undefined1 auStackY_1c8 [32];
  undefined1 local_188 [4];
  FAttachmentTransformRules local_184;
  undefined8 local_180;
  undefined8 local_178;
  FName local_170;
  UClass *local_168;
  TObjectPtr<UNiagaraSystem>_u_0 local_160;
  FString local_158;
  FString local_148;
  TVector<double>_u_0 local_138;
  FName local_118 [2];
  undefined1 local_108 [128];
  TArray<UNiagaraComponent_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> local_88;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  DestroyPreviews(this);
  if ((this->System).field0_0x0.DebugPtr == (UNiagaraSystem *)0x0) {
    return;
  }
  if ((this->PreviewAxisX).field0_0x0.DebugPtr == (UNiagaraPreviewAxis *)0x0) {
    return;
  }
  if ((this->PreviewAxisY).field0_0x0.DebugPtr == (UNiagaraPreviewAxis *)0x0) {
    return;
  }
  pUVar13 = (this->PreviewClass).Class.field0_0x0.DebugPtr;
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  pUVar11 = ANiagaraPreviewBase::StaticClass();
  if (pUVar11 == (UClass *)0x0) {
    return;
  }
  iVar9 = (int)pUVar11->_padding_;
  if (((int)pUVar13->_padding_ < iVar9) ||
     ((longlong *)*(undefined1 **)(pUVar13->_padding_ + (longlong)iVar9 * 8) != &pUVar11->_padding_)
     ) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  if (!bVar8) {
    return;
  }
  if ((this->PreviewClass).Class.field0_0x0.DebugPtr == (UClass *)0x0) {
    return;
  }
  UObject::ConditionalPostLoad((UObject *)(this->System).field0_0x0.DebugPtr);
  pUVar13 = (this->PreviewClass).Class.field0_0x0.DebugPtr;
  if ((pUVar13 != (UClass *)0x0) &&
     (pUVar11 = ANiagaraPreviewBase::StaticClass(), pUVar11 != (UClass *)0x0)) {
    iVar9 = (int)pUVar11->_padding_;
    if (((int)pUVar13->_padding_ < iVar9) ||
       ((longlong *)*(undefined1 **)(pUVar13->_padding_ + (longlong)iVar9 * 8) !=
        &pUVar11->_padding_)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (bVar8) {
      pUVar13 = (this->PreviewClass).Class.field0_0x0.DebugPtr;
      goto LAB_14934ba2f;
    }
  }
  pUVar13 = (UClass *)0x0;
LAB_14934ba2f:
  UObject::ConditionalPostLoad((UObject *)pUVar13);
  iVar9 = UNiagaraPreviewAxis::Num((this->PreviewAxisX).field0_0x0.DebugPtr);
  this_00 = (this->PreviewAxisY).field0_0x0.DebugPtr;
  this->NumX = iVar9;
  iVar9 = UNiagaraPreviewAxis::Num(this_00);
  this->NumY = iVar9;
  uVar19 = iVar9 * this->NumX;
  pTVar3 = &this->PreviewComponents;
  iVar9 = (this->PreviewComponents).ArrayNum;
  piVar1 = &(this->PreviewComponents).ArrayNum;
  if (iVar9 < (int)uVar19) {
    iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (8,8,uVar19 - iVar9,&pTVar3->AllocatorInstance,piVar1,
                        &(this->PreviewComponents).ArrayMax);
    memset((pTVar3->AllocatorInstance).Data + (longlong)iVar10 * 8,0,
           (longlong)(int)(uVar19 - iVar9) << 3);
  }
  else {
    if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
    }
    if ((int)uVar19 < iVar9) {
      uVar21 = iVar9 - uVar19;
      if (((int)(uVar21 | uVar19) < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (uVar21 != 0) {
        pFVar6 = (pTVar3->AllocatorInstance).Data + (longlong)(int)uVar19 * 8;
        iVar9 = (*piVar1 - uVar19) - uVar21;
        if (iVar9 != 0) {
          memmove(pFVar6,pFVar6 + (longlong)(int)uVar21 * 8,(longlong)iVar9 << 3);
        }
        *piVar1 = *piVar1 - uVar21;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&pTVar3->AllocatorInstance,*piVar1,&(this->PreviewComponents).ArrayMax);
      }
    }
  }
  if ((0 < this->NumX) && (iVar9 = this->NumY, 0 < iVar9)) {
    iVar10 = 0;
    do {
      iVar22 = 0;
      if (0 < iVar9) {
        do {
          uVar19 = iVar9 * iVar10 + iVar22;
          local_170 = (FName)this->_padding_;
          ::FName::ToString(&local_170,&local_148);
          ::FString::PrintfImpl(&local_158,L"%s[%d][%d]");
          FVar17.Data = (FScriptContainerElement *)L"";
          if (local_158.Data.ArrayNum != 0) {
            FVar17.Data = local_158.Data.AllocatorInstance.Data;
          }
          pFVar12 = ::FName::FName(local_118,(wchar_t *)FVar17.Data);
          FVar5 = *pFVar12;
          if (FVar5 == (FName)0x0) {
            FObjectInitializer::AssertIfInConstructor
                      ((UObject *)this,
                       L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                      );
          }
          pUVar13 = Z_Construct_UClass_UChildActorComponent_NoRegister();
          FStaticConstructObjectParameters::FStaticConstructObjectParameters
                    ((FStaticConstructObjectParameters *)local_108,pUVar13);
          local_108._48_8_ = (FObjectInstancingGraph *)0x0;
          local_108._56_8_ = (UPackage *)0x0;
          local_108._24_4_ = RF_Transient;
          local_108._40_8_ = (UObject *)0x0;
          local_108[0x20] = false;
          local_108._8_8_ = this;
          local_108._16_8_ = FVar5;
          this_01 = (UChildActorComponent *)
                    StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_108);
          if (local_108._64_8_ != 0) {
            plVar16 = (longlong *)(local_108 + 0x50);
            if ((longlong *)local_108._104_8_ != (longlong *)0x0) {
              plVar16 = (longlong *)local_108._104_8_;
            }
            (**(code **)(*plVar16 + 0x10))();
          }
          if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_158.Data.AllocatorInstance.Data);
          }
          if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_148.Data.AllocatorInstance.Data);
          }
          uVar21 = 0;
          if ((int)uVar19 < (this->PreviewComponents).ArrayNum) {
            uVar21 = ~uVar19 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar6 = (pTVar3->AllocatorInstance).Data;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this_01 != (UChildActorComponent *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this_01);
          }
          *(UChildActorComponent **)(pFVar6 + (longlong)(int)uVar19 * 8) = this_01;
          pUVar13 = (this->PreviewClass).Class.field0_0x0.DebugPtr;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UClass *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar13);
          }
          local_168 = pUVar13;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UClass *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar13);
          }
          UChildActorComponent::SetChildActorClass
                    (this_01,(TSubclassOf<AActor>)&local_168,(AActor *)0x0);
          this_01->field_0x9a = this_01->field_0x9a & 0xf7;
          local_180 = 0;
          (**(code **)(*(longlong *)this_01 + 0x508))
                    (this_01,this->_padding_,&FAttachmentTransformRules::KeepRelativeTransform,0);
          pUVar14 = ((UActorComponent *)this->_padding_)->WorldPrivate;
          if (pUVar14 == (UWorld *)0x0) {
            pUVar14 = UActorComponent::GetWorld_Uncached((UActorComponent *)this->_padding_);
          }
          UActorComponent::RegisterComponentWithWorld
                    ((UActorComponent *)this_01,pUVar14,(FRegisterComponentContext *)0x0);
          this_02 = (AActor *)
                    CastChecked<ANiagaraPreviewBase,AActor>
                              ((this_01->ChildActor).field0_0x0.DebugPtr);
          local_184.LocationRule = SnapToTarget;
          local_184.RotationRule = SnapToTarget;
          local_184.ScaleRule = KeepRelative;
          local_184.bWeldSimulatedBodies = false;
          local_178 = 0;
          AActor::AttachToComponent(this_02,(USceneComponent *)this_01,&local_184,(FName)0x0);
          local_138._s_0.Z = 0.0;
          local_138._s_0.X = (double)((float)iVar10 * this->SpacingX);
          local_138._s_0.Y = (double)((float)iVar22 * this->SpacingY);
          AActor::SetActorRelativeLocation
                    (this_02,(TVector<double> *)&local_138._s_0,false,(FHitResult *)0x0,None);
          pbVar2 = (byte *)((longlong)&(this_02->PrimaryActorTick)._padding_ + 2);
          *pbVar2 = *pbVar2 | 6;
          local_160 = (this->System).field0_0x0;
          pUVar15 = UObject::FindFunctionChecked
                              ((UObject *)this_02,NAME_ANiagaraPreviewBase_SetSystem);
          (**(code **)(this_02->_padding_ + 0x260))(this_02,pUVar15);
          local_88.AllocatorInstance.SecondaryData = (ForElementType<UNiagaraComponent_*>)0x0;
          local_88.ArrayNum = 0;
          local_88.ArrayMax = 4;
          AActor::
          GetComponents<UNiagaraComponent,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    (this_02,&local_88,false);
          iVar9 = local_88.ArrayNum;
          uVar18 = (ulonglong)local_88.ArrayNum;
          FVar20 = (ForElementType<UNiagaraComponent_*>)&local_88;
          if (local_88.AllocatorInstance.SecondaryData != (ForElementType<UNiagaraComponent_*>)0x0)
          {
            FVar20 = local_88.AllocatorInstance.SecondaryData;
          }
          FVar4 = (ForElementType<UNiagaraComponent_*>)((longlong)FVar20 + uVar18 * 8);
          while( true ) {
            if ((uint)uVar18 != iVar9) {
              local_188[0] = 0;
              `TCheckedPointerIterator<UNiagaraComponent_*,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_188);
            }
            if (FVar20 == FVar4) break;
            (**(code **)(**(longlong **)FVar20 + 0x2b8))(*(longlong **)FVar20,1);
            uVar18 = (ulonglong)(uint)local_88.ArrayNum;
            FVar20 = (ForElementType<UNiagaraComponent_*>)((longlong)FVar20 + 8);
          }
          if (local_88.AllocatorInstance.SecondaryData != (ForElementType<UNiagaraComponent_*>)0x0)
          {
            FMemory::Free((void *)local_88.AllocatorInstance.SecondaryData);
          }
          iVar9 = this->NumY;
          iVar22 = iVar22 + 1;
        } while (iVar22 < iVar9);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < this->NumX);
  }
  return;
}

// GetPreviews @ 1493555f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ANiagaraPreviewGrid::GetPreviews
          (ANiagaraPreviewGrid *this,
          TArray<UNiagaraComponent_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  AActor *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  FString *pFVar10;
  ulonglong uVar11;
  uint uVar12;
  int *piVar13;
  wchar_t *pwVar14;
  undefined8 *puVar15;
  int *piVar16;
  wchar_t *pwVar17;
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  FScriptContainerElement *local_100;
  longlong local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined1 local_d8 [4];
  int local_d4;
  int local_d0;
  undefined8 local_c8;
  undefined8 *local_c0;
  UClass *local_b8;
  UClass *local_b0;
  ANiagaraPreviewGrid *local_a8;
  FString local_a0;
  FString local_90;
  FString local_80;
  undefined8 local_70 [4];
  undefined8 *local_50;
  uint local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_128;
  local_d0 = 0;
  local_a8 = this;
  if (0 < this->NumX) {
    do {
      iVar6 = this->NumY;
      local_d4 = 0;
      if (0 < iVar6) {
        do {
          iVar1 = (this->PreviewComponents).ArrayNum;
          uVar12 = iVar6 * local_d0 + local_d4;
          uVar5 = 0;
          if ((int)uVar12 < iVar1) {
            uVar5 = ~uVar12 >> 0x1f;
          }
          if (uVar5 == 0) {
            local_108 = (undefined8 *)(longlong)(int)uVar12;
            local_100 = (FScriptContainerElement *)(longlong)iVar1;
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          this_00 = *(AActor **)
                     (*(longlong *)
                       ((this->PreviewComponents).AllocatorInstance.Data + (longlong)(int)uVar12 * 8
                       ) + 600);
          if (this_00 == (AActor *)0x0) {
            pFVar10 = GetTypeName<ANiagaraPreviewBase>(&local_80);
            if ((pFVar10->Data).ArrayNum == 0) {
              pwVar14 = L"";
            }
            else {
              pwVar14 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
            }
                    /* WARNING: Subroutine does not return */
            CastLogError(L"nullptr",pwVar14);
          }
          pUVar7 = ANiagaraPreviewBase::StaticClass();
          iVar6 = (int)pUVar7->_padding_;
          if ((*(int *)(this_00->_padding_ + 0x38) < iVar6) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar6 * 8) !=
              &pUVar7->_padding_)) {
            pFVar10 = GetTypeName<ANiagaraPreviewBase>(&local_a0);
            pwVar14 = L"";
            if ((pFVar10->Data).ArrayNum == 0) {
              pwVar17 = L"";
            }
            else {
              pwVar17 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
            }
            pFVar10 = GetFullNameForCastLogError<AActor>(&local_90,this_00);
            if ((pFVar10->Data).ArrayNum != 0) {
              pwVar14 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
            }
                    /* WARNING: Subroutine does not return */
            CastLogError(pwVar14,pwVar17);
          }
          local_50 = (undefined8 *)0x0;
          local_44 = 4;
          local_48 = 0;
          pUVar7 = Z_Construct_UClass_UNiagaraComponent_NoRegister();
          if (UE::GC::GIsIncrementalReachabilityPending == false) {
            if (pUVar7 != (UClass *)0x0) goto LAB_149355740;
LAB_149355771:
            pUVar8 = (UClass *)0x0;
          }
          else {
            if (pUVar7 == (UClass *)0x0) goto LAB_149355771;
            UE::GC::MarkAsReachable((UObject *)pUVar7);
LAB_149355740:
            pUVar8 = Z_Construct_UClass_UActorComponent_NoRegister();
            if (pUVar8 == (UClass *)0x0) goto LAB_149355771;
            iVar6 = (int)pUVar8->_padding_;
            if (((int)pUVar7->_padding_ < iVar6) ||
               ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar6 * 8) !=
                &pUVar8->_padding_)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            pUVar8 = pUVar7;
            if (!bVar4) goto LAB_149355771;
          }
          pUVar9 = Z_Construct_UClass_UActorComponent_NoRegister();
          if (pUVar8 == pUVar9) {
            local_b8 = pUVar7;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar7);
            }
            AActor::
            ForEachComponent_Internal<UNiagaraComponent,1,0,_AActor::GetComponents<UNiagaraComponent,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                      (this_00,(TSubclassOf<UActorComponent>)&local_b8,
                       (TArray<UNiagaraComponent_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                        *)local_70);
          }
          else {
            local_b0 = pUVar7;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar7);
            }
            AActor::
            ForEachComponent_Internal<UNiagaraComponent,0,0,_AActor::GetComponents<UNiagaraComponent,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                      (this_00,(TSubclassOf<UActorComponent>)&local_b0,
                       (TArray<UNiagaraComponent_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                        *)local_70);
          }
          uVar5 = local_48;
          uVar11 = (ulonglong)(int)local_48;
          puVar15 = local_70;
          if (local_50 != (undefined8 *)0x0) {
            puVar15 = local_50;
          }
          local_c0 = puVar15 + uVar11;
          while( true ) {
            if ((uint)uVar11 != uVar5) {
              local_d8[0] = 0;
              `TCheckedPointerIterator<UNiagaraComponent_*,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_d8);
            }
            piVar16 = &param_1->ArrayNum;
            piVar13 = &param_1->ArrayMax;
            if (puVar15 == local_c0) break;
            local_c8 = *puVar15;
            pFVar2 = (param_1->AllocatorInstance).Data;
            if ((pFVar2 <= (FScriptContainerElement *)&local_c8) &&
               ((FScriptContainerElement *)&local_c8 < pFVar2 + (longlong)*piVar13 * 8)) {
              local_f0 = (longlong)*piVar16;
              local_e8 = 8;
              local_108 = &local_c8;
              local_100 = pFVar2;
              local_f8 = (longlong)*piVar13;
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar4) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            iVar6 = *piVar16;
            if (iVar6 == *piVar13) {
              iVar6 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&param_1->AllocatorInstance,piVar13);
            }
            puVar15 = puVar15 + 1;
            *piVar16 = iVar6 + 1;
            *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_c8;
            uVar11 = (ulonglong)local_48;
          }
          if (local_50 != (undefined8 *)0x0) {
            FMemory::Free(local_50);
          }
          local_d4 = local_d4 + 1;
          iVar6 = local_a8->NumY;
          this = local_a8;
        } while (local_d4 < iVar6);
      }
      local_d0 = local_d0 + 1;
    } while (local_d0 < this->NumX);
  }
  return;
}

// GetPrivateStaticClass @ 149355b50

UClass * __cdecl ANiagaraPreviewGrid::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ANiagaraPreviewGrid.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraPreviewGrid",
               &Z_Registration_Info_UClass_ANiagaraPreviewGrid.InnerSingleton,
               StaticRegisterNativesANiagaraPreviewGrid,0x310,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ANiagaraPreviewGrid>,
               InternalVTableHelperCtorCaller<ANiagaraPreviewGrid>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ANiagaraPreviewGrid.InnerSingleton;
}

// PostLoad @ 149361300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall ANiagaraPreviewGrid::PostLoad(ANiagaraPreviewGrid *this)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  longlong *plVar5;
  undefined1 auStack_c8 [32];
  FName local_a8 [2];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  AActor::PostLoad((AActor *)this);
  if (this->_padding_ == 0) {
    pFVar2 = ::FName::FName(local_a8,L"SceneComp");
    FVar1 = *pFVar2;
    if (FVar1 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar3 = Z_Construct_UClass_USceneComponent_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar3);
    local_98._24_4_ = RF_NoFlags;
    local_98._40_8_ = (UObject *)0x0;
    local_98[0x20] = false;
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_98._8_8_ = this;
    local_98._16_8_ = FVar1;
    pUVar4 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar5 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar5 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    this->_padding_ = (longlong)pUVar4;
  }
  return;
}

// SetPaused @ 14936ab00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall ANiagaraPreviewGrid::SetPaused(ANiagaraPreviewGrid *this,bool param_1)

{
  undefined8 *puVar1;
  int iVar2;
  AActor *this_00;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  FString *pFVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined8 *puVar12;
  wchar_t *pwVar13;
  uint uVar14;
  UClass *pUVar15;
  wchar_t *pwVar16;
  UClass *pUVar17;
  UClass *pUVar18;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong local_c0;
  undefined1 local_b8 [8];
  UClass *local_b0;
  UClass *local_a8;
  FString local_a0;
  FString local_90;
  FString local_80;
  undefined8 local_70 [4];
  undefined8 *local_50;
  uint local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pUVar18 = (UClass *)0x0;
  pUVar17 = pUVar18;
  if (0 < this->NumX) {
    do {
      iVar5 = this->NumY;
      pUVar15 = pUVar18;
      if (0 < iVar5) {
        do {
          iVar2 = (this->PreviewComponents).ArrayNum;
          uVar11 = iVar5 * (int)pUVar17 + (int)pUVar15;
          uVar14 = 0;
          if ((int)uVar11 < iVar2) {
            uVar14 = ~uVar11 >> 0x1f;
          }
          if (uVar14 == 0) {
            local_c8 = (longlong)(int)uVar11;
            local_c0 = (longlong)iVar2;
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          this_00 = *(AActor **)
                     (*(longlong *)
                       ((this->PreviewComponents).AllocatorInstance.Data + (longlong)(int)uVar11 * 8
                       ) + 600);
          if (this_00 == (AActor *)0x0) {
            pFVar9 = GetTypeName<ANiagaraPreviewBase>(&local_80);
            if ((pFVar9->Data).ArrayNum == 0) {
              pwVar13 = L"";
            }
            else {
              pwVar13 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
            }
                    /* WARNING: Subroutine does not return */
            CastLogError(L"nullptr",pwVar13);
          }
          pUVar6 = ANiagaraPreviewBase::StaticClass();
          iVar5 = (int)pUVar6->_padding_;
          if ((*(int *)(this_00->_padding_ + 0x38) < iVar5) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar5 * 8) !=
              &pUVar6->_padding_)) {
            pFVar9 = GetTypeName<ANiagaraPreviewBase>(&local_a0);
            pwVar13 = L"";
            if ((pFVar9->Data).ArrayNum == 0) {
              pwVar16 = L"";
            }
            else {
              pwVar16 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
            }
            pFVar9 = GetFullNameForCastLogError<AActor>(&local_90,this_00);
            if ((pFVar9->Data).ArrayNum != 0) {
              pwVar13 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
            }
                    /* WARNING: Subroutine does not return */
            CastLogError(pwVar13,pwVar16);
          }
          local_50 = (undefined8 *)0x0;
          local_44 = 4;
          local_48 = 0;
          pUVar6 = Z_Construct_UClass_UNiagaraComponent_NoRegister();
          if (UE::GC::GIsIncrementalReachabilityPending == false) {
            if (pUVar6 != (UClass *)0x0) goto LAB_14936ac3d;
LAB_14936ac6e:
            pUVar7 = pUVar18;
          }
          else {
            if (pUVar6 == (UClass *)0x0) goto LAB_14936ac6e;
            UE::GC::MarkAsReachable((UObject *)pUVar6);
LAB_14936ac3d:
            pUVar7 = Z_Construct_UClass_UActorComponent_NoRegister();
            if (pUVar7 == (UClass *)0x0) goto LAB_14936ac6e;
            iVar5 = (int)pUVar7->_padding_;
            if (((int)pUVar6->_padding_ < iVar5) ||
               ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar5 * 8) !=
                &pUVar7->_padding_)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            pUVar7 = pUVar6;
            if (!bVar4) goto LAB_14936ac6e;
          }
          pUVar8 = Z_Construct_UClass_UActorComponent_NoRegister();
          if (pUVar7 == pUVar8) {
            local_b0 = pUVar6;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar6);
            }
            AActor::
            ForEachComponent_Internal<UNiagaraComponent,1,0,_AActor::GetComponents<UNiagaraComponent,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                      (this_00,(TSubclassOf<UActorComponent>)&local_b0,
                       (TArray<UNiagaraComponent_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                        *)local_70);
          }
          else {
            local_a8 = pUVar6;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar6);
            }
            AActor::
            ForEachComponent_Internal<UNiagaraComponent,0,0,_AActor::GetComponents<UNiagaraComponent,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                      (this_00,(TSubclassOf<UActorComponent>)&local_a8,
                       (TArray<UNiagaraComponent_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                        *)local_70);
          }
          uVar14 = local_48;
          uVar10 = (ulonglong)(int)local_48;
          puVar12 = local_70;
          if (local_50 != (undefined8 *)0x0) {
            puVar12 = local_50;
          }
          puVar1 = puVar12 + uVar10;
          while( true ) {
            if ((uint)uVar10 != uVar14) {
              local_b8[0] = 0;
              `TCheckedPointerIterator<UNiagaraComponent_*,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_b8);
            }
            if (puVar12 == puVar1) break;
            UNiagaraComponent::SetPaused((UNiagaraComponent *)*puVar12,param_1);
            uVar10 = (ulonglong)local_48;
            puVar12 = puVar12 + 1;
          }
          if (local_50 != (undefined8 *)0x0) {
            FMemory::Free(local_50);
          }
          iVar5 = this->NumY;
          uVar14 = (int)pUVar15 + 1;
          pUVar15 = (UClass *)(ulonglong)uVar14;
        } while ((int)uVar14 < iVar5);
      }
      uVar14 = (int)pUVar17 + 1;
      pUVar17 = (UClass *)(ulonglong)uVar14;
    } while ((int)uVar14 < this->NumX);
  }
  (**(code **)(this->_padding_ + 0x4a8))(this,!param_1);
  return;
}

// ShouldTickIfViewportsOnly @ 14936edc0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall ANiagaraPreviewGrid::ShouldTickIfViewportsOnly(ANiagaraPreviewGrid *this)

{
  return true;
}

// StaticRegisterNativesANiagaraPreviewGrid @ 1493702c0

void __cdecl ANiagaraPreviewGrid::StaticRegisterNativesANiagaraPreviewGrid(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_ANiagaraPreviewGrid_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TickActor @ 149371520

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ANiagaraPreviewGrid::TickActor
          (ANiagaraPreviewGrid *this,float param_1,ELevelTick param_2,FActorTickFunction *param_3)

{
  AActor::TickActor((AActor *)this,param_1,param_2,param_3);
  if (ZPULL(*(undefined4 *)&this->field_0x308,0,1) != 0) {
    *(uint *)&this->field_0x308 = *(undefined4 *)&this->field_0x308 & 0xfffffffe;
    GeneratePreviews(this);
  }
  TickPreviews(this);
  return;
}

// TickPreviews @ 149371a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall ANiagaraPreviewGrid::TickPreviews(ANiagaraPreviewGrid *this)

{
  undefined8 *puVar1;
  AActor *pAVar2;
  UNiagaraComponent *pUVar3;
  ITextData *pIVar4;
  code *pcVar5;
  int iVar6;
  TRefCountPtr<ITextData> TVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  UClass *pUVar11;
  FStringFormatArg *pFVar12;
  UClass *pUVar13;
  UClass *pUVar14;
  FText *pFVar15;
  FText *pFVar16;
  UFunction *pUVar17;
  FString *pFVar18;
  FStringFormatArg *pFVar19;
  ulonglong uVar20;
  uint uVar21;
  wchar_t *pwVar22;
  undefined8 *puVar23;
  wchar_t *pwVar24;
  int iVar25;
  undefined1 auStackY_228 [32];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_1d8;
  char local_1c8;
  undefined1 local_1c7 [3];
  int local_1c4;
  FText local_1c0;
  FText local_1b0;
  undefined1 local_1a0 [4];
  undefined1 local_19c [4];
  FName local_198;
  FName local_190;
  UClass *local_188;
  UClass *local_180;
  AActor *local_178;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  FText local_130;
  FText local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FStringFormatArg local_e0;
  FStringFormatArg local_c0;
  FStringFormatArg local_a0;
  FStringFormatArg local_80;
  undefined8 local_60 [4];
  undefined8 *local_40;
  uint local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_228;
  if ((((this->System).field0_0x0.DebugPtr != (UNiagaraSystem *)0x0) &&
      ((this->PreviewAxisX).field0_0x0.DebugPtr != (UNiagaraPreviewAxis *)0x0)) &&
     ((this->PreviewAxisY).field0_0x0.DebugPtr != (UNiagaraPreviewAxis *)0x0)) {
    local_1c8 = '\x01';
    local_1c4 = 0;
    if (0 < this->NumX) {
      do {
        iVar25 = 0;
        iVar10 = this->NumY;
        if (0 < iVar10) {
          do {
            iVar6 = local_1c4;
            uVar21 = iVar10 * local_1c4 + iVar25;
            uVar9 = 0;
            if ((int)uVar21 < (this->PreviewComponents).ArrayNum) {
              uVar9 = ~uVar21 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pAVar2 = *(AActor **)
                      (*(longlong *)
                        ((this->PreviewComponents).AllocatorInstance.Data +
                        (longlong)(int)uVar21 * 8) + 600);
            local_178 = pAVar2;
            if (pAVar2 == (AActor *)0x0) {
              pFVar18 = GetTypeName<ANiagaraPreviewBase>(&local_f0);
              if ((pFVar18->Data).ArrayNum == 0) {
                pwVar22 = L"";
              }
              else {
                pwVar22 = (wchar_t *)(pFVar18->Data).AllocatorInstance.Data;
              }
                    /* WARNING: Subroutine does not return */
              CastLogError(L"nullptr",pwVar22);
            }
            pUVar11 = ANiagaraPreviewBase::StaticClass();
            iVar10 = (int)pUVar11->_padding_;
            if ((*(int *)(pAVar2->_padding_ + 0x38) < iVar10) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pAVar2->_padding_ + 0x30) + (longlong)iVar10 * 8) !=
                &pUVar11->_padding_)) {
              pFVar18 = GetTypeName<ANiagaraPreviewBase>(&local_110);
              pwVar22 = L"";
              if ((pFVar18->Data).ArrayNum == 0) {
                pwVar24 = L"";
              }
              else {
                pwVar24 = (wchar_t *)(pFVar18->Data).AllocatorInstance.Data;
              }
              pFVar18 = GetFullNameForCastLogError<AActor>(&local_100,pAVar2);
              if ((pFVar18->Data).ArrayNum != 0) {
                pwVar22 = (wchar_t *)(pFVar18->Data).AllocatorInstance.Data;
              }
                    /* WARNING: Subroutine does not return */
              CastLogError(pwVar22,pwVar24);
            }
            local_1d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1d8.ArrayNum = 0;
            local_1d8.ArrayMax = 0;
            local_198 = *(FName *)(*(longlong *)
                                    &((this->PreviewAxisX).field0_0x0.DebugPtr)->field_0x10 + 0x18);
            ::FName::ToString(&local_198,&local_150);
            pFVar12 = FStringFormatArg::FStringFormatArg(&local_e0,&local_150);
            if (((local_1d8.AllocatorInstance.Data <= pFVar12) &&
                (pFVar12 < (FStringFormatArg *)
                           (local_1d8.AllocatorInstance.Data + (longlong)local_1d8.ArrayMax * 0x20))
                ) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar10 = local_1d8.ArrayNum;
            if (local_1d8.ArrayNum == local_1d8.ArrayMax) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x820,&local_1d8.AllocatorInstance,&local_1d8.ArrayMax);
            }
            local_1d8.ArrayNum = iVar10 + 1;
            pFVar19 = (FStringFormatArg *)
                      (local_1d8.AllocatorInstance.Data + (longlong)iVar10 * 0x20);
            (pFVar19->StringValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (pFVar19->StringValue).Data.ArrayNum = 0;
            (pFVar19->StringValue).Data.ArrayMax = 0;
            FStringFormatArg::operator=(pFVar19,pFVar12);
            if (local_e0.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_e0.StringValue.Data.AllocatorInstance.Data);
            }
            pFVar12 = FStringFormatArg::FStringFormatArg(&local_c0,iVar6);
            if (((local_1d8.AllocatorInstance.Data <= pFVar12) &&
                (pFVar12 < (FStringFormatArg *)
                           (local_1d8.AllocatorInstance.Data + (longlong)local_1d8.ArrayMax * 0x20))
                ) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar10 = local_1d8.ArrayNum;
            if (local_1d8.ArrayNum == local_1d8.ArrayMax) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x820,&local_1d8.AllocatorInstance,&local_1d8.ArrayMax);
            }
            local_1d8.ArrayNum = iVar10 + 1;
            pFVar19 = (FStringFormatArg *)
                      (local_1d8.AllocatorInstance.Data + (longlong)iVar10 * 0x20);
            (pFVar19->StringValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (pFVar19->StringValue).Data.ArrayNum = 0;
            (pFVar19->StringValue).Data.ArrayMax = 0;
            FStringFormatArg::operator=(pFVar19,pFVar12);
            if (local_c0.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_c0.StringValue.Data.AllocatorInstance.Data);
            }
            ::FString::FormatImpl(&local_160,L"{1} | X = {0}",&local_1d8);
            if ((longlong)local_1d8._8_8_ < 0) {
              DestructItems<FStringFormatArg,int>
                        ((FStringFormatArg *)local_1d8.AllocatorInstance.Data,local_1d8.ArrayNum);
              bVar8 = local_1d8.ArrayMax != 0;
              local_1d8._8_8_ = (ulonglong)(uint)local_1d8.ArrayMax << 0x20;
              if (bVar8) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x20,8,0,&local_1d8.AllocatorInstance,0,&local_1d8.ArrayMax);
              }
            }
            else {
              DestructItems<FStringFormatArg,int>
                        ((FStringFormatArg *)local_1d8.AllocatorInstance.Data,local_1d8.ArrayNum);
              local_1d8._8_8_ = local_1d8._8_8_ & 0xffffffff00000000;
            }
            local_190 = *(FName *)(*(longlong *)
                                    &((this->PreviewAxisY).field0_0x0.DebugPtr)->field_0x10 + 0x18);
            ::FName::ToString(&local_190,&local_140);
            pFVar12 = FStringFormatArg::FStringFormatArg(&local_a0,&local_140);
            if (((local_1d8.AllocatorInstance.Data <= pFVar12) &&
                (pFVar12 < (FStringFormatArg *)
                           (local_1d8.AllocatorInstance.Data + (longlong)local_1d8.ArrayMax * 0x20))
                ) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar10 = local_1d8.ArrayNum;
            if (local_1d8.ArrayNum == local_1d8.ArrayMax) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x820,&local_1d8.AllocatorInstance,&local_1d8.ArrayMax);
            }
            local_1d8.ArrayNum = iVar10 + 1;
            pFVar19 = (FStringFormatArg *)
                      (local_1d8.AllocatorInstance.Data + (longlong)iVar10 * 0x20);
            (pFVar19->StringValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (pFVar19->StringValue).Data.ArrayNum = 0;
            (pFVar19->StringValue).Data.ArrayMax = 0;
            FStringFormatArg::operator=(pFVar19,pFVar12);
            if (local_a0.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_a0.StringValue.Data.AllocatorInstance.Data);
            }
            pFVar12 = FStringFormatArg::FStringFormatArg(&local_80,iVar25);
            if (((local_1d8.AllocatorInstance.Data <= pFVar12) &&
                (pFVar12 < (FStringFormatArg *)
                           (local_1d8.AllocatorInstance.Data + (longlong)local_1d8.ArrayMax * 0x20))
                ) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar10 = local_1d8.ArrayNum;
            if (local_1d8.ArrayNum == local_1d8.ArrayMax) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x820,&local_1d8.AllocatorInstance,&local_1d8.ArrayMax);
            }
            local_1d8.ArrayNum = iVar10 + 1;
            pFVar19 = (FStringFormatArg *)
                      (local_1d8.AllocatorInstance.Data + (longlong)iVar10 * 0x20);
            (pFVar19->StringValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (pFVar19->StringValue).Data.ArrayNum = 0;
            (pFVar19->StringValue).Data.ArrayMax = 0;
            FStringFormatArg::operator=(pFVar19,pFVar12);
            if (local_80.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_80.StringValue.Data.AllocatorInstance.Data);
            }
            ::FString::FormatImpl(&local_170,L"{1} | Y = {0}",&local_1d8);
            local_40 = (undefined8 *)0x0;
            local_34 = 4;
            local_38 = 0;
            pUVar11 = Z_Construct_UClass_UNiagaraComponent_NoRegister();
            if (UE::GC::GIsIncrementalReachabilityPending == false) {
              if (pUVar11 != (UClass *)0x0) goto LAB_149372022;
LAB_149372053:
              pUVar13 = (UClass *)0x0;
            }
            else {
              if (pUVar11 == (UClass *)0x0) goto LAB_149372053;
              UE::GC::MarkAsReachable((UObject *)pUVar11);
LAB_149372022:
              pUVar13 = Z_Construct_UClass_UActorComponent_NoRegister();
              if (pUVar13 == (UClass *)0x0) goto LAB_149372053;
              iVar10 = (int)pUVar13->_padding_;
              if (((int)pUVar11->_padding_ < iVar10) ||
                 ((longlong *)*(undefined1 **)(pUVar11->_padding_ + (longlong)iVar10 * 8) !=
                  &pUVar13->_padding_)) {
                bVar8 = false;
              }
              else {
                bVar8 = true;
              }
              pUVar13 = pUVar11;
              if (!bVar8) goto LAB_149372053;
            }
            pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
            if (pUVar13 == pUVar14) {
              local_188 = pUVar11;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UClass *)0x0)
                 ) {
                UE::GC::MarkAsReachable((UObject *)pUVar11);
              }
              AActor::
              ForEachComponent_Internal<UNiagaraComponent,1,0,_AActor::GetComponents<UNiagaraComponent,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                        (pAVar2,(TSubclassOf<UActorComponent>)&local_188,
                         (TArray<UNiagaraComponent_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                          *)local_60);
            }
            else {
              local_180 = pUVar11;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UClass *)0x0)
                 ) {
                UE::GC::MarkAsReachable((UObject *)pUVar11);
              }
              AActor::
              ForEachComponent_Internal<UNiagaraComponent,0,0,_AActor::GetComponents<UNiagaraComponent,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                        (pAVar2,(TSubclassOf<UActorComponent>)&local_180,
                         (TArray<UNiagaraComponent_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                          *)local_60);
            }
            uVar9 = local_38;
            iVar10 = local_1c4;
            uVar20 = (ulonglong)(int)local_38;
            puVar23 = local_60;
            if (local_40 != (undefined8 *)0x0) {
              puVar23 = local_40;
            }
            puVar1 = puVar23 + uVar20;
            while( true ) {
              if ((uint)uVar20 != uVar9) {
                local_1c7[0] = 0;
                `TCheckedPointerIterator<UNiagaraComponent_*,int,0>::operator!='::__l2::<lambda_1>::
                operator()(local_1c7);
              }
              if (puVar23 == puVar1) break;
              pUVar3 = (UNiagaraComponent *)*puVar23;
              if ((pUVar3->_padding_ & 0x100000) == 0) {
                if (this->ResetMode == Individual) {
                  (**(code **)(pUVar3->_padding_ + 0x2b8))(pUVar3,1);
                }
              }
              else {
                local_1c8 = '\0';
              }
              UNiagaraPreviewAxis::ApplyToPreview
                        ((this->PreviewAxisX).field0_0x0.DebugPtr,pUVar3,iVar10,true,&local_160);
              UNiagaraPreviewAxis::ApplyToPreview
                        ((this->PreviewAxisY).field0_0x0.DebugPtr,pUVar3,iVar25,false,&local_170);
              uVar20 = (ulonglong)local_38;
              puVar23 = puVar23 + 1;
            }
            pFVar15 = FText::FromString(&local_120,&local_170);
            pFVar16 = FText::FromString(&local_130,&local_160);
            FText::FText(&local_1c0);
            FText::FText(&local_1b0);
            pAVar2 = local_178;
            TVar7.Reference = local_1c0.TextData.Reference;
            pIVar4 = (pFVar16->TextData).Reference;
            if (local_1c0.TextData.Reference != pIVar4) {
              local_1c0.TextData.Reference = pIVar4;
              if (pIVar4 != (ITextData *)0x0) {
                (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_1a0);
              }
              if (TVar7.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*TVar7.Reference + 0x10))(TVar7.Reference);
              }
            }
            TVar7.Reference = local_1b0.TextData.Reference;
            pIVar4 = (pFVar15->TextData).Reference;
            local_1c0.Flags = pFVar16->Flags;
            if (local_1b0.TextData.Reference != pIVar4) {
              local_1b0.TextData.Reference = pIVar4;
              if (pIVar4 != (ITextData *)0x0) {
                (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_19c);
              }
              if (TVar7.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*TVar7.Reference + 0x10))(TVar7.Reference);
              }
            }
            local_1b0.Flags = pFVar15->Flags;
            pUVar17 = UObject::FindFunctionChecked
                                ((UObject *)pAVar2,NAME_ANiagaraPreviewBase_SetLabelText);
            (**(code **)(pAVar2->_padding_ + 0x260))(pAVar2,pUVar17,&local_1c0);
            if (local_1b0.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_1b0.TextData.Reference + 0x10))();
            }
            if (local_1c0.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_1c0.TextData.Reference + 0x10))();
            }
            if (local_130.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_130.TextData.Reference + 0x10))();
            }
            if (local_120.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_120.TextData.Reference + 0x10))();
            }
            if (local_40 != (undefined8 *)0x0) {
              FMemory::Free(local_40);
            }
            if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_170.Data.AllocatorInstance.Data);
            }
            if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_160.Data.AllocatorInstance.Data);
            }
            DestructItems<FStringFormatArg,int>
                      ((FStringFormatArg *)local_1d8.AllocatorInstance.Data,local_1d8.ArrayNum);
            if ((FStringFormatArg *)local_1d8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
              FMemory::Free(local_1d8.AllocatorInstance.Data);
            }
            iVar10 = this->NumY;
            iVar25 = iVar25 + 1;
          } while (iVar25 < iVar10);
        }
        local_1c4 = local_1c4 + 1;
      } while (local_1c4 < this->NumX);
      if (local_1c8 == '\0') {
        return;
      }
    }
    if (this->ResetMode == All) {
      ActivatePreviews(this,true);
    }
  }
  return;
}

// execActivatePreviews @ 149375f20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
ANiagaraPreviewGrid::execActivatePreviews(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ActivatePreviews((ANiagaraPreviewGrid *)param_1,local_res10[0] != 0);
  return;
}

// execDeactivatePreviews @ 149376140

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
ANiagaraPreviewGrid::execDeactivatePreviews(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  DeactivatePreviews((ANiagaraPreviewGrid *)param_1);
  return;
}

// execGetPreviews @ 149376160

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl ANiagaraPreviewGrid::execGetPreviews(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<UNiagaraComponent_*,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<UNiagaraComponent_*,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar2 = &local_18;
  if ((TArray<UNiagaraComponent_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress
      != (TArray<UNiagaraComponent_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<UNiagaraComponent_*,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetPreviews((ANiagaraPreviewGrid *)param_1,pTVar2);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execSetPaused @ 149376430

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl ANiagaraPreviewGrid::execSetPaused(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetPaused((ANiagaraPreviewGrid *)param_1,local_res10[0] != 0);
  return;
}

