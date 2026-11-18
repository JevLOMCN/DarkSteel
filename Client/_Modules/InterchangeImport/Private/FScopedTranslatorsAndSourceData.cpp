// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 1

// FScopedTranslatorsAndSourceData @ 14e7081f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FScopedTranslatorsAndSourceData * __thiscall
UE::Interchange::Private::InterchangeTextureFactory::FScopedTranslatorsAndSourceData::
FScopedTranslatorsAndSourceData
          (FScopedTranslatorsAndSourceData *this,UInterchangeTranslatorBase *param_1,uint param_2)

{
  int *piVar1;
  UInterchangeResultsContainer *pUVar2;
  longlong lVar3;
  int iVar4;
  UPackage *pUVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  UObject *pUVar9;
  longlong *plVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 auStackY_128 [32];
  undefined1 local_f8 [8];
  undefined8 local_f0;
  undefined8 local_e8;
  ulonglong local_e0;
  UInterchangeTranslatorBase *local_d8;
  UClass *local_d0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_128;
  piVar1 = &(this->TranslatorsAndSourcesData).ArrayMax;
  (this->TranslatorsAndSourcesData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TranslatorsAndSourcesData).ArrayNum = 0;
  *piVar1 = 0;
  local_d8 = param_1;
  pUVar5 = GetTransientPackage();
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)param_2);
  }
  if (*piVar1 < (int)param_2) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,param_2,(ForAnyElementType *)this,(this->TranslatorsAndSourcesData).ArrayNum,
               piVar1);
  }
  local_d0 = (UClass *)param_1->_padding_;
  if (param_2 != 0) {
    local_f0 = 0;
    local_e8 = 0;
    local_e0 = (ulonglong)param_2;
    do {
      pUVar6 = Z_Construct_UClass_UInterchangeSourceData_NoRegister();
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)pUVar5,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar7 = Z_Construct_UClass_UInterchangeSourceData_NoRegister();
      CheckIsClassChildOf_Internal(pUVar7,pUVar6);
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_c8,pUVar6);
      local_c8._48_8_ = (FObjectInstancingGraph *)0x0;
      local_c8._56_8_ = (UPackage *)0x0;
      local_c8._16_4_ = 0;
      local_c8._20_4_ = 0;
      local_c8._24_4_ = RF_NoFlags;
      local_c8._40_8_ = (UObject *)0x0;
      local_c8[0x20] = false;
      local_c8._8_8_ = pUVar5;
      pUVar8 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
      if (local_c8._64_8_ != 0) {
        plVar10 = (longlong *)(local_c8 + 0x50);
        if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
          plVar10 = (longlong *)local_c8._104_8_;
        }
        (**(code **)(*plVar10 + 0x10))();
      }
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)pUVar5,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar6 = Z_Construct_UClass_UInterchangeTranslatorBase_NoRegister();
      CheckIsClassChildOf_Internal(pUVar6,local_d0);
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_c8,local_d0);
      local_c8._24_4_ = RF_NoFlags;
      local_c8._40_8_ = (UObject *)0x0;
      local_c8[0x20] = false;
      local_c8._48_8_ = (FObjectInstancingGraph *)0x0;
      local_c8._56_8_ = (UPackage *)0x0;
      local_c8._16_4_ = 0;
      local_c8._20_4_ = 0;
      local_c8._8_8_ = pUVar5;
      pUVar9 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
      if (local_c8._64_8_ != 0) {
        plVar10 = (longlong *)(local_c8 + 0x50);
        if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
          plVar10 = (longlong *)local_c8._104_8_;
        }
        (**(code **)(*plVar10 + 0x10))();
      }
      iVar4 = (this->TranslatorsAndSourcesData).ArrayNum;
      if (iVar4 == *piVar1) {
        iVar4 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)this,piVar1);
      }
      (this->TranslatorsAndSourcesData).ArrayNum = iVar4 + 1;
      local_e0 = local_e0 - 1;
      pFVar11 = (this->TranslatorsAndSourcesData).AllocatorInstance.Data;
      *(UObject **)(pFVar11 + (longlong)iVar4 * 0x10) = pUVar9;
      *(UObject **)(pFVar11 + (longlong)iVar4 * 0x10 + 8) = pUVar8;
    } while (local_e0 != 0);
    local_e0 = 0;
    param_1 = local_d8;
  }
  iVar4 = (this->TranslatorsAndSourcesData).ArrayNum;
  pFVar11 = (this->TranslatorsAndSourcesData).AllocatorInstance.Data;
  pFVar12 = pFVar11 + (longlong)iVar4 * 0x10;
  while( true ) {
    if ((this->TranslatorsAndSourcesData).ArrayNum != iVar4) {
      `TCheckedPointerIterator<TTuple<UInterchangeTranslatorBase_*,UInterchangeSourceData_*>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_f8);
    }
    if (pFVar11 == pFVar12) break;
    pUVar2 = (param_1->Results).field0_0x0.DebugPtr;
    lVar3 = *(longlong *)pFVar11;
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 != (UInterchangeResultsContainer *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar2);
    }
    *(UInterchangeResultsContainer **)(lVar3 + 0x28) = pUVar2;
    pFVar11 = pFVar11 + 0x10;
    param_1 = local_d8;
  }
  return this;
}

