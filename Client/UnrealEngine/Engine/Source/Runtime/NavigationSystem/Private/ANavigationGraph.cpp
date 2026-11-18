// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 6

// StaticClass @ 146d636c0

UClass * __cdecl ANavigationGraph::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ANavigationGraph.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavigationGraph",
               &Z_Registration_Info_UClass_ANavigationGraph.InnerSingleton,
               StaticRegisterNativesANavigationGraph,0x518,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig|CLASS_Abstract,CASTCLASS_None,
               L"Engine",InternalConstructor<ANavigationGraph>,
               InternalVTableHelperCtorCaller<ANavigationGraph>,local_res8,
               ANavigationData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ANavigationGraph.InnerSingleton;
}

// ANavigationGraph @ 146d72500

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ANavigationGraph * __thiscall
ANavigationGraph::ANavigationGraph(ANavigationGraph *this,FVTableHelper *param_1)

{
  ANavigationData::ANavigationData((ANavigationData *)this,param_1);
  *(undefined ***)this = &_vftable__for__AActor__;
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__INavigationDataInterface__;
  return this;
}

// ANavigationGraph @ 146d72540

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ANavigationGraph * __thiscall
ANavigationGraph::ANavigationGraph(ANavigationGraph *this,FObjectInitializer *param_1)

{
  code *pcVar1;
  bool bVar2;
  FNavGraphGenerator *pFVar3;
  ANavigationGraph *pAVar4;
  TRawPtrProxy<FNavGraphGenerator> local_res8;
  
  ANavigationData::ANavigationData((ANavigationData *)this,param_1);
  *(undefined ***)this = &_vftable__for__AActor__;
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__INavigationDataInterface__;
  if ((*(uint *)&this->field_0x8 & 0x10) == 0) {
    pFVar3 = ::operator_new(0x50);
    if (pFVar3 != (FNavGraphGenerator *)0x0) {
      pFVar3->_padding_ = (longlong)&___7FNavGraphGenerator__6B_;
      pFVar3->_padding_ = 0;
      pFVar3->_padding_ = 0;
      (pFVar3->InclusionVolumes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar3->InclusionVolumes).ArrayNum = 0;
      (pFVar3->InclusionVolumes).ArrayMax = 0;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pFVar3->GraphChangingLock,4000);
      if ((((pFVar3->_padding_ != 0) && (pFVar3->_padding_ != 0)) &&
          (0 < *(int *)(pFVar3->_padding_ + 8))) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InObject || !InObject->DoesSharedInstanceExist()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x7a5,L"Trying to share an already-shared object"), bVar2)) {
        pcVar1 = (code *)swi(3);
        pAVar4 = (ANavigationGraph *)(*pcVar1)();
        return pAVar4;
      }
    }
    local_res8.Object = pFVar3;
    TSharedPtr<FNavDataGenerator,1>::operator=<FNavGraphGenerator>
              ((TSharedPtr<FNavDataGenerator,1> *)&this->field_0x398,&local_res8);
  }
  return this;
}

// ~ANavigationGraph @ 146d780c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ANavigationGraph::~ANavigationGraph(ANavigationGraph *this)

{
  *(undefined ***)this = &_vftable__for__AActor__;
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__INavigationDataInterface__;
  ANavigationData::~ANavigationData((ANavigationData *)this);
  return;
}

// GetPrivateStaticClass @ 146d9fd90

UClass * __cdecl ANavigationGraph::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ANavigationGraph.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavigationGraph",
               &Z_Registration_Info_UClass_ANavigationGraph.InnerSingleton,
               StaticRegisterNativesANavigationGraph,0x518,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig|CLASS_Abstract,CASTCLASS_None,
               L"Engine",InternalConstructor<ANavigationGraph>,
               InternalVTableHelperCtorCaller<ANavigationGraph>,local_res8,
               ANavigationData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ANavigationGraph.InnerSingleton;
}

// StaticRegisterNativesANavigationGraph @ 146dba8d0

void __cdecl ANavigationGraph::StaticRegisterNativesANavigationGraph(void)

{
  return;
}

