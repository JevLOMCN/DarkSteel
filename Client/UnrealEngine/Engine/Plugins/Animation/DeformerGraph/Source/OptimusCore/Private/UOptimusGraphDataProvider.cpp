// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 10

// StaticClass @ 14e1138b0

UClass * __cdecl UOptimusGraphDataProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusGraphDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusGraphDataProvider",
               &Z_Registration_Info_UClass_UOptimusGraphDataProvider.InnerSingleton,
               StaticRegisterNativesUOptimusGraphDataProvider,0x60,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UOptimusGraphDataProvider>,
               InternalVTableHelperCtorCaller<UOptimusGraphDataProvider>,local_res8,
               UComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusGraphDataProvider.InnerSingleton;
}

// UOptimusGraphDataProvider @ 14e15a0f0

UOptimusGraphDataProvider * __thiscall
UOptimusGraphDataProvider::UOptimusGraphDataProvider
          (UOptimusGraphDataProvider *this,FVTableHelper *param_1)

{
  undefined8 local_res8 [4];
  
  UComputeDataProvider::UComputeDataProvider((UComputeDataProvider *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UComputeDataProvider__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusDeformerInstanceAccessor__;
  (this->Variables).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Variables).ArrayNum = 0;
  (this->Variables).ArrayMax = 0;
  this->ParameterBufferSize = 0;
  (this->ParameterArrayMetadata).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParameterArrayMetadata).ArrayNum = 0;
  (this->ParameterArrayMetadata).ArrayMax = 0;
  (this->WeakDeformerInstance).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->WeakDeformerInstance).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// UOptimusGraphDataProvider @ 14e15a150

UOptimusGraphDataProvider * __thiscall
UOptimusGraphDataProvider::UOptimusGraphDataProvider
          (UOptimusGraphDataProvider *this,FObjectInitializer *param_1)

{
  undefined8 local_res8 [4];
  
  UComputeDataProvider::UComputeDataProvider((UComputeDataProvider *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UComputeDataProvider__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusDeformerInstanceAccessor__;
  (this->Variables).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Variables).ArrayNum = 0;
  (this->Variables).ArrayMax = 0;
  this->ParameterBufferSize = 0;
  (this->ParameterArrayMetadata).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParameterArrayMetadata).ArrayNum = 0;
  (this->ParameterArrayMetadata).ArrayMax = 0;
  (this->WeakDeformerInstance).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->WeakDeformerInstance).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// ~UOptimusGraphDataProvider @ 14e162c00

void __thiscall
UOptimusGraphDataProvider::~UOptimusGraphDataProvider(UOptimusGraphDataProvider *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UComputeDataProvider__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusDeformerInstanceAccessor__;
  pFVar1 = (this->ParameterArrayMetadata).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FOptimusGraphVariableDescription,int>
            ((FOptimusGraphVariableDescription *)(this->Variables).AllocatorInstance.Data,
             (this->Variables).ArrayNum);
  pFVar1 = (this->Variables).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IOptimusDeformerInstanceAccessor__6B_;
  UComputeDataProvider::~UComputeDataProvider((UComputeDataProvider *)this);
  return;
}

// GetPrivateStaticClass @ 14e1d6130

UClass * __cdecl UOptimusGraphDataProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusGraphDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusGraphDataProvider",
               &Z_Registration_Info_UClass_UOptimusGraphDataProvider.InnerSingleton,
               StaticRegisterNativesUOptimusGraphDataProvider,0x60,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UOptimusGraphDataProvider>,
               InternalVTableHelperCtorCaller<UOptimusGraphDataProvider>,local_res8,
               UComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusGraphDataProvider.InnerSingleton;
}

// GetRenderProxy @ 14e1dd140

FComputeDataProviderRenderProxy * __thiscall
UOptimusGraphDataProvider::GetRenderProxy(UOptimusGraphDataProvider *this)

{
  int iVar1;
  FOptimusGraphDataProviderProxy *pFVar2;
  UOptimusDeformerInstance *pUVar3;
  
  pFVar2 = ::operator_new(0x58);
  if (pFVar2 != (FOptimusGraphDataProviderProxy *)0x0) {
    iVar1 = this->ParameterBufferSize;
    pUVar3 = (UOptimusDeformerInstance *)FWeakObjectPtr::Get(&(this->WeakDeformerInstance).WeakPtr);
    pFVar2 = FOptimusGraphDataProviderProxy::FOptimusGraphDataProviderProxy
                       (pFVar2,pUVar3,&this->Variables,iVar1,&this->ParameterArrayMetadata);
    return (FComputeDataProviderRenderProxy *)pFVar2;
  }
  return (FComputeDataProviderRenderProxy *)0x0;
}

// Init @ 14e1eb810

