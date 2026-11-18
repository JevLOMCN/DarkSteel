// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FieldSystemEngine
// Functions: 7

// StaticClass @ 1463247f0

UClass * __cdecl AFieldSystemActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AFieldSystemActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FieldSystemEngine",L"FieldSystemActor",
               &Z_Registration_Info_UClass_AFieldSystemActor.InnerSingleton,
               StaticRegisterNativesAFieldSystemActor,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AFieldSystemActor>,
               InternalVTableHelperCtorCaller<AFieldSystemActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AFieldSystemActor.InnerSingleton;
}

// AFieldSystemActor @ 14632a5e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AFieldSystemActor * __thiscall
AFieldSystemActor::AFieldSystemActor(AFieldSystemActor *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AFieldSystemActor__6B_;
  (this->FieldSystemComponent).field0_0x0.DebugPtr = (UFieldSystemComponent *)0x0;
  return this;
}

// AFieldSystemActor @ 14632a620

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AFieldSystemActor * __thiscall
AFieldSystemActor::AFieldSystemActor(AFieldSystemActor *this,FObjectInitializer *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UFieldSystemComponent *pUVar4;
  FName local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AFieldSystemActor__6B_;
  (this->FieldSystemComponent).field0_0x0.DebugPtr = (UFieldSystemComponent *)0x0;
  if (4 < (byte)AFA_Log._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&AFA_Log);
  }
  pFVar2 = ::FName::FName(&local_res8,L"FieldSystemComponent");
  FVar1 = *pFVar2;
  pUVar3 = UFieldSystemComponent::StaticClass();
  pUVar4 = (UFieldSystemComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UFieldSystemComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->FieldSystemComponent).field0_0x0.DebugPtr = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UFieldSystemComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  this->_padding_ = (longlong)(this->FieldSystemComponent).field0_0x0;
  return this;
}

// ~AFieldSystemActor @ 14632b580

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AFieldSystemActor::~AFieldSystemActor(AFieldSystemActor *this)

{
  this->_padding_ = (longlong)&___7AFieldSystemActor__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 14632f780

UClass * __cdecl AFieldSystemActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AFieldSystemActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FieldSystemEngine",L"FieldSystemActor",
               &Z_Registration_Info_UClass_AFieldSystemActor.InnerSingleton,
               StaticRegisterNativesAFieldSystemActor,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AFieldSystemActor>,
               InternalVTableHelperCtorCaller<AFieldSystemActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AFieldSystemActor.InnerSingleton;
}

// OnConstruction @ 146333200

/* WARNING: Type propagation algorithm not settling */

void __thiscall
AFieldSystemActor::OnConstruction(AFieldSystemActor *this,TTransform<double> *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  UFieldSystemComponent *pUVar4;
  UFieldSystem *pUVar5;
  FFieldSystemCommand *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  byte bVar12;
  
  pUVar4 = (this->FieldSystemComponent).field0_0x0.DebugPtr;
  if (pUVar4 != (UFieldSystemComponent *)0x0) {
    pUVar5 = (pUVar4->FieldSystem).field0_0x0.DebugPtr;
    if (pUVar5 != (UFieldSystem *)0x0) {
      iVar2 = (pUVar4->SetupConstructionFields).ArrayNum;
      iVar3 = (pUVar5->Commands).ArrayNum;
      if (iVar3 == iVar2) {
        uVar11 = 0;
        bVar12 = 1;
        if (0 < iVar3) {
          do {
            if (bVar12 == 0) goto LAB_1463333af;
            uVar10 = 0;
            if ((int)uVar11 < (pUVar5->Commands).ArrayNum) {
              uVar10 = ~uVar11 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar7 = (pUVar5->Commands).AllocatorInstance.Data;
            uVar10 = 0;
            if ((int)uVar11 < (pUVar4->SetupConstructionFields).ArrayNum) {
              uVar10 = ~uVar11 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            bVar9 = FFieldSystemCommand::operator==
                              ((FFieldSystemCommand *)(pFVar7 + (longlong)(int)uVar11 * 200),
                               (FFieldSystemCommand *)
                               ((pUVar4->SetupConstructionFields).AllocatorInstance.Data +
                               (longlong)(int)uVar11 * 200));
            bVar12 = bVar12 & bVar9;
            uVar11 = uVar11 + 1;
          } while ((int)uVar11 < (pUVar5->Commands).ArrayNum);
          if (bVar12 == 0) {
LAB_1463333af:
            TArray<FFieldSystemCommand,TSizedDefaultAllocator<32>_>::operator=
                      (&pUVar5->Commands,&pUVar4->SetupConstructionFields);
          }
        }
      }
      else if (iVar2 == 0) {
        piVar1 = &(pUVar5->Commands).ArrayMax;
        pFVar6 = (FFieldSystemCommand *)(pUVar5->Commands).AllocatorInstance.Data;
        if ((pUVar5->Commands).ArrayMax < 0) {
          DestructItems<FFieldSystemCommand,int>(pFVar6,iVar3);
          (pUVar5->Commands).ArrayNum = 0;
          if (*piVar1 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (200,8,0,&(pUVar5->Commands).AllocatorInstance,0,piVar1);
          }
        }
        else {
          DestructItems<FFieldSystemCommand,int>(pFVar6,iVar3);
          (pUVar5->Commands).ArrayNum = 0;
        }
      }
      else {
        TArray<FFieldSystemCommand,TSizedDefaultAllocator<32>_>::operator=
                  (&pUVar5->Commands,&pUVar4->SetupConstructionFields);
      }
    }
    FFieldObjectCommands::operator=(&pUVar4->ConstructionCommands,&pUVar4->BufferCommands);
    FFieldObjectCommands::ResetFieldCommands(&pUVar4->BufferCommands);
  }
  return;
}

// StaticRegisterNativesAFieldSystemActor @ 1463340a0

void __cdecl AFieldSystemActor::StaticRegisterNativesAFieldSystemActor(void)

{
  return;
}

