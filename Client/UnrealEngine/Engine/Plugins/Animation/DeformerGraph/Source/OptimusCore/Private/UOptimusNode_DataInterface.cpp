// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 41

// StaticClass @ 14e1121a0

UClass * __cdecl UOptimusNode_DataInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusNode_DataInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusNode_DataInterface",
               &Z_Registration_Info_UClass_UOptimusNode_DataInterface.InnerSingleton,
               StaticRegisterNativesUOptimusNode_DataInterface,0x138,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusNode_DataInterface>,
               InternalVTableHelperCtorCaller<UOptimusNode_DataInterface>,local_res8,
               UOptimusNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusNode_DataInterface.InnerSingleton;
}

// UOptimusNode_DataInterface @ 14e15b920

UOptimusNode_DataInterface * __thiscall
UOptimusNode_DataInterface::UOptimusNode_DataInterface
          (UOptimusNode_DataInterface *this,FVTableHelper *param_1)

{
  UOptimusNode::UOptimusNode((UOptimusNode *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UOptimusNode__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusDataInterfaceProvider__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusComponentBindingProvider__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusPinMutabilityDefiner__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusPropertyPinProvider__;
  (this->DataInterfaceClass).field0_0x0.DebugPtr = (UClass *)0x0;
  (this->DataInterfaceData).field0_0x0.DebugPtr = (UOptimusComputeDataInterface *)0x0;
  return this;
}

// UOptimusNode_DataInterface @ 14e15b990

UOptimusNode_DataInterface * __thiscall
UOptimusNode_DataInterface::UOptimusNode_DataInterface(UOptimusNode_DataInterface *this)

{
  UOptimusNode::UOptimusNode((UOptimusNode *)this);
  this->_padding_ = (longlong)&_vftable__for__UOptimusNode__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusDataInterfaceProvider__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusComponentBindingProvider__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusPinMutabilityDefiner__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusPropertyPinProvider__;
  (this->DataInterfaceClass).field0_0x0.DebugPtr = (UClass *)0x0;
  (this->DataInterfaceData).field0_0x0.DebugPtr = (UOptimusComputeDataInterface *)0x0;
  return this;
}

// ~UOptimusNode_DataInterface @ 14e1636d0

void __thiscall
UOptimusNode_DataInterface::~UOptimusNode_DataInterface(UOptimusNode_DataInterface *this)

{
  this->_padding_ = (longlong)&_vftable__for__UOptimusNode__;
  this->_padding_ = (longlong)&___7IOptimusPropertyPinProvider__6B_;
  this->_padding_ = (longlong)&___7IOptimusPinMutabilityDefiner__6B_;
  this->_padding_ = (longlong)&___7IOptimusComponentBindingProvider__6B_;
  this->_padding_ = (longlong)&___7IOptimusDataInterfaceProvider__6B_;
  UOptimusNode::~UOptimusNode((UOptimusNode *)this);
  return;
}

// ConstructNode @ 14e193410

void __thiscall UOptimusNode_DataInterface::ConstructNode(UOptimusNode_DataInterface *this)

{
  UClass *pUVar1;
  UOptimusComputeDataInterface *pUVar2;
  code *pcVar3;
  bool bVar4;
  UObjectBase *this_00;
  FString *pFVar5;
  FText *pFVar6;
  void *local_28 [2];
  FText local_18;
  
  pUVar1 = (this->DataInterfaceClass).field0_0x0.DebugPtr;
  if (pUVar1 != (UClass *)0x0) {
    if ((this->DataInterfaceData).field0_0x0.DebugPtr == (UOptimusComputeDataInterface *)0x0) {
      this_00 = (UObjectBase *)
                NewObject<UOptimusComputeDataInterface>
                          ((UObject *)this,pUVar1,(FName)0x0,RF_NoFlags,(UObject *)0x0,false,
                           (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UObjectBase *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      (this->DataInterfaceData).field0_0x0.DebugPtr = (UOptimusComputeDataInterface *)this_00;
      UObjectBase::AtomicallySetFlags(this_00,RF_Transactional);
    }
    pUVar2 = (this->DataInterfaceData).field0_0x0.DebugPtr;
    pFVar5 = (FString *)(**(code **)(*(longlong *)pUVar2 + 0x340))(pUVar2,local_28);
    pFVar6 = FText::FromString(&local_18,pFVar5);
    UOptimusNode::SetDisplayName((UOptimusNode *)this,pFVar6);
    if (local_28[0] != (void *)0x0) {
      FMemory::Free(local_28[0]);
    }
    CreateComponentPin(this);
    CreatePropertyPinsFromDataInterface(this,(this->DataInterfaceData).field0_0x0.DebugPtr,false);
    CreateShaderPinsFromDataInterface(this,(this->DataInterfaceData).field0_0x0.DebugPtr,false);
    return;
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_6536040888424988262>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_DataInterface.cpp"
                     ,0x19a,"DataInterfaceClass");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  return;
}

// CreateComponentPin @ 14e199cb0

void __thiscall UOptimusNode_DataInterface::CreateComponentPin(UOptimusNode_DataInterface *this)

{
  int iVar1;
  FOptimusDataType *pFVar2;
  code *pcVar3;
  ForAnyElementType _Src;
  bool bVar4;
  FOptimusDataTypeRegistry *this_00;
  UClass *pUVar5;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar6;
  UOptimusComponentSource *pUVar7;
  UOptimusNodePin **ppUVar8;
  FName *pFVar9;
  size_t _Size;
  UOptimusNodePin *pUVar10;
  undefined1 local_res8 [8];
  undefined1 local_108 [32];
  FUtf8String local_e8;
  undefined1 local_d8 [32];
  ForAnyElementType local_b8;
  int local_b0;
  int local_ac;
  TSharedPtr<FOptimusDataType_const_,1> local_a8;
  TArrayView<UOptimusNodePin_*_const,int> local_98;
  FOptimusDataDomain local_88;
  TSharedPtr<FOptimusDataType_const_,1> local_48;
  TSharedPtr<FOptimusDataType_const_,1> local_38;
  
  this_00 = FOptimusDataTypeRegistry::Get();
  pUVar5 = UOptimusComponentSourceBinding::StaticClass();
  pTVar6 = FOptimusDataTypeRegistry::FindType(this_00,&local_38,pUVar5);
  pUVar10 = (UOptimusNodePin *)0x0;
  local_108._0_4_ = 0;
  local_108._4_4_ = 0;
  local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.Data.ArrayNum = 0;
  local_e8.Data.ArrayMax = 0;
  local_108._8_8_ = 0;
  local_108._24_8_ = 0;
  local_108._16_8_ = 0;
  FUtf8String::Reset(&local_e8,0);
  local_a8.SharedReferenceCount.ReferenceController =
       (pTVar6->SharedReferenceCount).ReferenceController;
  local_a8.Object = pTVar6->Object;
  if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FOptimusDataTypeRef::Set((FOptimusDataTypeRef *)local_108,&local_a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pTVar6->SharedReferenceCount).ReferenceController);
  pUVar7 = UOptimusComponentSource::GetSourceFromDataInterface
                     ((this->DataInterfaceData).field0_0x0.DebugPtr);
  pTVar6 = FOptimusDataTypeRef::Resolve((FOptimusDataTypeRef *)local_108,&local_48);
  pFVar2 = pTVar6->Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  if (pFVar2 == (FOptimusDataType *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6536040888424988024>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_DataInterface.cpp"
                       ,0x288,"ComponentSourceType.IsValid()");
    if (bVar4) {
code_r0x00014e199de0:
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    goto LAB_14e199f6f;
  }
  if (pUVar7 == (UOptimusComponentSource *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6536040888424988023>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_DataInterface.cpp"
                       ,0x289,"ComponentSource");
    if (bVar4) goto code_r0x00014e199de0;
    goto LAB_14e199f6f;
  }
  iVar1 = (int)this->_padding_;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
LAB_14e199e27:
    local_98.DataPtr = (UOptimusNodePin **)this->_padding_;
    iVar1 = (int)this->_padding_;
    if ((iVar1 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_98.ArrayNum = iVar1;
    ppUVar8 = TArrayView<UOptimusNodePin_*_const,int>::operator[](&local_98,0);
    pUVar10 = *ppUVar8;
  }
  else if (iVar1 != 0) goto LAB_14e199e27;
  _Src.Data = local_e8.Data.AllocatorInstance.Data;
  _Size = (size_t)local_e8.Data.ArrayNum;
  local_d8._0_8_ = local_108._0_8_;
  local_d8._8_8_ = local_108._8_8_;
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0 = local_e8.Data.ArrayNum;
  local_d8._16_8_ = local_108._16_8_;
  local_d8._24_8_ = local_108._24_8_;
  if (local_e8.Data.ArrayNum == 0) {
    local_ac = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_e8.Data.ArrayNum,0,&local_b8,local_e8.Data.ArrayNum,&local_ac);
    memcpy(local_b8.Data,_Src.Data,_Size);
  }
  local_88.Type = Dimensional;
  local_88._4_4_ = 0;
  local_88.DimensionNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.DimensionNames.ArrayNum = 0;
  local_88.DimensionNames.ArrayMax = 0;
  local_88.Multiplier = 0;
  local_88._28_4_ = 0;
  local_88.Expression.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Expression.Data.ArrayNum = 0;
  local_88.Expression.Data.ArrayMax = 0;
  local_88.LevelNames_DEPRECATED.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.LevelNames_DEPRECATED.ArrayNum = 0;
  local_88.LevelNames_DEPRECATED.ArrayMax = 0;
  FOptimusDataDomain::FOptimusDataDomain(&local_88);
  pFVar9 = (FName *)(**(code **)(*(longlong *)pUVar7 + 0x2b8))(pUVar7,local_res8);
  UOptimusNode::AddPinDirect
            ((UOptimusNode *)this,*pFVar9,Input,&local_88,(FOptimusDataTypeRef *)local_d8,pUVar10,
             (UOptimusNodePin *)0x0);
  if (local_88.LevelNames_DEPRECATED.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.LevelNames_DEPRECATED.AllocatorInstance.Data);
  }
  if (local_88.Expression.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Expression.Data.AllocatorInstance.Data);
  }
  if (local_88.DimensionNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.DimensionNames.AllocatorInstance.Data);
  }
LAB_14e199f6f:
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  return;
}

// CreatePinFromDefinition @ 14e19ecf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UOptimusNode_DataInterface::CreatePinFromDefinition
          (UOptimusNode_DataInterface *this,FOptimusCDIPinDefinition *param_1,
          TMap<FString,FShaderFunctionDefinition_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderFunctionDefinition_const_*,0>_>
          *param_2,TMap<FString,FShaderFunctionDefinition_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderFunctionDefinition_const_*,0>_>
                   *param_3,bool param_4)

{
  FScriptContainerElement *pFVar1;
  FShaderFunctionDefinition *pFVar2;
  FOptimusDataType *pFVar3;
  undefined8 uVar4;
  code *pcVar5;
  TSet<TTuple<FString,FShaderFunctionDefinition_const_*>,TDefaultMapHashableKeyFuncs<FString,FShaderFunctionDefinition_const_*,0>,FDefaultSetAllocator>
  *pTVar6;
  ForAnyElementType _Src;
  FName FVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  wchar_t *pwVar12;
  FShaderFunctionDefinition **ppFVar13;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar14;
  FName FVar15;
  FShaderValueTypeHandle FVar16;
  FScriptContainerElement *pFVar17;
  EOptimusNodePinDirection EVar18;
  undefined1 local_res10 [8];
  TSet<TTuple<FString,FShaderFunctionDefinition_const_*>,TDefaultMapHashableKeyFuncs<FString,FShaderFunctionDefinition_const_*,0>,FDefaultSetAllocator>
  *local_res18;
  TSet<TTuple<FString,FShaderFunctionDefinition_const_*>,TDefaultMapHashableKeyFuncs<FString,FShaderFunctionDefinition_const_*,0>,FDefaultSetAllocator>
  *local_res20;
  undefined1 local_448 [8];
  ForAnyElementType local_440;
  int local_438;
  int local_434;
  FName local_430;
  TArray<FName,TSizedDefaultAllocator<32>_> local_428;
  undefined1 local_418 [16];
  FSoftObjectPath local_408;
  FName local_3e8;
  FOptimusDataTypeRegistry *local_3e0;
  FName local_3d8;
  FName local_3d0;
  FName local_3c8;
  FName local_3c0;
  FName local_3b8;
  FName local_3b0;
  FName local_3a8;
  FName local_3a0;
  FName local_398;
  FString local_390;
  FString local_380;
  FString local_370;
  FString local_360;
  FString local_350;
  FString local_340;
  FString local_330;
  FString local_320;
  FString local_310;
  undefined1 local_300 [32];
  FScriptContainerElement *local_2e0;
  TSharedPtr<FOptimusDataType_const_,1> local_2d0;
  FOptimusDataDomain local_2c0;
  FOptimusDataDomain local_280;
  FString local_240;
  FString local_230;
  FString local_220;
  FString local_210;
  FString local_200;
  TSharedPtr<FOptimusDataType_const_,1> local_1f0;
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  TSharedPtr<FOptimusDataType_const_,1> local_180;
  FOptimusDataDomain local_168;
  undefined1 local_128 [48];
  undefined1 local_f8 [48];
  undefined1 local_c8 [48];
  undefined1 local_98 [48];
  TSharedPtr<FOptimusDataType_const_,1> local_68;
  TSharedPtr<FOptimusDataType_const_,1> local_58;
  
  local_res18 = (TSet<TTuple<FString,FShaderFunctionDefinition_const_*>,TDefaultMapHashableKeyFuncs<FString,FShaderFunctionDefinition_const_*,0>,FDefaultSetAllocator>
                 *)param_2;
  local_res20 = (TSet<TTuple<FString,FShaderFunctionDefinition_const_*>,TDefaultMapHashableKeyFuncs<FString,FShaderFunctionDefinition_const_*,0>,FDefaultSetAllocator>
                 *)param_3;
  local_3e0 = FOptimusDataTypeRegistry::Get();
  iVar10 = (param_1->DataDimensions).ArrayNum;
  iVar11 = (param_1->DataFunctionName).Data.ArrayNum;
  if (iVar10 == 0) {
    if (iVar11 == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)(param_1->DataFunctionName).Data.AllocatorInstance.Data;
    }
    iVar10 = iVar11 + -1;
    if (iVar11 == 0) {
      iVar10 = 0;
    }
    uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,pwVar12);
    iVar10 = TSet<TTuple<FString,FShaderFunctionDefinition_const_*>,TDefaultMapHashableKeyFuncs<FString,FShaderFunctionDefinition_const_*,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FString>
                       ((TSet<TTuple<FString,FShaderFunctionDefinition_const_*>,TDefaultMapHashableKeyFuncs<FString,FShaderFunctionDefinition_const_*,0>,FDefaultSetAllocator>
                         *)param_2,uVar9,&param_1->DataFunctionName);
    if (iVar10 == -1) {
      if ((byte)LogOptimusCore._0_1_ < 2) {
        return;
      }
      local_3d0 = (FName)((this->DataInterfaceClass).field0_0x0.DebugPtr)->_padding_;
      ::FName::ToString(&local_3d0,&local_390);
      ::FName::ToString(&param_1->PinName,&local_190);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOptimusCore);
      local_310.Data.AllocatorInstance.Data = local_390.Data.AllocatorInstance.Data;
      if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_190.Data.AllocatorInstance.Data);
        local_310.Data.AllocatorInstance.Data = local_390.Data.AllocatorInstance.Data;
      }
    }
    else {
      ppFVar13 = TMapBase<FString,FShaderFunctionDefinition_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderFunctionDefinition_const_*,0>_>
                 ::FindChecked((TMapBase<FString,FShaderFunctionDefinition_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderFunctionDefinition_const_*,0>_>
                                *)param_2,&param_1->DataFunctionName);
      pFVar2 = *ppFVar13;
      if ((pFVar2->bHasReturnType == false) || ((pFVar2->ParamTypes).ArrayNum != 1)) {
        if ((byte)LogOptimusCore._0_1_ < 2) {
          return;
        }
        local_430 = (FName)((this->DataInterfaceClass).field0_0x0.DebugPtr)->_padding_;
        ::FName::ToString(&local_430,&local_370);
        ::FName::ToString(&param_1->PinName,&local_220);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOptimusCore);
        local_310.Data.AllocatorInstance.Data = local_370.Data.AllocatorInstance.Data;
        if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_220.Data.AllocatorInstance.Data);
          local_310.Data.AllocatorInstance.Data = local_370.Data.AllocatorInstance.Data;
        }
      }
      else {
        FVar16.ValueTypePtr =
             *(FShaderValueType **)((pFVar2->ParamTypes).AllocatorInstance.Data + 0x20);
        pTVar14 = FOptimusDataTypeRegistry::FindType(local_3e0,&local_68,FVar16);
        FOptimusDataTypeRef::FOptimusDataTypeRef((FOptimusDataTypeRef *)local_300,pTVar14);
        pTVar14 = FOptimusDataTypeRef::Resolve((FOptimusDataTypeRef *)local_300,&local_180);
        pFVar3 = pTVar14->Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_180.SharedReferenceCount.ReferenceController);
        if (pFVar3 == (FOptimusDataType *)0x0) {
          local_310.Data.AllocatorInstance.Data = local_2e0;
          if ((byte)LogOptimusCore._0_1_ < 2) goto LAB_14e19fa1b;
          local_3e8.ComparisonIndex.Value = 0;
          local_3e8.Number = 0;
          FShaderValueType::ToString(FVar16.ValueTypePtr,&local_230,&local_3e8);
          local_3c8 = (FName)((this->DataInterfaceClass).field0_0x0.DebugPtr)->_padding_;
          ::FName::ToString(&local_3c8,&local_380);
          ::FName::ToString(&param_1->PinName,&local_240);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOptimusCore);
          if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_240.Data.AllocatorInstance.Data);
          }
          if (local_380.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_380.Data.AllocatorInstance.Data);
          }
        }
        else if (param_4) {
          local_98._0_8_ = local_300._0_8_;
          local_98._8_8_ = local_300._8_8_;
          FSoftObjectPath::FSoftObjectPath
                    ((FSoftObjectPath *)(local_98 + 0x10),(FSoftObjectPath *)(local_300 + 0x10));
          local_2c0.Type = Dimensional;
          local_2c0._4_4_ = 0;
          local_2c0.DimensionNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_2c0.DimensionNames.ArrayNum = 0;
          local_2c0.DimensionNames.ArrayMax = 0;
          local_2c0.Multiplier = 0;
          local_2c0._28_4_ = 0;
          local_2c0.Expression.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_2c0.Expression.Data.ArrayNum = 0;
          local_2c0.Expression.Data.ArrayMax = 0;
          local_2c0.LevelNames_DEPRECATED.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_2c0.LevelNames_DEPRECATED.ArrayNum = 0;
          local_2c0.LevelNames_DEPRECATED.ArrayMax = 0;
          FOptimusDataDomain::FOptimusDataDomain(&local_2c0);
          UOptimusNode::AddPin
                    ((UOptimusNode *)this,param_1->PinName,Output,&local_2c0,
                     (FOptimusDataTypeRef *)local_98,(UOptimusNodePin *)0x0,(UOptimusNodePin *)0x0);
          if (local_2c0.LevelNames_DEPRECATED.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2c0.LevelNames_DEPRECATED.AllocatorInstance.Data);
          }
          local_230.Data.AllocatorInstance.Data = local_2c0.DimensionNames.AllocatorInstance.Data;
          if (local_2c0.Expression.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2c0.Expression.Data.AllocatorInstance.Data);
            local_230.Data.AllocatorInstance.Data = local_2c0.DimensionNames.AllocatorInstance.Data;
          }
        }
        else {
          local_128._0_8_ = local_300._0_8_;
          local_128._8_8_ = local_300._8_8_;
          FSoftObjectPath::FSoftObjectPath
                    ((FSoftObjectPath *)(local_128 + 0x10),(FSoftObjectPath *)(local_300 + 0x10));
          local_280.Type = Dimensional;
          local_280._4_4_ = 0;
          local_280.DimensionNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_280.DimensionNames.ArrayNum = 0;
          local_280.DimensionNames.ArrayMax = 0;
          local_280.Multiplier = 0;
          local_280._28_4_ = 0;
          local_280.Expression.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_280.Expression.Data.ArrayNum = 0;
          local_280.Expression.Data.ArrayMax = 0;
          local_280.LevelNames_DEPRECATED.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_280.LevelNames_DEPRECATED.ArrayNum = 0;
          local_280.LevelNames_DEPRECATED.ArrayMax = 0;
          FOptimusDataDomain::FOptimusDataDomain(&local_280);
          UOptimusNode::AddPinDirect
                    ((UOptimusNode *)this,param_1->PinName,Output,&local_280,
                     (FOptimusDataTypeRef *)local_128,(UOptimusNodePin *)0x0,(UOptimusNodePin *)0x0)
          ;
          if (local_280.LevelNames_DEPRECATED.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_280.LevelNames_DEPRECATED.AllocatorInstance.Data);
          }
          local_230.Data.AllocatorInstance.Data = local_280.DimensionNames.AllocatorInstance.Data;
          if (local_280.Expression.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_280.Expression.Data.AllocatorInstance.Data);
            local_230.Data.AllocatorInstance.Data = local_280.DimensionNames.AllocatorInstance.Data;
          }
        }
        local_310.Data.AllocatorInstance.Data = local_2e0;
        if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_230.Data.AllocatorInstance.Data);
          local_310.Data.AllocatorInstance.Data = local_2e0;
        }
      }
    }
  }
  else if (iVar11 < 2) {
    if ((byte)LogOptimusCore._0_1_ < 2) {
      return;
    }
    local_398 = (FName)((this->DataInterfaceClass).field0_0x0.DebugPtr)->_padding_;
    ::FName::ToString(&local_398,&local_310);
    ::FName::ToString(&param_1->PinName,&local_1a0);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOptimusCore);
    if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
    }
  }
  else {
    FVar15 = (FName)(param_1->DataDimensions).AllocatorInstance.Data;
    local_430 = (FName)((longlong)FVar15 + (longlong)iVar10 * 0x18);
    while( true ) {
      FVar7 = local_430;
      if ((param_1->DataDimensions).ArrayNum != iVar10) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FOptimusCDIPinDefinition::FDimensionInfo_const_,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_res10);
      }
      iVar11 = 0;
      if (FVar15 == FVar7) {
        iVar10 = (param_1->DataFunctionName).Data.ArrayNum;
        if (iVar10 == 0) {
          pwVar12 = L"";
          iVar10 = iVar11;
        }
        else {
          pwVar12 = (wchar_t *)(param_1->DataFunctionName).Data.AllocatorInstance.Data;
          iVar10 = iVar10 + -1;
        }
        uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,pwVar12);
        pTVar6 = local_res18;
        iVar10 = TSet<TTuple<FString,FShaderFunctionDefinition_const_*>,TDefaultMapHashableKeyFuncs<FString,FShaderFunctionDefinition_const_*,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<FString>(local_res18,uVar9,&param_1->DataFunctionName);
        if (iVar10 == -1) {
          iVar10 = (param_1->DataFunctionName).Data.ArrayNum;
          if (iVar10 == 0) {
            pwVar12 = L"";
          }
          else {
            pwVar12 = (wchar_t *)(param_1->DataFunctionName).Data.AllocatorInstance.Data;
            iVar11 = iVar10 + -1;
          }
          uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,pwVar12);
          pTVar6 = local_res20;
          iVar10 = TSet<TTuple<FString,FShaderFunctionDefinition_const_*>,TDefaultMapHashableKeyFuncs<FString,FShaderFunctionDefinition_const_*,0>,FDefaultSetAllocator>
                   ::FindIndexByHash<FString>(local_res20,uVar9,&param_1->DataFunctionName);
          if (iVar10 == -1) {
            if ((byte)LogOptimusCore._0_1_ < 2) {
              return;
            }
            local_3a0 = (FName)((this->DataInterfaceClass).field0_0x0.DebugPtr)->_padding_;
            ::FName::ToString(&local_3a0,&local_320);
            ::FName::ToString(&param_1->PinName,&local_1b0);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOptimusCore);
            local_310.Data.AllocatorInstance.Data = local_320.Data.AllocatorInstance.Data;
            if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
              local_310.Data.AllocatorInstance.Data = local_320.Data.AllocatorInstance.Data;
            }
            goto LAB_14e19fa1b;
          }
          EVar18 = Input;
          ppFVar13 = TMapBase<FString,FShaderFunctionDefinition_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderFunctionDefinition_const_*,0>_>
                     ::FindChecked((TMapBase<FString,FShaderFunctionDefinition_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderFunctionDefinition_const_*,0>_>
                                    *)pTVar6,&param_1->DataFunctionName);
          pFVar2 = *ppFVar13;
          if ((pFVar2->bHasReturnType != false) ||
             (iVar10 = (pFVar2->ParamTypes).ArrayNum,
             iVar10 != (param_1->DataDimensions).ArrayNum + 1)) {
            if ((byte)LogOptimusCore._0_1_ < 2) {
              return;
            }
            local_3a8 = (FName)((this->DataInterfaceClass).field0_0x0.DebugPtr)->_padding_;
            ::FName::ToString(&local_3a8,&local_330);
            ::FName::ToString(&param_1->PinName,&local_1c0);
            UE::Logging::Private::BasicLog<2>
                      ((FStaticBasicLogRecord *)&PTR_u_Data_write_func_152e1c8e0,
                       (FLogCategoryBase *)&LogOptimusCore);
            local_310.Data.AllocatorInstance.Data = local_330.Data.AllocatorInstance.Data;
            if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
              local_310.Data.AllocatorInstance.Data = local_330.Data.AllocatorInstance.Data;
            }
            goto LAB_14e19fa1b;
          }
          if ((iVar10 < 2) &&
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
          FVar16.ValueTypePtr =
               *(FShaderValueType **)((pFVar2->ParamTypes).AllocatorInstance.Data + 0x50);
        }
        else {
          EVar18 = Output;
          ppFVar13 = TMapBase<FString,FShaderFunctionDefinition_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderFunctionDefinition_const_*,0>_>
                     ::FindChecked((TMapBase<FString,FShaderFunctionDefinition_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderFunctionDefinition_const_*,0>_>
                                    *)pTVar6,&param_1->DataFunctionName);
          pFVar2 = *ppFVar13;
          if ((pFVar2->bHasReturnType == false) ||
             (iVar10 = (pFVar2->ParamTypes).ArrayNum,
             iVar10 != (param_1->DataDimensions).ArrayNum + 1)) {
            if ((byte)LogOptimusCore._0_1_ < 2) {
              return;
            }
            local_3b8 = (FName)((this->DataInterfaceClass).field0_0x0.DebugPtr)->_padding_;
            ::FName::ToString(&local_3b8,&local_350);
            ::FName::ToString(&param_1->PinName,&local_200);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOptimusCore);
            local_310.Data.AllocatorInstance.Data = local_350.Data.AllocatorInstance.Data;
            if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_200.Data.AllocatorInstance.Data);
              local_310.Data.AllocatorInstance.Data = local_350.Data.AllocatorInstance.Data;
            }
            goto LAB_14e19fa1b;
          }
          if ((iVar10 < 1) &&
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
          FVar16.ValueTypePtr =
               *(FShaderValueType **)((pFVar2->ParamTypes).AllocatorInstance.Data + 0x20);
        }
        pTVar14 = FOptimusDataTypeRegistry::FindType(local_3e0,&local_58,FVar16);
        local_418._0_4_ = 0;
        local_418._4_4_ = 0;
        local_408.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_408.SubPathString.Data.ArrayNum = 0;
        local_408.SubPathString.Data.ArrayMax = 0;
        local_418._8_8_ = 0;
        local_408.AssetPath.AssetName.ComparisonIndex.Value = 0;
        local_408.AssetPath.AssetName.Number = 0;
        local_408.AssetPath.PackageName.ComparisonIndex.Value = 0;
        local_408.AssetPath.PackageName.Number = 0;
        FUtf8String::Reset(&local_408.SubPathString,0);
        local_2d0.SharedReferenceCount.ReferenceController =
             (pTVar14->SharedReferenceCount).ReferenceController;
        local_2d0.Object = pTVar14->Object;
        if (local_2d0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_2d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_2d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        FOptimusDataTypeRef::Set((FOptimusDataTypeRef *)local_418,&local_2d0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((pTVar14->SharedReferenceCount).ReferenceController);
        pTVar14 = FOptimusDataTypeRef::Resolve((FOptimusDataTypeRef *)local_418,&local_1f0);
        pFVar3 = pTVar14->Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1f0.SharedReferenceCount.ReferenceController);
        if (pFVar3 == (FOptimusDataType *)0x0) {
          local_310.Data.AllocatorInstance.Data =
               local_408.SubPathString.Data.AllocatorInstance.Data;
          if ((byte)LogOptimusCore._0_1_ < 2) goto LAB_14e19fa1b;
          local_3d8.ComparisonIndex.Value = 0;
          local_3d8.Number = 0;
          FShaderValueType::ToString(FVar16.ValueTypePtr,&local_1d0,&local_3d8);
          local_3b0 = (FName)((this->DataInterfaceClass).field0_0x0.DebugPtr)->_padding_;
          ::FName::ToString(&local_3b0,&local_340);
          ::FName::ToString(&param_1->PinName,&local_1e0);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOptimusCore);
          if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
          }
          if (local_340.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_340.Data.AllocatorInstance.Data);
          }
        }
        else {
          iVar10 = (param_1->DataDimensions).ArrayNum;
          pFVar17 = (param_1->DataDimensions).AllocatorInstance.Data;
          local_440.Data = (FScriptContainerElement *)0x0;
          local_438 = 0;
          local_434 = 0;
          pFVar1 = pFVar17 + (longlong)iVar10 * 0x18;
          while( true ) {
            if ((param_1->DataDimensions).ArrayNum != iVar10) {
              local_448[0] = 0;
              `TCheckedPointerIterator<FOptimusCDIPinDefinition::FDimensionInfo_const_,int,0>::
              operator!='::__l2::<lambda_1>::operator()(local_448);
            }
            iVar11 = local_438;
            _Src.Data = local_440.Data;
            if (pFVar17 == pFVar1) break;
            if (((local_440.Data <= pFVar17) && (pFVar17 < local_440.Data + (longlong)local_434 * 8)
                ) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if (local_438 == local_434) {
              local_438 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x408,&local_440,&local_434);
            }
            uVar4 = *(undefined8 *)pFVar17;
            pFVar17 = pFVar17 + 0x18;
            *(undefined8 *)(local_440.Data + (longlong)local_438 * 8) = uVar4;
            local_438 = local_438 + 1;
          }
          iVar10 = param_1->DomainMultiplier;
          local_428.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_428.ArrayNum = local_438;
          if (local_438 == 0) {
            local_428.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,local_438,0,&local_428.AllocatorInstance,local_438,&local_428.ArrayMax);
            memcpy(local_428.AllocatorInstance.Data,_Src.Data,(longlong)iVar11 << 3);
          }
          FOptimusDataDomain::FOptimusDataDomain(&local_168,&local_428,iVar10);
          if (param_4) {
            local_f8._0_8_ = local_418._0_8_;
            local_f8._8_8_ = local_418._8_8_;
            FSoftObjectPath::FSoftObjectPath((FSoftObjectPath *)(local_f8 + 0x10),&local_408);
            UOptimusNode::AddPin
                      ((UOptimusNode *)this,param_1->PinName,EVar18,&local_168,
                       (FOptimusDataTypeRef *)local_f8,(UOptimusNodePin *)0x0,(UOptimusNodePin *)0x0
                      );
          }
          else {
            local_c8._0_8_ = local_418._0_8_;
            local_c8._8_8_ = local_418._8_8_;
            FSoftObjectPath::FSoftObjectPath((FSoftObjectPath *)(local_c8 + 0x10),&local_408);
            UOptimusNode::AddPinDirect
                      ((UOptimusNode *)this,param_1->PinName,EVar18,&local_168,
                       (FOptimusDataTypeRef *)local_c8,(UOptimusNodePin *)0x0,(UOptimusNodePin *)0x0
                      );
          }
          if (local_168.LevelNames_DEPRECATED.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_168.LevelNames_DEPRECATED.AllocatorInstance.Data);
          }
          if (local_168.Expression.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_168.Expression.Data.AllocatorInstance.Data);
          }
          local_1d0.Data.AllocatorInstance.Data = local_440.Data;
          if (local_168.DimensionNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_168.DimensionNames.AllocatorInstance.Data);
            local_1d0.Data.AllocatorInstance.Data = local_440.Data;
          }
        }
        local_310.Data.AllocatorInstance.Data = local_408.SubPathString.Data.AllocatorInstance.Data;
        if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
          local_310.Data.AllocatorInstance.Data =
               local_408.SubPathString.Data.AllocatorInstance.Data;
        }
        goto LAB_14e19fa1b;
      }
      if (*(int *)((longlong)FVar15 + 0x10) == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = *(wchar_t **)((longlong)FVar15 + 8);
        iVar11 = *(int *)((longlong)FVar15 + 0x10) + -1;
      }
      uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,pwVar12);
      iVar11 = TSet<TTuple<FString,FShaderFunctionDefinition_const_*>,TDefaultMapHashableKeyFuncs<FString,FShaderFunctionDefinition_const_*,0>,FDefaultSetAllocator>
               ::FindIndexByHash<FString>(local_res18,uVar9,(FString *)((longlong)FVar15 + 8));
      if (iVar11 == -1) break;
      FVar15 = (FName)((longlong)FVar15 + 0x18);
    }
    if ((byte)LogOptimusCore._0_1_ < 2) {
      return;
    }
    local_3c0 = (FName)((this->DataInterfaceClass).field0_0x0.DebugPtr)->_padding_;
    ::FName::ToString(&local_3c0,&local_360);
    ::FName::ToString(&param_1->PinName,&local_210);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOptimusCore);
    local_310.Data.AllocatorInstance.Data = local_360.Data.AllocatorInstance.Data;
    if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_210.Data.AllocatorInstance.Data);
      local_310.Data.AllocatorInstance.Data = local_360.Data.AllocatorInstance.Data;
    }
  }
LAB_14e19fa1b:
  if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_310.Data.AllocatorInstance.Data);
  }
  return;
}

// CreatePropertyPinsFromDataInterface @ 14e1a0060

void __thiscall
UOptimusNode_DataInterface::CreatePropertyPinsFromDataInterface
          (UOptimusNode_DataInterface *this,UOptimusComputeDataInterface *param_1,bool param_2)

{
  undefined1 *puVar1;
  int iVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  UOptimusNodePin **ppUVar6;
  ForAnyElementType FVar7;
  TSoftObjectPtr<UObject> *pTVar8;
  UOptimusNodePin *pUVar9;
  FOptimusCDIPropertyPinDefinition *pFVar10;
  undefined1 local_res10 [16];
  FName local_res20;
  FOptimusCDIPropertyPinDefinition *local_148;
  int local_140;
  FOptimusDataDomain local_138;
  FOptimusDataDomain local_f8;
  FName local_b8;
  TArrayView<UOptimusNodePin_*_const,int> local_b0;
  undefined1 local_a0 [48];
  undefined1 local_70 [56];
  
  if (param_1 != (UOptimusComputeDataInterface *)0x0) {
    (**(code **)(*(longlong *)param_1 + 0x358))(param_1,&local_148);
    iVar2 = (int)this->_padding_;
    pUVar9 = (UOptimusNodePin *)0x0;
    if (iVar2 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else if (1 < iVar2) {
      local_b0.DataPtr = (UOptimusNodePin **)this->_padding_;
      iVar2 = (int)this->_padding_;
      if ((iVar2 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_b0.ArrayNum = iVar2;
      ppUVar6 = TArrayView<UOptimusNodePin_*_const,int>::operator[](&local_b0,1);
      pUVar9 = *ppUVar6;
    }
    iVar2 = local_140;
    pTVar8 = &(local_148->DataType).TypeObject;
    pFVar10 = local_148 + local_140;
    while( true ) {
      if (local_140 != iVar2) {
        `TCheckedPointerIterator<FOptimusCDIPropertyPinDefinition_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      lVar4 = (longlong)(pTVar8 + -1) + 0x18;
      if ((FOptimusCDIPropertyPinDefinition *)lVar4 == pFVar10) break;
      puVar1 = &(pTVar8->SoftObjectPtr).field_0x8;
      if (param_2) {
        local_a0._8_8_ = *(undefined8 *)&pTVar8->SoftObjectPtr;
        local_a0._0_8_ = *(FName *)((longlong)(pTVar8 + -1) + 0x20);
        FSoftObjectPath::FSoftObjectPath
                  ((FSoftObjectPath *)(local_a0 + 0x10),(FSoftObjectPath *)puVar1);
        local_138.Multiplier = 1;
        local_138._28_4_ = 0;
        local_138.Type = Dimensional;
        local_138._4_4_ = 0;
        local_138.LevelNames_DEPRECATED.ArrayMax = 0;
        local_138.DimensionNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_138.DimensionNames.ArrayNum = 0;
        local_138.DimensionNames.ArrayMax = 0;
        local_138.Expression.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_138.Expression.Data.ArrayNum = 0;
        local_138.Expression.Data.ArrayMax = 0;
        ::FName::FName(&local_res20,"Vertex");
        local_138.LevelNames_DEPRECATED.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_138.LevelNames_DEPRECATED.ArrayNum = 1;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,1,0,&local_138.LevelNames_DEPRECATED.AllocatorInstance,1,
                   &local_138.LevelNames_DEPRECATED.ArrayMax);
        *(FName *)local_138.LevelNames_DEPRECATED.AllocatorInstance.Data = local_res20;
        UOptimusNode::AddPin
                  ((UOptimusNode *)this,*(FName *)lVar4,Input,&local_138,
                   (FOptimusDataTypeRef *)local_a0,pUVar9,(UOptimusNodePin *)0x0);
        if ((FName *)local_138.LevelNames_DEPRECATED.AllocatorInstance.Data != (FName *)0x0) {
          FMemory::Free(local_138.LevelNames_DEPRECATED.AllocatorInstance.Data);
        }
        FVar7.Data = local_138.DimensionNames.AllocatorInstance.Data;
        if (local_138.Expression.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.Expression.Data.AllocatorInstance.Data);
          FVar7.Data = local_138.DimensionNames.AllocatorInstance.Data;
        }
      }
      else {
        local_70._8_8_ = *(undefined8 *)&pTVar8->SoftObjectPtr;
        local_70._0_8_ = *(FName *)((longlong)(pTVar8 + -1) + 0x20);
        FSoftObjectPath::FSoftObjectPath
                  ((FSoftObjectPath *)(local_70 + 0x10),(FSoftObjectPath *)puVar1);
        local_f8.Multiplier = 1;
        local_f8._28_4_ = 0;
        local_f8.Type = Dimensional;
        local_f8._4_4_ = 0;
        local_f8.LevelNames_DEPRECATED.ArrayMax = 0;
        local_f8.DimensionNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_f8.DimensionNames.ArrayNum = 0;
        local_f8.DimensionNames.ArrayMax = 0;
        local_f8.Expression.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_f8.Expression.Data.ArrayNum = 0;
        local_f8.Expression.Data.ArrayMax = 0;
        ::FName::FName(&local_b8,"Vertex");
        local_f8.LevelNames_DEPRECATED.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_f8.LevelNames_DEPRECATED.ArrayNum = 1;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,1,0,&local_f8.LevelNames_DEPRECATED.AllocatorInstance,1,
                   &local_f8.LevelNames_DEPRECATED.ArrayMax);
        *(FName *)local_f8.LevelNames_DEPRECATED.AllocatorInstance.Data = local_b8;
        UOptimusNode::AddPinDirect
                  ((UOptimusNode *)this,*(FName *)lVar4,Input,&local_f8,
                   (FOptimusDataTypeRef *)local_70,pUVar9,(UOptimusNodePin *)0x0);
        if ((FName *)local_f8.LevelNames_DEPRECATED.AllocatorInstance.Data != (FName *)0x0) {
          FMemory::Free(local_f8.LevelNames_DEPRECATED.AllocatorInstance.Data);
        }
        FVar7.Data = local_f8.DimensionNames.AllocatorInstance.Data;
        if (local_f8.Expression.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Expression.Data.AllocatorInstance.Data);
          FVar7.Data = local_f8.DimensionNames.AllocatorInstance.Data;
        }
      }
      if (FVar7.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar7.Data);
      }
      pTVar8 = (TSoftObjectPtr<UObject> *)((longlong)(pTVar8 + 1) + 0x10);
    }
    DestructItems<FOptimusCDIPropertyPinDefinition,int>(local_148,local_140);
    if (local_148 != (FOptimusCDIPropertyPinDefinition *)0x0) {
      FMemory::Free(local_148);
    }
  }
  return;
}

