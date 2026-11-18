// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 7

// StaticClass @ 14925f580

UClass * __cdecl UNiagaraSignificanceHandlerAge::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraSignificanceHandlerAge.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraSignificanceHandlerAge",
               &Z_Registration_Info_UClass_UNiagaraSignificanceHandlerAge.InnerSingleton,
               StaticRegisterNativesUNiagaraSignificanceHandlerAge,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraSignificanceHandlerAge>,
               InternalVTableHelperCtorCaller<UNiagaraSignificanceHandlerAge>,local_res8,
               UNiagaraSignificanceHandler::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraSignificanceHandlerAge.InnerSingleton;
}

// UNiagaraSignificanceHandlerAge @ 149278ab0

UNiagaraSignificanceHandlerAge * __thiscall
UNiagaraSignificanceHandlerAge::UNiagaraSignificanceHandlerAge
          (UNiagaraSignificanceHandlerAge *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UNiagaraSignificanceHandlerAge__6B_;
  return this;
}

// UNiagaraSignificanceHandlerAge @ 149278ae0

UNiagaraSignificanceHandlerAge * __thiscall
UNiagaraSignificanceHandlerAge::UNiagaraSignificanceHandlerAge
          (UNiagaraSignificanceHandlerAge *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UNiagaraSignificanceHandlerAge__6B_;
  return this;
}

// ~UNiagaraSignificanceHandlerAge @ 14927ad00

void __thiscall
UNiagaraSignificanceHandlerAge::~UNiagaraSignificanceHandlerAge
          (UNiagaraSignificanceHandlerAge *this)

{
  *(undefined ***)this = &___7UNiagaraSignificanceHandler__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CalculateSignificance @ 1492875c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraSignificanceHandlerAge::CalculateSignificance
          (UNiagaraSignificanceHandlerAge *this,TArrayView<UNiagaraComponent_*_const,int> *param_1,
          TArrayView<FNiagaraScalabilityState,int> *param_2,
          TArrayView<FNiagaraScalabilitySystemData_const_,int> *param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  short sVar3;
  int iVar4;
  FNiagaraScalabilityState *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  FNiagaraSystemInstanceController *pFVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  float fVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  uint local_58 [8];
  
  iVar4 = param_1->ArrayNum;
  if ((iVar4 != param_2->ArrayNum) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ComponentCount == OutState.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraEffectType.cpp"
                          ,0x147,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  fVar10 = __real_3f800000;
  local_58[0] = 0;
  if (0 < iVar4) {
    do {
      uVar14 = local_58[0];
      uVar13 = 0;
      if ((int)local_58[0] < param_2->ArrayNum) {
        uVar13 = ~local_58[0] >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar5 = param_2->DataPtr;
      lVar16 = (longlong)(int)uVar14;
      sVar3 = pFVar5[lVar16].SystemDataIndex;
      uVar14 = 0;
      if ((int)sVar3 < param_3->ArrayNum) {
        uVar14 = (uint)~(int)sVar3 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if (((param_3->DataPtr[sVar3].bNeedsSignificanceForActiveOrDirty == 0) ||
          ((uVar2 = pFVar5[lVar16].field_0xa, pFVar5[lVar16].bCulled != '\0' &&
           ((((byte)uVar2 >> 1 ^ uVar2) & 4) == 0)))) &&
         (param_3->DataPtr[sVar3].bNeedsSignificanceForCulled == 0)) {
        bVar11 = false;
      }
      else {
        bVar11 = true;
      }
      if (pFVar5[lVar16].bCulled == '\0') {
        lVar17 = (longlong)(int)local_58[0];
        uVar14 = 0;
        if ((int)local_58[0] < param_1->ArrayNum) {
          uVar14 = ~local_58[0] >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pTVar6 = (param_1->DataPtr[lVar17]->SystemInstanceController).SharedReferenceCount.
                 ReferenceController;
        pFVar7 = (param_1->DataPtr[lVar17]->SystemInstanceController).Object;
        if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
        if (pFVar7 != (FNiagaraSystemInstanceController *)0x0) {
          if ((pFVar7->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
            bVar12 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_4531953176097587071>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraSystemInstanceController.h"
                                ,0x81,"IsValid()");
            if (bVar12) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            if (((pFVar7->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar12)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
          pFVar5[lVar16].Significance = fVar10 / ((pFVar7->SystemInstance).Object)->Age;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      }
      else {
        pFVar5[lVar16].Significance = 0.0;
      }
      if (bVar11) {
        pFVar8 = (param_4->AllocatorInstance).Data;
        if (((pFVar8 <= (FScriptContainerElement *)local_58) &&
            ((FScriptContainerElement *)local_58 < pFVar8 + (longlong)param_4->ArrayMax * 4)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar15 = param_4->ArrayNum;
        if (iVar15 == param_4->ArrayMax) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&param_4->AllocatorInstance,&param_4->ArrayMax);
        }
        param_4->ArrayNum = iVar15 + 1;
        *(uint *)((param_4->AllocatorInstance).Data + (longlong)iVar15 * 4) = local_58[0];
      }
      local_58[0] = local_58[0] + 1;
    } while ((int)local_58[0] < iVar4);
  }
  return;
}

// GetPrivateStaticClass @ 1492a6540

UClass * __cdecl UNiagaraSignificanceHandlerAge::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraSignificanceHandlerAge.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraSignificanceHandlerAge",
               &Z_Registration_Info_UClass_UNiagaraSignificanceHandlerAge.InnerSingleton,
               StaticRegisterNativesUNiagaraSignificanceHandlerAge,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraSignificanceHandlerAge>,
               InternalVTableHelperCtorCaller<UNiagaraSignificanceHandlerAge>,local_res8,
               UNiagaraSignificanceHandler::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraSignificanceHandlerAge.InnerSingleton;
}

// StaticRegisterNativesUNiagaraSignificanceHandlerAge @ 1492b69a0

void __cdecl
UNiagaraSignificanceHandlerAge::StaticRegisterNativesUNiagaraSignificanceHandlerAge(void)

{
  return;
}

