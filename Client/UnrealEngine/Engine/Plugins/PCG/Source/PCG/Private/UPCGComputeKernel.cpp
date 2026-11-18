// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 24

// AddStaticCreatedStrings @ 149746070

void __thiscall
UPCGComputeKernel::AddStaticCreatedStrings
          (UPCGComputeKernel *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// DoesOutputPinRequireZeroInitialization @ 14974fd30

bool __thiscall
UPCGComputeKernel::DoesOutputPinRequireZeroInitialization(UPCGComputeKernel *this,FName param_1)

{
  return false;
}

// GetDataLabels @ 149754aa0

void __thiscall
UPCGComputeKernel::GetDataLabels
          (UPCGComputeKernel *this,FName param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  return;
}

// GetElementCountMultiplier @ 149757ba0

uint __thiscall UPCGComputeKernel::GetElementCountMultiplier(UPCGComputeKernel *this,FName param_1)

{
  return 1;
}

// GetThreadCountMultiplier @ 1497683d0

uint __thiscall UPCGComputeKernel::GetThreadCountMultiplier(UPCGComputeKernel *this)

{
  return 1;
}

// StaticClass @ 149778550

UClass * __cdecl UPCGComputeKernel::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UPCGComputeKernel.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGComputeKernel",
               &Z_Registration_Info_UClass_UPCGComputeKernel.InnerSingleton,
               StaticRegisterNativesUPCGComputeKernel,0x98,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGComputeKernel>,
               InternalVTableHelperCtorCaller<UPCGComputeKernel>,aFStackX_8,
               UComputeKernel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGComputeKernel.InnerSingleton;
}

// UPCGComputeKernel @ 1497e08f0

UPCGComputeKernel * __thiscall
UPCGComputeKernel::UPCGComputeKernel(UPCGComputeKernel *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  UComputeKernel::UComputeKernel((UComputeKernel *)this,param_1);
  this->KernelIndex = -1;
  this_00 = &(this->SettingsPath).SoftObjectPtr.field_0x18;
  this->PCGKernelFlags = None;
  this->_padding_ = (longlong)&___7UPCGComputeKernel__6B_;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->SettingsPath).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->SettingsPath).SoftObjectPtr = 0;
  *(undefined8 *)&(this->SettingsPath).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->SettingsPath).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  this->bInitialized = false;
  (this->StaticLogEntries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StaticLogEntries).ArrayNum = 0;
  (this->StaticLogEntries).ArrayMax = 0;
  (this->CachedOverridableParams).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedOverridableParams).ArrayNum = 0;
  (this->CachedOverridableParams).ArrayMax = 0;
  (this->ResolvedSettings).field0_0x0.DebugPtr = (UPCGSettings *)0x0;
  return this;
}

// UPCGComputeKernel @ 1497e0970

UPCGComputeKernel * __thiscall
UPCGComputeKernel::UPCGComputeKernel(UPCGComputeKernel *this,FObjectInitializer *param_1)

{
  undefined1 *this_00;
  
  UComputeKernel::UComputeKernel((UComputeKernel *)this,param_1);
  this->KernelIndex = -1;
  this_00 = &(this->SettingsPath).SoftObjectPtr.field_0x18;
  this->PCGKernelFlags = None;
  this->_padding_ = (longlong)&___7UPCGComputeKernel__6B_;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->SettingsPath).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->SettingsPath).SoftObjectPtr = 0;
  *(undefined8 *)&(this->SettingsPath).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->SettingsPath).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  this->bInitialized = false;
  (this->StaticLogEntries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StaticLogEntries).ArrayNum = 0;
  (this->StaticLogEntries).ArrayMax = 0;
  (this->CachedOverridableParams).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedOverridableParams).ArrayNum = 0;
  (this->CachedOverridableParams).ArrayMax = 0;
  (this->ResolvedSettings).field0_0x0.DebugPtr = (UPCGSettings *)0x0;
  return this;
}

// ~UPCGComputeKernel @ 1497e2dc0

void __thiscall UPCGComputeKernel::~UPCGComputeKernel(UPCGComputeKernel *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UPCGComputeKernel__6B_;
  DestructItems<FPCGKernelOverridableParam,int>
            ((FPCGKernelOverridableParam *)(this->CachedOverridableParams).AllocatorInstance.Data,
             (this->CachedOverridableParams).ArrayNum);
  pFVar1 = (this->CachedOverridableParams).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FPCGKernelLogEntry,int>
            ((FPCGKernelLogEntry *)(this->StaticLogEntries).AllocatorInstance.Data,
             (this->StaticLogEntries).ArrayNum);
  pFVar1 = (this->StaticLogEntries).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->SettingsPath).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  UComputeKernel::~UComputeKernel((UComputeKernel *)this);
  return;
}

