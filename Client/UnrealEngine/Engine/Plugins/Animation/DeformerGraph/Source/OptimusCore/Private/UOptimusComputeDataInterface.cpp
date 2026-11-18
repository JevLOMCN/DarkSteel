// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 24

// StaticClass @ 14e108810

UClass * __cdecl UOptimusComputeDataInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusComputeDataInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusComputeDataInterface",
               &Z_Registration_Info_UClass_UOptimusComputeDataInterface.InnerSingleton,
               StaticRegisterNativesUOptimusComputeDataInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusComputeDataInterface>,
               InternalVTableHelperCtorCaller<UOptimusComputeDataInterface>,local_res8,
               UComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusComputeDataInterface.InnerSingleton;
}

// UOptimusComputeDataInterface @ 14e158870

UOptimusComputeDataInterface * __thiscall
UOptimusComputeDataInterface::UOptimusComputeDataInterface
          (UOptimusComputeDataInterface *this,FVTableHelper *param_1)

{
  UComputeDataInterface::UComputeDataInterface((UComputeDataInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusComputeDataInterface__6B_;
  return this;
}

// UOptimusComputeDataInterface @ 14e1588a0

UOptimusComputeDataInterface * __thiscall
UOptimusComputeDataInterface::UOptimusComputeDataInterface
          (UOptimusComputeDataInterface *this,FObjectInitializer *param_1)

{
  UComputeDataInterface::UComputeDataInterface((UComputeDataInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusComputeDataInterface__6B_;
  return this;
}

// ~UOptimusComputeDataInterface @ 14e1623c0

void __thiscall
UOptimusComputeDataInterface::~UOptimusComputeDataInterface(UOptimusComputeDataInterface *this)

{
  *(undefined ***)this = &___7UOptimusComputeDataInterface__6B_;
  UComputeDataInterface::~UComputeDataInterface((UComputeDataInterface *)this);
  return;
}

// CanPinDefinitionChange @ 14e181ab0

bool __thiscall
UOptimusComputeDataInterface::CanPinDefinitionChange(UOptimusComputeDataInterface *this)

{
  return false;
}

// ExportState @ 14e1af180

void __thiscall
UOptimusComputeDataInterface::ExportState(UOptimusComputeDataInterface *this,FArchive *param_1)

{
  FObjectAndNameAsStringProxyArchive local_a8;
  
  FObjectAndNameAsStringProxyArchive::FObjectAndNameAsStringProxyArchive(&local_a8,param_1,false);
  UObject::SerializeScriptProperties((UObject *)this,(FArchive *)&local_a8);
  FObjectAndNameAsStringProxyArchive::~FObjectAndNameAsStringProxyArchive(&local_a8);
  return;
}

// GetAllComputeDataInterfaceClasses @ 14e1b8280

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TArray<TSubclassOf<UOptimusComputeDataInterface>,TSizedDefaultAllocator<32>_> * __cdecl
UOptimusComputeDataInterface::GetAllComputeDataInterfaceClasses
          (TArray<TSubclassOf<UOptimusComputeDataInterface>,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__)

{
  UObject *pUVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  EInternalObjectFlags EVar6;
  uint uVar7;
  int iVar8;
  UClass *pUVar9;
  TArray<TSubclassOf<UOptimusComputeDataInterface>,TSizedDefaultAllocator<32>_> *pTVar10;
  UClass *pUVar11;
  longlong lVar12;
  FUObjectCppClassStaticFunctions local_res8;
  UClass *local_48;
  TObjectIterator<UClass> local_40;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_40.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.ObjectArray.ArrayNum = 0;
  local_40.ObjectArray.ArrayMax = 0;
  local_40.Index = 0xffffffff;
  EVar6 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar9 = Z_Construct_UClass_UClass_NoRegister();
  GetObjectsOfClass(pUVar9,&local_40.ObjectArray,true,RF_ClassDefaultObject,
                    EVar6 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  TObjectIterator<UClass>::Advance(&local_40);
  do {
    lVar12 = (longlong)local_40.Index;
    if ((local_40.Index < 0) || (local_40.ObjectArray.ArrayNum <= local_40.Index)) {
      if (local_40.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.ObjectArray.AllocatorInstance.Data);
      }
      return __return_storage_ptr__;
    }
    uVar7 = 0;
    if (local_40.Index < local_40.ObjectArray.ArrayNum) {
      uVar7 = (uint)~local_40.Index >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar10 = (TArray<TSubclassOf<UOptimusComputeDataInterface>,TSizedDefaultAllocator<32>_> *)
                (*pcVar3)();
      return pTVar10;
    }
    pUVar9 = *(UClass **)(local_40.ObjectArray.AllocatorInstance.Data + lVar12 * 8);
    if ((pUVar9->ClassFlags & (CLASS_Deprecated|CLASS_Hidden|CLASS_Abstract)) == CLASS_None) {
      if (Z_Registration_Info_UClass_UOptimusComputeDataInterface.InnerSingleton == (UClass *)0x0) {
        local_res8.AddReferencedObjects = UObject::AddReferencedObjects;
        GetPrivateStaticClassBody
                  (L"/Script/OptimusCore",L"OptimusComputeDataInterface",
                   &Z_Registration_Info_UClass_UOptimusComputeDataInterface.InnerSingleton,
                   StaticRegisterNativesUOptimusComputeDataInterface,0x28,8,
                   CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
                   InternalConstructor<UOptimusComputeDataInterface>,
                   InternalVTableHelperCtorCaller<UOptimusComputeDataInterface>,&local_res8,
                   UComputeDataInterface::StaticClass,UObject::StaticClass);
        if (Z_Registration_Info_UClass_UOptimusComputeDataInterface.InnerSingleton == (UClass *)0x0)
        goto LAB_14e1b858d;
      }
      iVar8 = (int)(Z_Registration_Info_UClass_UOptimusComputeDataInterface.InnerSingleton)->
                   _padding_;
      if (((int)pUVar9->_padding_ < iVar8) ||
         ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar8 * 8) !=
          &(Z_Registration_Info_UClass_UOptimusComputeDataInterface.InnerSingleton)->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        if ((pUVar9->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
          UClass::InternalCreateDefaultObjectWrapper(pUVar9);
        }
        pUVar1 = (pUVar9->ClassDefaultObject).field0_0x0.DebugPtr;
        if (pUVar1 != (UObject *)0x0) {
          pUVar11 = StaticClass();
          iVar8 = (int)pUVar11->_padding_;
          if (((iVar8 <= *(int *)(*(longlong *)&pUVar1->field_0x10 + 0x38)) &&
              ((longlong *)
               *(undefined1 **)
                (*(longlong *)(*(longlong *)&pUVar1->field_0x10 + 0x30) + (longlong)iVar8 * 8) ==
               &pUVar11->_padding_)) &&
             (cVar5 = (**(code **)(*(longlong *)pUVar1 + 0x3a0))(pUVar1), cVar5 != '\0')) {
            local_48 = pUVar9;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)pUVar9);
            }
            pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
            if (((pFVar2 <= (FScriptContainerElement *)&local_48) &&
                ((FScriptContainerElement *)&local_48 <
                 pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar4)) {
              pcVar3 = (code *)swi(3);
              pTVar10 = (TArray<TSubclassOf<UOptimusComputeDataInterface>,TSizedDefaultAllocator<32>_>
                         *)(*pcVar3)();
              return pTVar10;
            }
            iVar8 = __return_storage_ptr__->ArrayNum;
            if (iVar8 == __return_storage_ptr__->ArrayMax) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&__return_storage_ptr__->AllocatorInstance,
                                 &__return_storage_ptr__->ArrayMax);
            }
            __return_storage_ptr__->ArrayNum = iVar8 + 1;
            *(UClass **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) =
                 local_48;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_48 != (UClass *)0x0))
            {
              UE::GC::MarkAsReachable((UObject *)local_48);
            }
          }
        }
      }
    }
