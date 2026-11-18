// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FunctionalTesting
// Functions: 12

// StaticClass @ 148c77400

UClass * __cdecl AFunctionalAITest::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AFunctionalAITest.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FunctionalTesting",L"FunctionalAITest",
               &Z_Registration_Info_UClass_AFunctionalAITest.InnerSingleton,
               StaticRegisterNativesAFunctionalAITest,0x4f8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AFunctionalAITest>,
               InternalVTableHelperCtorCaller<AFunctionalAITest>,local_res8,
               AFunctionalAITestBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AFunctionalAITest.InnerSingleton;
}

// AFunctionalAITest @ 148c7e2e0

AFunctionalAITest * __thiscall
AFunctionalAITest::AFunctionalAITest(AFunctionalAITest *this,FVTableHelper *param_1)

{
  AFunctionalAITestBase::AFunctionalAITestBase((AFunctionalAITestBase *)this,param_1);
  this->_padding_ = (longlong)&___7AFunctionalAITest__6B_;
  (this->SpawnSets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpawnSets).ArrayNum = 0;
  (this->SpawnSets).ArrayMax = 0;
  return this;
}

// AFunctionalAITest @ 148c7e320

AFunctionalAITest * __thiscall
AFunctionalAITest::AFunctionalAITest(AFunctionalAITest *this,FObjectInitializer *param_1)

{
  AFunctionalAITestBase::AFunctionalAITestBase((AFunctionalAITestBase *)this,param_1);
  this->_padding_ = (longlong)&___7AFunctionalAITest__6B_;
  (this->SpawnSets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpawnSets).ArrayNum = 0;
  (this->SpawnSets).ArrayMax = 0;
  return this;
}

// ~AFunctionalAITest @ 148c80810

void __thiscall AFunctionalAITest::~AFunctionalAITest(AFunctionalAITest *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7AFunctionalAITest__6B_;
  DestructItems<FAITestSpawnSet,int>
            ((FAITestSpawnSet *)(this->SpawnSets).AllocatorInstance.Data,(this->SpawnSets).ArrayNum)
  ;
  pFVar1 = (this->SpawnSets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  AFunctionalAITestBase::~AFunctionalAITestBase((AFunctionalAITestBase *)this);
  return;
}

// ForEachSpawnSet @ 148c8f070

void __thiscall
AFunctionalAITest::ForEachSpawnSet
          (AFunctionalAITest *this,TFunctionRef<void___cdecl(FAITestSpawnSetBase_&)> *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (0 < (this->SpawnSets).ArrayNum) {
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->SpawnSets).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      (**(code **)param_1)
                (*(undefined8 *)&param_1->field_0x8,
                 (this->SpawnSets).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x30);
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (this->SpawnSets).ArrayNum);
  }
  return;
}

// ForEachSpawnSet @ 148c8f120

void __thiscall
AFunctionalAITest::ForEachSpawnSet
          (AFunctionalAITest *this,TFunctionRef<void___cdecl(FAITestSpawnSetBase_const_&)> *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (0 < (this->SpawnSets).ArrayNum) {
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->SpawnSets).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      (**(code **)param_1)
                (*(undefined8 *)&param_1->field_0x8,
                 (this->SpawnSets).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x30);
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (this->SpawnSets).ArrayNum);
  }
  return;
}

// GetPrivateStaticClass @ 148c91080

UClass * __cdecl AFunctionalAITest::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AFunctionalAITest.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FunctionalTesting",L"FunctionalAITest",
               &Z_Registration_Info_UClass_AFunctionalAITest.InnerSingleton,
               StaticRegisterNativesAFunctionalAITest,0x4f8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AFunctionalAITest>,
               InternalVTableHelperCtorCaller<AFunctionalAITest>,local_res8,
               AFunctionalAITestBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AFunctionalAITest.InnerSingleton;
}

// GetSpawnSet @ 148c92510

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FAITestSpawnSetBase * __thiscall AFunctionalAITest::GetSpawnSet(AFunctionalAITest *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FAITestSpawnSetBase *pFVar4;
  
  if ((-1 < param_1) && (param_1 < (this->SpawnSets).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->SpawnSets).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FAITestSpawnSetBase *)(*pcVar1)();
        return pFVar4;
      }
    }
    return (FAITestSpawnSetBase *)
           ((this->SpawnSets).AllocatorInstance.Data + (longlong)param_1 * 0x30);
  }
  return (FAITestSpawnSetBase *)0x0;
}

// GetSpawnSet @ 148c925b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FAITestSpawnSetBase * __thiscall AFunctionalAITest::GetSpawnSet(AFunctionalAITest *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FAITestSpawnSetBase *pFVar4;
  
  if ((-1 < param_1) && (param_1 < (this->SpawnSets).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->SpawnSets).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FAITestSpawnSetBase *)(*pcVar1)();
        return pFVar4;
      }
    }
    return (FAITestSpawnSetBase *)
           ((this->SpawnSets).AllocatorInstance.Data + (longlong)param_1 * 0x30);
  }
  return (FAITestSpawnSetBase *)0x0;
}

// IsValidSpawnSetIndex @ 148c94270

bool __thiscall AFunctionalAITest::IsValidSpawnSetIndex(AFunctionalAITest *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < (this->SpawnSets).ArrayNum)) {
    return true;
  }
  return false;
}

// RemoveSpawnSetIfPredicate @ 148c97d00

void __thiscall
AFunctionalAITest::RemoveSpawnSetIfPredicate
          (AFunctionalAITest *this,TFunctionRef<bool___cdecl(FAITestSpawnSetBase_&)> *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  FScriptContainerElement *_Dst;
  longlong lVar9;
  
  bVar5 = false;
  uVar8 = (this->SpawnSets).ArrayNum - 1;
  if (-1 < (int)uVar8) {
    lVar9 = (longlong)(int)uVar8 * 0x30;
    do {
      uVar6 = 0;
      if ((int)uVar8 < (this->SpawnSets).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      cVar4 = (**(code **)param_1)
                        (*(undefined8 *)&param_1->field_0x8,
                         (this->SpawnSets).AllocatorInstance.Data + lVar9);
      if (cVar4 != '\0') {
        uVar6 = 0;
        if ((int)uVar8 < (this->SpawnSets).ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        _Dst = (this->SpawnSets).AllocatorInstance.Data + lVar9;
        if (*(void **)(_Dst + 0x20) != (void *)0x0) {
          FMemory::Free(*(void **)(_Dst + 0x20));
        }
        iVar7 = ~uVar8 + (this->SpawnSets).ArrayNum;
        if (iVar7 != 0) {
          memmove(_Dst,_Dst + 0x30,(longlong)iVar7 * 0x30);
        }
        piVar1 = &(this->SpawnSets).ArrayNum;
        *piVar1 = *piVar1 + -1;
        bVar5 = true;
      }
      lVar9 = lVar9 + -0x30;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
    if (bVar5) {
      iVar7 = (this->SpawnSets).ArrayNum;
      piVar1 = &(this->SpawnSets).ArrayMax;
      if (*piVar1 != iVar7) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,iVar7,&(this->SpawnSets).AllocatorInstance,iVar7,piVar1);
      }
    }
  }
  return;
}

// StaticRegisterNativesAFunctionalAITest @ 148c9d320

void __cdecl AFunctionalAITest::StaticRegisterNativesAFunctionalAITest(void)

{
  return;
}