// CreateShaderPinsFromDataInterface @ 14e1a0660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UOptimusNode_DataInterface::CreateShaderPinsFromDataInterface
          (UOptimusNode_DataInterface *this,UOptimusComputeDataInterface *param_1,bool param_2)

{
  FShaderFunctionDefinition *pFVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  ulonglong uVar6;
  FShaderFunctionDefinition *pFVar7;
  FOptimusCDIPinDefinition *pFVar8;
  FOptimusCDIPinDefinition *pFVar9;
  undefined1 auStackY_188 [32];
  undefined1 local_158;
  undefined1 local_157;
  undefined1 local_156 [6];
  FShaderFunctionDefinition *local_150;
  ulonglong local_148;
  FShaderFunctionDefinition *local_140;
  ulonglong local_138;
  FOptimusCDIPinDefinition *local_130;
  int local_128;
  undefined1 local_120 [8];
  FShaderFunctionDefinition *local_118;
  FShaderFunctionDefinition *local_110;
  FShaderFunctionDefinition *local_108;
  FShaderFunctionDefinition **local_100;
  FShaderFunctionDefinition *local_f8;
  FShaderFunctionDefinition **local_f0;
  TSet<TTuple<FString,FShaderFunctionDefinition_const_*>,TDefaultMapHashableKeyFuncs<FString,FShaderFunctionDefinition_const_*,0>,FDefaultSetAllocator>
  local_e8;
  TSet<TTuple<FString,FShaderFunctionDefinition_const_*>,TDefaultMapHashableKeyFuncs<FString,FShaderFunctionDefinition_const_*,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  (**(code **)(*(longlong *)param_1 + 0x350))(param_1,&local_130);
  local_140 = (FShaderFunctionDefinition *)0x0;
  local_138 = 0;
  (**(code **)(*(longlong *)param_1 + 0x2d8))(param_1,&local_140);
  iVar3 = (int)local_138;
  uVar6 = (ulonglong)(int)local_138;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  pFVar1 = local_140 + uVar6;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  pFVar7 = local_140;
  while( true ) {
    if ((int)uVar6 != iVar3) {
      local_158 = 0;
      `TCheckedPointerIterator<FShaderFunctionDefinition,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_158);
    }
    if (pFVar7 == pFVar1) break;
    local_100 = &local_118;
    local_118 = pFVar7;
    local_108 = pFVar7;
    TSet<TTuple<FString,FShaderFunctionDefinition_const_*>,TDefaultMapHashableKeyFuncs<FString,FShaderFunctionDefinition_const_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,FShaderFunctionDefinition_const_*_&&>_>
              (&local_98,
               (TPairInitializer<FString_const_&,FShaderFunctionDefinition_const_*_&&> *)local_120,
               (bool *)&local_108);
    uVar6 = local_138 & 0xffffffff;
    pFVar7 = pFVar7 + 1;
  }
  local_150 = (FShaderFunctionDefinition *)0x0;
  local_148 = 0;
  (**(code **)(*(longlong *)param_1 + 0x2e0))(param_1,&local_150);
  iVar3 = (int)local_148;
  uVar6 = (ulonglong)(int)local_148;
  local_e8.Elements._0_8_ = 0;
  local_e8.Elements._8_8_ = 0;
  local_e8.Elements._32_8_ = 0;
  pFVar1 = local_150 + uVar6;
  local_e8.Elements._40_4_ = 0;
  local_e8.Elements._44_4_ = 0x80;
  local_e8.Elements._48_4_ = 0xffffffff;
  local_e8.Elements._52_4_ = 0;
  local_e8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_e8.HashSize = 0;
  pFVar7 = local_150;
  while( true ) {
    if ((int)uVar6 != iVar3) {
      local_157 = 0;
      `TCheckedPointerIterator<FShaderFunctionDefinition,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_157);
    }
    iVar4 = local_128;
    if (pFVar7 == pFVar1) break;
    local_f0 = &local_110;
    local_110 = pFVar7;
    local_f8 = pFVar7;
    TSet<TTuple<FString,FShaderFunctionDefinition_const_*>,TDefaultMapHashableKeyFuncs<FString,FShaderFunctionDefinition_const_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,FShaderFunctionDefinition_const_*_&&>_>
              (&local_e8,
               (TPairInitializer<FString_const_&,FShaderFunctionDefinition_const_*_&&> *)
               (local_120 + 4),(bool *)&local_f8);
    uVar6 = local_148 & 0xffffffff;
    pFVar7 = pFVar7 + 1;
  }
  pFVar9 = local_130 + local_128;
  pFVar8 = local_130;
  while( true ) {
    if (local_128 != iVar4) {
      local_156[0] = 0;
      `TCheckedPointerIterator<FOptimusCDIPinDefinition_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_156);
    }
    if (pFVar8 == pFVar9) break;
    if (pFVar8->PinName == (FName)0x0) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6536040888424988198>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_DataInterface.cpp"
                         ,0x1da,"!Def.PinName.IsNone()");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      CreatePinFromDefinition
                (this,pFVar8,
                 (TMap<FString,FShaderFunctionDefinition_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderFunctionDefinition_const_*,0>_>
                  *)&local_98,
                 (TMap<FString,FShaderFunctionDefinition_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderFunctionDefinition_const_*,0>_>
                  *)&local_e8,param_2);
    }
    pFVar8 = pFVar8 + 1;
  }
  local_e8.HashSize = 0;
  if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_e8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FShaderFunctionDefinition_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FShaderFunctionDefinition_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_e8.Elements);
  DestructItems<FShaderFunctionDefinition,int>(local_150,(int)local_148);
  if (local_150 != (FShaderFunctionDefinition *)0x0) {
    FMemory::Free(local_150);
  }
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FShaderFunctionDefinition_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FShaderFunctionDefinition_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Elements);
  DestructItems<FShaderFunctionDefinition,int>(local_140,(int)local_138);
  if (local_140 != (FShaderFunctionDefinition *)0x0) {
    FMemory::Free(local_140);
  }
  DestructItems<FOptimusCDIPinDefinition,int>(local_130,local_128);
  if (local_130 != (FOptimusCDIPinDefinition *)0x0) {
    FMemory::Free(local_130);
  }
  return;
}

// ExportState @ 14e1af200

void __thiscall
UOptimusNode_DataInterface::ExportState(UOptimusNode_DataInterface *this,FArchive *param_1)

{
  UOptimusComputeDataInterface *pUVar1;
  FObjectAndNameAsStringProxyArchive local_a8;
  
  FObjectAndNameAsStringProxyArchive::FObjectAndNameAsStringProxyArchive(&local_a8,param_1,false);
  UObject::SerializeScriptProperties((UObject *)this,(FArchive *)&local_a8);
  FObjectAndNameAsStringProxyArchive::~FObjectAndNameAsStringProxyArchive(&local_a8);
  pUVar1 = (this->DataInterfaceData).field0_0x0.DebugPtr;
                    /* WARNING: Could not recover jumptable at 0x00014e1af254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)pUVar1 + 0x368))(pUVar1,param_1);
  return;
}

// GetComponentBinding @ 14e1bd030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

UOptimusComponentSourceBinding * __thiscall
UOptimusNode_DataInterface::GetComponentBinding
          (UOptimusNode_DataInterface *this,FOptimusPinTraversalContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UOptimusNodePin *pUVar4;
  UOptimusComponentSourceBinding *pUVar5;
  TArray<UOptimusComponentSourceBinding_*,TSizedDefaultAllocator<32>_> *pTVar6;
  char *pcVar7;
  longlong *plVar8;
  UOptimusDeformer *this_00;
  atomic<unsigned_char> *paVar9;
  UOptimusNodeSubGraph *this_01;
  int iVar10;
  undefined1 auStackY_a8 [32];
  TArray<UOptimusComponentSourceBinding_*,TSizedDefaultAllocator<32>_> local_78;
  TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
  local_68;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  this_01 = (UOptimusNodeSubGraph *)this[-1]._padding_;
  if (this_01 == (UOptimusNodeSubGraph *)0x0) {
LAB_14e1bd089:
    this_01 = (UOptimusNodeSubGraph *)0x0;
  }
  else {
    pUVar3 = UOptimusNodeGraph::StaticClass();
    iVar10 = (int)pUVar3->_padding_;
    if ((*(int *)(this_01->_padding_ + 0x38) < iVar10) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar10 * 8) !=
        &pUVar3->_padding_)) goto LAB_14e1bd089;
  }
  pUVar4 = GetComponentPin((UOptimusNode_DataInterface *)&this[-1]._padding_);
  UOptimusNodeGraph::GetComponentSourceBindingsForPin
            ((UOptimusNodeGraph *)this_01,&local_68,pUVar4,param_1);
  if (local_68.Elements._8_4_ != local_68.Elements._52_4_) {
    if (local_68.Elements._8_4_ - local_68.Elements._52_4_ == 1) {
      pTVar6 = TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
               ::Array(&local_68,&local_78);
      if (pTVar6->ArrayNum < 1) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pUVar5 = (UOptimusComponentSourceBinding *)(*pcVar1)();
          return pUVar5;
        }
      }
      pUVar5 = *(UOptimusComponentSourceBinding **)(pTVar6->AllocatorInstance).Data;
      if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.AllocatorInstance.Data);
      }
      goto LAB_14e1bd24c;
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6536040888424988333>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_DataInterface.cpp"
                       ,0x153,"Bindings.Num() == 1");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar5 = (UOptimusComponentSourceBinding *)(*pcVar1)();
      return pUVar5;
    }
  }
  iVar10 = (int)this_01->_padding_;
  if ((iVar10 == 0) || (iVar10 - 1U < 2)) {
    plVar8 = (longlong *)(**(code **)(this_01->_padding_ + 0x10))(&this_01->_padding_);
    if (plVar8 != (longlong *)0x0) {
      this_00 = (UOptimusDeformer *)(**(code **)(*plVar8 + 8))(plVar8);
      if (this_00 != (UOptimusDeformer *)0x0) {
        pUVar3 = UOptimusDeformer::StaticClass();
        iVar10 = (int)pUVar3->_padding_;
        if ((iVar10 <= *(int *)(this_00->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar10 * 8) ==
            &pUVar3->_padding_)) {
          pUVar5 = UOptimusDeformer::GetPrimaryComponentBinding(this_00);
          goto LAB_14e1bd24c;
        }
      }
    }
    pcVar7 = "Deformer";
    iVar10 = 0x15c;
    paVar9 = &bGEnsureHasExecuted<_6536040888424988324>;
  }
  else {
    pUVar3 = UOptimusNodeSubGraph::StaticClass();
    iVar10 = (int)pUVar3->_padding_;
    if (((iVar10 <= *(int *)(this_01->_padding_ + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar10 * 8) ==
         &pUVar3->_padding_)) && (this_01 != (UOptimusNodeSubGraph *)0x0)) {
      pUVar5 = UOptimusNodeSubGraph::GetDefaultComponentBinding(this_01,param_1);
      goto LAB_14e1bd24c;
    }
    pcVar7 = "SubGraph";
    iVar10 = 0x164;
    paVar9 = &bGEnsureHasExecuted<_6536040888424988316>;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (paVar9,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_DataInterface.cpp"
                     ,iVar10,pcVar7);
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar5 = (UOptimusComponentSourceBinding *)(*pcVar1)();
    return pUVar5;
  }
  pUVar5 = (UOptimusComponentSourceBinding *)0x0;
LAB_14e1bd24c:
  local_68.HashSize = 0;
  if (local_68.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_68.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<UOptimusComponentSourceBinding_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UOptimusComponentSourceBinding_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_68.Elements);
  return pUVar5;
}

// GetComponentBinding`adjustor{8}' @ 14e1bd2a4

/* [thunk]:public: virtual class UOptimusComponentSourceBinding * __ptr64 __cdecl
   UOptimusNode_DataInterface::GetComponentBinding`adjustor{8}' (struct FOptimusPinTraversalContext
   const & __ptr64)const __ptr64 */

UOptimusComponentSourceBinding * __thiscall
UOptimusNode_DataInterface::GetComponentBinding_adjustor_8__
          (UOptimusNode_DataInterface *this,FOptimusPinTraversalContext *param_1)

{
  UOptimusComponentSourceBinding *pUVar1;
  
  pUVar1 = GetComponentBinding((UOptimusNode_DataInterface *)&this[-1].DataInterfaceData,param_1);
  return pUVar1;
}

// GetComponentPin @ 14e1bea40

UOptimusNodePin * __thiscall
UOptimusNode_DataInterface::GetComponentPin(UOptimusNode_DataInterface *this)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  UOptimusNodePin *pUVar5;
  
  iVar1 = (int)this->_padding_;
  puVar2 = (undefined8 *)this->_padding_;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar5 = (UOptimusNodePin *)(*pcVar3)();
      return pUVar5;
    }
  }
  else if (0 < iVar1) goto LAB_14e1beab4;
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("(Index >= 0) & (Index < ArrayNum)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pUVar5 = (UOptimusNodePin *)(*pcVar3)();
    return pUVar5;
  }