LAB_14e1b858d:
    TObjectIterator<UClass>::Advance(&local_40);
  } while( true );
}

// GetCategory @ 14e1bc330

FName __thiscall UOptimusComputeDataInterface::GetCategory(UOptimusComputeDataInterface *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = CategoryName::DataInterfaces;
  return in_RDX;
}

// GetDisplayName @ 14e1c4050

FString * __thiscall
UOptimusComputeDataInterface::GetDisplayName
          (UOptimusComputeDataInterface *this,FString *__return_storage_ptr__)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Public\\OptimusComputeDataInterface.h"
             ,0xa3,L"Pure virtual not implemented (%s)");
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetPinDefinitions @ 14e1cdf60

TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> * __thiscall
UOptimusComputeDataInterface::GetPinDefinitions
          (UOptimusComputeDataInterface *this,
          TArray<FOptimusCDIPinDefinition,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Public\\OptimusComputeDataInterface.h"
             ,0xa9,L"Pure virtual not implemented (%s)");
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14e1d4cf0

UClass * __cdecl UOptimusComputeDataInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusComputeDataInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusComputeDataInterface",
               &Z_Registration_Info_UClass_UOptimusComputeDataInterface.InnerSingleton,
               StaticRegisterNativesUOptimusComputeDataInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusComputeDataInterface>,
               InternalVTableHelperCtorCaller<UOptimusComputeDataInterface>,local_res8,
               UComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusComputeDataInterface.InnerSingleton;
}

