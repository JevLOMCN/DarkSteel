// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCOP
// Functions: 11

// StaticClass @ 14d364880

UClass * __cdecl UCustomizableObjectPopulationGenerator::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCustomizableObjectPopulationGenerator.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CustomizableObjectPopulation",L"CustomizableObjectPopulationGenerator",
               &Z_Registration_Info_UClass_UCustomizableObjectPopulationGenerator.InnerSingleton,
               StaticRegisterNativesUCustomizableObjectPopulationGenerator,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCustomizableObjectPopulationGenerator>,
               InternalVTableHelperCtorCaller<UCustomizableObjectPopulationGenerator>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCustomizableObjectPopulationGenerator.InnerSingleton;
}

// UCustomizableObjectPopulationGenerator @ 14d367aa0

UCustomizableObjectPopulationGenerator * __thiscall
UCustomizableObjectPopulationGenerator::UCustomizableObjectPopulationGenerator
          (UCustomizableObjectPopulationGenerator *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UCustomizableObjectPopulationGenerator__6B_;
  (this->PopulationObjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PopulationObjects).ArrayNum = 0;
  (this->PopulationObjects).ArrayMax = 0;
  (this->Private).Object = (FCustomizableObjectPopulationGeneratorPrivate *)0x0;
  (this->Private).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UCustomizableObjectPopulationGenerator @ 14d367ae0

UCustomizableObjectPopulationGenerator * __thiscall
UCustomizableObjectPopulationGenerator::UCustomizableObjectPopulationGenerator
          (UCustomizableObjectPopulationGenerator *this)

{
  FCustomizableObjectPopulationGeneratorPrivate *pFVar1;
  FCustomizableObjectPopulationGeneratorPrivate *pFVar2;
  TRawPtrProxy<FCustomizableObjectPopulationGeneratorPrivate> local_res8;
  
  UObject::UObject((UObject *)this);
  pFVar2 = (FCustomizableObjectPopulationGeneratorPrivate *)0x0;
  this->_padding_ = (longlong)&___7UCustomizableObjectPopulationGenerator__6B_;
  (this->PopulationObjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PopulationObjects).ArrayNum = 0;
  (this->PopulationObjects).ArrayMax = 0;
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FCustomizableObjectPopulationGeneratorPrivate *)0x0) {
    *(undefined4 *)&pFVar1->field_0x11 = 0;
    *(undefined2 *)&pFVar1->field_0x15 = 0;
    pFVar1->field_0x17 = 0;
    *(undefined8 *)&pFVar1->ClassSampler = 0;
    *(undefined8 *)&(pFVar1->ClassSampler).field_0x8 = 0;
    pFVar1->bPopulationCompiledForCook = false;
    (pFVar1->ClassGenerators).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->ClassGenerators).ArrayNum = 0;
    (pFVar1->ClassGenerators).ArrayMax = 0;
    pFVar2 = pFVar1;
  }
  local_res8.Object = pFVar2;
  TSharedPtr<FCustomizableObjectPopulationGeneratorPrivate,1>::
  TSharedPtr<FCustomizableObjectPopulationGeneratorPrivate,1><FCustomizableObjectPopulationGeneratorPrivate>
            (&this->Private,&local_res8);
  return this;
}

// ~UCustomizableObjectPopulationGenerator @ 14d367d80

void __thiscall
UCustomizableObjectPopulationGenerator::~UCustomizableObjectPopulationGenerator
          (UCustomizableObjectPopulationGenerator *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UCustomizableObjectPopulationGenerator__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Private).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->PopulationObjects).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// Generate @ 14d369020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UCustomizableObjectPopulationGenerator::Generate
          (UCustomizableObjectPopulationGenerator *this,int param_1,
          TArray<UCustomizableObjectInstance_*,TSizedDefaultAllocator<32>_> *param_2,int param_3)