LAB_14e1beab4:
  return (UOptimusNodePin *)*puVar2;
}

// GetDataFunctionIndexFromPin @ 14e1c1200

int __thiscall
UOptimusNode_DataInterface::GetDataFunctionIndexFromPin
          (UOptimusNode_DataInterface *this,UOptimusNodePin *param_1)

{
  FShaderFunctionDefinition *pFVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  code *pcVar3;
  FShaderFunctionDefinition *pFVar4;
  FOptimusCDIPinDefinition *pFVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UClass *pUVar9;
  FName FVar10;
  longlong lVar11;
  FShaderFunctionDefinition *pFVar12;
  uint uVar13;
  ulonglong uVar14;
  ForAnyElementType FVar15;
  ulonglong uVar16;
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  FShaderFunctionDefinition *local_58;
  undefined8 local_50;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  FOptimusCDIPinDefinition *local_38;
  int local_30;
  
  if (param_1 == (UOptimusNodePin *)0x0) {
    return -1;
  }
  lVar11 = param_1->_padding_;
  if (lVar11 != 0) {
    pUVar9 = UOptimusNodePin::StaticClass();
    lVar11 = *(longlong *)(lVar11 + 0x10);
    iVar8 = (int)pUVar9->_padding_;
    if ((iVar8 <= *(int *)(lVar11 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar11 + 0x30) + (longlong)iVar8 * 8) ==
        &pUVar9->_padding_)) {
      return -1;
    }
  }
  (**(code **)(*(longlong *)this->_padding_ + 0x350))();
  uVar14 = 0;
  uVar16 = uVar14;
  if (0 < local_30) {
    do {
      uVar13 = (uint)uVar14;
      uVar7 = 0;
      if ((int)uVar13 < local_30) {
        uVar7 = ~uVar13 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        iVar8 = (*pcVar3)();
        return iVar8;
      }
      pFVar5 = local_38;
      FVar10 = UOptimusNodePin::GetUniqueName(param_1);
      if (*(longlong *)FVar10 ==
          *(longlong *)((longlong)&(pFVar5->PinName).ComparisonIndex.Value + uVar16)) {
        if (uVar13 != 0xffffffff) {
          uVar7 = 0;
          if ((int)uVar13 < local_30) {
            uVar7 = ~uVar13 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            iVar8 = (*pcVar3)();
            return iVar8;
          }
          local_48.Data = (FScriptContainerElement *)0x0;
          local_40 = local_38[(int)uVar13].DataFunctionName.Data.ArrayNum;
          lVar11 = (longlong)local_40;
          _Src = local_38[(int)uVar13].DataFunctionName.Data.AllocatorInstance.Data;
          if (local_40 == 0) {
            local_3c = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_40,0,&local_48,local_40,&local_3c);
            memcpy(local_48.Data,_Src,lVar11 * 2);
          }
          local_58 = (FShaderFunctionDefinition *)0x0;
          local_50 = 0;
          lVar11 = *(longlong *)this->_padding_;
          if (param_1->Direction == Input) {
            (**(code **)(lVar11 + 0x2e0))();
          }
          else {
            (**(code **)(lVar11 + 0x2d8))((longlong *)this->_padding_,&local_58);
          }
          FVar15.Data = local_48.Data;
          lVar11 = (longlong)local_40;
          local_68.Data = (FScriptContainerElement *)0x0;
          local_60 = local_40;
          if (local_40 == 0) {
            local_5c = 0;
            iVar8 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_40,0,&local_68,local_40,&local_5c);
            memcpy(local_68.Data,FVar15.Data,lVar11 * 2);
            iVar8 = local_60;
          }
          pFVar4 = local_58;
          pFVar1 = local_58 + (int)local_50;
          FVar15.Data = local_68.Data;
          pFVar12 = local_58;
          goto joined_r0x00014e1c14c8;
        }
        break;
      }
      uVar14 = (ulonglong)(uVar13 + 1);
      uVar16 = uVar16 + 0x38;
    } while ((int)(uVar13 + 1) < local_30);
  }
  bVar6 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_6536040888424988374>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_DataInterface.cpp"
                     ,0x12a,"PinIndex != INDEX_NONE");
  if (bVar6) {
    pcVar3 = (code *)swi(3);
    iVar8 = (*pcVar3)();
    return iVar8;
  }
  iVar8 = -1;
  goto LAB_14e1c133a;
