// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 7

// StaticClass @ 14925f390

UClass * __cdecl UNiagaraSignificanceHandlerDistance::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraSignificanceHandlerDistance.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraSignificanceHandlerDistance",
               &Z_Registration_Info_UClass_UNiagaraSignificanceHandlerDistance.InnerSingleton,
               StaticRegisterNativesUNiagaraSignificanceHandlerDistance,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraSignificanceHandlerDistance>,
               InternalVTableHelperCtorCaller<UNiagaraSignificanceHandlerDistance>,local_res8,
               UNiagaraSignificanceHandler::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraSignificanceHandlerDistance.InnerSingleton;
}

// UNiagaraSignificanceHandlerDistance @ 149278b10

UNiagaraSignificanceHandlerDistance * __thiscall
UNiagaraSignificanceHandlerDistance::UNiagaraSignificanceHandlerDistance
          (UNiagaraSignificanceHandlerDistance *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UNiagaraSignificanceHandlerDistance__6B_;
  return this;
}

// UNiagaraSignificanceHandlerDistance @ 149278b40

UNiagaraSignificanceHandlerDistance * __thiscall
UNiagaraSignificanceHandlerDistance::UNiagaraSignificanceHandlerDistance
          (UNiagaraSignificanceHandlerDistance *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UNiagaraSignificanceHandlerDistance__6B_;
  return this;
}

// ~UNiagaraSignificanceHandlerDistance @ 14927ad20

void __thiscall
UNiagaraSignificanceHandlerDistance::~UNiagaraSignificanceHandlerDistance
          (UNiagaraSignificanceHandlerDistance *this)

{
  *(undefined ***)this = &___7UNiagaraSignificanceHandler__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CalculateSignificance @ 149287930

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
UNiagaraSignificanceHandlerDistance::CalculateSignificance
          (UNiagaraSignificanceHandlerDistance *this,
          TArrayView<UNiagaraComponent_*_const,int> *param_1,
          TArrayView<FNiagaraScalabilityState,int> *param_2,
          TArrayView<FNiagaraScalabilitySystemData_const_,int> *param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  short sVar3;
  int iVar4;
  FNiagaraScalabilityState *pFVar5;
  UNiagaraComponent *pUVar6;
  FNiagaraSystemInstanceController *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  float fVar11;
  bool bVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  float fVar19;
  uint local_78 [16];
  
  iVar4 = param_1->ArrayNum;
  if ((iVar4 != param_2->ArrayNum) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ComponentCount == OutState.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraEffectType.cpp"
                          ,0x11f,L""), bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  fVar11 = __real_3f800000;
  local_78[0] = 0;
  if (0 < iVar4) {
    do {
      uVar15 = local_78[0];
      uVar14 = 0;
      if ((int)local_78[0] < param_2->ArrayNum) {
        uVar14 = ~local_78[0] >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar5 = param_2->DataPtr;
      lVar17 = (longlong)(int)uVar15;
      sVar3 = pFVar5[lVar17].SystemDataIndex;
      uVar15 = 0;
      if ((int)sVar3 < param_3->ArrayNum) {
        uVar15 = (uint)~(int)sVar3 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if (((param_3->DataPtr[sVar3].bNeedsSignificanceForActiveOrDirty == 0) ||
          ((uVar2 = pFVar5[lVar17].field_0xa, pFVar5[lVar17].bCulled != '\0' &&
           ((((byte)uVar2 >> 1 ^ uVar2) & 4) == 0)))) &&
         (param_3->DataPtr[sVar3].bNeedsSignificanceForCulled == 0)) {
        bVar12 = false;
      }
      else {
        bVar12 = true;
      }
      if ((pFVar5[lVar17].bCulled == '\0') ||
         (param_3->DataPtr[sVar3].bNeedsSignificanceForCulled != 0)) {
        lVar18 = (longlong)(int)local_78[0];
        uVar15 = 0;
        if ((int)local_78[0] < param_1->ArrayNum) {
          uVar15 = ~local_78[0] >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar13)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        fVar19 = 0.0;
        pUVar6 = param_1->DataPtr[lVar18];
        if (pUVar6->bEnablePreviewLODDistance == 0) {
          pFVar7 = (pUVar6->SystemInstanceController).Object;
          pTVar8 = (pUVar6->SystemInstanceController).SharedReferenceCount.ReferenceController;
          if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
            UNLOCK();
            LOCK();
            pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar8);
          if (pFVar7 != (FNiagaraSystemInstanceController *)0x0) {
            if ((pFVar7->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
              bVar13 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_4531953176097587073>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraSystemInstanceController.h"
                                  ,0x7f,"IsValid()");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              if (((pFVar7->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar13)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
            }
            fVar19 = FNiagaraSystemInstance::GetLODDistance((pFVar7->SystemInstance).Object);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar8);
        }
        else {
          fVar19 = pUVar6->PreviewLODDistance;
        }
        fVar19 = fVar11 / fVar19;
      }
      else {
        fVar19 = 0.0;
      }
      pFVar5[lVar17].Significance = fVar19;
      if (bVar12) {
        pFVar9 = (param_4->AllocatorInstance).Data;
        if (((pFVar9 <= (FScriptContainerElement *)local_78) &&
            ((FScriptContainerElement *)local_78 < pFVar9 + (longlong)param_4->ArrayMax * 4)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar12)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar16 = param_4->ArrayNum;
        if (iVar16 == param_4->ArrayMax) {
          iVar16 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&param_4->AllocatorInstance,&param_4->ArrayMax);
        }
        param_4->ArrayNum = iVar16 + 1;
        *(uint *)((param_4->AllocatorInstance).Data + (longlong)iVar16 * 4) = local_78[0];
      }
      local_78[0] = local_78[0] + 1;
    } while ((int)local_78[0] < iVar4);
  }
  return;
}

// GetPrivateStaticClass @ 1492a6600

UClass * __cdecl UNiagaraSignificanceHandlerDistance::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraSignificanceHandlerDistance.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraSignificanceHandlerDistance",
               &Z_Registration_Info_UClass_UNiagaraSignificanceHandlerDistance.InnerSingleton,
               StaticRegisterNativesUNiagaraSignificanceHandlerDistance,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraSignificanceHandlerDistance>,
               InternalVTableHelperCtorCaller<UNiagaraSignificanceHandlerDistance>,local_res8,
               UNiagaraSignificanceHandler::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraSignificanceHandlerDistance.InnerSingleton;
}

// StaticRegisterNativesUNiagaraSignificanceHandlerDistance @ 1492b69b0

void __cdecl
UNiagaraSignificanceHandlerDistance::StaticRegisterNativesUNiagaraSignificanceHandlerDistance(void)

{
  return;
}