void __thiscall
UOptimusGraphDataProvider::Init
          (UOptimusGraphDataProvider *this,
          TArray<FOptimusGraphVariableDescription,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  TArray<FOptimusGraphVariableDescription,TSizedDefaultAllocator<32>_> *this_00;
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FOptimusDataTypeRegistry *pFVar8;
  FOptimusDataTypeRegistry *pFVar9;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar10;
  ulonglong uVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TArray<FOptimusDataTypeRegistry::FArrayMetadata,TSizedDefaultAllocator<32>_> local_80;
  TArray<FOptimusDataTypeRegistry::FArrayMetadata,TSizedDefaultAllocator<32>_> local_70;
  TSharedPtr<FOptimusDataType_const_,1> local_60;
  TSharedPtr<FOptimusDataType_const_,1> local_50;
  
  this_00 = &this->Variables;
  TArray<FOptimusGraphVariableDescription,TSizedDefaultAllocator<32>_>::operator=(this_00,param_1);
  this->ParameterBufferSize = param_2;
  iVar14 = 0;
  iVar2 = (this->Variables).ArrayNum;
  pFVar13 = (this_00->AllocatorInstance).Data;
  pFVar17 = pFVar13 + (longlong)iVar2 * 0x88;
  while( true ) {
    if ((this->Variables).ArrayNum != iVar2) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FOptimusGraphVariableDescription,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar13 == pFVar17) break;
    pFVar8 = FOptimusDataTypeRegistry::Get();
    pFVar9 = FOptimusDataTypeRegistry::Get();
    pTVar10 = FOptimusDataTypeRegistry::FindType
                        (pFVar9,&local_60,*(FShaderValueType **)(pFVar13 + 0x10));
    if ((pTVar10->Object == (FOptimusDataType *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FOptimusDataTypeRegistry::FindArrayMetadata(pFVar8,&local_70,pTVar10->Object->TypeName);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_60.SharedReferenceCount.ReferenceController);
    *(int *)(pFVar13 + 0x28) = iVar14;
    iVar14 = iVar14 + local_70.ArrayNum;
    if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.AllocatorInstance.Data);
    }
    pFVar13 = pFVar13 + 0x88;
  }
  piVar1 = &(this->ParameterArrayMetadata).ArrayNum;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,iVar14,&(this->ParameterArrayMetadata).AllocatorInstance,piVar1,
             &(this->ParameterArrayMetadata).ArrayMax);
  uVar3 = (this->Variables).ArrayNum;
  uVar11 = (ulonglong)(int)uVar3;
  pFVar13 = (this_00->AllocatorInstance).Data;
  pFVar17 = pFVar13 + uVar11 * 0x88;
  do {
    if ((this->Variables).ArrayNum != (int)uVar11) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FOptimusGraphVariableDescription,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res20);
    }
    if (pFVar13 == pFVar17) {
      return;
    }
    pFVar8 = FOptimusDataTypeRegistry::Get();
    pFVar9 = FOptimusDataTypeRegistry::Get();
    pTVar10 = FOptimusDataTypeRegistry::FindType
                        (pFVar9,&local_50,*(FShaderValueType **)(pFVar13 + 0x10));
    if ((pTVar10->Object == (FOptimusDataType *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FOptimusDataTypeRegistry::FindArrayMetadata(pFVar8,&local_80,pTVar10->Object->TypeName);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_50.SharedReferenceCount.ReferenceController);
    uVar12 = 0;
    if (0 < local_80.ArrayNum) {
      lVar16 = 0;
      do {
        uVar15 = *(int *)(pFVar13 + 0x28) + uVar12;
        if (((int)uVar15 < 0) || ((this->ParameterArrayMetadata).ArrayNum <= (int)uVar15)) {
          bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<8297519899794735264>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\DataInterfaces\\OptimusDataInterfaceGraph.cpp"
                             ,0xa0,"ParameterArrayMetadata.IsValidIndex(TopLevelArrayIndex)");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        else {
          uVar7 = 0;
          if ((int)uVar12 < local_80.ArrayNum) {
            uVar7 = ~uVar12 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar2 = *(int *)(local_80.AllocatorInstance.Data + lVar16 + 4);
          iVar14 = *(int *)(pFVar13 + 0x24);
          uVar7 = 0;
          if ((int)uVar15 < *piVar1) {
            uVar7 = ~uVar15 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          *(int *)((this->ParameterArrayMetadata).AllocatorInstance.Data + (longlong)(int)uVar15 * 8
                  ) = iVar2 + iVar14;
          uVar7 = 0;
          if ((int)uVar12 < local_80.ArrayNum) {
            uVar7 = ~uVar12 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar4 = *(undefined4 *)(local_80.AllocatorInstance.Data + lVar16);
          uVar7 = 0;
          if ((int)uVar15 < *piVar1) {
            uVar7 = ~uVar15 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          *(undefined4 *)
           ((this->ParameterArrayMetadata).AllocatorInstance.Data + (longlong)(int)uVar15 * 8 + 4) =
               uVar4;
        }
        uVar12 = uVar12 + 1;
        lVar16 = lVar16 + 8;
      } while ((int)uVar12 < local_80.ArrayNum);
    }
    if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.AllocatorInstance.Data);
    }
    pFVar13 = pFVar13 + 0x88;
    uVar11 = (ulonglong)uVar3;
  } while( true );
}

// SetDeformerInstance @ 14e21ddb0

void __thiscall
UOptimusGraphDataProvider::SetDeformerInstance
          (UOptimusGraphDataProvider *this,UOptimusDeformerInstance *param_1)

{
  UOptimusDeformerInstance *local_res8 [4];
  
  local_res8[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UOptimusDeformerInstance *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->Variables,(FObjectPtr)local_res8);
  return;
}

// StaticRegisterNativesUOptimusGraphDataProvider @ 14e225a50

void __cdecl UOptimusGraphDataProvider::StaticRegisterNativesUOptimusGraphDataProvider(void)

{
  return;
}

// _getUObject @ 14e238da0

UObject * __thiscall UOptimusGraphDataProvider::_getUObject(UOptimusGraphDataProvider *this)

{
  return (UObject *)&this[-1].Variables.ArrayNum;
}