joined_r0x00014e1c14c8:
  if (pFVar12 == pFVar1) goto LAB_14e1c1507;
  iVar2 = (pFVar12->Name).Data.ArrayNum;
  if (iVar2 == iVar8) {
    if (1 < iVar2) {
      iVar8 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar12->Name).Data.AllocatorInstance.Data,
                         (wchar_t *)FVar15.Data);
      bVar6 = iVar8 == 0;
      FVar15.Data = local_68.Data;
      iVar8 = local_60;
      goto LAB_14e1c14f7;
    }
LAB_14e1c154a:
    iVar8 = (int)(((longlong)pFVar12 - (longlong)pFVar4) / 0x28);
    if (FVar15.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar15.Data);
    }
    goto LAB_14e1c1519;
  }
  bVar6 = iVar2 + iVar8 == 1;
LAB_14e1c14f7:
  if (bVar6) goto LAB_14e1c154a;
  pFVar12 = pFVar12 + 1;
  goto joined_r0x00014e1c14c8;
LAB_14e1c1507:
  if (FVar15.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar15.Data);
  }
  iVar8 = -1;
LAB_14e1c1519:
  DestructItems<FShaderFunctionDefinition,int>(local_58,(int)local_50);
  if (local_58 != (FShaderFunctionDefinition *)0x0) {
    FMemory::Free(local_58);
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
LAB_14e1c133a:
  DestructItems<FOptimusCDIPinDefinition,int>(local_38,local_30);
  if (local_38 != (FOptimusCDIPinDefinition *)0x0) {
    FMemory::Free(local_38);
  }
  return iVar8;
}