// GetPropertyPinDefinitions @ 14e1da1f0

TArray<FOptimusCDIPropertyPinDefinition,TSizedDefaultAllocator<32>_> * __thiscall
UOptimusComputeDataInterface::GetPropertyPinDefinitions
          (UOptimusComputeDataInterface *this,
          TArray<FOptimusCDIPropertyPinDefinition,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetRequiredComponentClass @ 14e1df810

TSubclassOf<UActorComponent> __thiscall
UOptimusComputeDataInterface::GetRequiredComponentClass(UOptimusComputeDataInterface *this)

{
  TObjectPtr<UClass> in_RDX;
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Public\\OptimusComputeDataInterface.h"
             ,0xbd,L"Pure virtual not implemented (%s)");
  *(undefined8 *)in_RDX.field0_0x0 = 0;
  return (TSubclassOf<UActorComponent>)in_RDX.field0_0x0;
}

// GetUniqueDomainDimensions @ 14e1e7f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSet<TArray<FName,TSizedDefaultAllocator<32>_>,DefaultKeyFuncs<TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
* __cdecl UOptimusComputeDataInterface::GetUniqueDomainDimensions
                    (TSet<TArray<FName,TSizedDefaultAllocator<32>_>,DefaultKeyFuncs<TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                     *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  TSet<TArray<FName,TSizedDefaultAllocator<32>_>,DefaultKeyFuncs<TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *pTVar7;
  UClass *pUVar8;
  ForAnyElementType FVar9;
  UClass *pUVar10;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [8];
  TArray<TSubclassOf<UOptimusComputeDataInterface>,TSizedDefaultAllocator<32>_> local_90;
  TSet<TArray<FName,TSizedDefaultAllocator<32>_>,DefaultKeyFuncs<TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  local_78;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pUVar10 = (UClass *)0x0;
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  GetAllComputeDataInterfaceClasses(&local_90);
  iVar5 = local_90.ArrayNum;
  pFVar1 = local_90.AllocatorInstance.Data + (longlong)local_90.ArrayNum * 8;
  FVar9.Data = local_90.AllocatorInstance.Data;
  do {
    if (local_90.ArrayNum != iVar5) {
      `TCheckedPointerIterator<TSubclassOf<UOptimusComputeDataInterface>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_98);
    }
    if (FVar9.Data == pFVar1) {
      if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.AllocatorInstance.Data);
      }
      return __return_storage_ptr__;
    }
    lVar3 = *(longlong *)FVar9.Data;
    pUVar8 = pUVar10;
    if ((lVar3 != 0) && (pUVar6 = StaticClass(), pUVar6 != (UClass *)0x0)) {
      iVar2 = (int)pUVar6->_padding_;
      if ((*(int *)(lVar3 + 0x38) < iVar2) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar6->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        pUVar8 = *(UClass **)FVar9.Data;
      }
    }
    if ((pUVar8->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar8);
    }
    pUVar8 = (UClass *)(pUVar8->ClassDefaultObject).field0_0x0.DebugPtr;
    if (pUVar8 == (UClass *)0x0) {
LAB_14e1e8057:
      pUVar8 = pUVar10;
    }
    else {
      pUVar6 = StaticClass();
      iVar2 = (int)pUVar6->_padding_;
      if ((*(int *)(pUVar8->_padding_ + 0x38) < iVar2) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar6->_padding_)) goto LAB_14e1e8057;
    }
    if (pUVar8 != (UClass *)0x0) {
      pTVar7 = GetUniqueNestedContexts((UOptimusComputeDataInterface *)pUVar8,&local_78);
      TSet<TArray<FName,TSizedDefaultAllocator<32>_>,DefaultKeyFuncs<TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::Append<FDefaultSetAllocator>(__return_storage_ptr__,pTVar7);
      local_78.HashSize = 0;
      if (local_78.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_78.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TArray<FName,TSizedDefaultAllocator<32>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TArray<FName,TSizedDefaultAllocator<32>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_78.Elements);
    }
    FVar9.Data = FVar9.Data + 8;
  } while( true );
}

// GetUniqueNestedContexts @ 14e1e8460

TSet<TArray<FName,TSizedDefaultAllocator<32>_>,DefaultKeyFuncs<TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
* __thiscall
UOptimusComputeDataInterface::GetUniqueNestedContexts
          (UOptimusComputeDataInterface *this,
          TSet<TArray<FName,TSizedDefaultAllocator<32>_>,DefaultKeyFuncs<TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  TSet<TArray<FName,TSizedDefaultAllocator<32>_>,DefaultKeyFuncs<TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *pTVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  int *piVar11;
  FOptimusCDIPinDefinition *pFVar12;
  undefined1 local_res8 [8];
  undefined1 local_res10 [16];
  ForAnyElementType local_58;
  undefined8 local_50;
  FOptimusCDIPinDefinition *local_48;
  int local_40;
  
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  (**(code **)(*(longlong *)this + 0x350))(this,&local_48);
  iVar5 = local_40;
  piVar11 = &(local_48->DataDimensions).ArrayNum;
  pFVar12 = local_48 + local_40;
  while( true ) {
    iVar9 = 0;
    if (local_40 != iVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FOptimusCDIPinDefinition,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if ((FOptimusCDIPinDefinition *)(piVar11 + -8) == pFVar12) break;
    iVar2 = *piVar11;
    if (iVar2 != 0) {
      local_58.Data = (FScriptContainerElement *)0x0;
      local_50 = 0;
      pFVar10 = (((TArray<FOptimusCDIPinDefinition::FDimensionInfo,TSizedDefaultAllocator<32>_> *)
                 (piVar11 + -2))->AllocatorInstance).Data;
      pFVar1 = pFVar10 + (longlong)iVar2 * 0x18;
      while( true ) {
        if (*piVar11 != iVar2) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<FOptimusCDIPinDefinition::FDimensionInfo_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res10);
          iVar9 = (int)local_50;
        }
        if (pFVar10 == pFVar1) break;
        iVar7 = iVar9;
        if ((local_58.Data <= pFVar10) && (pFVar10 < local_58.Data + (longlong)local_50._4_4_ * 8))
        {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            pTVar8 = (TSet<TArray<FName,TSizedDefaultAllocator<32>_>,DefaultKeyFuncs<TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)(*pcVar4)();
            return pTVar8;
          }
          iVar7 = (int)local_50;
        }
        if (iVar7 == local_50._4_4_) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&local_58,(int *)((longlong)&local_50 + 4));
        }
        iVar9 = iVar7 + 1;
        local_50 = CONCAT44(local_50._4_4_,iVar9);
        uVar3 = *(undefined8 *)pFVar10;
        pFVar10 = pFVar10 + 0x18;
        *(undefined8 *)(local_58.Data + (longlong)iVar7 * 8) = uVar3;
      }
      TSet<TArray<FName,TSizedDefaultAllocator<32>_>,DefaultKeyFuncs<TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::Emplace<TArray<FName,TSizedDefaultAllocator<32>_>_const_&>
                (__return_storage_ptr__,
                 (TArray<FName,TSizedDefaultAllocator<32>_> *)(local_res10 + 8),(bool *)&local_58);
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data);
      }
    }
    piVar11 = piVar11 + 0xe;
  }
  DestructItems<FOptimusCDIPinDefinition,int>(local_48,local_40);
  if (local_48 != (FOptimusCDIPinDefinition *)0x0) {
    FMemory::Free(local_48);
  }
  return __return_storage_ptr__;
}

// ImportState @ 14e1ea160

void __thiscall
UOptimusComputeDataInterface::ImportState(UOptimusComputeDataInterface *this,FArchive *param_1)

{
  FObjectAndNameAsStringProxyArchive local_a8;
  
  FObjectAndNameAsStringProxyArchive::FObjectAndNameAsStringProxyArchive(&local_a8,param_1,false);
  UObject::SerializeScriptProperties((UObject *)this,(FArchive *)&local_a8);
  FObjectAndNameAsStringProxyArchive::~FObjectAndNameAsStringProxyArchive(&local_a8);
  return;
}

// Initialize @ 14e1ed270

void __thiscall UOptimusComputeDataInterface::Initialize(UOptimusComputeDataInterface *this)

{
  return;
}

// IsVisible @ 14e1f1030

bool __thiscall UOptimusComputeDataInterface::IsVisible(UOptimusComputeDataInterface *this)

{
  return true;
}

// OnDataTypeChanged @ 14e1f4af0

void __thiscall
UOptimusComputeDataInterface::OnDataTypeChanged(UOptimusComputeDataInterface *this,FName param_1)

{
  return;
}

// RegisterAllTypes @ 14e205b00

void __cdecl UOptimusComputeDataInterface::RegisterAllTypes(void)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  UObject *pUVar4;
  bool bVar5;
  int iVar6;
  UClass *pUVar7;
  ForAnyElementType FVar8;
  undefined1 local_res8 [8];
  TArray<TSubclassOf<UOptimusComputeDataInterface>,TSizedDefaultAllocator<32>_> local_18;
  
  GetAllComputeDataInterfaceClasses(&local_18);
  iVar6 = local_18.ArrayNum;
  pFVar1 = local_18.AllocatorInstance.Data + (longlong)local_18.ArrayNum * 8;
  FVar8.Data = local_18.AllocatorInstance.Data;
  do {
    if (local_18.ArrayNum != iVar6) {
      `TCheckedPointerIterator<TSubclassOf<UOptimusComputeDataInterface>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (FVar8.Data == pFVar1) {
      if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
      return;
    }
    lVar3 = *(longlong *)FVar8.Data;
    if (lVar3 == 0) {
LAB_14e205b84:
      pUVar7 = (UClass *)0x0;
    }
    else {
      pUVar7 = StaticClass();
      if (pUVar7 == (UClass *)0x0) goto LAB_14e205b84;
      iVar2 = (int)pUVar7->_padding_;
      if ((*(int *)(lVar3 + 0x38) < iVar2) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar7->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (!bVar5) goto LAB_14e205b84;
      pUVar7 = *(UClass **)FVar8.Data;
    }
    if ((pUVar7->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar7);
    }
    pUVar4 = (pUVar7->ClassDefaultObject).field0_0x0.DebugPtr;
    if (pUVar4 != (UObject *)0x0) {
      pUVar7 = StaticClass();
      iVar2 = (int)pUVar7->_padding_;
      if ((iVar2 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar7->_padding_)) {
        (**(code **)(*(longlong *)pUVar4 + 0x398))(pUVar4);
      }
    }
    FVar8.Data = FVar8.Data + 8;
  } while( true );
}

// RegisterPropertyChangeDelegatesForOwningNode @ 14e2079f0

void __thiscall
UOptimusComputeDataInterface::RegisterPropertyChangeDelegatesForOwningNode
          (UOptimusComputeDataInterface *this,UOptimusNode *param_1)

{
  return;
}

// RegisterTypes @ 14e20b460

void __thiscall UOptimusComputeDataInterface::RegisterTypes(UOptimusComputeDataInterface *this)

{
  return;
}

// StaticRegisterNativesUOptimusComputeDataInterface @ 14e225810

void __cdecl UOptimusComputeDataInterface::StaticRegisterNativesUOptimusComputeDataInterface(void)

{
  return;
}

// ValidateForCompile @ 14e22f400

TOptional<FText> * __thiscall
UOptimusComputeDataInterface::ValidateForCompile
          (UOptimusComputeDataInterface *this,TOptional<FText> *__return_storage_ptr__)

{
  (__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference = (ITextData *)0x0;
  (__return_storage_ptr__->field0_0x0).TypedValue.Flags = 0;
  return __return_storage_ptr__;
}