// operator() @ 1497e6970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001497e721f) */
/* WARNING: Removing unreachable block (ram,0x0001497e7243) */
/* WARNING: Enum "EPCGDataType": Some values do not have unique names */
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
`UPCGComputeKernel::ComputeDataDescFromPinProperties'::__l12::<lambda_3>::operator()
          (void *this,int param_1)

{
  char cVar1;
  longlong *plVar2;
  ForAnyElementType *pFVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  undefined8 uVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  FPCGDataTypeIdentifier *pFVar13;
  FPCGDataTypeIdentifier *pFVar14;
  FPCGDataTypeIdentifier *this_00;
  FPCGKernelAttributeDesc *pFVar15;
  int *piVar16;
  FPCGDataDesc *pFVar17;
  ForElementType<int> FVar18;
  ForAnyElementType FVar19;
  ForElementType<int> FVar20;
  uint uVar21;
  FPCGKernelAttributeDesc *pFVar22;
  longlong lVar23;
  TArray<FPCGKernelAttributeDesc,TSizedDefaultAllocator<32>_> *pTVar24;
  FPCGDataDesc *this_01;
  undefined1 auStackY_418 [32];
  uint local_3d8;
  uint local_3d4;
  int local_3d0 [2];
  int local_3c8;
  TIntVector4<int>_u_0 local_3c0;
  longlong local_3b0;
  longlong *local_3a8;
  FPCGDataTypeIdentifier local_3a0;
  FPCGDataTypeIdentifier local_388;
  FPCGDataTypeIdentifier local_370;
  FPCGDataTypeIdentifier local_358;
  undefined1 local_340 [88];
  int local_2e8;
  ForAnyElementType local_2d8;
  undefined1 local_2c8 [88];
  int local_270;
  ForAnyElementType local_260;
  FPCGDataTypeIdentifier local_250;
  FPCGDataTypeIdentifier local_238;
  FPCGDataTypeIdentifier local_220;
  FPCGKernelAttributeDesc local_208;
  FPCGDataDesc local_188;
  FPCGDataDesc local_118;
  FPCGDataDesc local_a8;
  ulonglong local_38;
  
  if (0 < param_1) {
    local_38 = __security_cookie.value ^ (ulonglong)auStackY_418;
    bVar10 = false;
    bVar8 = false;
    local_3d0[0] = 0;
    piVar16 = *(int **)((longlong)this + 8);
    local_3d8 = 0;
    local_3c8 = param_1;
    local_3a8 = this;
    do {
      local_3c0 = UE::Math::TIntVector4<int>::ZeroValue.field0_0x0;
      if ((*(char *)(*(longlong *)this + 0x21) == '\0') && (0 < *piVar16)) {
        pFVar13 = FPCGDataTypeIdentifier::operator&
                            ((FPCGDataTypeIdentifier *)(*(longlong *)((longlong)this + 0x10) + 0x10)
                             ,&local_3a0,BaseTexture);
        bVar9 = FPCGDataTypeIdentifier::operator!(pFVar13);
        if (local_3a0.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3a0.Ids.AllocatorInstance.Data);
        }
        if (!bVar9) {
          local_3c0._0_8_ = 0x100000000;
        }
        local_3c0._s_0.X = 1;
      }
      plVar2 = *(longlong **)((longlong)this + 0x18);
      if ((*plVar2 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar3 = (ForAnyElementType *)*plVar2;
      lVar23 = *(longlong *)((longlong)this + 0x10);
      piVar16 = (int *)((longlong)&pFVar3[1].Data + 4);
      iVar11 = *(int *)&pFVar3[1].Data;
      if (iVar11 == *piVar16) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x868,pFVar3,piVar16);
      }
      *(int *)&pFVar3[1].Data = iVar11 + 1;
      this_01 = (FPCGDataDesc *)(pFVar3->Data + (longlong)iVar11 * 0x68);
      pFVar13 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier
                          (&local_250,(FPCGDataTypeIdentifier *)(lVar23 + 0x10));
      FPCGDataTypeIdentifier::FPCGDataTypeIdentifier((FPCGDataTypeIdentifier *)this_01,pFVar13);
      this_01->ElementDimension = One;
      this_01->AllocatedPointProperties = None;
      *(undefined8 *)&(this_01->ElementCount).field0_0x0 = local_3c0._0_8_;
      *(undefined8 *)((longlong)&(this_01->ElementCount).field0_0x0 + 8) = local_3c0._8_8_;
      (this_01->AttributeDescs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this_01->AttributeDescs).ArrayNum = 0;
      (this_01->AttributeDescs).ArrayMax = 0;
      (this_01->TagStringKeys).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
      (this_01->TagStringKeys).ArrayNum = 0;
      (this_01->TagStringKeys).ArrayMax = 4;
      pFVar14 = FPCGDataTypeIdentifier::operator&(pFVar13,&local_388,BaseTexture);
      bVar9 = FPCGDataTypeIdentifier::operator!(pFVar14);
      if (local_388.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_388.Ids.AllocatorInstance.Data);
      }
      this_01->ElementDimension = !bVar9;
      FPCGDataDesc::InitializeAttributeDescs(this_01,(UPCGData *)0x0,(UPCGDataBinding *)0x0);
      pFVar4 = (pFVar13->Ids).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      piVar16 = *(int **)((longlong)this + 8);
      local_3d4 = 0;
      if (0 < *piVar16) {
        local_3b0 = 0;
        do {
          lVar23 = local_3b0;
          pTVar24 = &this_01->AttributeDescs;
          plVar2 = *(longlong **)((longlong)this + 0x20);
          uVar21 = 0;
          if ((int)local_3d4 < (int)plVar2[1]) {
            uVar21 = ~local_3d4 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar5 = *plVar2;
          plVar2 = *(longlong **)(lVar5 + lVar23);
          lVar23 = *(longlong *)(lVar5 + 8 + lVar23);
          local_3c0._0_8_ = lVar23;
          if (lVar23 != 0) {
            LOCK();
            *(int *)(lVar23 + 8) = *(int *)(lVar23 + 8) + 1;
            UNLOCK();
          }
          if ((plVar2 == (longlong *)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar23 = plVar2[1];
          if (((int)lVar23 < 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar21 = local_3d8;
          if ((int)lVar23 <= (int)local_3d8) {
            if ((plVar2 == (longlong *)0x0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar9)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            lVar23 = plVar2[1];
            if (((int)lVar23 < 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InCount >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xeb,L""), bVar9)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar21 = (int)lVar23 - 1;
          }
          if ((plVar2 == (longlong *)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar23 = plVar2[1];
          if (((int)lVar23 < 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if (((int)uVar21 < 0) || ((int)lVar23 <= (int)uVar21)) {
            bVar8 = true;
            pFVar13 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_238,Any);
            pFVar14 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_220,pFVar13);
            FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_a8.Type,pFVar14);
            local_a8.TagStringKeys.ArrayMax = 4;
            local_a8.ElementCount.field0_0x0._0_8_ = 0;
            local_a8.ElementCount.field0_0x0._8_8_ = 0;
            local_a8.ElementDimension = One;
            local_a8.AttributeDescs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_a8.AttributeDescs.ArrayNum = 0;
            local_a8.AttributeDescs.ArrayMax = 0;
            local_a8.AllocatedPointProperties = None;
            local_a8.TagStringKeys.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
            local_a8.TagStringKeys.ArrayNum = 0;
            this_00 = FPCGDataTypeIdentifier::operator&(pFVar14,&local_370,BaseTexture);
            bVar9 = FPCGDataTypeIdentifier::operator!(this_00);
            if (local_370.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_370.Ids.AllocatorInstance.Data);
            }
            local_a8.ElementDimension = !bVar9;
            FPCGDataDesc::InitializeAttributeDescs(&local_a8,(UPCGData *)0x0,(UPCGDataBinding *)0x0)
            ;
            pFVar4 = (pFVar14->Ids).AllocatorInstance.Data;
            if (pFVar4 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar4);
            }
            pFVar4 = (pFVar13->Ids).AllocatorInstance.Data;
            if (pFVar4 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar4);
            }
            pFVar17 = &local_a8;
          }
          else {
            lVar23 = *plVar2;
            lVar5 = plVar2[1];
            if (((int)lVar5 < 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar10)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            bVar10 = true;
            uVar12 = 0;
            if ((int)uVar21 < (int)lVar5) {
              uVar12 = ~uVar21 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar9)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar13 = (FPCGDataTypeIdentifier *)((longlong)(int)uVar21 * 0x68 + lVar23);
            FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_118.Type,pFVar13);
            local_118.ElementCount.field0_0x0._0_8_ = pFVar13[1].Ids.AllocatorInstance.Data;
            local_118.ElementCount.field0_0x0._8_4_ = pFVar13[1].Ids.ArrayNum;
            local_118.ElementCount.field0_0x0._12_4_ = pFVar13[1].Ids.ArrayMax;
            local_118.ElementDimension = (EPCGElementDimension)pFVar13[1].CustomSubtype;
            local_118.AttributeDescs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            iVar11 = pFVar13[2].Ids.ArrayNum;
            pFVar22 = (FPCGKernelAttributeDesc *)pFVar13[2].Ids.AllocatorInstance.Data;
            local_118.AttributeDescs.ArrayNum = iVar11;
            if (iVar11 == 0) {
              local_118.AttributeDescs.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x78,8,iVar11,0,&local_118.AttributeDescs.AllocatorInstance,iVar11,
                         &local_118.AttributeDescs.ArrayMax);
              ConstructItems<FPCGKernelAttributeDesc,FPCGKernelAttributeDesc,int>
                        (local_118.AttributeDescs.AllocatorInstance.Data,pFVar22,iVar11);
            }
            local_118.AllocatedPointProperties = pFVar13[2].CustomSubtype;
            local_118.TagStringKeys.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
            local_118.TagStringKeys.ArrayNum = *(int *)&pFVar13[4].Ids.AllocatorInstance.Data;
            lVar23 = (longlong)local_118.TagStringKeys.ArrayNum;
            pFVar14 = pFVar13 + 3;
            if (*(FPCGDataTypeIdentifier **)&pFVar13[3].CustomSubtype !=
                (FPCGDataTypeIdentifier *)0x0) {
              pFVar14 = *(FPCGDataTypeIdentifier **)&pFVar13[3].CustomSubtype;
            }
            if (local_118.TagStringKeys.ArrayNum == 0) {
              local_118.TagStringKeys.ArrayMax = 4;
              pFVar17 = &local_118;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                        (4,4,local_118.TagStringKeys.ArrayNum,0,
                         &local_118.TagStringKeys.AllocatorInstance,local_118.TagStringKeys.ArrayNum
                         ,&local_118.TagStringKeys.ArrayMax);
              FVar20 = (ForElementType<int>)&local_118.TagStringKeys;
              if (local_118.TagStringKeys.AllocatorInstance.SecondaryData !=
                  (ForElementType<int>)0x0) {
                FVar20 = local_118.TagStringKeys.AllocatorInstance.SecondaryData;
              }
              memcpy((void *)FVar20,pFVar14,lVar23 << 2);
              pFVar17 = &local_118;
            }
          }
          FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_188.Type,&pFVar17->Type);
          local_188.ElementDimension = pFVar17->ElementDimension;
          iVar11 = (pFVar17->AttributeDescs).ArrayNum;
          local_188.ElementCount.field0_0x0._0_8_ =
               *(undefined8 *)&(pFVar17->ElementCount).field0_0x0;
          local_188.ElementCount.field0_0x0._8_8_ =
               *(undefined8 *)((longlong)&(pFVar17->ElementCount).field0_0x0 + 8);
          pFVar22 = (FPCGKernelAttributeDesc *)(pFVar17->AttributeDescs).AllocatorInstance.Data;
          local_188.AttributeDescs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_188.AttributeDescs.ArrayNum = iVar11;
          if (iVar11 == 0) {
            local_188.AttributeDescs.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x78,8,iVar11,0,&local_188.AttributeDescs.AllocatorInstance,iVar11,
                       &local_188.AttributeDescs.ArrayMax);
            ConstructItems<FPCGKernelAttributeDesc,FPCGKernelAttributeDesc,int>
                      (local_188.AttributeDescs.AllocatorInstance.Data,pFVar22,iVar11);
          }
          local_188.AllocatedPointProperties = pFVar17->AllocatedPointProperties;
          local_188.TagStringKeys.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
          local_188.TagStringKeys.ArrayNum = (pFVar17->TagStringKeys).ArrayNum;
          lVar23 = (longlong)local_188.TagStringKeys.ArrayNum;
          FVar20 = (pFVar17->TagStringKeys).AllocatorInstance.SecondaryData;
          FVar18 = (ForElementType<int>)&pFVar17->TagStringKeys;
          if (FVar20 != (ForElementType<int>)0x0) {
            FVar18 = FVar20;
          }
          if (local_188.TagStringKeys.ArrayNum == 0) {
            local_188.TagStringKeys.ArrayMax = 4;
          }
          else {
            UE::Core::Private::
            ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                      (4,4,local_188.TagStringKeys.ArrayNum,0,
                       &local_188.TagStringKeys.AllocatorInstance,local_188.TagStringKeys.ArrayNum,
                       &local_188.TagStringKeys.ArrayMax);
            FVar20 = (ForElementType<int>)&local_188.TagStringKeys;
            if (local_188.TagStringKeys.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0)
            {
              FVar20 = local_188.TagStringKeys.AllocatorInstance.SecondaryData;
            }
            memcpy((void *)FVar20,(void *)FVar18,lVar23 << 2);
          }
          if (bVar8) {
            bVar8 = false;
            if (local_a8.TagStringKeys.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0)
            {
              FMemory::Free((void *)local_a8.TagStringKeys.AllocatorInstance.SecondaryData);
            }
            DestructItems<FPCGKernelAttributeDesc,int>
                      ((FPCGKernelAttributeDesc *)local_a8.AttributeDescs.AllocatorInstance.Data,
                       local_a8.AttributeDescs.ArrayNum);
            if ((FPCGKernelAttributeDesc *)local_a8.AttributeDescs.AllocatorInstance.Data !=
                (FPCGKernelAttributeDesc *)0x0) {
              FMemory::Free(local_a8.AttributeDescs.AllocatorInstance.Data);
            }
            if (local_a8.Type.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a8.Type.Ids.AllocatorInstance.Data);
            }
          }
          if (bVar10) {
            bVar10 = false;
            if (local_118.TagStringKeys.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0)
            {
              FMemory::Free((void *)local_118.TagStringKeys.AllocatorInstance.SecondaryData);
            }
            DestructItems<FPCGKernelAttributeDesc,int>
                      ((FPCGKernelAttributeDesc *)local_118.AttributeDescs.AllocatorInstance.Data,
                       local_118.AttributeDescs.ArrayNum);
            if ((FPCGKernelAttributeDesc *)local_118.AttributeDescs.AllocatorInstance.Data !=
                (FPCGKernelAttributeDesc *)0x0) {
              FMemory::Free(local_118.AttributeDescs.AllocatorInstance.Data);
            }
            if (local_118.Type.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_118.Type.Ids.AllocatorInstance.Data);
            }
          }
          cVar1 = *(char *)(*(longlong *)this + 0x20);
          if (cVar1 == '\0') {
            FPCGDataDesc::CombineElementCount
                      (this_01,&local_188,*(EPCGElementMultiplicity *)(*(longlong *)this + 0x21));
          }
          else if (cVar1 == '\x01') {
            pFVar13 = FPCGDataTypeIdentifier::operator&
                                ((FPCGDataTypeIdentifier *)
                                 (*(longlong *)((longlong)this + 0x10) + 0x10),&local_358,
                                 BaseTexture);
            bVar9 = FPCGDataTypeIdentifier::operator!(pFVar13);
            if (local_358.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_358.Ids.AllocatorInstance.Data);
            }
            if (bVar9) {
              iVar11 = *(int *)(*(longlong *)this + 0x24);
              if ((this_01->ElementDimension != One) &&
                 (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<_498753438025252505>,false,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGDataDescription.cpp"
                                     ,0x167,"ElementDimension == EPCGElementDimension::One"), bVar9)
                 ) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              (this_01->ElementCount).field0_0x0._s_0.X =
                   (this_01->ElementCount).field0_0x0._s_0.X + iVar11;
            }
            else {
              uVar6 = *(undefined8 *)(*(longlong *)this + 0x28);
              if ((this_01->ElementDimension != Two) &&
                 (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<_498753438025252499>,false,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGDataDescription.cpp"
                                     ,0x16d,"ElementDimension == EPCGElementDimension::Two"), bVar9)
                 ) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              (this_01->ElementCount).field0_0x0._s_0.X =
                   (this_01->ElementCount).field0_0x0._s_0.X + (int)uVar6;
              piVar16 = &(this_01->ElementCount).field0_0x0._s_0.Y;
              *piVar16 = *piVar16 + (int)((ulonglong)uVar6 >> 0x20);
            }
          }
          else {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("!\"Enclosing block should never be called\"",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGComputeKernel.cpp"
                               ,0x17a,L"");
            if (bVar9) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          FVar19.Data = local_188.AttributeDescs.AllocatorInstance.Data;
          if (*(char *)(*(longlong *)this + 0x34) == '\x01') {
            lVar23 = (longlong)local_188.AttributeDescs.ArrayNum;
            if ((local_188.AttributeDescs.ArrayNum < 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InCount >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xeb,L""), bVar9)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar22 = (FPCGKernelAttributeDesc *)(FVar19.Data + lVar23 * 0x78);
            for (; (FPCGKernelAttributeDesc *)FVar19.Data != pFVar22;
                FVar19.Data = FVar19.Data + 0x78) {
              if (0x1f < ((FPCGKernelAttributeDesc *)FVar19.Data)->AttributeId) {
                FPCGKernelAttributeDesc::FPCGKernelAttributeDesc
                          ((FPCGKernelAttributeDesc *)local_2c8,
                           (FPCGKernelAttributeDesc *)FVar19.Data);
                FPCGKernelAttributeDesc::FPCGKernelAttributeDesc
                          ((FPCGKernelAttributeDesc *)local_340,(FPCGKernelAttributeDesc *)local_2c8
                          );
                FPCGKernelAttributeDesc::FPCGKernelAttributeDesc
                          (&local_208,(FPCGKernelAttributeDesc *)local_340);
                pFVar15 = TArray<FPCGKernelAttributeDesc,TSizedDefaultAllocator<32>_>::
                          FindByPredicate<__UPCGComputeKernel::ComputeDataDescFromPinProperties_::__l12::<lambda_2>::operator()_::__l6::<lambda_1>_>
                                    (pTVar24,&local_208);
                if (local_2d8.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_2d8.Data);
                }
                DestructItems<FString,int>((FString *)local_340._80_8_,local_2e8);
                if ((FString *)local_340._80_8_ != (FString *)0x0) {
                  FMemory::Free((void *)local_340._80_8_);
                }
                if (local_260.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_260.Data);
                }
                DestructItems<FString,int>((FString *)local_2c8._80_8_,local_270);
                if ((FString *)local_2c8._80_8_ != (FString *)0x0) {
                  FMemory::Free((void *)local_2c8._80_8_);
                }
                if (pFVar15 == (FPCGKernelAttributeDesc *)0x0) {
                  iVar11 = (this_01->AttributeDescs).ArrayNum;
                  if (iVar11 == (this_01->AttributeDescs).ArrayMax) {
                    iVar11 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x878,&pTVar24->AllocatorInstance,
                                        &(this_01->AttributeDescs).ArrayMax);
                  }
                  (this_01->AttributeDescs).ArrayNum = iVar11 + 1;
                  FPCGKernelAttributeDesc::FPCGKernelAttributeDesc
                            ((FPCGKernelAttributeDesc *)
                             ((pTVar24->AllocatorInstance).Data + (longlong)iVar11 * 0x78),
                             (FPCGKernelAttributeDesc *)FVar19.Data);
                }
              }
              this = local_3a8;
            }
          }
          lVar23 = (longlong)local_188.TagStringKeys.ArrayNum;
          FVar20 = (ForElementType<int>)&local_188.TagStringKeys;
          if (local_188.TagStringKeys.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
            FVar20 = local_188.TagStringKeys.AllocatorInstance.SecondaryData;
          }
          if ((local_188.TagStringKeys.ArrayNum < 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          FVar18 = (ForElementType<int>)((longlong)FVar20 + lVar23 * 4);
          for (; FVar20 != FVar18; FVar20 = (ForElementType<int>)((longlong)FVar20 + 4)) {
            local_3d0[0] = *(int *)FVar20;
            TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::
            AddUniqueImpl<int_const_&>(&this_01->TagStringKeys,local_3d0);
          }
          this_01->AllocatedPointProperties =
               this_01->AllocatedPointProperties | local_188.AllocatedPointProperties;
          if (local_188.TagStringKeys.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
            FMemory::Free((void *)local_188.TagStringKeys.AllocatorInstance.SecondaryData);
          }
          DestructItems<FPCGKernelAttributeDesc,int>
                    ((FPCGKernelAttributeDesc *)local_188.AttributeDescs.AllocatorInstance.Data,
                     local_188.AttributeDescs.ArrayNum);
          if ((FPCGKernelAttributeDesc *)local_188.AttributeDescs.AllocatorInstance.Data !=
              (FPCGKernelAttributeDesc *)0x0) {
            FMemory::Free(local_188.AttributeDescs.AllocatorInstance.Data);
          }
          if (local_188.Type.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_188.Type.Ids.AllocatorInstance.Data);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)local_3c0._0_8_);
          local_3d4 = local_3d4 + 1;
          piVar16 = *(int **)((longlong)this + 8);
          local_3b0 = local_3b0 + 0x10;
        } while ((int)local_3d4 < *piVar16);
      }
      local_3d8 = local_3d8 + 1;
    } while ((int)local_3d8 < local_3c8);
  }
  return;
}

// AddReferencedObjects @ 1497ed4f0

void __cdecl UPCGComputeKernel::AddReferencedObjects(UObject *param_1,FReferenceCollector *param_2)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  UObject::AddReferencedObjects(param_1,param_2);
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UPCGComputeKernel>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = GetPrivateStaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
                    /* WARNING: Could not recover jumptable at 0x0001497ed54a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2->_padding_ + 0x88))(param_2,&param_1[3].field_0x18,0,0);
    return;
  }
  pFVar3 = GetTypeName<UPCGComputeKernel>(&local_28);
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

// AreKernelSettingsValid @ 1497eef10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UPCGComputeKernel::AreKernelSettingsValid(UPCGComputeKernel *this,FPCGContext *param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FText *pFVar6;
  UPCGSettings *pUVar7;
  FText *pFVar8;
  undefined1 local_res8 [8];
  FText local_28;
  
  if (this->bInitialized == false) {
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_28,L"PCGComputeKernel",L"UninitializeKernel",
                        L"Kernel was not initialized during compilation. Make sure to call Initialize() when creating your kernels."
                       );
    pUVar7 = (UPCGSettings *)(**(code **)(this->_padding_ + 0x2b0))(this);
    PCGComputeHelpers::LogKernelError(param_1,pUVar7,pFVar6);
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
    return false;
  }
  pFVar8 = (FText *)(this->StaticLogEntries).AllocatorInstance.Data;
  iVar1 = (this->StaticLogEntries).ArrayNum;
  pFVar6 = (FText *)((longlong)pFVar8 + (longlong)iVar1 * 0x18);
  while( true ) {
    if ((this->StaticLogEntries).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FPCGKernelLogEntry_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar8 == pFVar6) break;
    iVar2 = *(int *)&pFVar8[1].TextData.Reference;
    if (iVar2 == 2) {
      pUVar7 = (UPCGSettings *)(**(code **)(this->_padding_ + 0x2b0))(this);
      PCGComputeHelpers::LogKernelError(param_1,pUVar7,pFVar8);
      pFVar8 = (FText *)&pFVar8[1].Flags;
    }
    else if (iVar2 == 1) {
      pUVar7 = (UPCGSettings *)(**(code **)(this->_padding_ + 0x2b0))(this);
      PCGComputeHelpers::LogKernelWarning(param_1,pUVar7,pFVar8);
      pFVar8 = (FText *)&pFVar8[1].Flags;
    }
    else {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6136705055560040321>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGComputeKernel.cpp"
                         ,0x7f,"false");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar8 = (FText *)&pFVar8[1].Flags;
    }
  }
  return (bool)(~(char)this->PCGKernelFlags & 1);
}

// ComputeDataDescFromPinProperties @ 1497f1710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001497f2156) */
/* WARNING: Removing unreachable block (ram,0x0001497f217a) */
/* WARNING: Removing unreachable block (ram,0x0001497f295c) */
/* WARNING: Removing unreachable block (ram,0x0001497f2981) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

void __thiscall
UPCGComputeKernel::ComputeDataDescFromPinProperties
          (UPCGComputeKernel *this,FPCGPinPropertiesGPU *param_1,
          TArrayView<FPCGPinProperties_const_,int> *param_2,UPCGDataBinding *param_3,
          TSharedPtr<FPCGDataCollectionDesc,1> *param_4)

{
  int *piVar1;
  FName *pFVar2;
  ForElementType<int> *pFVar3;
  EPCGPinInitMode EVar4;
  EPCGElementMultiplicity EVar5;
  int iVar6;
  FName FVar7;
  FPCGDataCollectionDesc *pFVar8;
  TIntPoint<int>_u_0_s_0 TVar9;
  code *pcVar10;
  ForAnyElementType FVar11;
  FPCGPinPropertiesGPU *pFVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  FPCGDataTypeIdentifier *pFVar17;
  FPCGDataDesc *pFVar18;
  FPCGKernelAttributeDesc *pFVar19;
  FPCGDataTypeIdentifier *pFVar20;
  FPCGKernelAttributeDesc *pFVar21;
  FPCGPinProperties *pFVar22;
  longlong lVar23;
  FPCGPinProperties *pFVar24;
  ForElementType<int> FVar25;
  ForElementType<int> _Dst;
  FPCGPinPropertiesGPUStruct *pFVar26;
  uint uVar27;
  FName *pFVar28;
  longlong *plVar29;
  FScriptContainerElement *pFVar30;
  FPCGDataDesc *pFVar31;
  ForElementType<int> *pFVar32;
  longlong *plVar33;
  FPCGDataDesc *pFVar34;
  ForElementType<int> FVar35;
  FPCGKernelAttributeDesc *pFVar36;
  FScriptContainerElement *pFVar37;
  TSharedPtr<FPCGDataCollectionDesc,1> *pTVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auStackY_6e8 [32];
  int local_698;
  undefined1 local_694 [4];
  ForAnyElementType local_690;
  undefined8 local_688;
  TSharedPtr<FPCGDataCollectionDesc,1> *local_680;
  uint local_678;
  undefined1 local_674;
  undefined1 local_673 [3];
  FPCGDataDesc *local_670;
  uint local_668;
  FPCGPinPropertiesGPU *local_660;
  ForAnyElementType local_658;
  undefined8 local_650;
  FPCGPinPropertiesGPUStruct *local_648;
  FPCGDataTypeIdentifier *local_640;
  int local_638 [2];
  int local_630 [2];
  TSharedPtr<FPCGDataCollectionDesc_const_,1> local_628;
  longlong *local_618;
  longlong *local_610;
  TReferenceControllerBase<1> *local_608;
  TReferenceControllerBase<1> *local_600;
  longlong local_5f8;
  FPCGDataDesc *local_5f0;
  FPCGDataDesc *local_5e8;
  FPCGDataTypeIdentifier *local_5e0;
  FPCGKernelPin local_5d8;
  FPCGPinPropertiesGPUStruct *local_5c8;
  int *local_5c0;
  FPCGPinPropertiesGPU *local_5b8;
  TSharedPtr<FPCGDataCollectionDesc,1> *local_5b0;
  ForAnyElementType *local_5a8;
  undefined1 *local_5a0;
  FPCGDataTypeIdentifier local_598;
  FPCGDataTypeIdentifier local_580;
  undefined1 local_568 [88];
  int local_510;
  ForAnyElementType local_500;
  undefined1 local_4f0 [88];
  int local_498;
  ForAnyElementType local_488;
  undefined1 local_478 [88];
  int local_420;
  ForAnyElementType local_410;
  undefined1 local_400 [88];
  int local_3a8;
  ForAnyElementType local_398;
  undefined1 local_388 [88];
  int local_330;
  ForAnyElementType local_320;
  undefined1 local_310 [88];
  int local_2b8;
  ForAnyElementType local_2a8;
  FPCGDataTypeIdentifier local_298;
  FPCGDataTypeIdentifier local_280;
  FPCGDataTypeIdentifier local_268;
  FPCGDataTypeIdentifier local_250;
  FPCGKernelAttributeDesc local_238;
  FPCGKernelAttributeDesc local_1c0;
  FPCGKernelAttributeDesc local_148;
  FPCGDataDesc local_c8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_6e8;
  local_680 = param_4;
  local_660 = param_1;
  if ((param_3 == (UPCGDataBinding *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InBinding",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGComputeKernel.cpp"
                          ,0xff,L""), bVar13)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar12 = local_660;
  EVar4 = (local_660->PropertiesGPU).InitializationMode;
  local_648 = &local_660->PropertiesGPU;
  if (EVar4 == FromInputPins) {
    pFVar28 = (FName *)(local_660->PropertiesGPU).PinsToInititalizeFrom.AllocatorInstance.Data;
    local_698 = 0;
    iVar15 = (local_660->PropertiesGPU).PinsToInititalizeFrom.ArrayNum;
    local_658.Data = (FScriptContainerElement *)0x0;
    pFVar2 = pFVar28 + iVar15;
    local_650 = 0;
    local_690.Data = (FScriptContainerElement *)0x0;
    local_688 = 0;
    while( true ) {
      if ((local_660->PropertiesGPU).PinsToInititalizeFrom.ArrayNum != iVar15) {
        local_694[0] = 0;
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_694);
        local_698 = (int)local_650;
      }
      if (pFVar28 == pFVar2) break;
      pFVar22 = param_2->DataPtr;
      FVar7 = *pFVar28;
      pFVar24 = pFVar22 + param_2->ArrayNum;
      if (pFVar22 == pFVar24) {
LAB_1497f1947:
        pFVar28 = pFVar28 + 1;
      }
      else {
        do {
          if (pFVar22->Label == FVar7) {
            if (local_698 == local_650._4_4_) {
              local_698 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x408,&local_658,(int *)((longlong)&local_650 + 4));
            }
            local_650 = CONCAT44(local_650._4_4_,local_698 + 1);
            *(FName *)(local_658.Data + (longlong)local_698 * 8) = FVar7;
            local_5d8.KernelIndex = this->KernelIndex;
            local_5d8.bIsInput = true;
            local_5d8.PinLabel = FVar7;
            UPCGDataBinding::ComputeKernelPinDataDesc(param_3,&local_628,&local_5d8);
            if (((local_690.Data <= &local_628) &&
                (&local_628 <
                 (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)
                 (local_690.Data + (longlong)local_688._4_4_ * 0x10))) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar13)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            iVar14 = (int)local_688;
            if ((int)local_688 == local_688._4_4_) {
              iVar14 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&local_690,(int *)((longlong)&local_688 + 4));
            }
            local_688 = CONCAT44(local_688._4_4_,iVar14 + 1);
            *(FPCGDataCollectionDesc **)&local_690.Data[(longlong)iVar14 * 0x10].field_0x0 =
                 local_628.Object;
            *(TReferenceControllerBase<1> **)(local_690.Data + (longlong)iVar14 * 0x10 + 8) =
                 local_628.SharedReferenceCount.ReferenceController;
            if (local_628.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_628.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_628.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_628.SharedReferenceCount.ReferenceController);
            local_698 = (int)local_650;
            goto LAB_1497f1947;
          }
          pFVar22 = pFVar22 + 1;
        } while (pFVar22 != pFVar24);
        pFVar28 = pFVar28 + 1;
      }
    }
    if ((local_698 != (int)local_688) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("NumInitPins == InputDescs.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGComputeKernel.cpp"
                            ,0x116,L""), bVar13)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pFVar26 = local_648;
    pFVar12 = local_660;
    local_5c0 = &local_698;
    local_5a8 = &local_690;
    local_5a0 = &local_674;
    local_5c8 = local_648;
    local_5b8 = local_660;
    local_5b0 = local_680;
    if (local_648->DataCountMode == FromInputData) {
      if (local_698 == 1) {
        if (((int)local_688 < 1) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        FVar11.Data = local_690.Data;
        if ((*(longlong *)local_690.Data == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar13)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar15 = (int)(*(longlong **)FVar11.Data)[1];
        pFVar31 = (FPCGDataDesc *)**(longlong **)FVar11.Data;
        if ((iVar15 < 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar13)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar34 = pFVar31 + iVar15;
        local_670 = pFVar34;
        if (pFVar31 != pFVar34) {
          local_640 = (FPCGDataTypeIdentifier *)&pFVar12->_padding_;
          pFVar32 = &(pFVar31->TagStringKeys).AllocatorInstance.SecondaryData;
          do {
            pFVar17 = local_640;
            pTVar38 = local_680;
            if ((local_680->Object == (FPCGDataCollectionDesc *)0x0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar13)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pFVar8 = pTVar38->Object;
            piVar1 = &(pFVar8->DataDescs).ArrayMax;
            iVar15 = (pFVar8->DataDescs).ArrayNum;
            if (iVar15 == *piVar1) {
              iVar15 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x868,(ForAnyElementType *)pFVar8,piVar1);
            }
            (pFVar8->DataDescs).ArrayNum = iVar15 + 1;
            pFVar30 = (pFVar8->DataDescs).AllocatorInstance.Data;
            pFVar17 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_298,pFVar17);
            pFVar18 = FPCGDataDesc::FPCGDataDesc
                                ((FPCGDataDesc *)(pFVar30 + (longlong)iVar15 * 0x68),pFVar17,0);
            FPCGDataDesc::CombineElementCount(pFVar18,pFVar31,Sum);
            if (pFVar26->AttributeInheritanceMode == CopyAttributeSetup) {
              iVar15 = *(int *)(pFVar32 + -4);
              FVar25 = pFVar32[-5];
              if ((iVar15 < 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InCount >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xeb,L""), bVar13)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              FVar35 = (ForElementType<int>)((longlong)iVar15 * 0x78 + (longlong)FVar25);
              pFVar34 = local_670;
              for (; local_670 = pFVar34, FVar25 != FVar35;
                  FVar25 = (ForElementType<int>)((longlong)FVar25 + 0x78)) {
                if (0x1f < *(int *)FVar25) {
                  FPCGKernelAttributeDesc::FPCGKernelAttributeDesc
                            ((FPCGKernelAttributeDesc *)local_4f0,(FPCGKernelAttributeDesc *)FVar25)
                  ;
                  FPCGKernelAttributeDesc::FPCGKernelAttributeDesc
                            ((FPCGKernelAttributeDesc *)local_568,
                             (FPCGKernelAttributeDesc *)local_4f0);
                  FPCGKernelAttributeDesc::FPCGKernelAttributeDesc
                            (&local_238,(FPCGKernelAttributeDesc *)local_568);
                  pFVar19 = TArray<FPCGKernelAttributeDesc,TSizedDefaultAllocator<32>_>::
                            FindByPredicate<__UPCGComputeKernel::ComputeDataDescFromPinProperties_::__l12::<lambda_2>::operator()_::__l6::<lambda_1>_>
                                      (&pFVar18->AttributeDescs,&local_238);
                  if (local_500.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_500.Data);
                  }
                  DestructItems<FString,int>((FString *)local_568._80_8_,local_510);
                  if ((FString *)local_568._80_8_ != (FString *)0x0) {
                    FMemory::Free((void *)local_568._80_8_);
                  }
                  if (local_488.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_488.Data);
                  }
                  DestructItems<FString,int>((FString *)local_4f0._80_8_,local_498);
                  if ((FString *)local_4f0._80_8_ != (FString *)0x0) {
                    FMemory::Free((void *)local_4f0._80_8_);
                  }
                  if (pFVar19 == (FPCGKernelAttributeDesc *)0x0) {
                    iVar15 = (pFVar18->AttributeDescs).ArrayNum;
                    piVar1 = &(pFVar18->AttributeDescs).ArrayMax;
                    if (iVar15 == *piVar1) {
                      iVar15 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x878,&(pFVar18->AttributeDescs).AllocatorInstance,piVar1)
                      ;
                    }
                    (pFVar18->AttributeDescs).ArrayNum = iVar15 + 1;
                    FPCGKernelAttributeDesc::FPCGKernelAttributeDesc
                              ((FPCGKernelAttributeDesc *)
                               ((pFVar18->AttributeDescs).AllocatorInstance.Data +
                               (longlong)iVar15 * 0x78),(FPCGKernelAttributeDesc *)FVar25);
                  }
                }
                pFVar34 = local_670;
              }
            }
            FVar25 = *pFVar32;
            if (FVar25 == (ForElementType<int>)0x0) {
              FVar25 = (ForElementType<int>)(pFVar32 + -2);
            }
            iVar15 = *(int *)(pFVar32 + 1);
            if ((iVar15 < 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar13)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            (pFVar18->TagStringKeys).ArrayNum = iVar15;
            iVar14 = (pFVar18->TagStringKeys).ArrayMax;
            piVar1 = &(pFVar18->TagStringKeys).ArrayMax;
            if ((iVar15 == 0) && (iVar14 == 0)) {
              *piVar1 = 4;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                        (4,4,iVar15,iVar14,&(pFVar18->TagStringKeys).AllocatorInstance,iVar15,piVar1
                        );
              FVar35 = (pFVar18->TagStringKeys).AllocatorInstance.SecondaryData;
              _Dst = (ForElementType<int>)&pFVar18->TagStringKeys;
              if (FVar35 != (ForElementType<int>)0x0) {
                _Dst = FVar35;
              }
              if (iVar15 != 0) {
                memcpy((void *)_Dst,(void *)FVar25,(longlong)iVar15 << 2);
              }
            }
            pFVar31 = pFVar31 + 1;
            pFVar18->AllocatedPointProperties =
                 pFVar18->AllocatedPointProperties | *(EPCGPointNativeProperties *)(pFVar32 + -3);
            pFVar32 = pFVar32 + 0xd;
            pFVar26 = local_648;
          } while (pFVar31 != pFVar34);
        }
      }
      else if (local_648->DataMultiplicity == CartesianProduct) {
        local_678 = 0;
        if (0 < local_698) {
          lVar23 = 0;
          pTVar38 = local_680;
          do {
            uVar27 = 0;
            if ((int)local_678 < (int)local_688) {
              uVar27 = ~local_678 >> 0x1f;
            }
            if ((uVar27 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            plVar33 = *(longlong **)&local_690.Data[lVar23 * 0x10].field_0x0;
            local_600 = *(TReferenceControllerBase<1> **)(local_690.Data + lVar23 * 0x10 + 8);
            if (local_600 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              local_600->SharedReferenceCount =
                   (atomic<int>)((int)local_600->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_668 = local_678 + 1;
            local_5f8 = lVar23 + 1;
            local_678 = local_668;
            local_610 = plVar33;
            if ((int)local_668 < local_698) {
              lVar23 = local_5f8 * 0x10;
              do {
                uVar27 = 0;
                if ((int)local_668 < (int)local_688) {
                  uVar27 = ~local_668 >> 0x1f;
                }
                local_640 = (FPCGDataTypeIdentifier *)lVar23;
                if ((uVar27 == 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                plVar29 = *(longlong **)(local_690.Data + lVar23);
                local_608 = *(TReferenceControllerBase<1> **)(local_690.Data + 8 + lVar23);
                if (local_608 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  local_608->SharedReferenceCount =
                       (atomic<int>)((int)local_608->SharedReferenceCount + 1);
                  UNLOCK();
                }
                local_618 = plVar29;
                if ((plVar33 == (longlong *)0x0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar13)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                lVar23 = plVar33[1];
                pFVar31 = (FPCGDataDesc *)*plVar33;
                local_670 = pFVar31;
                if (((int)lVar23 < 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("InCount >= 0",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0xeb,L""), bVar13)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                local_5f0 = pFVar31 + (int)lVar23;
                if (pFVar31 != local_5f0) {
                  do {
                    if ((plVar29 == (longlong *)0x0) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("IsValid()",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                            ,0x458,L""), bVar13)) {
                      pcVar10 = (code *)swi(3);
                      (*pcVar10)();
                      return;
                    }
                    lVar23 = plVar29[1];
                    pFVar34 = (FPCGDataDesc *)*plVar29;
                    if (((int)lVar23 < 0) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("InCount >= 0",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                            ,0xeb,L""), bVar13)) {
                      pcVar10 = (code *)swi(3);
                      (*pcVar10)();
                      return;
                    }
                    local_5e8 = pFVar34 + (int)lVar23;
                    if (pFVar34 != local_5e8) {
                      pFVar32 = &(pFVar34->TagStringKeys).AllocatorInstance.SecondaryData;
                      local_5e0 = (FPCGDataTypeIdentifier *)&local_660->_padding_;
                      do {
                        pFVar17 = local_5e0;
                        if ((pTVar38->Object == (FPCGDataCollectionDesc *)0x0) &&
                           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                               ("IsValid()",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                                ,0x458,L""), bVar13)) {
                          pcVar10 = (code *)swi(3);
                          (*pcVar10)();
                          return;
                        }
                        pFVar8 = pTVar38->Object;
                        piVar1 = &(pFVar8->DataDescs).ArrayMax;
                        iVar15 = (pFVar8->DataDescs).ArrayNum;
                        if (iVar15 == *piVar1) {
                          iVar15 = UE::Core::Private::
                                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                             (0x868,(ForAnyElementType *)pFVar8,piVar1);
                        }
                        (pFVar8->DataDescs).ArrayNum = iVar15 + 1;
                        pFVar30 = (pFVar8->DataDescs).AllocatorInstance.Data;
                        pFVar20 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_280,pFVar17)
                        ;
                        pFVar18 = FPCGDataDesc::FPCGDataDesc
                                            ((FPCGDataDesc *)(pFVar30 + (longlong)iVar15 * 0x68),
                                             pFVar20,0);
                        if (pFVar26->ElementCountMode == FromInputData) {
                          EVar5 = pFVar26->ElementMultiplicity;
                          FPCGDataDesc::FPCGDataDesc(&local_c8,pFVar31);
                          FPCGDataDesc::CombineElementCount(&local_c8,pFVar34,EVar5);
                          FPCGDataDesc::CombineElementCount(pFVar18,&local_c8,Sum);
                          if (local_c8.TagStringKeys.AllocatorInstance.SecondaryData !=
                              (ForElementType<int>)0x0) {
                            FMemory::Free((void *)local_c8.TagStringKeys.AllocatorInstance.
                                                  SecondaryData);
                          }
                          DestructItems<FPCGKernelAttributeDesc,int>
                                    ((FPCGKernelAttributeDesc *)
                                     local_c8.AttributeDescs.AllocatorInstance.Data,
                                     local_c8.AttributeDescs.ArrayNum);
                          if ((FPCGKernelAttributeDesc *)
                              local_c8.AttributeDescs.AllocatorInstance.Data !=
                              (FPCGKernelAttributeDesc *)0x0) {
                            FMemory::Free(local_c8.AttributeDescs.AllocatorInstance.Data);
                          }
                          if (local_c8.Type.Ids.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_c8.Type.Ids.AllocatorInstance.Data);
                          }
                        }
                        else if (pFVar26->ElementCountMode == Fixed) {
                          pFVar17 = FPCGDataTypeIdentifier::operator&
                                              (pFVar17,&local_598,BaseTexture);
                          bVar13 = FPCGDataTypeIdentifier::operator!(pFVar17);
                          if (local_598.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0
                             ) {
                            FMemory::Free(local_598.Ids.AllocatorInstance.Data);
                          }
                          if (bVar13) {
                            iVar15 = pFVar26->ElementCount;
                            if ((pFVar18->ElementDimension != One) &&
                               (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                                                   (&bGEnsureHasExecuted<_498753438025252505>,false,
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGDataDescription.cpp"
                                                  ,0x167,
                                                  "ElementDimension == EPCGElementDimension::One"),
                               bVar13)) {
                              pcVar10 = (code *)swi(3);
                              (*pcVar10)();
                              return;
                            }
                            (pFVar18->ElementCount).field0_0x0._s_0.X =
                                 (pFVar18->ElementCount).field0_0x0._s_0.X + iVar15;
                          }
                          else {
                            TVar9 = (pFVar26->NumElements2D).field0_0x0._s_0;
                            if ((pFVar18->ElementDimension != Two) &&
                               (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                                                   (&bGEnsureHasExecuted<_498753438025252499>,false,
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGDataDescription.cpp"
                                                  ,0x16d,
                                                  "ElementDimension == EPCGElementDimension::Two"),
                               bVar13)) {
                              pcVar10 = (code *)swi(3);
                              (*pcVar10)();
                              return;
                            }
                            (pFVar18->ElementCount).field0_0x0._s_0.X =
                                 (pFVar18->ElementCount).field0_0x0._s_0.X + TVar9.X;
                            piVar1 = &(pFVar18->ElementCount).field0_0x0._s_0.Y;
                            *piVar1 = *piVar1 + TVar9.Y;
                          }
                        }
                        else {
                          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                             ("!\"Enclosing block should never be called\"",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGComputeKernel.cpp"
                                              ,0x1c9,L"");
                          if (bVar13) {
                            pcVar10 = (code *)swi(3);
                            (*pcVar10)();
                            return;
                          }
                        }
                        if (pFVar26->AttributeInheritanceMode == CopyAttributeSetup) {
                          iVar15 = (pFVar31->AttributeDescs).ArrayNum;
                          pFVar19 = (FPCGKernelAttributeDesc *)
                                    (pFVar31->AttributeDescs).AllocatorInstance.Data;
                          if ((iVar15 < 0) &&
                             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("InCount >= 0",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                                  ,0xeb,L""), bVar13)) {
                            pcVar10 = (code *)swi(3);
                            (*pcVar10)();
                            return;
                          }
                          pFVar36 = pFVar19 + iVar15;
                          for (; pFVar19 != pFVar36; pFVar19 = pFVar19 + 1) {
                            if (0x1f < pFVar19->AttributeId) {
                              FPCGKernelAttributeDesc::FPCGKernelAttributeDesc
                                        ((FPCGKernelAttributeDesc *)local_400,pFVar19);
                              FPCGKernelAttributeDesc::FPCGKernelAttributeDesc
                                        ((FPCGKernelAttributeDesc *)local_478,
                                         (FPCGKernelAttributeDesc *)local_400);
                              FPCGKernelAttributeDesc::FPCGKernelAttributeDesc
                                        (&local_1c0,(FPCGKernelAttributeDesc *)local_478);
                              pFVar21 = TArray<FPCGKernelAttributeDesc,TSizedDefaultAllocator<32>_>
                                        ::
                                        FindByPredicate<__UPCGComputeKernel::ComputeDataDescFromPinProperties_::__l12::<lambda_2>::operator()_::__l6::<lambda_1>_>
                                                  (&pFVar18->AttributeDescs,&local_1c0);
                              if (local_410.Data != (FScriptContainerElement *)0x0) {
                                FMemory::Free(local_410.Data);
                              }
                              DestructItems<FString,int>((FString *)local_478._80_8_,local_420);
                              if ((FString *)local_478._80_8_ != (FString *)0x0) {
                                FMemory::Free((void *)local_478._80_8_);
                              }
                              if (local_398.Data != (FScriptContainerElement *)0x0) {
                                FMemory::Free(local_398.Data);
                              }
                              DestructItems<FString,int>((FString *)local_400._80_8_,local_3a8);
                              if ((FString *)local_400._80_8_ != (FString *)0x0) {
                                FMemory::Free((void *)local_400._80_8_);
                              }
                              if (pFVar21 == (FPCGKernelAttributeDesc *)0x0) {
                                iVar15 = (pFVar18->AttributeDescs).ArrayNum;
                                piVar1 = &(pFVar18->AttributeDescs).ArrayMax;
                                if (iVar15 == *piVar1) {
                                  iVar15 = UE::Core::Private::
                                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                                     (0x878,&(pFVar18->AttributeDescs).
                                                             AllocatorInstance,piVar1);
                                }
                                (pFVar18->AttributeDescs).ArrayNum = iVar15 + 1;
                                FPCGKernelAttributeDesc::FPCGKernelAttributeDesc
                                          ((FPCGKernelAttributeDesc *)
                                           ((pFVar18->AttributeDescs).AllocatorInstance.Data +
                                           (longlong)iVar15 * 0x78),pFVar19);
                              }
                            }
                          }
                          iVar15 = *(int *)(pFVar32 + -4);
                          FVar25 = pFVar32[-5];
                          if ((iVar15 < 0) &&
                             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("InCount >= 0",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                                  ,0xeb,L""), bVar13)) {
                            pcVar10 = (code *)swi(3);
                            (*pcVar10)();
                            return;
                          }
                          FVar35 = (ForElementType<int>)((longlong)FVar25 + (longlong)iVar15 * 0x78)
                          ;
                          pFVar31 = local_670;
                          for (; local_670 = pFVar31, FVar25 != FVar35;
                              FVar25 = (ForElementType<int>)((longlong)FVar25 + 0x78)) {
                            if (0x1f < *(int *)FVar25) {
                              FPCGKernelAttributeDesc::FPCGKernelAttributeDesc
                                        ((FPCGKernelAttributeDesc *)local_310,
                                         (FPCGKernelAttributeDesc *)FVar25);
                              FPCGKernelAttributeDesc::FPCGKernelAttributeDesc
                                        ((FPCGKernelAttributeDesc *)local_388,
                                         (FPCGKernelAttributeDesc *)local_310);
                              FPCGKernelAttributeDesc::FPCGKernelAttributeDesc
                                        (&local_148,(FPCGKernelAttributeDesc *)local_388);
                              pFVar19 = TArray<FPCGKernelAttributeDesc,TSizedDefaultAllocator<32>_>
                                        ::
                                        FindByPredicate<__UPCGComputeKernel::ComputeDataDescFromPinProperties_::__l12::<lambda_2>::operator()_::__l6::<lambda_1>_>
                                                  (&pFVar18->AttributeDescs,&local_148);
                              if (local_320.Data != (FScriptContainerElement *)0x0) {
                                FMemory::Free(local_320.Data);
                              }
                              DestructItems<FString,int>((FString *)local_388._80_8_,local_330);
                              if ((FString *)local_388._80_8_ != (FString *)0x0) {
                                FMemory::Free((void *)local_388._80_8_);
                              }
                              if (local_2a8.Data != (FScriptContainerElement *)0x0) {
                                FMemory::Free(local_2a8.Data);
                              }
                              DestructItems<FString,int>((FString *)local_310._80_8_,local_2b8);
                              if ((FString *)local_310._80_8_ != (FString *)0x0) {
                                FMemory::Free((void *)local_310._80_8_);
                              }
                              if (pFVar19 == (FPCGKernelAttributeDesc *)0x0) {
                                iVar15 = (pFVar18->AttributeDescs).ArrayNum;
                                piVar1 = &(pFVar18->AttributeDescs).ArrayMax;
                                if (iVar15 == *piVar1) {
                                  iVar15 = UE::Core::Private::
                                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                                     (0x878,&(pFVar18->AttributeDescs).
                                                             AllocatorInstance,piVar1);
                                }
                                (pFVar18->AttributeDescs).ArrayNum = iVar15 + 1;
                                FPCGKernelAttributeDesc::FPCGKernelAttributeDesc
                                          ((FPCGKernelAttributeDesc *)
                                           ((pFVar18->AttributeDescs).AllocatorInstance.Data +
                                           (longlong)iVar15 * 0x78),
                                           (FPCGKernelAttributeDesc *)FVar25);
                              }
                            }
                            pFVar31 = local_670;
                          }
                        }
                        FVar25 = (pFVar31->TagStringKeys).AllocatorInstance.SecondaryData;
                        iVar15 = (pFVar31->TagStringKeys).ArrayNum;
                        FVar35 = (ForElementType<int>)&pFVar31->TagStringKeys;
                        if (FVar25 != (ForElementType<int>)0x0) {
                          FVar35 = FVar25;
                        }
                        if ((iVar15 < 0) &&
                           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                               ("InCount >= 0",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                                ,0xeb,L""), bVar13)) {
                          pcVar10 = (code *)swi(3);
                          (*pcVar10)();
                          return;
                        }
                        FVar25 = (ForElementType<int>)((longlong)FVar35 + (longlong)iVar15 * 4);
                        for (; FVar35 != FVar25;
                            FVar35 = (ForElementType<int>)((longlong)FVar35 + 4)) {
                          local_638[0] = *(int *)FVar35;
                          TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::
                          AddUniqueImpl<int_const_&>(&pFVar18->TagStringKeys,local_638);
                        }
                        FVar25 = *pFVar32;
                        if (FVar25 == (ForElementType<int>)0x0) {
                          FVar25 = (ForElementType<int>)(pFVar32 + -2);
                        }
                        iVar15 = *(int *)(pFVar32 + 1);
                        if ((iVar15 < 0) &&
                           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                               ("InCount >= 0",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                                ,0xeb,L""), bVar13)) {
                          pcVar10 = (code *)swi(3);
                          (*pcVar10)();
                          return;
                        }
                        FVar35 = (ForElementType<int>)((longlong)FVar25 + (longlong)iVar15 * 4);
                        pTVar38 = local_680;
                        pFVar26 = local_648;
                        plVar29 = local_618;
                        for (; local_680 = pTVar38, local_648 = pFVar26, local_618 = plVar29,
                            FVar25 != FVar35; FVar25 = (ForElementType<int>)((longlong)FVar25 + 4))
                        {
                          local_630[0] = *(int *)FVar25;
                          TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::
                          AddUniqueImpl<int_const_&>(&pFVar18->TagStringKeys,local_630);
                          pTVar38 = local_680;
                          pFVar26 = local_648;
                          plVar29 = local_618;
                        }
                        pFVar3 = pFVar32 + -3;
                        pFVar34 = pFVar34 + 1;
                        pFVar32 = pFVar32 + 0xd;
                        pFVar18->AllocatedPointProperties =
                             pFVar18->AllocatedPointProperties |
                             *(EPCGPointNativeProperties *)pFVar3 |
                             pFVar31->AllocatedPointProperties;
                      } while (pFVar34 != local_5e8);
                    }
                    pFVar31 = pFVar31 + 1;
                    plVar33 = local_610;
                    local_670 = pFVar31;
                  } while (pFVar31 != local_5f0);
                }
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_608);
                local_668 = local_668 + 1;
                lVar23 = (longlong)local_640 + 0x10;
                local_640 = (FPCGDataTypeIdentifier *)lVar23;
              } while ((int)local_668 < local_698);
            }
            lVar23 = local_5f8;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_600);
          } while ((int)local_678 < local_698);
        }
      }
      else if (local_648->DataMultiplicity == Pairwise) {
        iVar15 = 0;
        uVar27 = 0;
        if (local_698 < 1) {
LAB_1497f268d:
          `UPCGComputeKernel::ComputeDataDescFromPinProperties'::__l12::<lambda_3>::operator()
                    (&local_5c8,0);
        }
        else {
          lVar23 = 0;
          do {
            uVar16 = 0;
            if ((int)uVar27 < (int)local_688) {
              uVar16 = ~uVar27 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            FVar11.Data = local_690.Data;
            if ((*(longlong *)(local_690.Data + lVar23) == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar13)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            iVar14 = *(int *)(*(longlong *)(FVar11.Data + lVar23) + 8);
            if (iVar14 < 0) {
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L"");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
            }
            else if (iVar14 == 0) goto LAB_1497f268d;
            if (iVar14 < iVar15) {
              iVar14 = iVar15;
            }
            iVar15 = iVar14;
            uVar27 = uVar27 + 1;
            lVar23 = lVar23 + 0x10;
          } while ((int)uVar27 < local_698);
          `UPCGComputeKernel::ComputeDataDescFromPinProperties'::__l12::<lambda_3>::operator()
                    (&local_5c8,iVar15);
        }
      }
      else {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("!\"Enclosing block should never be called\"",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGComputeKernel.cpp"
                            ,0x1fb,L"");
        if (bVar13) goto code_r0x0001497f26f7;
      }
    }
    else if (local_648->DataCountMode == Fixed) {
      `UPCGComputeKernel::ComputeDataDescFromPinProperties'::__l12::<lambda_3>::operator()
                (&local_5c8,local_648->DataCount);
    }
    else {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("!\"Enclosing block should never be called\"",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGComputeKernel.cpp"
                          ,0x204,L"");
      if (bVar13) {
code_r0x0001497f26f7:
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    pTVar38 = local_680;
    iVar15 = 1;
    if ((local_660->PropertiesGPU).ElementCountMode != Fixed) {
      iVar15 = 1;
      if (1 < (local_660->PropertiesGPU).ElementCountMultiplier) {
        iVar15 = (local_660->PropertiesGPU).ElementCountMultiplier;
      }
    }
    auVar40._4_4_ = iVar15;
    auVar40._0_4_ = iVar15;
    auVar40._8_4_ = iVar15;
    auVar40._12_4_ = iVar15;
    if ((local_680->Object == (FPCGDataCollectionDesc *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar6 = __isa_available;
    pFVar8 = pTVar38->Object;
    iVar14 = (pFVar8->DataDescs).ArrayNum;
    pFVar30 = (pFVar8->DataDescs).AllocatorInstance.Data;
    pFVar37 = pFVar30 + (longlong)iVar14 * 0x68;
    while( true ) {
      if ((pFVar8->DataDescs).ArrayNum != iVar14) {
        `TCheckedPointerIterator<FPCGDataDesc,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_673);
      }
      if (pFVar30 == pFVar37) break;
      lVar23 = 0;
      if (iVar6 < 2) {
        do {
          *(int *)(pFVar30 + lVar23 * 4 + 0x18) = iVar15 * *(int *)(pFVar30 + lVar23 * 4 + 0x18);
          lVar23 = lVar23 + 1;
        } while (lVar23 < 4);
        pFVar30 = pFVar30 + 0x68;
      }
      else {
        auVar39 = pmulld(*(undefined1 (*) [16])(pFVar30 + 0x18),auVar40);
        *(undefined1 (*) [16])(pFVar30 + 0x18) = auVar39;
        pFVar30 = pFVar30 + 0x68;
      }
    }
    DestructItems<TSharedPtr<FPCGDataCollectionDesc_const_,1>,int>
              ((TSharedPtr<FPCGDataCollectionDesc_const_,1> *)local_690.Data,(int)local_688);
    param_4 = local_680;
    if ((TSharedPtr<FPCGDataCollectionDesc_const_,1> *)local_690.Data !=
        (TSharedPtr<FPCGDataCollectionDesc_const_,1> *)0x0) {
      FMemory::Free(local_690.Data);
    }
    if (local_658.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_658.Data);
    }
  }
  else if (EVar4 == Custom) {
    iVar15 = 0;
    if (0 < (local_660->PropertiesGPU).DataCount) {
      plVar33 = &local_660->_padding_;
      do {
        pFVar17 = FPCGDataTypeIdentifier::operator&
                            ((FPCGDataTypeIdentifier *)plVar33,&local_580,BaseTexture);
        bVar13 = FPCGDataTypeIdentifier::operator!(pFVar17);
        if (local_580.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_580.Ids.AllocatorInstance.Data);
        }
        if (bVar13) {
          if ((param_4->Object == (FPCGDataCollectionDesc *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar13)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pFVar8 = param_4->Object;
          piVar1 = &(pFVar8->DataDescs).ArrayMax;
          iVar14 = (pFVar8->DataDescs).ArrayNum;
          if (iVar14 == *piVar1) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x868,(ForAnyElementType *)pFVar8,piVar1);
          }
          (pFVar8->DataDescs).ArrayNum = iVar14 + 1;
          pFVar30 = (pFVar8->DataDescs).AllocatorInstance.Data;
          iVar6 = (pFVar12->PropertiesGPU).ElementCount;
          pFVar17 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier
                              (&local_268,(FPCGDataTypeIdentifier *)plVar33);
          FPCGDataDesc::FPCGDataDesc
                    ((FPCGDataDesc *)(pFVar30 + (longlong)iVar14 * 0x68),pFVar17,iVar6);
        }
        else {
          if ((param_4->Object == (FPCGDataCollectionDesc *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar13)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pFVar8 = param_4->Object;
          piVar1 = &(pFVar8->DataDescs).ArrayMax;
          iVar14 = (pFVar8->DataDescs).ArrayNum;
          if (iVar14 == *piVar1) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x868,(ForAnyElementType *)pFVar8,piVar1);
          }
          (pFVar8->DataDescs).ArrayNum = iVar14 + 1;
          pFVar30 = (pFVar8->DataDescs).AllocatorInstance.Data;
          TVar9 = (pFVar12->PropertiesGPU).NumElements2D.field0_0x0._s_0;
          pFVar17 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier
                              (&local_250,(FPCGDataTypeIdentifier *)plVar33);
          FPCGDataDesc::FPCGDataDesc
                    ((FPCGDataDesc *)(pFVar30 + (longlong)iVar14 * 0x68),pFVar17,
                     (TIntPoint<int>)TVar9);
        }
        iVar15 = iVar15 + 1;
        param_4 = local_680;
      } while (iVar15 < (pFVar12->PropertiesGPU).DataCount);
    }
  }
  else {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("!\"Enclosing block should never be called\"",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGComputeKernel.cpp"
                        ,0x226,L"");
    if (bVar13) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return;
}

// ComputeOutputBindingDataDesc @ 1497f34c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSharedPtr<FPCGDataCollectionDesc_const_,1> * __thiscall
UPCGComputeKernel::ComputeOutputBindingDataDesc
          (UPCGComputeKernel *this,
          TSharedPtr<FPCGDataCollectionDesc_const_,1> *__return_storage_ptr__,FName param_1,
          UPCGDataBinding *param_2)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Compute\\PCGComputeKernel.h"
             ,0x9d,L"Pure virtual not implemented (%s)");
  __return_storage_ptr__->Object = (FPCGDataCollectionDesc *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// ComputeThreadCount @ 1497f5800

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
UPCGComputeKernel::ComputeThreadCount(UPCGComputeKernel *this,UPCGDataBinding *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Compute\\PCGComputeKernel.h"
             ,0xa0,L"Pure virtual not implemented (%s)");
  return 0;
}

// GetInputPins @ 1498150f0

void __thiscall
UPCGComputeKernel::GetInputPins
          (UPCGComputeKernel *this,TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// GetInputPinsAndOverridablePins @ 149815330

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

void __thiscall
UPCGComputeKernel::GetInputPinsAndOverridablePins
          (UPCGComputeKernel *this,TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FText *pFVar4;
  FPCGDataTypeIdentifier *pFVar5;
  FPCGPinProperties *pFVar6;
  FName *pFVar7;
  FName *pFVar8;
  undefined1 local_res8 [8];
  FPCGDataTypeIdentifier local_48;
  
  (**(code **)(this->_padding_ + 0x308))();
  iVar1 = (this->CachedOverridableParams).ArrayNum;
  pFVar7 = (FName *)(this->CachedOverridableParams).AllocatorInstance.Data;
  pFVar8 = pFVar7 + (longlong)iVar1 * 4;
  while( true ) {
    if ((this->CachedOverridableParams).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FPCGKernelOverridableParam_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar8) break;
    if (*(char *)((longlong)&pFVar7[3].ComparisonIndex.Value + 1) != '\0') {
      iVar3 = param_1->ArrayNum;
      if (iVar3 == param_1->ArrayMax) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar3 + 1;
      pFVar2 = (param_1->AllocatorInstance).Data;
      pFVar4 = FText::GetEmpty();
      pFVar5 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_48,Param);
      pFVar6 = FPCGPinProperties::FPCGPinProperties
                         ((FPCGPinProperties *)(pFVar2 + (longlong)iVar3 * 0x30),pFVar7,pFVar5,false
                          ,false,pFVar4);
      pFVar6->PinStatus = OverrideOrUserParam;
    }
    pFVar7 = pFVar7 + 4;
  }
  return;
}

// GetKernelAttributeKeys @ 1498154d0

void __thiscall
UPCGComputeKernel::GetKernelAttributeKeys
          (UPCGComputeKernel *this,
          TArray<FPCGKernelAttributeKey,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// GetOutputPins @ 1498167e0

void __thiscall
UPCGComputeKernel::GetOutputPins
          (UPCGComputeKernel *this,TArray<FPCGPinPropertiesGPU,TSizedDefaultAllocator<32>_> *param_1
          )

{
  return;
}

// GetOverridableParamPins @ 1498169c0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

void __thiscall
UPCGComputeKernel::GetOverridableParamPins
          (UPCGComputeKernel *this,TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FText *pFVar4;
  FPCGDataTypeIdentifier *pFVar5;
  FPCGPinProperties *pFVar6;
  FName *pFVar7;
  FName *pFVar8;
  undefined1 local_res8 [8];
  FPCGDataTypeIdentifier local_48;
  
  iVar1 = (this->CachedOverridableParams).ArrayNum;
  pFVar7 = (FName *)(this->CachedOverridableParams).AllocatorInstance.Data;
  pFVar8 = pFVar7 + (longlong)iVar1 * 4;
  while( true ) {
    if ((this->CachedOverridableParams).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FPCGKernelOverridableParam_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar8) break;
    if (*(char *)((longlong)&pFVar7[3].ComparisonIndex.Value + 1) != '\0') {
      iVar3 = param_1->ArrayNum;
      if (iVar3 == param_1->ArrayMax) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar3 + 1;
      pFVar2 = (param_1->AllocatorInstance).Data;
      pFVar4 = FText::GetEmpty();
      pFVar5 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_48,Param);
      pFVar6 = FPCGPinProperties::FPCGPinProperties
                         ((FPCGPinProperties *)(pFVar2 + (longlong)iVar3 * 0x30),pFVar7,pFVar5,false
                          ,false,pFVar4);
      pFVar6->PinStatus = OverrideOrUserParam;
    }
    pFVar7 = pFVar7 + 4;
  }
  return;
}

// GetPrivateStaticClass @ 149817450

UClass * __cdecl UPCGComputeKernel::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGComputeKernel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGComputeKernel",
               &Z_Registration_Info_UClass_UPCGComputeKernel.InnerSingleton,
               StaticRegisterNativesUPCGComputeKernel,0x98,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGComputeKernel>,
               InternalVTableHelperCtorCaller<UPCGComputeKernel>,local_res8,
               UComputeKernel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGComputeKernel.InnerSingleton;
}

// GetSettings @ 14981b730

UPCGSettings * __thiscall UPCGComputeKernel::GetSettings(UPCGComputeKernel *this)

{
  int iVar1;
  UPCGSettings *pUVar2;
  UClass *pUVar3;
  FGCScopeGuard local_res8 [8];
  
  if ((this->ResolvedSettings).field0_0x0.DebugPtr != (UPCGSettings *)0x0) {
    return (this->ResolvedSettings).field0_0x0.DebugPtr;
  }
  FGCScopeGuard::FGCScopeGuard(local_res8);
  pUVar2 = (UPCGSettings *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->SettingsPath);
  if (pUVar2 != (UPCGSettings *)0x0) {
    pUVar3 = Z_Construct_UClass_UPCGSettings_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_14981b788;
  }
  pUVar2 = (UPCGSettings *)0x0;
LAB_14981b788:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UPCGSettings *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->ResolvedSettings).field0_0x0.DebugPtr = pUVar2;
  FGCScopeGuard::~FGCScopeGuard(local_res8);
  return (this->ResolvedSettings).field0_0x0.DebugPtr;
}

// IsKernelDataValid @ 1498204f0

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
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall UPCGComputeKernel::IsKernelDataValid(UPCGComputeKernel *this,FPCGContext *param_1)

{
  int iVar1;
  UPCGDataBinding *this_00;
  UPCGComputeGraph *this_01;
  ITextData *pIVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  longlong lVar8;
  UClass *pUVar9;
  UPCGPin *pUVar10;
  FText *pFVar11;
  FText *pFVar12;
  FTextFormat *pFVar13;
  UPCGSettings *pUVar14;
  FString *pFVar15;
  wchar_t *pwVar16;
  ulonglong uVar17;
  FName *pFVar18;
  FPCGPinPropertiesGPU *pFVar19;
  UPCGNode *pUVar20;
  FName *pFVar21;
  FPCGPinPropertiesGPU *pFVar22;
  int *piVar23;
  uint uVar24;
  uint uVar25;
  bool bVar26;
  undefined1 auStackY_1d8 [32];
  undefined1 local_198;
  undefined1 local_197 [7];
  FPCGPinPropertiesGPU *local_190;
  undefined8 local_188;
  FName *local_180;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_178;
  uint local_168;
  FPCGPinPropertiesGPU *local_160;
  FName local_158;
  UPCGNode *local_150;
  FPCGPinPropertiesGPU *local_148;
  UPCGComputeKernel *local_140;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> local_138;
  FPCGContext *local_128;
  FPCGKernelPin local_120;
  FTextFormat local_110;
  FText local_100;
  FText local_f0;
  FString local_e0;
  FText local_d0;
  FTextFormat local_c0;
  FFormatArgumentValue local_a8;
  undefined4 local_88;
  ulonglong local_80;
  longlong *local_78;
  undefined4 local_70;
  undefined4 local_68;
  ulonglong local_60;
  longlong *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  bVar26 = -1 < CpuChannel->Enabled;
  local_140 = this;
  local_128 = param_1;
  if (bVar26) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId137,"UPCGComputeKernel::IsKernelDataValid",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGComputeKernel.cpp"
               ,0x89);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId137);
  }
  if ((param_1 == (FPCGContext *)0x0) ||
     (cVar4 = (**(code **)(param_1->_padding_ + 0x10))(param_1), cVar4 == '\0')) goto LAB_1498209fc;
  lVar8 = (**(code **)(this->_padding_ + 0x2b0))(this);
  if (lVar8 == 0) {
    pFVar15 = GetTypeName<UPCGSettings>(&local_e0);
    if ((pFVar15->Data).ArrayNum == 0) {
      pwVar16 = L"";
    }
    else {
      pwVar16 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar16);
  }
  pUVar20 = *(UPCGNode **)(lVar8 + 0x20);
  if (pUVar20 == (UPCGNode *)0x0) {
LAB_1498205e5:
    local_150 = (UPCGNode *)0x0;
    pUVar20 = (UPCGNode *)0x0;
  }
  else {
    local_150 = pUVar20;
    pUVar9 = Z_Construct_UClass_UPCGNode_NoRegister();
    iVar1 = (int)pUVar9->_padding_;
    if ((*(int *)(pUVar20->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar20->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar9->_padding_)) goto LAB_1498205e5;
  }
  this_00 = (UPCGDataBinding *)param_1[1]._padding_;
  if ((this_00 != (UPCGDataBinding *)0x0) && (pUVar20 != (UPCGNode *)0x0)) {
    local_190 = (FPCGPinPropertiesGPU *)0x0;
    local_188 = 0;
    (**(code **)(this->_padding_ + 0x310))(this,&local_190);
    uVar17 = (ulonglong)(int)(uint)local_188;
    local_168 = (uint)local_188;
    piVar23 = &(local_190->PropertiesGPU).PinsToInititalizeFrom.ArrayNum;
    pFVar19 = local_190 + uVar17;
    pFVar22 = local_190;
    local_148 = pFVar19;
    while( true ) {
      local_160 = pFVar22;
      if ((uint)local_188 != (int)uVar17) {
        local_198 = 0;
        `TCheckedPointerIterator<FPCGPinPropertiesGPU,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_198);
      }
      if (pFVar22 == pFVar19) break;
      if ((((char)piVar23[-4] == '\0') && ((char)piVar23[2] == '\0')) &&
         (*(char *)((longlong)piVar23 + 9) == '\0')) {
        pFVar18 = (FName *)(((TArray<FName,TSizedDefaultAllocator<32>_> *)(piVar23 + -2))->
                           AllocatorInstance).Data;
        uVar24 = 0xffffffff;
        iVar1 = *piVar23;
        pFVar21 = pFVar18 + iVar1;
        local_180 = pFVar21;
        do {
          while( true ) {
            if (*piVar23 != iVar1) {
              local_197[0] = 0;
              `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_197);
            }
            pFVar19 = local_148;
            pFVar22 = local_160;
            if (pFVar18 == pFVar21) goto LAB_1498209ce;
            local_158 = *pFVar18;
            pUVar10 = UPCGNode::GetInputPin(local_150,&local_158);
            if (pUVar10 != (UPCGPin *)0x0) break;
LAB_1498209b3:
            pFVar18 = pFVar18 + 1;
          }
          this_01 = (this_00->Graph).field0_0x0.DebugPtr;
          if (this_01 != (UPCGComputeGraph *)0x0) {
            local_120.bIsInput = true;
            local_120.KernelIndex = local_140->KernelIndex;
            local_120.PinLabel = local_158;
            iVar7 = UPCGComputeGraph::GetBindingIndex(this_01,&local_120);
            UPCGDataBinding::GetCachedKernelPinDataDesc(this_00,&local_138,iVar7);
            uVar25 = uVar24;
            if (local_138.Object != (FPCGDataCollectionDesc *)0x0) {
              uVar25 = ((local_138.Object)->DataDescs).ArrayNum;
              uVar17 = (ulonglong)uVar25;
              if (((int)uVar25 < 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("InCount >= 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0xeb,L""), bVar5)) {
                pcVar3 = (code *)swi(3);
                uVar6 = (*pcVar3)();
                return (bool)uVar6;
              }
              if (uVar25 < 2) {
                bVar5 = uVar25 == 0;
                uVar25 = uVar24;
                if (bVar5) {
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(local_138.SharedReferenceCount.ReferenceController)
                  ;
                  pFVar19 = local_148;
                  pFVar22 = local_160;
                  break;
                }
              }
              else if ((uVar24 != 0xffffffff) && (bVar5 = uVar25 != uVar24, uVar25 = uVar24, bVar5))
              {
                pFVar11 = FText::FromName(&local_d0,&local_158);
                pFVar12 = FText::AsLocalizable_Advanced_LocText
                                    (&local_f0,L"PCGComputeKernel",L"NumDataMismatch",
                                     L"Number of data found on input pin \'{0}\' ({1}), mismatches with number of data found on another input pin ({2}). Pairwise data multiplicity only supports N:N, 1:N and N:1 operation."
                                    );
                pFVar13 = FTextFormat::FTextFormat(&local_c0,pFVar12,Default);
                local_a8.Type = Text;
                FText::FText((FText *)&local_a8.TextValue,pFVar11);
                if ((local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0
                    ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                            ("IsSet()",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                             ,0xbd,
                                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                            ), bVar5)) {
                  pcVar3 = (code *)swi(3);
                  uVar6 = (*pcVar3)();
                  return (bool)uVar6;
                }
                local_60 = (ulonglong)uVar24;
                local_78 = (longlong *)0x0;
                local_70 = 0;
                local_58 = (longlong *)0x0;
                local_50 = 0;
                local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_88 = 1;
                local_68 = 1;
                local_178.ArrayNum = 3;
                local_80 = uVar17;
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x20,8,3,0,&local_178.AllocatorInstance,3,&local_178.ArrayMax);
                ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                          (local_178.AllocatorInstance.Data,&local_a8,3);
                local_110.TextFormatData.Object = (pFVar13->TextFormatData).Object;
                local_110.TextFormatData.SharedReferenceCount.ReferenceController =
                     (pFVar13->TextFormatData).SharedReferenceCount.ReferenceController;
                if (local_110.TextFormatData.SharedReferenceCount.ReferenceController !=
                    (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  (local_110.TextFormatData.SharedReferenceCount.ReferenceController)->
                  SharedReferenceCount =
                       (atomic<int>)
                       ((int)(local_110.TextFormatData.SharedReferenceCount.ReferenceController)->
                             SharedReferenceCount + 1);
                  UNLOCK();
                }
                FText::Format(&local_100,&local_110,&local_178);
                DestructItems<FFormatArgumentValue,int>
                          ((FFormatArgumentValue *)local_178.AllocatorInstance.Data,
                           local_178.ArrayNum);
                if ((FFormatArgumentValue *)local_178.AllocatorInstance.Data !=
                    (FFormatArgumentValue *)0x0) {
                  FMemory::Free(local_178.AllocatorInstance.Data);
                }
                if (local_58 != (longlong *)0x0) {
                  (**(code **)(*local_58 + 0x10))();
                }
                if (local_78 != (longlong *)0x0) {
                  (**(code **)(*local_78 + 0x10))();
                }
                if (local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0)
                {
                  (**(code **)((longlong)
                               *(ITextData *)
                                local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))
                            ();
                }
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          ((pFVar13->TextFormatData).SharedReferenceCount.ReferenceController);
                pIVar2 = (pFVar11->TextData).Reference;
                if (pIVar2 != (ITextData *)0x0) {
                  (**(code **)((longlong)*pIVar2 + 0x10))();
                }
                pUVar14 = (UPCGSettings *)(**(code **)(local_140->_padding_ + 0x2b0))();
                PCGComputeHelpers::LogKernelError(local_128,pUVar14,&local_100);
                if (local_100.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_100.TextData.Reference + 0x10))();
                }
                if (local_f0.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_f0.TextData.Reference + 0x10))();
                }
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_138.SharedReferenceCount.ReferenceController);
                DestructItems<FPCGPinPropertiesGPU,int>(local_190,(uint)local_188);
                if (local_190 != (FPCGPinPropertiesGPU *)0x0) {
                  FMemory::Free(local_190);
                }
                bVar5 = false;
                goto LAB_1498209ff;
              }
            }
            pFVar21 = local_180;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_138.SharedReferenceCount.ReferenceController);
            uVar24 = uVar25;
            goto LAB_1498209b3;
          }
          bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<9049822076394799271>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\PCGDataBinding.cpp"
                             ,0xa7,"Graph");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          local_138.Object = (FPCGDataCollectionDesc *)0x0;
          local_138.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          pFVar18 = pFVar18 + 1;
        } while( true );
      }
LAB_1498209ce:
      uVar17 = (ulonglong)local_168;
      pFVar22 = pFVar22 + 1;
      piVar23 = piVar23 + 0x1e;
    }
    DestructItems<FPCGPinPropertiesGPU,int>(local_190,(uint)local_188);
    if (local_190 != (FPCGPinPropertiesGPU *)0x0) {
      FMemory::Free(local_190);
    }
  }
LAB_1498209fc:
  bVar5 = true;
LAB_1498209ff:
  if (bVar26) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar5;
}

// StaticRegisterNativesUPCGComputeKernel @ 149847190

void __cdecl UPCGComputeKernel::StaticRegisterNativesUPCGComputeKernel(void)

{
  return;
}