// GetDataInterface @ 14e1c1a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UOptimusComputeDataInterface * __thiscall
UOptimusNode_DataInterface::GetDataInterface(UOptimusNode_DataInterface *this,UObject *param_1)

{
  int iVar1;
  longlong lVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  UOptimusComputeDataInterface *pUVar5;
  undefined1 auStackY_118 [32];
  undefined1 local_c8 [128];
  void *local_48;
  undefined4 local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_118;
  pUVar3 = (UObject *)this->_padding_;
  if (pUVar3 == (UObject *)0x0) {
    return (UOptimusComputeDataInterface *)0x0;
  }
  lVar2 = this->_padding_;
  if (lVar2 == 0) {
LAB_14e1c1b53:
    pUVar5 = NewObject<UOptimusComputeDataInterface>
                       (param_1,(UClass *)this->_padding_,(FName)0x0,RF_NoFlags,(UObject *)0x0,false
                        ,(FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    return pUVar5;
  }
  if (UE::GC::GIsIncrementalReachabilityPending) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  lVar2 = *(longlong *)(lVar2 + 0x10);
  if ((*(int *)(lVar2 + 0x38) < *(int *)&pUVar3[1].field_0x10) ||
     (*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)&pUVar3[1].field_0x10 * 8) !=
      &pUVar3[1].field_0x8)) goto LAB_14e1c1b53;
  InitStaticDuplicateObjectParams
            ((FObjectDuplicationParameters *)local_c8,(UObject *)this->_padding_,param_1,(FName)0x0,
             RF_AllocatedInSharedPage|RF_MirroredGarbage|RF_MigratingAsset|RF_HasExternalPackage|
             RF_WillBeLoaded|RF_ImmutableDefaultObject|RF_NonPIEDuplicateTransient|
             RF_StrongRefOnFrame|RF_DuplicateTransient|RF_InheritableComponentTemplate|
             RF_LoadCompleted|RF_TextExportTransient|RF_WasLoaded|RF_DefaultSubObject|
             RF_BeingRegenerated|RF_FinishDestroyed|RF_BeginDestroyed|RF_NewerVersionExists|
             RF_NeedPostLoadSubobjects|RF_NeedPostLoad|RF_KeepForCooker|RF_NeedLoad|
             RF_NeedInitialization|RF_TagGarbageTemp|RF_MarkAsRootSet|RF_Transient|
             RF_ArchetypeObject|RF_ClassDefaultObject|RF_Transactional|RF_MarkAsNative|RF_Standalone
             |RF_Public,(UClass *)0x0,Normal,
             PendingConstruction|RootSet|Unreachable|AsyncLoadingPhase2|Async|Native|ClusterRoot|
             ReachableInCluster|AsyncLoadingPhase1|Garbage|LoaderImport|AutoRTFMConstructionAborted|
             ReachabilityFlag2|ReachabilityFlag1|ReachabilityFlag0);
  pUVar3 = StaticDuplicateObjectEx((FObjectDuplicationParameters *)local_c8);
  if (pUVar3 != (UObject *)0x0) {
    pUVar4 = UOptimusComputeDataInterface::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14e1c1b28;
  }
  pUVar3 = (UObject *)0x0;
LAB_14e1c1b28:
  local_40 = 0;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_c8 + 0x40));
  return (UOptimusComputeDataInterface *)pUVar3;
}

// GetDisplayName @ 14e1c4570

FText * __thiscall
UOptimusNode_DataInterface::GetDisplayName
          (UOptimusNode_DataInterface *this,FText *__return_storage_ptr__)

{
  UOptimusComputeDataInterface *pUVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  FString *pFVar5;
  FText *pFVar6;
  int iVar7;
  undefined1 local_res8 [16];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_118;
  FText local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FName local_c8;
  FText local_c0;
  FText local_b0;
  FText local_a0;
  FString local_90;
  FFormatArgumentValue local_78;
  undefined4 local_58;
  FText local_48;
  FString local_38;
  
  bVar3 = FText::IsEmpty((FText *)&this->_padding_);
  if (bVar3) {
    local_c8 = *(FName *)(this->_padding_ + 0x18);
    ::FName::ToString(&local_c8,&local_d8);
    local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.Data.ArrayNum = 0;
    local_e8.Data.ArrayMax = 0;
    local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.Data.ArrayNum = 0;
    local_f8.Data.ArrayMax = 0;
    ::FString::FString(&local_90,"_");
    bVar3 = ::FString::Split(&local_d8,&local_90,&local_e8,&local_f8);
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
    if (!bVar3) {
      iVar7 = local_d8.Data.ArrayNum + -1;
      if (local_d8.Data.ArrayNum == 0) {
        iVar7 = 0;
      }
      ::FString::AssignRange(&local_f8,(wchar_t *)local_d8.Data.AllocatorInstance.Data,iVar7);
    }
    pFVar5 = ::FName::NameToDisplayString(&local_38,&local_f8,false);
    FText::FromString(&local_108,pFVar5);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
  }
  else {
    local_108.TextData.Reference = (ITextData *)this->_padding_;
    if (local_108.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_108.TextData.Reference + 8))
                (local_108.TextData.Reference,local_res8);
    }
    local_108.Flags = (uint)this->_padding_;
  }
  pUVar1 = (this->DataInterfaceData).field0_0x0.DebugPtr;
  if (pUVar1 != (UOptimusComputeDataInterface *)0x0) {
    cVar4 = (**(code **)(*(longlong *)pUVar1 + 0x3a0))();
    if (cVar4 == '\0') {
      FText::AsLocalizable_Advanced_LocText
                (&local_a0,L"OptimusNode_DataInterface",L"OutdatedSuffix",L"(Outdated)");
      local_b0.TextData.Reference = local_a0.TextData.Reference;
      if (local_a0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_a0.TextData.Reference + 8))
                  (local_a0.TextData.Reference,local_res18);
      }
      local_b0.Flags = local_a0.Flags;
      local_c0.TextData.Reference = local_108.TextData.Reference;
      if (local_108.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_108.TextData.Reference + 8))
                  (local_108.TextData.Reference,local_res20);
      }
      local_c0.Flags = local_108.Flags;
      pFVar6 = FText::GetEmpty();
      local_78.Type = Text;
      FText::FText((FText *)&local_78.TextValue,&local_c0);
      if (local_78.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar6 = (FText *)(*pcVar2)();
          return pFVar6;
        }
      }
      local_58 = 4;
      FText::FText(&local_48,&local_b0);
      if (local_48.TextData.Reference == (ITextData *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar6 = (FText *)(*pcVar2)();
          return pFVar6;
        }
      }
      local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_118.ArrayNum = 2;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,0,&local_118.AllocatorInstance,2,&local_118.ArrayMax);
      ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                (local_118.AllocatorInstance.Data,&local_78,2);
      FText::Join(__return_storage_ptr__,pFVar6,&local_118);
      DestructItems<FFormatArgumentValue,int>
                ((FFormatArgumentValue *)local_118.AllocatorInstance.Data,local_118.ArrayNum);
      if ((FFormatArgumentValue *)local_118.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
        FMemory::Free(local_118.AllocatorInstance.Data);
      }
      if (local_48.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
      }
      if (local_78.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_78.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      if (local_c0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_c0.TextData.Reference + 0x10))();
      }
      if (local_b0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_b0.TextData.Reference + 0x10))();
      }
      if (local_a0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_a0.TextData.Reference + 0x10))();
      }
      goto LAB_14e1c487b;
    }
  }
  FText::FText(__return_storage_ptr__,&local_108);
LAB_14e1c487b:
  if (local_108.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetNodeCategory @ 14e1cadd0

FName __thiscall UOptimusNode_DataInterface::GetNodeCategory(UOptimusNode_DataInterface *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = UOptimusNode::CategoryName::DataInterfaces;
  return in_RDX;
}

// GetOutputPinMutability @ 14e1cbdc0

EOptimusPinMutability __thiscall
UOptimusNode_DataInterface::GetOutputPinMutability
          (UOptimusNode_DataInterface *this,UOptimusNodePin *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  EOptimusPinMutability EVar4;
  FName FVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  FOptimusCDIPinDefinition *local_28;
  int local_20;
  
  (**(code **)(*(longlong *)this->_padding_ + 0x350))();
  uVar7 = 0;
  uVar8 = uVar7;
  if (0 < local_20) {
    do {
      FVar5 = UOptimusNodePin::GetUniqueName(param_1);
      uVar6 = (uint)uVar7;
      uVar3 = 0;
      if ((int)uVar6 < local_20) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        EVar4 = (*pcVar1)();
        return EVar4;
      }
      if (*(longlong *)((longlong)&(local_28->PinName).ComparisonIndex.Value + uVar8) ==
          *(longlong *)FVar5) {
        if (uVar6 != 0xffffffff) {
          uVar3 = 0;
          if ((int)uVar6 < local_20) {
            uVar3 = ~uVar6 >> 0x1f;
          }
          if ((uVar3 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            EVar4 = (*pcVar1)();
            return EVar4;
          }
          EVar4 = (local_28[(int)uVar6].bMutable != false) + Immutable;
          goto LAB_14e1cbeac;
        }
        break;
      }
      uVar7 = (ulonglong)(uVar6 + 1);
      uVar8 = uVar8 + 0x38;
    } while ((int)(uVar6 + 1) < local_20);
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_6536040888424988293>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_DataInterface.cpp"
                     ,0x17b,"PinDefinitionIndex != INDEX_NONE");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    EVar4 = (*pcVar1)();
    return EVar4;
  }
  EVar4 = Mutable;
LAB_14e1cbeac:
  DestructItems<FOptimusCDIPinDefinition,int>(local_28,local_20);
  if (local_28 != (FOptimusCDIPinDefinition *)0x0) {
    FMemory::Free(local_28);
  }
  return EVar4;
}

// GetPrivateStaticClass @ 14e1d78e0

UClass * __cdecl UOptimusNode_DataInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusNode_DataInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusNode_DataInterface",
               &Z_Registration_Info_UClass_UOptimusNode_DataInterface.InnerSingleton,
               StaticRegisterNativesUOptimusNode_DataInterface,0x138,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusNode_DataInterface>,
               InternalVTableHelperCtorCaller<UOptimusNode_DataInterface>,local_res8,
               UOptimusNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusNode_DataInterface.InnerSingleton;
}

// GetPropertyPins @ 14e1db140

TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> * __thiscall
UOptimusNode_DataInterface::GetPropertyPins
          (UOptimusNode_DataInterface *this,
          TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FName FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *pTVar7;
  FOptimusCDIPropertyPinDefinition *pFVar8;
  FOptimusCDIPropertyPinDefinition *pFVar9;
  undefined1 local_res8 [16];
  UOptimusNodePin *local_68;
  TArray<FName,TSizedDefaultAllocator<32>_> local_60;
  FOptimusCDIPropertyPinDefinition *local_50;
  int local_48;
  
  (**(code **)(*(longlong *)this->_padding_ + 0x358))((longlong *)this->_padding_,&local_50);
  iVar4 = local_48;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar8 = local_50 + local_48;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar9 = local_50;
  while( true ) {
    if (local_48 != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FOptimusCDIPropertyPinDefinition_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar8) break;
    FVar1 = pFVar9->PinName;
    local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_60.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,1,0,&local_60.AllocatorInstance,1,&local_60.ArrayMax);
    *(FName *)local_60.AllocatorInstance.Data = FVar1;
    local_68 = UOptimusNode::FindPinFromPath((UOptimusNode *)&this[-1]._padding_,&local_60);
    if ((FName *)local_60.AllocatorInstance.Data != (FName *)0x0) {
      FMemory::Free(local_60.AllocatorInstance.Data);
    }
    if ((local_68 != (UOptimusNodePin *)0x0) && (local_68->Direction == Input)) {
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar2 <= (FScriptContainerElement *)&local_68) &&
         ((FScriptContainerElement *)&local_68 <
          pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 8)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar7;
        }
      }
      iVar6 = __return_storage_ptr__->ArrayNum;
      if (iVar6 == __return_storage_ptr__->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar6 + 1;
      *(UOptimusNodePin **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8)
           = local_68;
    }
    pFVar9 = pFVar9 + 1;
  }
  DestructItems<FOptimusCDIPropertyPinDefinition,int>(local_50,local_48);
  if (local_50 != (FOptimusCDIPropertyPinDefinition *)0x0) {
    FMemory::Free(local_50);
  }
  return __return_storage_ptr__;
}

// GetTooltipText @ 14e1e7500

FText * __thiscall
UOptimusNode_DataInterface::GetTooltipText
          (UOptimusNode_DataInterface *this,FText *__return_storage_ptr__)