{
  int *piVar1;
  UCustomizableObject *pUVar2;
  FCustomizableObjectPopulationGeneratorPrivate *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  UCustomizableObjectPopulationGenerator *pUVar6;
  TArray<UCustomizableObjectInstance_*,TSizedDefaultAllocator<32>_> *pTVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  UObject *pUVar11;
  UClass *pUVar12;
  longlong lVar13;
  longlong *plVar14;
  uint uVar15;
  ulonglong uVar16;
  FScriptContainerElement *pFVar17;
  longlong lVar18;
  uint uVar19;
  longlong lVar20;
  undefined1 auStackY_168 [32];
  undefined1 local_118 [4];
  uint local_114;
  ForAnyElementType local_110;
  int local_108;
  int local_104;
  undefined4 local_100;
  int local_fc;
  uint local_f8;
  FRandomStream local_f0;
  UCustomizableObjectPopulationGenerator *local_e8;
  FRandomStream local_e0;
  TArray<UCustomizableObjectInstance_*,TSizedDefaultAllocator<32>_> *local_d8;
  longlong local_d0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_f8 = param_1;
  local_e8 = this;
  local_d8 = param_2;
  if (((this->Private).Object == (FCustomizableObjectPopulationGeneratorPrivate *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Private",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\MutablePopulation\\Source\\CustomizableObjectPopulation\\Private\\MuCOP\\CustomizableObjectPopulationGenerator.cpp"
                         ,0xd7,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar15 = (this->PopulationObjects).ArrayNum;
  local_110.Data = (FScriptContainerElement *)0x0;
  local_104 = 0;
  local_100 = 0;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  local_108 = 0;
  if ((uVar15 != 0) &&
     (UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar15,&local_110,0,&local_104), 0 < (int)uVar15)) {
    uVar16 = (ulonglong)uVar15;
    do {
      if (((local_110.Data <= (FScriptContainerElement *)&local_100) &&
          ((FScriptContainerElement *)&local_100 < local_110.Data + (longlong)local_104 * 4)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (local_108 == local_104) {
        local_108 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_110,&local_104);
      }
      iVar10 = local_108 + 1;
      *(undefined4 *)(local_110.Data + (longlong)local_108 * 4) = local_100;
      uVar16 = uVar16 - 1;
      local_108 = iVar10;
    } while (uVar16 != 0);
  }
  pUVar6 = local_e8;
  uVar16 = (ulonglong)(uint)param_3;
  local_e0.InitialSeed = param_1;
  local_e0.Seed = param_1;
  if (0 < param_3) {
    do {
      if (((pUVar6->Private).Object == (FCustomizableObjectPopulationGeneratorPrivate *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar9 = CustomizableObjectPopulation::FDiscreteImportanceSampler::Sample
                        ((FDiscreteImportanceSampler *)(pUVar6->Private).Object,&local_e0);
      uVar19 = 0;
      if ((int)uVar9 < local_108) {
        uVar19 = ~uVar9 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(int *)(local_110.Data + (longlong)(int)uVar9 * 4) =
           *(int *)(local_110.Data + (longlong)(int)uVar9 * 4) + 1;
      uVar16 = uVar16 - 1;
      param_2 = local_d8;
    } while (uVar16 != 0);
  }
  piVar1 = &param_2->ArrayNum;
  if (param_2->ArrayNum == 0) {
    if (param_3 < 1) {
      if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_3);
      }
    }
    else {
      iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (8,8,param_3,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
      memset((param_2->AllocatorInstance).Data + (longlong)iVar10 * 8,0,(longlong)param_3 << 3);
    }
    pFVar17 = (param_2->AllocatorInstance).Data;
    iVar10 = *piVar1;
    pFVar4 = pFVar17 + (longlong)iVar10 * 8;
    while( true ) {
      if (*piVar1 != iVar10) {
        local_118[0] = 0;
        `TCheckedPointerIterator<UCustomizableObjectInstance_*,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_118);
      }
      if (pFVar17 == pFVar4) break;
      pUVar11 = GetTransientPackageAsObject();
      FObjectInitializer::AssertIfInConstructor
                (pUVar11,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar12 = Z_Construct_UClass_UCustomizableObjectInstance_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_c8,pUVar12);
      local_c8._8_8_ = pUVar11;
      pUVar11 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
      if (local_c8._64_8_ != 0) {
        plVar14 = (longlong *)(local_c8 + 0x50);
        if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
          plVar14 = (longlong *)local_c8._104_8_;
        }
        (**(code **)(*plVar14 + 0x10))();
      }
      *(UObject **)pFVar17 = pUVar11;
      pFVar17 = pFVar17 + 8;
    }
  }
  uVar19 = 0;
  local_114 = 0;
  local_d0 = (longlong)(int)uVar15;
  if (0 < (int)uVar15) {
    lVar20 = 0;
    do {
      pUVar6 = local_e8;
      uVar15 = local_114;
      uVar9 = 0;
      if ((int)uVar19 < (local_e8->PopulationObjects).ArrayNum) {
        uVar9 = ~uVar19 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pUVar2 = *(UCustomizableObject **)
                ((pUVar6->PopulationObjects).AllocatorInstance.Data + lVar20 * 8);
      uVar9 = 0;
      if ((int)uVar19 < local_108) {
        uVar9 = ~uVar19 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_fc = *(int *)(local_110.Data + lVar20 * 4);
      lVar13 = (longlong)local_fc;
      uVar9 = uVar15;
      if (0 < local_fc) {
        lVar18 = (longlong)(int)uVar15 * 8;
        do {
          uVar9 = 0;
          if ((int)uVar15 < param_2->ArrayNum) {
            uVar9 = ~uVar15 >> 0x1f;
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
          UCustomizableObjectInstance::SetObject
                    (*(UCustomizableObjectInstance **)((param_2->AllocatorInstance).Data + lVar18),
                     pUVar2);
          uVar15 = uVar15 + 1;
          lVar18 = lVar18 + 8;
          lVar13 = lVar13 + -1;
          uVar9 = local_114;
        } while (lVar13 != 0);
      }
      local_114 = uVar9 + local_fc;
      uVar19 = uVar19 + 1;
      lVar20 = lVar20 + 1;
    } while (lVar20 < local_d0);
    uVar15 = 0;
    lVar20 = 0;
    local_f0.InitialSeed = local_f8;
    local_f0.Seed = local_f8;
    local_114 = 0;
    do {
      pUVar6 = local_e8;
      if (((local_e8->Private).Object == (FCustomizableObjectPopulationGeneratorPrivate *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar3 = (pUVar6->Private).Object;
      uVar19 = 0;
      if ((int)uVar15 < (pFVar3->ClassGenerators).ArrayNum) {
        uVar19 = ~uVar15 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (pFVar3->ClassGenerators).AllocatorInstance.Data;
      uVar19 = 0;
      if ((int)uVar15 < local_108) {
        uVar19 = ~uVar15 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar7 = local_d8;
      local_fc = *(int *)(local_110.Data + lVar20 * 4);
      lVar13 = (longlong)local_fc;
      if (0 < local_fc) {
        lVar18 = (longlong)(int)local_114 * 8;
        uVar19 = local_114;
        do {
          uVar9 = 0;
          if ((int)uVar19 < pTVar7->ArrayNum) {
            uVar9 = ~uVar19 >> 0x1f;
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
          FCustomizableObjectPopulationClassGenerator::GenerateParameters
                    ((FCustomizableObjectPopulationClassGenerator *)
                     (pFVar4 + (longlong)(int)uVar15 * 0x80),&local_f0,
                     *(UCustomizableObjectInstance **)((pTVar7->AllocatorInstance).Data + lVar18));
          uVar19 = uVar19 + 1;
          lVar18 = lVar18 + 8;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
      local_114 = local_114 + local_fc;
      uVar15 = uVar15 + 1;
      lVar20 = lVar20 + 1;
    } while (lVar20 < local_d0);
  }
  if (local_110.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data);
  }
  return;
}

// GeneratePopulation @ 14d369fc0

int __thiscall
UCustomizableObjectPopulationGenerator::GeneratePopulation
          (UCustomizableObjectPopulationGenerator *this,
          TArray<UCustomizableObjectInstance_*,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  LARGE_INTEGER local_res20;
  
  QueryPerformanceCounter(&local_res20);
  Generate(this,local_res20.s.LowPart,param_1,param_2);
  return local_res20.s.LowPart;
}

// GetPrivateStaticClass @ 14d36a1f0

UClass * __cdecl UCustomizableObjectPopulationGenerator::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCustomizableObjectPopulationGenerator.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CustomizableObjectPopulation",L"CustomizableObjectPopulationGenerator",
               &Z_Registration_Info_UClass_UCustomizableObjectPopulationGenerator.InnerSingleton,
               StaticRegisterNativesUCustomizableObjectPopulationGenerator,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCustomizableObjectPopulationGenerator>,
               InternalVTableHelperCtorCaller<UCustomizableObjectPopulationGenerator>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCustomizableObjectPopulationGenerator.InnerSingleton;
}

// RegeneratePopulation @ 14d36a5c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UCustomizableObjectPopulationGenerator::RegeneratePopulation
          (UCustomizableObjectPopulationGenerator *this,int param_1,
          TArray<UCustomizableObjectInstance_*,TSizedDefaultAllocator<32>_> *param_2,int param_3)

{
  int *piVar1;
  UCustomizableObject *pUVar2;
  FCustomizableObjectPopulationGeneratorPrivate *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  UCustomizableObjectPopulationGenerator *pUVar6;
  TArray<UCustomizableObjectInstance_*,TSizedDefaultAllocator<32>_> *pTVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  UObject *pUVar11;
  UClass *pUVar12;
  longlong lVar13;
  longlong *plVar14;
  uint uVar15;
  ulonglong uVar16;
  FScriptContainerElement *pFVar17;
  longlong lVar18;
  uint uVar19;
  longlong lVar20;
  undefined1 auStackY_168 [32];
  undefined1 auStack_118 [4];
  uint uStack_114;
  ForAnyElementType FStack_110;
  int iStack_108;
  int iStack_104;
  undefined4 uStack_100;
  int iStack_fc;
  uint uStack_f8;
  FRandomStream FStack_f0;
  UCustomizableObjectPopulationGenerator *pUStack_e8;
  FRandomStream FStack_e0;
  TArray<UCustomizableObjectInstance_*,TSizedDefaultAllocator<32>_> *pTStack_d8;
  longlong lStack_d0;
  undefined1 auStack_c8 [128];
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  uStack_f8 = param_1;
  pUStack_e8 = this;
  pTStack_d8 = param_2;
  if (((this->Private).Object == (FCustomizableObjectPopulationGeneratorPrivate *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Private",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\MutablePopulation\\Source\\CustomizableObjectPopulation\\Private\\MuCOP\\CustomizableObjectPopulationGenerator.cpp"
                         ,0xd7,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar15 = (this->PopulationObjects).ArrayNum;
  FStack_110.Data = (FScriptContainerElement *)0x0;
  iStack_104 = 0;
  uStack_100 = 0;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  iStack_108 = 0;
  if ((uVar15 != 0) &&
     (UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar15,&FStack_110,0,&iStack_104), 0 < (int)uVar15)) {
    uVar16 = (ulonglong)uVar15;
    do {
      if (((FStack_110.Data <= (FScriptContainerElement *)&uStack_100) &&
          ((FScriptContainerElement *)&uStack_100 < FStack_110.Data + (longlong)iStack_104 * 4)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (iStack_108 == iStack_104) {
        iStack_108 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&FStack_110,&iStack_104);
      }
      iVar10 = iStack_108 + 1;
      *(undefined4 *)(FStack_110.Data + (longlong)iStack_108 * 4) = uStack_100;
      uVar16 = uVar16 - 1;
      iStack_108 = iVar10;
    } while (uVar16 != 0);
  }
  pUVar6 = pUStack_e8;
  uVar16 = (ulonglong)(uint)param_3;
  FStack_e0.InitialSeed = param_1;
  FStack_e0.Seed = param_1;
  if (0 < param_3) {
    do {
      if (((pUVar6->Private).Object == (FCustomizableObjectPopulationGeneratorPrivate *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar9 = CustomizableObjectPopulation::FDiscreteImportanceSampler::Sample
                        ((FDiscreteImportanceSampler *)(pUVar6->Private).Object,&FStack_e0);
      uVar19 = 0;
      if ((int)uVar9 < iStack_108) {
        uVar19 = ~uVar9 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(int *)(FStack_110.Data + (longlong)(int)uVar9 * 4) =
           *(int *)(FStack_110.Data + (longlong)(int)uVar9 * 4) + 1;
      uVar16 = uVar16 - 1;
      param_2 = pTStack_d8;
    } while (uVar16 != 0);
  }
  piVar1 = &param_2->ArrayNum;
  if (param_2->ArrayNum == 0) {
    if (param_3 < 1) {
      if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_3);
      }
    }
    else {
      iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (8,8,param_3,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
      memset((param_2->AllocatorInstance).Data + (longlong)iVar10 * 8,0,(longlong)param_3 << 3);
    }
    pFVar17 = (param_2->AllocatorInstance).Data;
    iVar10 = *piVar1;
    pFVar4 = pFVar17 + (longlong)iVar10 * 8;
    while( true ) {
      if (*piVar1 != iVar10) {
        auStack_118[0] = 0;
        `TCheckedPointerIterator<UCustomizableObjectInstance_*,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(auStack_118);
      }
      if (pFVar17 == pFVar4) break;
      pUVar11 = GetTransientPackageAsObject();
      FObjectInitializer::AssertIfInConstructor
                (pUVar11,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar12 = Z_Construct_UClass_UCustomizableObjectInstance_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)auStack_c8,pUVar12);
      auStack_c8._8_8_ = pUVar11;
      pUVar11 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)auStack_c8);
      if (auStack_c8._64_8_ != 0) {
        plVar14 = (longlong *)(auStack_c8 + 0x50);
        if ((longlong *)auStack_c8._104_8_ != (longlong *)0x0) {
          plVar14 = (longlong *)auStack_c8._104_8_;
        }
        (**(code **)(*plVar14 + 0x10))();
      }
      *(UObject **)pFVar17 = pUVar11;
      pFVar17 = pFVar17 + 8;
    }
  }
  uVar19 = 0;
  uStack_114 = 0;
  lStack_d0 = (longlong)(int)uVar15;
  if (0 < (int)uVar15) {
    lVar20 = 0;
    do {
      pUVar6 = pUStack_e8;
      uVar15 = uStack_114;
      uVar9 = 0;
      if ((int)uVar19 < (pUStack_e8->PopulationObjects).ArrayNum) {
        uVar9 = ~uVar19 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pUVar2 = *(UCustomizableObject **)
                ((pUVar6->PopulationObjects).AllocatorInstance.Data + lVar20 * 8);
      uVar9 = 0;
      if ((int)uVar19 < iStack_108) {
        uVar9 = ~uVar19 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iStack_fc = *(int *)(FStack_110.Data + lVar20 * 4);
      lVar13 = (longlong)iStack_fc;
      uVar9 = uVar15;
      if (0 < iStack_fc) {
        lVar18 = (longlong)(int)uVar15 * 8;
        do {
          uVar9 = 0;
          if ((int)uVar15 < param_2->ArrayNum) {
            uVar9 = ~uVar15 >> 0x1f;
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
          UCustomizableObjectInstance::SetObject
                    (*(UCustomizableObjectInstance **)((param_2->AllocatorInstance).Data + lVar18),
                     pUVar2);
          uVar15 = uVar15 + 1;
          lVar18 = lVar18 + 8;
          lVar13 = lVar13 + -1;
          uVar9 = uStack_114;
        } while (lVar13 != 0);
      }
      uStack_114 = uVar9 + iStack_fc;
      uVar19 = uVar19 + 1;
      lVar20 = lVar20 + 1;
    } while (lVar20 < lStack_d0);
    uVar15 = 0;
    lVar20 = 0;
    FStack_f0.InitialSeed = uStack_f8;
    FStack_f0.Seed = uStack_f8;
    uStack_114 = 0;
    do {
      pUVar6 = pUStack_e8;
      if (((pUStack_e8->Private).Object == (FCustomizableObjectPopulationGeneratorPrivate *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar3 = (pUVar6->Private).Object;
      uVar19 = 0;
      if ((int)uVar15 < (pFVar3->ClassGenerators).ArrayNum) {
        uVar19 = ~uVar15 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (pFVar3->ClassGenerators).AllocatorInstance.Data;
      uVar19 = 0;
      if ((int)uVar15 < iStack_108) {
        uVar19 = ~uVar15 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar7 = pTStack_d8;
      iStack_fc = *(int *)(FStack_110.Data + lVar20 * 4);
      lVar13 = (longlong)iStack_fc;
      if (0 < iStack_fc) {
        lVar18 = (longlong)(int)uStack_114 * 8;
        uVar19 = uStack_114;
        do {
          uVar9 = 0;
          if ((int)uVar19 < pTVar7->ArrayNum) {
            uVar9 = ~uVar19 >> 0x1f;
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
          FCustomizableObjectPopulationClassGenerator::GenerateParameters
                    ((FCustomizableObjectPopulationClassGenerator *)
                     (pFVar4 + (longlong)(int)uVar15 * 0x80),&FStack_f0,
                     *(UCustomizableObjectInstance **)((pTVar7->AllocatorInstance).Data + lVar18));
          uVar19 = uVar19 + 1;
          lVar18 = lVar18 + 8;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
      uStack_114 = uStack_114 + iStack_fc;
      uVar15 = uVar15 + 1;
      lVar20 = lVar20 + 1;
    } while (lVar20 < lStack_d0);
  }
  if (FStack_110.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_110.Data);
  }
  return;
}

// Serialize @ 14d36aef0

void __thiscall
UCustomizableObjectPopulationGenerator::Serialize
          (UCustomizableObjectPopulationGenerator *this,FArchive *param_1)

{
  FCustomizableObjectPopulationGeneratorPrivate *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  (**(code **)(*(longlong *)param_1 + 0x230))
            (param_1,&CustomizableObjectPopulation::FCustomizableObjectPopulationCustomVersion::GUID
            );
  iVar4 = FArchiveState::CustomVer
                    ((FArchiveState *)param_1,
                     &CustomizableObjectPopulation::FCustomizableObjectPopulationCustomVersion::GUID
                    );
  if (-1 < iVar4) {
    UObject::Serialize((UObject *)this,param_1);
    if ((this->Private).Object == (FCustomizableObjectPopulationGeneratorPrivate *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Private",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\MutablePopulation\\Source\\CustomizableObjectPopulation\\Private\\MuCOP\\CustomizableObjectPopulationGenerator.cpp"
                         ,0xa8,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((this->Private).Object == (FCustomizableObjectPopulationGeneratorPrivate *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
    pFVar1 = (this->Private).Object;
    TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>
              (param_1,(TArray<int,TSizedDefaultAllocator<32>_> *)pFVar1);
    ::operator<<(param_1,&pFVar1->bPopulationCompiledForCook);
    TArrayPrivateFriend::
    Serialize<FCustomizableObjectPopulationClassGenerator,TSizedDefaultAllocator<32>_>
              (param_1,&pFVar1->ClassGenerators);
    return;
  }
  if ((this->Private).Object == (FCustomizableObjectPopulationGeneratorPrivate *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Private",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\MutablePopulation\\Source\\CustomizableObjectPopulation\\Private\\MuCOP\\CustomizableObjectPopulationGenerator.cpp"
                       ,0xa1,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((this->Private).Object == (FCustomizableObjectPopulationGeneratorPrivate *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  pFVar1 = (this->Private).Object;
  TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>
            (param_1,(TArray<int,TSizedDefaultAllocator<32>_> *)pFVar1);
  ::operator<<(param_1,&pFVar1->bPopulationCompiledForCook);
  TArrayPrivateFriend::
  Serialize<FCustomizableObjectPopulationClassGenerator,TSizedDefaultAllocator<32>_>
            (param_1,&pFVar1->ClassGenerators);
  TArrayPrivateFriend::Serialize<TObjectPtr<UCustomizableObject>,TSizedDefaultAllocator<32>_>
            (param_1,&this->PopulationObjects);
  return;
}

// Serialize @ 14d36b070

void __thiscall
UCustomizableObjectPopulationGenerator::Serialize
          (UCustomizableObjectPopulationGenerator *this,FStructuredArchiveRecord param_1)

{
  FCustomizableObjectPopulationGeneratorPrivate *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FArchiveState *this_00;
  FSlotBase local_res10;
  
  local_res10.StructuredArchive = (FStructuredArchive *)param_1;
  this_00 = (FArchiveState *)
            UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
  (**(code **)(this_00->_padding_ + 0x230))
            (this_00,&CustomizableObjectPopulation::FCustomizableObjectPopulationCustomVersion::GUID
            );
  iVar4 = FArchiveState::CustomVer
                    (this_00,&CustomizableObjectPopulation::
                              FCustomizableObjectPopulationCustomVersion::GUID);
  if (-1 < iVar4) {
    UObject::Serialize((UObject *)this,(FArchive *)this_00);
    if ((this->Private).Object == (FCustomizableObjectPopulationGeneratorPrivate *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Private",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\MutablePopulation\\Source\\CustomizableObjectPopulation\\Private\\MuCOP\\CustomizableObjectPopulationGenerator.cpp"
                         ,0xa8,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((this->Private).Object == (FCustomizableObjectPopulationGeneratorPrivate *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
    pFVar1 = (this->Private).Object;
    TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>
              ((FArchive *)this_00,(TArray<int,TSizedDefaultAllocator<32>_> *)pFVar1);
    ::operator<<((FArchive *)this_00,&pFVar1->bPopulationCompiledForCook);
    TArrayPrivateFriend::
    Serialize<FCustomizableObjectPopulationClassGenerator,TSizedDefaultAllocator<32>_>
              ((FArchive *)this_00,&pFVar1->ClassGenerators);
    return;
  }
  if ((this->Private).Object == (FCustomizableObjectPopulationGeneratorPrivate *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Private",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\MutablePopulation\\Source\\CustomizableObjectPopulation\\Private\\MuCOP\\CustomizableObjectPopulationGenerator.cpp"
                       ,0xa1,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((this->Private).Object == (FCustomizableObjectPopulationGeneratorPrivate *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  pFVar1 = (this->Private).Object;
  TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>
            ((FArchive *)this_00,(TArray<int,TSizedDefaultAllocator<32>_> *)pFVar1);
  ::operator<<((FArchive *)this_00,&pFVar1->bPopulationCompiledForCook);
  TArrayPrivateFriend::
  Serialize<FCustomizableObjectPopulationClassGenerator,TSizedDefaultAllocator<32>_>
            ((FArchive *)this_00,&pFVar1->ClassGenerators);
  TArrayPrivateFriend::Serialize<TObjectPtr<UCustomizableObject>,TSizedDefaultAllocator<32>_>
            ((FArchive *)this_00,&this->PopulationObjects);
  return;
}

// StaticRegisterNativesUCustomizableObjectPopulationGenerator @ 14d36b260

void __cdecl
UCustomizableObjectPopulationGenerator::StaticRegisterNativesUCustomizableObjectPopulationGenerator
          (void)

{
  return;
}