{
  FText::FText(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ImportState @ 14e1ea1e0

void __thiscall
UOptimusNode_DataInterface::ImportState(UOptimusNode_DataInterface *this,FArchive *param_1)

{
  UOptimusComputeDataInterface *pUVar1;
  UObjectBase *this_00;
  FObjectAndNameAsStringProxyArchive local_a8;
  
  FObjectAndNameAsStringProxyArchive::FObjectAndNameAsStringProxyArchive(&local_a8,param_1,false);
  UObject::SerializeScriptProperties((UObject *)this,(FArchive *)&local_a8);
  FObjectAndNameAsStringProxyArchive::~FObjectAndNameAsStringProxyArchive(&local_a8);
  this_00 = (UObjectBase *)
            NewObject<UOptimusComputeDataInterface>
                      ((UObject *)this,(this->DataInterfaceClass).field0_0x0.DebugPtr,(FName)0x0,
                       RF_NoFlags,(UObject *)0x0,false,(FObjectInstancingGraph *)0x0,(UPackage *)0x0
                      );
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UObjectBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  (this->DataInterfaceData).field0_0x0.DebugPtr = (UOptimusComputeDataInterface *)this_00;
  UObjectBase::AtomicallySetFlags(this_00,RF_Transactional);
  pUVar1 = (this->DataInterfaceData).field0_0x0.DebugPtr;
                    /* WARNING: Could not recover jumptable at 0x00014e1ea29c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)pUVar1 + 0x370))(pUVar1,param_1);
  return;
}

// InitializePinsDisplayName @ 14e1ed2c0

void __thiscall
UOptimusNode_DataInterface::InitializePinsDisplayName(UOptimusNode_DataInterface *this)

{
  FName *pFVar1;
  int iVar2;
  UOptimusComputeDataInterface *pUVar3;
  longlong lVar4;
  code *pcVar5;
  longlong *plVar6;
  ForAnyElementType _Src;
  bool bVar7;
  ulonglong uVar8;
  longlong *plVar9;
  FOptimusCDIPinDefinition *pFVar10;
  int iVar11;
  FOptimusCDIPinDefinition *pFVar12;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  uint local_res18;
  FOptimusCDIPinDefinition *local_res20;
  FName local_a8;
  longlong *local_a0;
  ForAnyElementType local_98;
  int local_90;
  int local_8c;
  FOptimusCDIPinDefinition *local_88;
  uint local_80;
  FString local_78;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  
  pUVar3 = (this->DataInterfaceData).field0_0x0.DebugPtr;
  if (pUVar3 == (UOptimusComputeDataInterface *)0x0) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6536040888424988435>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_DataInterface.cpp"
                       ,0xed,"DataInterfaceData");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    (**(code **)(*(longlong *)pUVar3 + 0x350))();
    uVar8 = (ulonglong)(int)local_80;
    local_res18 = local_80;
    local_res20 = local_88 + uVar8;
    pFVar10 = local_res20;
    pFVar12 = local_88;
    while( true ) {
      if (local_80 != (uint)uVar8) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FOptimusCDIPinDefinition,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar12 == pFVar10) break;
      if (pFVar12->PinName == (FName)0x0) {
        bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_6536040888424988431>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_DataInterface.cpp"
                           ,0xf1,"!Def.PinName.IsNone()");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
LAB_14e1ed4f3:
        uVar8 = (ulonglong)local_res18;
        pFVar12 = pFVar12 + 1;
      }
      else {
        plVar9 = (longlong *)this->_padding_;
        iVar2 = (int)this->_padding_;
        local_a0 = plVar9 + iVar2;
        while( true ) {
          plVar6 = local_a0;
          if ((int)this->_padding_ != iVar2) {
            local_res10[0] = 0;
            `TCheckedPointerIterator<TObjectPtr<UOptimusNodePin>_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res10);
          }
          pFVar10 = local_res20;
          if (plVar9 == plVar6) goto LAB_14e1ed4f3;
          lVar4 = *plVar9;
          local_a8 = *(FName *)(lVar4 + 0x18);
          ::FName::ToString(&local_a8,&local_78);
          _Src.Data = local_78.Data.AllocatorInstance.Data;
          local_98.Data = (FScriptContainerElement *)0x0;
          iVar11 = local_78.Data.ArrayNum;
          local_90 = iVar11;
          if (iVar11 == 0) {
            local_8c = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar11,0,&local_98,iVar11,&local_8c);
            memcpy(local_98.Data,_Src.Data,(longlong)iVar11 * 2);
          }
          iStack_60 = local_90 + -1;
          if (local_90 == 0) {
            iStack_60 = 0;
          }
          local_58._12_4_ = uStack_5c;
          local_58.Size = iStack_60;
          local_68 = local_98.Data;
          local_58.DataPtr = (wchar_t *)local_98.Data;
          bVar7 = ::FName::Equals(pFVar12->PinName,&local_58);
          if (local_98.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.Data);
          }
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
          if (bVar7) break;
          plVar9 = plVar9 + 1;
        }
        pFVar1 = &pFVar12->DisplayName;
        pFVar10 = local_res20;
        if (*(FName *)(lVar4 + 0xb0) == *pFVar1) goto LAB_14e1ed4f3;
        uVar8 = (ulonglong)local_res18;
        pFVar12 = pFVar12 + 1;
        *(FName *)(lVar4 + 0xb0) = *pFVar1;
      }
    }
    DestructItems<FOptimusCDIPinDefinition,int>(local_88,local_80);
    if (local_88 != (FOptimusCDIPinDefinition *)0x0) {
      FMemory::Free(local_88);
    }
  }
  return;
}

// InitializeTransientData @ 14e1ed8f0

void __thiscall
UOptimusNode_DataInterface::InitializeTransientData(UOptimusNode_DataInterface *this)

{
  UOptimusComputeDataInterface *pUVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  
  pUVar1 = (this->DataInterfaceData).field0_0x0.DebugPtr;
  if (pUVar1 != (UOptimusComputeDataInterface *)0x0) {
    cVar4 = (**(code **)(*(longlong *)pUVar1 + 0x378))();
    if (cVar4 != '\0') {
      *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
    }
    pUVar1 = (this->DataInterfaceData).field0_0x0.DebugPtr;
                    /* WARNING: Could not recover jumptable at 0x00014e1ed95e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar1 + 0x380))(pUVar1,this);
    return;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_6536040888424988448>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_DataInterface.cpp"
                     ,0xe0,"DataInterfaceData");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// IsComponentSourceCompatible @ 14e1eeb10

bool __thiscall
UOptimusNode_DataInterface::IsComponentSourceCompatible
          (UOptimusNode_DataInterface *this,UOptimusComponentSource *param_1)

{
  int iVar1;
  UOptimusComputeDataInterface *pUVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  UClass *pUVar6;
  longlong lVar7;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  
  if (param_1 == (UOptimusComponentSource *)0x0) {
    return false;
  }
  plVar5 = (longlong *)(**(code **)(*(longlong *)param_1 + 0x2c0))(param_1,local_res10);
  lVar7 = *plVar5;
  if ((lVar7 != 0) &&
     (pUVar6 = Z_Construct_UClass_UActorComponent_NoRegister(), pUVar6 != (UClass *)0x0)) {
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(lVar7 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar7 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      lVar7 = *plVar5;
      goto LAB_14e1eeb7c;
    }
  }
  lVar7 = 0;
LAB_14e1eeb7c:
  pUVar2 = (this->DataInterfaceData).field0_0x0.DebugPtr;
  plVar5 = (longlong *)(**(code **)(*(longlong *)pUVar2 + 0x388))(pUVar2,local_res18);
  lVar3 = *plVar5;
  if ((lVar3 != 0) &&
     (pUVar6 = Z_Construct_UClass_UActorComponent_NoRegister(), pUVar6 != (UClass *)0x0)) {
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && (lVar3 = *plVar5, lVar3 != 0)) {
      if ((*(int *)(lVar7 + 0x38) < *(int *)(lVar3 + 0x38)) ||
         (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
          lVar3 + 0x30)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        return true;
      }
    }
  }
  return false;
}

// OnDataTypeChanged @ 14e1f4c40

void __thiscall
UOptimusNode_DataInterface::OnDataTypeChanged(UOptimusNode_DataInterface *this,FName param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014e1f4c4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(this->DataInterfaceData).field0_0x0.DebugPtr + 0x390))();
  return;
}

// PostDuplicate @ 14e1fa630

void __thiscall
UOptimusNode_DataInterface::PostDuplicate(UOptimusNode_DataInterface *this,Type param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->DataInterfaceData).field0_0x0.DebugPtr == (UOptimusComputeDataInterface *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataInterfaceData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_DataInterface.cpp"
                       ,0x1b9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(UOptimusNode_DataInterface **)&((this->DataInterfaceData).field0_0x0.DebugPtr)->field_0x20
      != this) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataInterfaceData->GetOuter() == this",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_DataInterface.cpp"
                       ,0x1ba,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// PostLoadNodeSpecificData @ 14e1fef40

void __thiscall
UOptimusNode_DataInterface::PostLoadNodeSpecificData(UOptimusNode_DataInterface *this)

{
  UClass *pUVar1;
  int iVar2;
  UObjectBase *this_00;
  FGuid local_18;
  
  UOptimusNode::PostLoadNodeSpecificData((UOptimusNode *)this);
  pUVar1 = (this->DataInterfaceClass).field0_0x0.DebugPtr;
  if ((pUVar1 != (UClass *)0x0) &&
     ((this->DataInterfaceData).field0_0x0.DebugPtr == (UOptimusComputeDataInterface *)0x0)) {
    this_00 = (UObjectBase *)
              NewObject<UOptimusComputeDataInterface>
                        ((UObject *)this,pUVar1,(FName)0x0,RF_NoFlags,(UObject *)0x0,false,
                         (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UObjectBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    (this->DataInterfaceData).field0_0x0.DebugPtr = (UOptimusComputeDataInterface *)this_00;
    UObjectBase::AtomicallySetFlags(this_00,RF_Transactional);
  }
  local_18 = FOptimusObjectVersion::GUID;
  iVar2 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_18);
  if (iVar2 < 5) {
    CreateComponentPin(this);
  }
  local_18 = FOptimusObjectVersion::GUID;
  iVar2 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_18);
  if (iVar2 < 0xc) {
    CreatePropertyPinsFromDataInterface(this,(this->DataInterfaceData).field0_0x0.DebugPtr,false);
    return;
  }
  return;
}

// RecreatePinsFromPinDefinitions @ 14e204c70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UOptimusNode_DataInterface::RecreatePinsFromPinDefinitions(UOptimusNode_DataInterface *this)

{
  int iVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  UOptimusNodePin *pUVar4;
  UOptimusNodePin *pUVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  UOptimusNode *pUVar10;
  UClass *pUVar11;
  TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *pTVar12;
  ForElementType<FSetElementId> FVar13;
  ForAnyElementType FVar14;
  UOptimusNodeGraph *pUVar15;
  longlong lVar16;
  undefined8 *puVar17;
  FName FVar18;
  FName FVar19;
  undefined8 *puVar20;
  undefined1 auStackY_128 [32];
  undefined1 local_d8 [8];
  ForAnyElementType local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [8];
  UOptimusNodePin *local_b8;
  TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> local_b0;
  FName local_a0;
  FName local_98;
  UOptimusNode_DataInterface *local_90;
  TMapBase<FName,TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>,0>_>
  local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
  iVar8 = (int)this->_padding_;
  puVar20 = (undefined8 *)this->_padding_;
  local_88.Pairs.Elements._0_8_ = 0;
  local_88.Pairs.Elements._8_8_ = 0;
  local_88.Pairs.Elements._32_8_ = 0;
  local_88.Pairs.Elements._40_4_ = 0;
  local_88.Pairs.Elements._44_4_ = 0x80;
  local_88.Pairs.Elements._48_4_ = 0xffffffff;
  local_88.Pairs.Elements._52_4_ = 0;
  local_88.Pairs.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_88.Pairs.HashSize = 0;
  local_d0.Data = (FScriptContainerElement *)0x0;
  local_c8 = 0;
  local_90 = this;
  if ((iVar8 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  puVar17 = puVar20 + iVar8;
  FVar14.Data = local_d0.Data;
  do {
    local_d0.Data = FVar14.Data;
    if (puVar20 == puVar17) {
      iVar8 = (int)local_c8;
      pFVar3 = FVar14.Data + (longlong)(int)local_c8 * 8;
      while( true ) {
        if ((int)local_c8 != iVar8) {
          local_d8[0] = 0;
          `TCheckedPointerIterator<UOptimusNodePin_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_d8);
        }
        if (FVar14.Data == pFVar3) break;
        UOptimusNode::RemovePin((UOptimusNode *)this,*(UOptimusNodePin **)FVar14.Data);
        FVar14.Data = FVar14.Data + 8;
      }
      CreatePropertyPinsFromDataInterface(this,(this->DataInterfaceData).field0_0x0.DebugPtr,true);
      CreateShaderPinsFromDataInterface(this,(this->DataInterfaceData).field0_0x0.DebugPtr,true);
      iVar8 = (int)this->_padding_;
      FVar18 = (FName)this->_padding_;
      local_98 = FVar18;
      if ((iVar8 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar19 = (FName)((longlong)FVar18 + (longlong)iVar8 * 8);
      local_a0 = FVar19;
      if (FVar18 != FVar19) {
        do {
          pUVar4 = *(UOptimusNodePin **)FVar18;
          lVar16 = pUVar4->_padding_;
          uVar9 = ::GetTypeHash((FNameEntryId)(uint)lVar16);
          if (local_88.Pairs.Elements._8_4_ != local_88.Pairs.Elements._52_4_) {
            FVar13 = (ForElementType<FSetElementId>)&local_88.Pairs.Hash;
            if (local_88.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar13 = local_88.Pairs.Hash.SecondaryData;
            }
            for (iVar8 = *(int *)((longlong)FVar13 +
                                 (ulonglong)
                                 (local_88.Pairs.HashSize - 1U &
                                 (int)((ulonglong)lVar16 >> 0x20) + uVar9) * 4); iVar8 != -1;
                iVar8 = *(int *)((longlong)iVar8 * 0x20 + 0x18 + local_88.Pairs.Elements._0_8_)) {
              if (*(longlong *)((longlong)iVar8 * 0x20 + local_88.Pairs.Elements._0_8_) == lVar16) {
                if (((iVar8 != -1) &&
                    (lVar16 = (longlong)iVar8 * 0x20 + local_88.Pairs.Elements._0_8_, lVar16 != 0))
                   && ((longlong *)(lVar16 + 8) != (longlong *)0x0)) {
                  puVar17 = *(undefined8 **)(lVar16 + 8);
                  iVar8 = *(int *)(lVar16 + 0x10);
                  puVar20 = puVar17 + iVar8;
                  goto LAB_14e205058;
                }
                break;
              }
            }
          }
LAB_14e2050c1:
          FVar18 = (FName)((longlong)FVar18 + 8);
          local_98 = FVar18;
        } while (FVar18 != FVar19);
      }
      if (local_d0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data);
      }
      local_88.Pairs.HashSize = 0;
      if (local_88.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_88.Pairs.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&local_88);
      return;
    }
    iVar8 = (int)this->_padding_;
    local_b8 = (UOptimusNodePin *)*puVar20;
    plVar2 = (longlong *)this->_padding_;
    if (iVar8 < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
LAB_14e204d5d:
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    else if (iVar8 < 1) goto LAB_14e204d5d;
    pUVar4 = local_b8;
    if (local_b8 != (UOptimusNodePin *)*plVar2) {
      pUVar10 = UOptimusNodePin::GetOwningNode(local_b8);
      pUVar15 = (UOptimusNodeGraph *)pUVar10->_padding_;
      if (pUVar15 == (UOptimusNodeGraph *)0x0) {
LAB_14e204ddf:
        bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_7986583113880829533>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusNodePin.cpp"
                           ,0x1a3,"Graph != nullptr");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_b0.ArrayNum = 0;
        local_b0.ArrayMax = 0;
      }
      else {
        pUVar11 = UOptimusNodeGraph::StaticClass();
        iVar8 = (int)pUVar11->_padding_;
        if ((*(int *)(pUVar15->_padding_ + 0x38) < iVar8) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar15->_padding_ + 0x30) + (longlong)iVar8 * 8) !=
            &pUVar11->_padding_)) goto LAB_14e204ddf;
        UOptimusNodeGraph::GetConnectedPins(pUVar15,&local_b0,pUVar4);
      }
      local_a0 = (FName)local_b8->_padding_;
      pTVar12 = TMapBase<FName,TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>,0>_>
                ::Emplace<FName>(&local_88,&local_a0);
      if (pTVar12 != &local_b0) {
        pFVar3 = (pTVar12->AllocatorInstance).Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        (pTVar12->AllocatorInstance).Data = local_b0.AllocatorInstance.Data;
        local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        pTVar12->ArrayNum = local_b0.ArrayNum;
        pTVar12->ArrayMax = local_b0.ArrayMax;
        local_b0.ArrayNum = 0;
        local_b0.ArrayMax = 0;
      }
      if (local_b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.AllocatorInstance.Data);
      }
      if (((local_d0.Data <= (FScriptContainerElement *)&local_b8) &&
          ((FScriptContainerElement *)&local_b8 < local_d0.Data + (longlong)local_c8._4_4_ * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar8 = (int)local_c8;
      if ((int)local_c8 == local_c8._4_4_) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_d0,(int *)((longlong)&local_c8 + 4));
      }
      local_c8 = CONCAT44(local_c8._4_4_,iVar8 + 1);
      *(UOptimusNodePin **)(local_d0.Data + (longlong)iVar8 * 8) = local_b8;
    }
    puVar20 = puVar20 + 1;
    FVar14.Data = local_d0.Data;
  } while( true );
LAB_14e205058:
  if (*(int *)(lVar16 + 0x10) != iVar8) {
    `TCheckedPointerIterator<UOptimusNodePin_*,int,0>::operator!='::__l2::<lambda_1>::operator()
              (local_c0);
  }
  FVar18 = local_98;
  FVar19 = local_a0;
  if (puVar17 == puVar20) goto LAB_14e2050c1;
  pUVar5 = (UOptimusNodePin *)*puVar17;
  pUVar15 = (UOptimusNodeGraph *)local_90->_padding_;
  if (pUVar15 == (UOptimusNodeGraph *)0x0) {
LAB_14e20509f:
    pUVar15 = (UOptimusNodeGraph *)0x0;
  }
  else {
    pUVar11 = UOptimusNodeGraph::StaticClass();
    iVar1 = (int)pUVar11->_padding_;
    if ((*(int *)(pUVar15->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar15->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar11->_padding_)) goto LAB_14e20509f;
  }
  UOptimusNodeGraph::AddLink(pUVar15,pUVar4,pUVar5);
  puVar17 = puVar17 + 1;
  goto LAB_14e205058;
}

// RenamePinFromPinDefinition @ 14e2180e0

void __thiscall
UOptimusNode_DataInterface::RenamePinFromPinDefinition
          (UOptimusNode_DataInterface *this,FName param_1,FName param_2)

{
  int iVar1;
  FString *pFVar2;
  UOptimusNodePin *pUVar3;
  FName local_res10;
  TArray<FName,TSizedDefaultAllocator<32>_> local_38;
  TStringView<wchar_t> local_28;
  FString local_18;
  
  local_res10 = param_1;
  pFVar2 = ::FName::ToString(&local_res10,&local_18);
  pUVar3 = (UOptimusNodePin *)0x0;
  local_38.AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
  iVar1 = (pFVar2->Data).ArrayNum;
  local_38.ArrayNum = iVar1 + -1;
  if (iVar1 == 0) {
    local_38.ArrayNum = 0;
  }
  local_28._12_4_ = local_38.ArrayMax;
  local_28.Size = local_38.ArrayNum;
  local_28.DataPtr = (wchar_t *)local_38.AllocatorInstance.Data;
  UOptimusNodePin::GetPinNamePathFromString(&local_38,&local_28);
  if (local_38.ArrayNum != 0) {
    pUVar3 = UOptimusNode::FindPinFromPath((UOptimusNode *)this,&local_38);
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  UOptimusNode::SetPinName((UOptimusNode *)this,pUVar3,param_2);
  return;
}

// Serialize @ 14e21b9c0

void __thiscall
UOptimusNode_DataInterface::Serialize(UOptimusNode_DataInterface *this,FArchive *param_1)

{
  UObject::Serialize((UObject *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FOptimusObjectVersion::GUID);
                    /* WARNING: Could not recover jumptable at 0x00014e21b9f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FOptimusObjectVersion::GUID);
  return;
}

// Serialize @ 14e21ba00

void __thiscall
UOptimusNode_DataInterface::Serialize
          (UOptimusNode_DataInterface *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar1);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FOptimusObjectVersion::GUID);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FOptimusObjectVersion::GUID);
  return;
}

// SetDataInterfaceClass @ 14e21d790

void __thiscall
UOptimusNode_DataInterface::SetDataInterfaceClass
          (UOptimusNode_DataInterface *this,TSubclassOf<UOptimusComputeDataInterface> param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  UObjectBase *this_00;
  UClass *pUVar5;
  
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  pUVar5 = (UClass *)0x0;
  if ((lVar2 != 0) &&
     (pUVar4 = UOptimusComputeDataInterface::StaticClass(), pUVar4 != (UClass *)0x0)) {
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pUVar5 = *(UClass **)param_1.Class.field0_0x0;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->DataInterfaceClass).field0_0x0.DebugPtr = pUVar5;
  this_00 = (UObjectBase *)
            NewObject<UOptimusComputeDataInterface>
                      ((UObject *)this,pUVar5,(FName)0x0,RF_NoFlags,(UObject *)0x0,false,
                       (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UObjectBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  (this->DataInterfaceData).field0_0x0.DebugPtr = (UOptimusComputeDataInterface *)this_00;
  UObjectBase::AtomicallySetFlags(this_00,RF_Transactional);
                    /* WARNING: Could not recover jumptable at 0x00014e21d87c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(this->DataInterfaceData).field0_0x0.DebugPtr + 0x360))();
  return;
}

// StaticRegisterNativesUOptimusNode_DataInterface @ 14e225cb0

void __cdecl UOptimusNode_DataInterface::StaticRegisterNativesUOptimusNode_DataInterface(void)

{
  return;
}

// UpdateDisplayNameFromDataInterface @ 14e22c290

void __thiscall
UOptimusNode_DataInterface::UpdateDisplayNameFromDataInterface(UOptimusNode_DataInterface *this)

{
  UOptimusComputeDataInterface *pUVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  FText *pFVar5;
  void *local_28 [2];
  FText local_18;
  
  pUVar1 = (this->DataInterfaceData).field0_0x0.DebugPtr;
  if (pUVar1 == (UOptimusComputeDataInterface *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6536040888424988456>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_DataInterface.cpp"
                       ,0xd8,"DataInterfaceData");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    pFVar4 = (FString *)(**(code **)(*(longlong *)pUVar1 + 0x340))(pUVar1,local_28);
    pFVar5 = FText::FromString(&local_18,pFVar4);
    UOptimusNode::SetDisplayName((UOptimusNode *)this,pFVar5);
    if (local_28[0] != (void *)0x0) {
      FMemory::Free(local_28[0]);
    }
  }
  return;
}

// ValidateConnection @ 14e22f0a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UOptimusNode_DataInterface::ValidateConnection
          (UOptimusNode_DataInterface *this,UOptimusNodePin *param_1,UOptimusNodePin *param_2,
          FString *param_3)

{
  int iVar1;
  longlong lVar2;
  UOptimusComputeDataInterface *pUVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  UOptimusNodePin **ppUVar8;
  UOptimusNode *pUVar9;
  UClass *pUVar10;
  UOptimusComponentSourceBinding *this_00;
  UOptimusComponentSource *pUVar11;
  longlong *plVar12;
  UOptimusNode *pUVar13;
  undefined1 auStack_f8 [32];
  FString local_d8;
  FName local_c8;
  FName local_c0;
  FString local_b8;
  FString local_a8;
  TArrayView<UOptimusNodePin_*_const,int> local_98;
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_f8;
  iVar1 = (int)this->_padding_;
  if (iVar1 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  else if (iVar1 == 0) {
    return true;
  }
  local_98.DataPtr = (UOptimusNodePin **)this->_padding_;
  iVar1 = (int)this->_padding_;
  if ((iVar1 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  local_98.ArrayNum = iVar1;
  ppUVar8 = TArrayView<UOptimusNodePin_*_const,int>::operator[](&local_98,0);
  if (param_1 != *ppUVar8) {
    return true;
  }
  pUVar9 = UOptimusNodePin::GetOwningNode(param_2);
  pUVar13 = (UOptimusNode *)0x0;
  if (pUVar9 != (UOptimusNode *)0x0) {
    pUVar10 = UOptimusNode_ComponentSource::StaticClass();
    iVar1 = (int)pUVar10->_padding_;
    if ((iVar1 <= *(int *)(pUVar9->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar10->_padding_)) goto LAB_14e22f18a;
  }
  pUVar9 = pUVar13;
LAB_14e22f18a:
  if (pUVar9 != (UOptimusNode *)0x0) {
    local_58 = (void *)0x0;
    local_50 = 0;
    local_4c = 4;
    this_00 = (UOptimusComponentSourceBinding *)
              (**(code **)(pUVar9[1]._padding_ + 0x10))(pUVar9 + 1,local_78);
    pUVar11 = UOptimusComponentSourceBinding::GetComponentSource(this_00);
    if (local_58 != (void *)0x0) {
      FMemory::Free(local_58);
    }
    bVar6 = IsComponentSourceCompatible(this,pUVar11);
    if (!bVar6) {
      if (param_3 != (FString *)0x0) {
        plVar12 = (longlong *)(**(code **)(*(longlong *)pUVar11 + 0x2c0))(pUVar11,local_88);
        lVar2 = *plVar12;
        pUVar9 = pUVar13;
        if ((lVar2 != 0) &&
           (pUVar10 = Z_Construct_UClass_UActorComponent_NoRegister(), pUVar10 != (UClass *)0x0)) {
          iVar1 = (int)pUVar10->_padding_;
          if ((*(int *)(lVar2 + 0x38) < iVar1) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
              &pUVar10->_padding_)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if (bVar6) {
            pUVar9 = (UOptimusNode *)*plVar12;
          }
        }
        local_c8 = (FName)pUVar9->_padding_;
        ::FName::ToString(&local_c8,&local_a8);
        pUVar3 = (this->DataInterfaceData).field0_0x0.DebugPtr;
        plVar12 = (longlong *)(**(code **)(*(longlong *)pUVar3 + 0x388))(pUVar3,local_80);
        lVar2 = *plVar12;
        if ((lVar2 != 0) &&
           (pUVar10 = Z_Construct_UClass_UActorComponent_NoRegister(), pUVar10 != (UClass *)0x0)) {
          iVar1 = (int)pUVar10->_padding_;
          if ((*(int *)(lVar2 + 0x38) < iVar1) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
              &pUVar10->_padding_)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if (bVar6) {
            pUVar13 = (UOptimusNode *)*plVar12;
          }
        }
        local_c0 = (FName)pUVar13->_padding_;
        ::FName::ToString(&local_c0,&local_b8);
        ::FString::PrintfImpl
                  (&local_d8,
                   L"This data interface requires a %s which is not a child class of %s from the Component Source."
                  );
        if (param_3 != &local_d8) {
          pFVar4 = (param_3->Data).AllocatorInstance.Data;
          if (pFVar4 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar4);
          }
          (param_3->Data).AllocatorInstance.Data = local_d8.Data.AllocatorInstance.Data;
          (param_3->Data).ArrayNum = local_d8.Data.ArrayNum;
          (param_3->Data).ArrayMax = local_d8.Data.ArrayMax;
          local_d8.Data.ArrayNum = 0;
          local_d8.Data.ArrayMax = 0;
          local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
      }
      return false;
    }
  }
  return true;
}

// ValidateForCompile @ 14e22ff00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TOptional<FText> * __thiscall
UOptimusNode_DataInterface::ValidateForCompile
          (UOptimusNode_DataInterface *this,TOptional<FText> *__return_storage_ptr__,
          FOptimusPinTraversalContext *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  ITextData *pIVar3;
  UOptimusComputeDataInterface *pUVar4;
  code *pcVar5;
  bool bVar6;
  FText *pFVar7;
  TOptional<FText> *pTVar8;
  ulonglong uVar9;
  UOptimusNodePin *pUVar10;
  FName FVar11;
  FText *pFVar12;
  FTextFormat *pFVar13;
  UClass *pUVar14;
  UOptimusNodePin *pUVar15;
  FText *pFVar16;
  uint uVar17;
  ForElementType<FSetElementId> FVar18;
  undefined8 *puVar19;
  UOptimusNodeGraph *this_00;
  undefined1 auStackY_258 [32];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_218;
  undefined1 local_208 [8];
  FOptimusPinTraversalContext *local_200;
  ITextData *local_1f8;
  uint local_1f0;
  FTextFormat local_1e8;
  FText local_1d8;
  FFormatArgumentValue local_1c8;
  undefined4 local_1a8;
  FText local_198 [3];
  FText local_168;
  FText local_158;
  FText local_148;
  FText local_138;
  FText local_128;
  FText local_118;
  FText local_108;
  FTextFormat local_f8;
  FText local_e8;
  FText local_d8;
  FTextFormat local_c8;
  FText local_b8;
  FTextFormat local_a8;
  TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_258;
  local_200 = param_1;
  if ((this->DataInterfaceClass).field0_0x0.DebugPtr == (UClass *)0x0) {
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_168,L"OptimusNode_DataInterface",L"NoAssociatedClass",
                        L"Node has none or invalid data interface class associated with it. Delete and re-create the node."
                       );
    FText::FText((FText *)__return_storage_ptr__,pFVar7);
    local_1f8 = local_168.TextData.Reference;
    if (((__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), local_1f8 = local_168.TextData.Reference, bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TOptional<FText> *)(*pcVar5)();
      return pTVar8;
    }
    goto LAB_14e230489;
  }
  uVar9 = (**(code **)(this->_padding_ + 0x20))(&this->_padding_,param_1);
  if (uVar9 == 0) {
    pUVar10 = GetComponentPin(this);
    FVar11 = UOptimusNodePin::GetUniqueName(pUVar10);
    pFVar7 = FText::FromName(&local_108,(FName *)FVar11);
    pFVar12 = FText::AsLocalizable_Advanced_LocText
                        (&local_148,L"OptimusNode_DataInterface",L"NoBindingConnected",
                         L"No component binding connected to the {0} pin");
    pFVar13 = FTextFormat::FTextFormat(&local_f8,pFVar12,Default);
    pFVar7 = FText::Format<FText>(&local_158,pFVar13,pFVar7);
    FText::FText((FText *)__return_storage_ptr__,pFVar7);
    if (((__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TOptional<FText> *)(*pcVar5)();
      return pTVar8;
    }
    local_1f8 = local_148.TextData.Reference;
    if (local_158.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
      local_1f8 = local_148.TextData.Reference;
    }
    goto LAB_14e230489;
  }
  this_00 = (UOptimusNodeGraph *)this->_padding_;
  if (this_00 == (UOptimusNodeGraph *)0x0) {
LAB_14e230098:
    this_00 = (UOptimusNodeGraph *)0x0;
  }
  else {
    pUVar14 = UOptimusNodeGraph::StaticClass();
    iVar2 = (int)pUVar14->_padding_;
    if ((*(int *)(this_00->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar14->_padding_)) goto LAB_14e230098;
  }
  iVar2 = (int)this->_padding_;
  puVar19 = (undefined8 *)this->_padding_;
  if ((iVar2 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TOptional<FText> *)(*pcVar5)();
    return pTVar8;
  }
  puVar1 = puVar19 + iVar2;
  for (; puVar19 != puVar1; puVar19 = puVar19 + 1) {
    pUVar10 = (UOptimusNodePin *)*puVar19;
    if ((pUVar10->Direction == Input) && (pUVar15 = GetComponentPin(this), pUVar10 != pUVar15)) {
      UOptimusNodeGraph::GetComponentSourceBindingsForPin(this_00,&local_98,pUVar10,local_200);
      if (1 < (int)(local_98.Elements._8_4_ - local_98.Elements._52_4_)) {
        FVar11 = UOptimusNodePin::GetUniqueName(pUVar10);
        pFVar7 = FText::FromName(&local_b8,(FName *)FVar11);
        pFVar12 = FText::AsLocalizable_Advanced_LocText
                            (&local_118,L"OptimusNode_DataInterface",L"MultipleBindingsOnPin",
                             L"Multiple bindings found for pin {0}");
        pFVar13 = FTextFormat::FTextFormat(&local_a8,pFVar12,Default);
        pFVar7 = FText::Format<FText>(&local_128,pFVar13,pFVar7);
        FText::FText((FText *)__return_storage_ptr__,pFVar7);
        if (((__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference == (ITextData *)0x0)
           && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0xbd,
                                  L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                 ), bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar8 = (TOptional<FText> *)(*pcVar5)();
          return pTVar8;
        }
        if (local_128.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
        }
        if (local_118.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
        }
        local_98.HashSize = 0;
        if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_98.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<UOptimusComponentSourceBinding_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<UOptimusComponentSourceBinding_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_98.Elements);
        return __return_storage_ptr__;
      }
      if (local_98.Elements._8_4_ - local_98.Elements._52_4_ == 1) {
        uVar17 = ((uint)(uVar9 >> 0x14) & 0xffff ^ (uint)(uVar9 >> 4)) * -0x7a143595;
        uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
        FVar18 = (ForElementType<FSetElementId>)&local_98.Hash;
        if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar18 = local_98.Hash.SecondaryData;
        }
        iVar2 = *(int *)((longlong)FVar18 +
                        (ulonglong)(local_98.HashSize - 1U & (uVar17 >> 0x10 ^ uVar17)) * 4);
        while( true ) {
          if (iVar2 == -1) {
            pUVar15 = GetComponentPin(this);
            FVar11 = UOptimusNodePin::GetUniqueName(pUVar15);
            pFVar7 = FText::FromName(&local_e8,(FName *)FVar11);
            FVar11 = UOptimusNodePin::GetUniqueName(pUVar10);
            pFVar12 = FText::FromName(&local_d8,(FName *)FVar11);
            pFVar16 = FText::AsLocalizable_Advanced_LocText
                                (&local_138,L"OptimusNode_DataInterface",L"IncompatibleBinding",
                                 L"Bindings for pin {0} are not the same as for the {1} pin");
            pFVar13 = FTextFormat::FTextFormat(&local_c8,pFVar16,Default);
            local_1c8.Type = Text;
            FText::FText((FText *)&local_1c8.TextValue,pFVar12);
            if ((local_1c8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0)
               && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsSet()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                      ,0xbd,
                                      L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                     ), bVar6)) {
              pcVar5 = (code *)swi(3);
              pTVar8 = (TOptional<FText> *)(*pcVar5)();
              return pTVar8;
            }
            local_1a8 = 4;
            FText::FText(local_198,pFVar7);
            if ((local_198[0].TextData.Reference == (ITextData *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0xbd,
                                   L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                  ), bVar6)) {
              pcVar5 = (code *)swi(3);
              pTVar8 = (TOptional<FText> *)(*pcVar5)();
              return pTVar8;
            }
            local_218.ArrayNum = 2;
            local_218.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,2,0,&local_218.AllocatorInstance,2,&local_218.ArrayMax);
            ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                      (local_218.AllocatorInstance.Data,&local_1c8,2);
            local_1e8.TextFormatData.Object = (pFVar13->TextFormatData).Object;
            local_1e8.TextFormatData.SharedReferenceCount.ReferenceController =
                 (pFVar13->TextFormatData).SharedReferenceCount.ReferenceController;
            if (local_1e8.TextFormatData.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_1e8.TextFormatData.SharedReferenceCount.ReferenceController)->
              SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_1e8.TextFormatData.SharedReferenceCount.ReferenceController)->
                         SharedReferenceCount + 1);
              UNLOCK();
            }
            FText::Format(&local_1d8,&local_1e8,&local_218);
            DestructItems<FFormatArgumentValue,int>
                      ((FFormatArgumentValue *)local_218.AllocatorInstance.Data,local_218.ArrayNum);
            if ((FFormatArgumentValue *)local_218.AllocatorInstance.Data !=
                (FFormatArgumentValue *)0x0) {
              FMemory::Free(local_218.AllocatorInstance.Data);
            }
            if (local_198[0].TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_198[0].TextData.Reference + 0x10))();
            }
            if (local_1c8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)
                           *(ITextData *)
                            local_1c8.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((pFVar13->TextFormatData).SharedReferenceCount.ReferenceController);
            pIVar3 = (pFVar12->TextData).Reference;
            if (pIVar3 != (ITextData *)0x0) {
              (**(code **)((longlong)*pIVar3 + 0x10))();
            }
            pIVar3 = (pFVar7->TextData).Reference;
            if (pIVar3 != (ITextData *)0x0) {
              (**(code **)((longlong)*pIVar3 + 0x10))();
            }
            FText::FText((FText *)__return_storage_ptr__,&local_1d8);
            if (((__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference ==
                 (ITextData *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0xbd,
                                   L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                  ), bVar6)) {
              pcVar5 = (code *)swi(3);
              pTVar8 = (TOptional<FText> *)(*pcVar5)();
              return pTVar8;
            }
            if (local_1d8.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_1d8.TextData.Reference + 0x10))();
            }
            if (local_138.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
            }
            local_98.HashSize = 0;
            if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_98.Hash.SecondaryData);
            }
            TSparseArray<TSparseSetElement<UOptimusComponentSourceBinding_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<UOptimusComponentSourceBinding_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      (&local_98.Elements);
            return __return_storage_ptr__;
          }
          if (*(ulonglong *)(local_98.Elements._0_8_ + (longlong)iVar2 * 0x10) == uVar9) break;
          iVar2 = *(int *)(local_98.Elements._0_8_ + 8 + (longlong)iVar2 * 0x10);
        }
      }
      local_98.HashSize = 0;
      if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_98.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<UOptimusComponentSourceBinding_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<UOptimusComponentSourceBinding_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_98.Elements);
    }
  }
  pUVar4 = (this->DataInterfaceData).field0_0x0.DebugPtr;
  if ((pUVar4 == (UOptimusComputeDataInterface *)0x0) ||
     ((**(code **)(*(longlong *)pUVar4 + 0x3a8))(pUVar4,&local_1f8), local_1f8 == (ITextData *)0x0))
  {
    (__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference = (ITextData *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Flags = 0;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference = (ITextData *)0x0;
  (__return_storage_ptr__->field0_0x0).TypedValue.Flags = 0;
  if (local_1f8 == (ITextData *)0x0) {
    return __return_storage_ptr__;
  }
  *(ITextData **)&__return_storage_ptr__->field0_0x0 = local_1f8;
  (**(code **)((longlong)*local_1f8 + 8))(local_1f8,local_208);
  (__return_storage_ptr__->field0_0x0).TypedValue.Flags = local_1f0;
LAB_14e230489:
  if (local_1f8 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1f8 + 0x10))();
  }
  return __return_storage_ptr__;
}

// _getUObject @ 14e238eb0

UObject * __thiscall UOptimusNode_DataInterface::_getUObject(UOptimusNode_DataInterface *this)

{
  return (UObject *)&this[-1]._padding_;
}

// _getUObject`adjustor{8}' @ 14e238ec0

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UOptimusNode_DataInterface::_getUObject`adjustor{8}' (void)const __ptr64 */

UObject * __thiscall
UOptimusNode_DataInterface::_getUObject_adjustor_8__(UOptimusNode_DataInterface *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UOptimusNode_DataInterface *)&this[-1].DataInterfaceData);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{16}' @ 14e238ed0

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UOptimusNode_DataInterface::_getUObject`adjustor{16}' (void)const __ptr64 */

UObject * __thiscall
UOptimusNode_DataInterface::_getUObject_adjustor_16__(UOptimusNode_DataInterface *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UOptimusNode_DataInterface *)&this[-1].DataInterfaceClass);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{24}' @ 14e238ee0

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UOptimusNode_DataInterface::_getUObject`adjustor{24}' (void)const __ptr64 */

UObject * __thiscall
UOptimusNode_DataInterface::_getUObject_adjustor_24__(UOptimusNode_DataInterface *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UOptimusNode_DataInterface *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

