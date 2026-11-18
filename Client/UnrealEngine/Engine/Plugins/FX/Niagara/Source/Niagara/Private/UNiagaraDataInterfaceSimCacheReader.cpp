// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 42

// StaticClass @ 148e8a830

UClass * __cdecl UNiagaraDataInterfaceSimCacheReader::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceSimCacheReader.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceSimCacheReader",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceSimCacheReader.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceSimCacheReader,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceSimCacheReader>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceSimCacheReader>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceSimCacheReader.InnerSingleton;
}

// <lambda_invoker_cdecl> @ 148e8ae00

FLinearColor * __cdecl
`UNiagaraDataInterfaceSimCacheReader::VMGetInstanceColor'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (FLinearColor *__return_storage_ptr__,FNiagaraSimCacheAttributeReaderHelper *param_1,
          int param_2)

{
  code *pcVar1;
  bool bVar2;
  FLinearColor *pFVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (param_1->Variable->FloatCount != 4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Variable->FloatOffset != INDEX_NONE && Variable->FloatCount == 4",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                       ,0xdb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FLinearColor *)(*pcVar1)();
      return pFVar3;
    }
  }
  fVar4 = FNiagaraSimCacheAttributeReaderHelper::InternalReadFloat(param_1,3,param_2);
  fVar5 = FNiagaraSimCacheAttributeReaderHelper::InternalReadFloat(param_1,2,param_2);
  fVar6 = FNiagaraSimCacheAttributeReaderHelper::InternalReadFloat(param_1,1,param_2);
  fVar7 = FNiagaraSimCacheAttributeReaderHelper::InternalReadFloat(param_1,0,param_2);
  (__return_storage_ptr__->field0_0x0)._s_0.G = fVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.B = fVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.A = fVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.R = fVar7;
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 148e8aee0

float __cdecl
`UNiagaraDataInterfaceSimCacheReader::VMGetInstanceFloat'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (FNiagaraSimCacheAttributeReaderHelper *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if (param_1->Variable->FloatCount != 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Variable->FloatOffset != INDEX_NONE && Variable->FloatCount == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                       ,0xb7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  fVar3 = FNiagaraSimCacheAttributeReaderHelper::InternalReadFloat(param_1,0,param_2);
  return fVar3;
}

// <lambda_invoker_cdecl> @ 148e8af40

FNiagaraID __cdecl
`UNiagaraDataInterfaceSimCacheReader::VMGetInstanceID'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (FNiagaraSimCacheAttributeReaderHelper *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  FNiagaraID FVar5;
  undefined4 in_register_00000014;
  FNiagaraSimCacheAttributeReaderHelper *this;
  int in_R8D;
  
  this = (FNiagaraSimCacheAttributeReaderHelper *)CONCAT44(in_register_00000014,param_2);
  if (this->Variable->Int32Count != 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Variable->Int32Offset != INDEX_NONE && Variable->Int32Count == 2",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                       ,0xbd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar5 = (FNiagaraID)(*pcVar1)();
      return FVar5;
    }
  }
  iVar3 = FNiagaraSimCacheAttributeReaderHelper::ReadInt(this,in_R8D,1);
  iVar4 = FNiagaraSimCacheAttributeReaderHelper::ReadInt(this,in_R8D,0);
  *(int *)&param_1->CacheFrame = iVar4;
  *(int *)((longlong)&param_1->CacheFrame + 4) = iVar3;
  return (FNiagaraID)param_1;
}

// <lambda_invoker_cdecl> @ 148e8afd0

int __cdecl
`UNiagaraDataInterfaceSimCacheReader::VMGetInstanceInt'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (FNiagaraSimCacheAttributeReaderHelper *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FNiagaraSimCacheAttributeReaderHelper::ReadInt(param_1,param_2,0);
  return iVar1;
}

// <lambda_invoker_cdecl> @ 148e8afe0

TVector<float> * __cdecl
`UNiagaraDataInterfaceSimCacheReader::VMGetInstancePosition'::__l2::<lambda_1>::
<lambda_invoker_cdecl>
          (TVector<float> *__return_storage_ptr__,FNiagaraSimCacheAttributeReaderHelper *param_1,
          int param_2)

{
  FNiagaraSimCacheAttributeReaderHelper::ReadFloat3f(param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 148e8b010

TQuat<float> * __cdecl
`UNiagaraDataInterfaceSimCacheReader::VMGetInstanceQuat'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (TQuat<float> *__return_storage_ptr__,FNiagaraSimCacheAttributeReaderHelper *param_1,
          int param_2)

{
  code *pcVar1;
  bool bVar2;
  TQuat<float> *pTVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (param_1->Variable->FloatCount != 4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Variable->FloatOffset != INDEX_NONE && Variable->FloatCount == 4",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TQuat<float> *)(*pcVar1)();
      return pTVar3;
    }
  }
  fVar4 = FNiagaraSimCacheAttributeReaderHelper::InternalReadFloat(param_1,3,param_2);
  fVar5 = FNiagaraSimCacheAttributeReaderHelper::InternalReadFloat(param_1,2,param_2);
  fVar6 = FNiagaraSimCacheAttributeReaderHelper::InternalReadFloat(param_1,1,param_2);
  fVar7 = FNiagaraSimCacheAttributeReaderHelper::InternalReadFloat(param_1,0,param_2);
  __return_storage_ptr__->Y = fVar6;
  __return_storage_ptr__->Z = fVar5;
  __return_storage_ptr__->W = fVar4;
  __return_storage_ptr__->X = fVar7;
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 148e8b0f0

TVector2<float> __cdecl
`UNiagaraDataInterfaceSimCacheReader::VMGetInstanceVector2'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FNiagaraSimCacheAttributeReaderHelper *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  TVector2<float> TVar3;
  undefined4 in_register_00000014;
  FNiagaraSimCacheAttributeReaderHelper *this;
  int in_R8D;
  float fVar4;
  float fVar5;
  
  this = (FNiagaraSimCacheAttributeReaderHelper *)CONCAT44(in_register_00000014,param_2);
  if (this->Variable->FloatCount != 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Variable->FloatOffset != INDEX_NONE && Variable->FloatCount == 2",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                       ,0xc3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.field0_0x0 = (TVector2<float>_u_0)(*pcVar1)();
      return (TVector2<float>)TVar3.field0_0x0;
    }
  }
  fVar4 = FNiagaraSimCacheAttributeReaderHelper::InternalReadFloat(this,1,in_R8D);
  fVar5 = FNiagaraSimCacheAttributeReaderHelper::InternalReadFloat(this,0,in_R8D);
  *(float *)((longlong)&param_1->CacheFrame + 4) = fVar4;
  *(float *)&param_1->CacheFrame = fVar5;
  return (TVector2<float>)(TVector2<float>_u_0)param_1;
}

// <lambda_invoker_cdecl> @ 148e8b190

TVector<float> * __cdecl
`UNiagaraDataInterfaceSimCacheReader::VMGetInstanceVector3'::__l2::<lambda_1>::
<lambda_invoker_cdecl>
          (TVector<float> *__return_storage_ptr__,FNiagaraSimCacheAttributeReaderHelper *param_1,
          int param_2)

{
  FNiagaraSimCacheAttributeReaderHelper::ReadFloat3f(param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 148e8b1c0

TVector4<float> * __cdecl
`UNiagaraDataInterfaceSimCacheReader::VMGetInstanceVector4'::__l2::<lambda_1>::
<lambda_invoker_cdecl>
          (TVector4<float> *__return_storage_ptr__,FNiagaraSimCacheAttributeReaderHelper *param_1,
          int param_2)

{
  code *pcVar1;
  bool bVar2;
  TVector4<float> *pTVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (param_1->Variable->FloatCount != 4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Variable->FloatOffset != INDEX_NONE && Variable->FloatCount == 4",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimCacheAttributeReaderHelper.h"
                       ,0xcf,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TVector4<float> *)(*pcVar1)();
      return pTVar3;
    }
  }
  fVar4 = FNiagaraSimCacheAttributeReaderHelper::InternalReadFloat(param_1,3,param_2);
  fVar5 = FNiagaraSimCacheAttributeReaderHelper::InternalReadFloat(param_1,2,param_2);
  fVar6 = FNiagaraSimCacheAttributeReaderHelper::InternalReadFloat(param_1,1,param_2);
  fVar7 = FNiagaraSimCacheAttributeReaderHelper::InternalReadFloat(param_1,0,param_2);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.W = fVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar7;
  return __return_storage_ptr__;
}

// UNiagaraDataInterfaceSimCacheReader @ 148ea55c0

UNiagaraDataInterfaceSimCacheReader * __thiscall
UNiagaraDataInterfaceSimCacheReader::UNiagaraDataInterfaceSimCacheReader
          (UNiagaraDataInterfaceSimCacheReader *this,FVTableHelper *param_1)

{
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceSimCacheReader__6B_;
  FNiagaraUserParameterBinding::FNiagaraUserParameterBinding(&this->SimCacheBinding);
  (this->SimCache).field0_0x0.DebugPtr = (UNiagaraSimCache *)0x0;
  (this->EmitterBinding).ComparisonIndex = 0;
  (this->EmitterBinding).Number = 0;
  return this;
}

// UNiagaraDataInterfaceSimCacheReader @ 148ea5600

UNiagaraDataInterfaceSimCacheReader * __thiscall
UNiagaraDataInterfaceSimCacheReader::UNiagaraDataInterfaceSimCacheReader
          (UNiagaraDataInterfaceSimCacheReader *this,FObjectInitializer *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  FNiagaraTypeDefinitionHandle local_res8 [2];
  
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceSimCacheReader__6B_;
  FNiagaraUserParameterBinding::FNiagaraUserParameterBinding(&this->SimCacheBinding);
  puVar3 = (undefined8 *)0x0;
  (this->SimCache).field0_0x0.DebugPtr = (UNiagaraSimCache *)0x0;
  (this->EmitterBinding).ComparisonIndex = 0;
  (this->EmitterBinding).Number = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    (local_res8,&FNiagaraTypeDefinition::USimCacheClassDef);
  *(int *)&(this->SimCacheBinding).Parameter._padding_ = iVar1;
  puVar2 = ::operator_new(0x60);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[9] = 0;
    puVar2[0xb] = 0;
    *puVar2 = &___7FNDIProxy_NDISimCacheReaderLocal__6B_;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[6] = 0;
    *(undefined4 *)(puVar2 + 7) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0x80;
    *(undefined4 *)(puVar2 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x44) = 0;
    puVar2[10] = 0;
    puVar3 = puVar2;
  }
  puVar2 = (undefined8 *)this->_padding_;
  if ((puVar2 != puVar3) && (this->_padding_ = (longlong)puVar3, puVar2 != (undefined8 *)0x0)) {
    (**(code **)*puVar2)(puVar2,1);
  }
  return this;
}

// ~UNiagaraDataInterfaceSimCacheReader @ 148ea6e20

void __thiscall
UNiagaraDataInterfaceSimCacheReader::~UNiagaraDataInterfaceSimCacheReader
          (UNiagaraDataInterfaceSimCacheReader *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceSimCacheReader__6B_;
  pFVar1 = (this->SimCacheBinding).Parameter.VarData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  return;
}

// BuildShaderParameters @ 148eacf30

void __thiscall
UNiagaraDataInterfaceSimCacheReader::BuildShaderParameters
          (UNiagaraDataInterfaceSimCacheReader *this,FNiagaraShaderParametersBuilder *param_1)

{
  int *piVar1;
  uint uVar2;
  FShaderParametersMetadataBuilder *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FShaderParametersMetadata *pFVar8;
  FScriptContainerElement *pFVar9;
  wchar_t *pwVar10;
  
  pFVar3 = param_1->MetadataBuilder;
  if ((param_1->GPUParamInfo->DataInterfaceHLSLSymbol).Data.ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)
              (param_1->GPUParamInfo->DataInterfaceHLSLSymbol).Data.AllocatorInstance.Data;
  }
  pFVar3->NextMemberOffset = pFVar3->NextMemberOffset + 0xf & 0xfffffff0;
  pFVar8 = TShaderParameterStructTypeInfo<UNiagaraDataInterfaceSimCacheReader::FShaderParameters>::
           GetStructMetadata();
  piVar1 = &(pFVar3->Members).ArrayMax;
  iVar6 = (pFVar3->Members).ArrayNum;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,(ForAnyElementType *)pFVar3,piVar1);
  }
  (pFVar3->Members).ArrayNum = iVar6 + 1;
  uVar2 = pFVar3->NextMemberOffset;
  pFVar9 = (pFVar3->Members).AllocatorInstance.Data + (longlong)iVar6 * 0x30;
  *(wchar_t **)pFVar9 = pwVar10;
  *(undefined4 *)(pFVar9 + 0x1c) = 1;
  *(undefined8 *)(pFVar9 + 0x20) = 1;
  *(wchar_t **)(pFVar9 + 8) = L"";
  *(undefined4 *)(pFVar9 + 0x10) = 0x7b;
  *(uint *)(pFVar9 + 0x14) = uVar2;
  *(undefined2 *)(pFVar9 + 0x18) = 0x14;
  *(FShaderParametersMetadata **)(pFVar9 + 0x28) = pFVar8;
  pFVar3->NextMemberOffset = pFVar3->NextMemberOffset + 0x20;
  iVar6 = (param_1->GPUParamInfo->GeneratedFunctions).ArrayNum;
  if (iVar6 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = iVar6 + 3;
  iVar7 = (int)(iVar6 + (iVar6 >> 0x1f & 3U)) >> 2;
  iVar6 = 1;
  if (1 < iVar7) {
    iVar6 = iVar7;
  }
  FNiagaraShaderParametersBuilder::AddLooseParamArray<UE::Math::TIntVector4<unsigned_int>_>
            (param_1,L"ComponentOffsets",iVar6);
  return;
}

// CanExecuteOnTarget @ 148eadd50

bool __thiscall
UNiagaraDataInterfaceSimCacheReader::CanExecuteOnTarget
          (UNiagaraDataInterfaceSimCacheReader *this,ENiagaraSimTarget param_1)

{
  return true;
}

// CopyToInternal @ 148eafa80

bool __thiscall
UNiagaraDataInterfaceSimCacheReader::CopyToInternal
          (UNiagaraDataInterfaceSimCacheReader *this,UNiagaraDataInterface *param_1)

{
  int iVar1;
  UNiagaraSimCache *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  bVar3 = UNiagaraDataInterface::CopyToInternal((UNiagaraDataInterface *)this,param_1);
  if (!bVar3) {
    return false;
  }
  if (param_1 != (UNiagaraDataInterface *)0x0) {
    pUVar4 = StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      param_1[1]._padding_ = (this->SimCacheBinding).Parameter._padding_;
      *(int *)&param_1[1]._padding_ = (int)(this->SimCacheBinding).Parameter._padding_;
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&param_1[1]._padding_,
                 &(this->SimCacheBinding).Parameter.VarData);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar2 = (this->SimCache).field0_0x0.DebugPtr, pUVar2 != (UNiagaraSimCache *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      param_1[1]._padding_ = (longlong)(this->SimCache).field0_0x0;
      param_1[1].Proxy.Ptr = (FNiagaraDataInterfaceProxy *)this->EmitterBinding;
      return true;
    }
    pFVar5 = GetTypeName<UNiagaraDataInterfaceSimCacheReader>(&local_28);
    pwVar6 = L"";
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    pFVar5 = GetFullNameForCastLogError<UNiagaraDataInterface>(&local_18,param_1);
    if ((pFVar5->Data).ArrayNum != 0) {
      pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar6,pwVar7);
  }
  pFVar5 = GetTypeName<UNiagaraDataInterfaceSimCacheReader>(&local_28);
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar6);
}

// CreateShaderStorage @ 148eb2bc0

FNiagaraDataInterfaceParametersCS * __thiscall
UNiagaraDataInterfaceSimCacheReader::CreateShaderStorage
          (UNiagaraDataInterfaceSimCacheReader *this,FNiagaraDataInterfaceGPUParamInfo *param_1,
          FShaderParameterMap *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  ForAnyElementType *pFVar7;
  FNiagaraDataInterfaceParametersCS *pFVar8;
  ForAnyElementType FVar9;
  ForAnyElementType FVar10;
  ForAnyElementType FVar11;
  ForAnyElementType *pFVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_res10 [8];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  
  pFVar7 = ::operator_new(0x10);
  pFVar12 = (ForAnyElementType *)0x0;
  if (pFVar7 != (ForAnyElementType *)0x0) {
    *pFVar7 = (ForAnyElementType)0x0;
    pFVar7[1] = (ForAnyElementType)0x0;
    pFVar12 = pFVar7;
  }
  uVar4 = (param_1->GeneratedFunctions).ArrayNum * 2;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  puVar1 = &pFVar12[1].field_0x4;
  if (*(int *)puVar1 < (int)uVar4) {
    UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (8,4,uVar4,pFVar12,*(int *)(pFVar12 + 1),(int *)puVar1);
  }
  iVar2 = (param_1->GeneratedFunctions).ArrayNum;
  pFVar13 = (param_1->GeneratedFunctions).AllocatorInstance.Data;
  pFVar15 = pFVar13 + (longlong)iVar2 * 0x50;
  do {
    while( true ) {
      if ((param_1->GeneratedFunctions).ArrayNum != iVar2) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FNiagaraDataInterfaceGeneratedFunction_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res10);
      }
      if (pFVar13 == pFVar15) {
        return (FNiagaraDataInterfaceParametersCS *)pFVar12;
      }
      FVar10 = *pFVar12;
      lVar14 = (longlong)FVar10 >> 0x18;
      if (*(int *)(pFVar13 + 0x20) == 1) break;
      local_38 = 0;
      FVar9 = FVar10;
      if (((ulonglong)FVar10 & 1) != 0) {
        FVar9 = (ForAnyElementType)((longlong)&pFVar12->field_0x0 + lVar14);
      }
      if ((ulonglong)FVar9 <= &local_38) {
        if (((ulonglong)FVar10 & 1) != 0) {
          FVar10 = (ForAnyElementType)((longlong)&pFVar12->field_0x0 + lVar14);
        }
        if ((&local_38 < (undefined8 *)((longlong)FVar10 + (longlong)*(int *)puVar1 * 8)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          pFVar8 = (FNiagaraDataInterfaceParametersCS *)(*pcVar3)();
          return pFVar8;
        }
      }
      iVar6 = *(int *)(pFVar12 + 1);
      if (iVar6 == *(int *)puVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                          (0x408,pFVar12,(int *)puVar1);
      }
      *(int *)(pFVar12 + 1) = iVar6 + 1;
      FVar10 = *pFVar12;
      if (((ulonglong)FVar10 & 1) != 0) {
        FVar10 = (ForAnyElementType)((longlong)&pFVar12->field_0x0 + ((longlong)FVar10 >> 0x18));
      }
      local_30 = 0;
      *(undefined8 *)((longlong)FVar10 + (longlong)iVar6 * 8) = local_38;
      FVar10 = *pFVar12;
      FVar11 = (ForAnyElementType)((longlong)&pFVar12->field_0x0 + ((longlong)FVar10 >> 0x18));
      FVar9 = FVar10;
      if (((ulonglong)FVar10 & 1) != 0) {
        FVar9 = FVar11;
      }
      if ((ulonglong)FVar9 <= &local_30) {
        if (((ulonglong)FVar10 & 1) != 0) {
          FVar10 = FVar11;
        }
        if ((&local_30 < (undefined8 *)((longlong)FVar10 + (longlong)*(int *)puVar1 * 8)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          pFVar8 = (FNiagaraDataInterfaceParametersCS *)(*pcVar3)();
          return pFVar8;
        }
      }
      iVar6 = *(int *)(pFVar12 + 1);
      if (iVar6 == *(int *)puVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                          (0x408,pFVar12,(int *)puVar1);
      }
      *(int *)(pFVar12 + 1) = iVar6 + 1;
      FVar10 = *pFVar12;
      if (((ulonglong)FVar10 & 1) != 0) {
        FVar10 = (ForAnyElementType)((longlong)&pFVar12->field_0x0 + ((longlong)FVar10 >> 0x18));
      }
      pFVar13 = pFVar13 + 0x50;
      *(undefined8 *)((longlong)FVar10 + (longlong)iVar6 * 8) = local_30;
    }
    local_48 = *(undefined4 *)pFVar13;
    uStack_44 = *(undefined4 *)(pFVar13 + 4);
    FVar9 = FVar10;
    if (((ulonglong)FVar10 & 1) != 0) {
      FVar9 = (ForAnyElementType)((longlong)&pFVar12->field_0x0 + lVar14);
    }
    if ((ulonglong)FVar9 <= &local_48) {
      if (((ulonglong)FVar10 & 1) != 0) {
        FVar10 = (ForAnyElementType)((longlong)&pFVar12->field_0x0 + lVar14);
      }
      if ((&local_48 < (undefined4 *)((longlong)FVar10 + (longlong)*(int *)puVar1 * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FNiagaraDataInterfaceParametersCS *)(*pcVar3)();
        return pFVar8;
      }
    }
    iVar6 = *(int *)(pFVar12 + 1);
    if (iVar6 == *(int *)puVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                        (0x408,pFVar12,(int *)puVar1);
    }
    *(int *)(pFVar12 + 1) = iVar6 + 1;
    FVar10 = *pFVar12;
    if (((ulonglong)FVar10 & 1) != 0) {
      FVar10 = (ForAnyElementType)((longlong)&pFVar12->field_0x0 + ((longlong)FVar10 >> 0x18));
    }
    *(ulonglong *)((longlong)FVar10 + (longlong)iVar6 * 8) = CONCAT44(uStack_44,local_48);
    if ((*(int *)(pFVar13 + 0x20) < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FNiagaraDataInterfaceParametersCS *)(*pcVar3)();
      return pFVar8;
    }
    local_40 = *(undefined4 *)(*(longlong *)(pFVar13 + 0x18) + 8);
    uStack_3c = *(undefined4 *)(*(longlong *)(pFVar13 + 0x18) + 0xc);
    FVar10 = *pFVar12;
    FVar11 = (ForAnyElementType)((longlong)&pFVar12->field_0x0 + ((longlong)FVar10 >> 0x18));
    FVar9 = FVar10;
    if (((ulonglong)FVar10 & 1) != 0) {
      FVar9 = FVar11;
    }
    if ((ulonglong)FVar9 <= &local_40) {
      if (((ulonglong)FVar10 & 1) != 0) {
        FVar10 = FVar11;
      }
      if ((&local_40 < (undefined4 *)((longlong)FVar10 + (longlong)*(int *)puVar1 * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FNiagaraDataInterfaceParametersCS *)(*pcVar3)();
        return pFVar8;
      }
    }
    iVar6 = *(int *)(pFVar12 + 1);
    if (iVar6 == *(int *)puVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                        (0x408,pFVar12,(int *)puVar1);
    }
    *(int *)(pFVar12 + 1) = iVar6 + 1;
    FVar10 = *pFVar12;
    if (((ulonglong)FVar10 & 1) != 0) {
      FVar10 = (ForAnyElementType)((longlong)&pFVar12->field_0x0 + ((longlong)FVar10 >> 0x18));
    }
    pFVar13 = pFVar13 + 0x50;
    *(ulonglong *)((longlong)FVar10 + (longlong)iVar6 * 8) = CONCAT44(uStack_3c,local_40);
  } while( true );
}

// DestroyPerInstanceData @ 148eb4fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

void __thiscall
UNiagaraDataInterfaceSimCacheReader::DestroyPerInstanceData
          (UNiagaraDataInterfaceSimCacheReader *this,void *param_1,FNiagaraSystemInstance *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar4;
  undefined ***pppuVar5;
  ulonglong uVar6;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  longlong lStack_70;
  ulong64 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  longlong lStack_40;
  ulong64 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  if (((uint)this->_padding_ >> 2 & 1) != 0) {
    lVar1 = this->_padding_;
    if (lVar1 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedProxy != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                         ,0x3a0,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_60 = (undefined ***)0x0;
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UNiagaraDataInterfaceSimCacheReader::DestroyPerInstanceData'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    local_68 = param_2->ID;
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UNiagaraDataInterfaceSimCacheReader::DestroyPerInstanceData'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    lStack_70 = lVar1;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceSimCacheReader::DestroyPerInstanceData_::__l5::TSTR_NDISimCacheReader_DestroyRT260>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_48 = local_78;
      lStack_40 = lStack_70;
      local_38 = local_68;
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar4 = (FRenderCommandTag *)
               TRenderCommandTag<`UNiagaraDataInterfaceSimCacheReader::DestroyPerInstanceData'::__l5::TSTR_NDISimCacheReader_DestroyRT260>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar4);
      uVar6 = (ulonglong)local_28;
      if (2 < uVar6) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar6] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          pppuVar5 = (undefined ***)(local_58 + 0x10);
          if (local_30 != (undefined ***)0x0) {
            pppuVar5 = local_30;
          }
          (*(code *)(*pppuVar5)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar6])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      pppuVar5 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar5 = local_60;
      }
      (*(code *)(*pppuVar5)[2])();
    }
  }
  return;
}

// Equals @ 148eb68b0

bool __thiscall
UNiagaraDataInterfaceSimCacheReader::Equals
          (UNiagaraDataInterfaceSimCacheReader *this,UNiagaraDataInterface *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  bVar2 = UNiagaraDataInterface::Equals((UNiagaraDataInterface *)this,param_1);
  if (bVar2) {
    if (param_1 == (UNiagaraDataInterface *)0x0) {
      pFVar4 = GetTypeName<UNiagaraDataInterfaceSimCacheReader_const_>(&local_28);
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar5);
    }
    pUVar3 = StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      pFVar4 = GetTypeName<UNiagaraDataInterfaceSimCacheReader_const_>(&local_28);
      pwVar5 = L"";
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      pFVar4 = GetFullNameForCastLogError<UNiagaraDataInterface_const_>(&local_18,param_1);
      if ((pFVar4->Data).ArrayNum != 0) {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar5,pwVar6);
    }
    if (((((this->SimCacheBinding).Parameter._padding_ == param_1[1]._padding_) &&
         ((int)(this->SimCacheBinding).Parameter._padding_ == (int)param_1[1]._padding_)) &&
        ((UNiagaraSimCache *)param_1[1]._padding_ == (this->SimCache).field0_0x0.DebugPtr)) &&
       ((FName)param_1[1].Proxy.Ptr == this->EmitterBinding)) {
      return true;
    }
  }
  return false;
}

// GetPrivateStaticClass @ 148ebfe60

UClass * __cdecl UNiagaraDataInterfaceSimCacheReader::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceSimCacheReader.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceSimCacheReader",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceSimCacheReader.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceSimCacheReader,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceSimCacheReader>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceSimCacheReader>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceSimCacheReader.InnerSingleton;
}

// GetShaderStorageType @ 148ec0280

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
UNiagaraDataInterfaceSimCacheReader::GetShaderStorageType(UNiagaraDataInterfaceSimCacheReader *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x10';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FShaderStorage;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = NDISimCacheReaderLocal::FShaderStorage::InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<NDISimCacheReaderLocal::FShaderStorage,0>::Do;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_NDISimCacheReaderLocal::FShaderStorage::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "AttributeReadNames";
    DAT_15526e352 = Freeze::FindFieldNameLength(L"AttributeReadNames");
    _DAT_15526e330 = StaticGetTypeLayoutDesc<TArray<FMemoryImageName,TMemoryImageAllocator<0>_>_>();
    DAT_15526e338 = ::TypeBuffer[0x10];
    DAT_15526e338_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15526e338_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15526e338_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15526e338_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15526e338_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15526e338_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15526e338_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_NDISimCacheReaderLocal::FShaderStorage::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15526e340 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15526e348 = 0;
    _DAT_15526e34c = 1;
    _DAT_15526e350 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FNiagaraDataInterfaceParametersCS::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// GetVMExternalFunction @ 148ec5100

void __thiscall
UNiagaraDataInterfaceSimCacheReader::GetVMExternalFunction
          (UNiagaraDataInterfaceSimCacheReader *this,FVMExternalFunctionBindingInfo *param_1,
          void *param_2,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UNiagaraSimCache *pUVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy> *pTVar8;
  TDelegateBase<FNotThreadSafeDelegateMode> *this_00;
  bool local_res10 [8];
  bool local_res18 [8];
  bool local_3d8 [8];
  undefined1 local_3d0 [8];
  FDelegateAllocation local_3c8;
  undefined1 local_3b8 [8];
  FDelegateAllocation local_3b0;
  undefined1 local_3a0 [8];
  FDelegateAllocation local_398;
  undefined1 local_388 [8];
  FDelegateAllocation local_380;
  undefined1 local_370 [8];
  FDelegateAllocation local_368;
  undefined1 local_358 [8];
  FDelegateAllocation local_350;
  undefined1 local_340 [8];
  FDelegateAllocation local_338;
  undefined1 local_328 [8];
  FDelegateAllocation local_320;
  undefined1 local_310 [8];
  FDelegateAllocation local_308;
  int local_2f8;
  int local_2f4;
  int local_2f0 [2];
  undefined1 local_2e8 [8];
  ForAnyElementType local_2e0;
  int local_2d8;
  UNiagaraDataInterfaceSimCacheReader *local_2d0;
  UNiagaraDataInterfaceSimCacheReader *local_2c8;
  UNiagaraDataInterfaceSimCacheReader *local_2c0;
  UNiagaraDataInterfaceSimCacheReader *local_2b8;
  UNiagaraDataInterfaceSimCacheReader *local_2b0;
  UNiagaraDataInterfaceSimCacheReader *local_2a8;
  UNiagaraDataInterfaceSimCacheReader *local_2a0;
  UNiagaraDataInterfaceSimCacheReader *local_298;
  UNiagaraDataInterfaceSimCacheReader *local_290;
  FDestructionSentinel local_288;
  FDestructionSentinel local_270;
  FDestructionSentinel local_258;
  FDestructionSentinel local_240;
  FDestructionSentinel local_228;
  FDestructionSentinel local_210;
  FDestructionSentinel local_1f8;
  FDestructionSentinel local_1e0;
  FDestructionSentinel local_1c8;
  FDestructionSentinel local_1b0;
  FDestructionSentinel local_198;
  FDelegateAllocation *local_180;
  FDestructionSentinel local_178;
  FDelegateAllocation *local_160;
  FDestructionSentinel local_158;
  FDelegateAllocation *local_140;
  FDestructionSentinel local_138;
  FDelegateAllocation *local_120;
  FDestructionSentinel local_118;
  FDelegateAllocation *local_100;
  FDestructionSentinel local_f8;
  FDelegateAllocation *local_e0;
  FDestructionSentinel local_d8;
  FDelegateAllocation *local_c0;
  FDestructionSentinel local_b8;
  FDelegateAllocation *local_a0;
  FDestructionSentinel local_98;
  FDelegateAllocation *local_80;
  TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy> local_78;
  TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy> local_60;
  TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy> local_48;
  
  pUVar5 = (UNiagaraSimCache *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_2 + 0x38));
  FVar1 = param_1->Name;
  if (FVar1 == NDISimCacheReaderLocal::GetNumFrames) {
    local_310 = (undefined1  [8])0x0;
    local_308.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_308.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_310,
               (FWriteAccessScope *)&local_178);
    local_160 = &local_308;
    puVar6 = UE::Core::Private::DelegateAllocate(0x28,&local_308);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceSimCacheReader____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceSimCacheReader *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar6[3] = 0;
      local_2d0 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceSimCacheReader *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_2d0);
      puVar6[4] = VMGetNumFrames;
    }
    if (local_178.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_178.Accessor,&local_178);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_310);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_310,
               (FWriteAccessScope *)&local_288);
    if ((local_308.DelegateSize != 0) &&
       (local_308.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_308.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_308,0,0,0x10);
      local_308.DelegateSize = 0;
    }
    if (local_288.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_288.Accessor,&local_288);
    }
    if (local_308.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_308.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_310);
  }
  else if (FVar1 == NDISimCacheReaderLocal::GetNumEmitters) {
    local_3d0 = (undefined1  [8])0x0;
    local_3c8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_3c8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3d0,
               (FWriteAccessScope *)&local_158);
    local_140 = &local_3c8;
    puVar6 = UE::Core::Private::DelegateAllocate(0x28,&local_3c8);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceSimCacheReader____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceSimCacheReader *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar6[3] = 0;
      local_290 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceSimCacheReader *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_290);
      puVar6[4] = VMGetNumEmitters;
    }
    if (local_158.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_158.Accessor,&local_158);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3d0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3d0,
               (FWriteAccessScope *)&local_270);
    if ((local_3c8.DelegateSize != 0) &&
       (local_3c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_3c8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_3c8,0,0,0x10);
      local_3c8.DelegateSize = 0;
    }
    if (local_270.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_270.Accessor,&local_270);
    }
    if (local_3c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_3c8.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_3d0);
  }
  else if (FVar1 == NDISimCacheReaderLocal::GetEmitterIndex) {
    local_3b8 = (undefined1  [8])0x0;
    local_3b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_3b0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3b8,
               (FWriteAccessScope *)&local_138);
    local_120 = &local_3b0;
    puVar6 = UE::Core::Private::DelegateAllocate(0x28,&local_3b0);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceSimCacheReader____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceSimCacheReader *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar6[3] = 0;
      local_2c8 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceSimCacheReader *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_2c8);
      puVar6[4] = VMGetEmitterIndex;
    }
    if (local_138.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_138.Accessor,&local_138);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3b8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3b8,
               (FWriteAccessScope *)&local_258);
    if ((local_3b0.DelegateSize != 0) &&
       (local_3b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_3b0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_3b0,0,0,0x10);
      local_3b0.DelegateSize = 0;
    }
    if (local_258.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_258.Accessor,&local_258);
    }
    if (local_3b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_3b0.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_3b8);
  }
  else if (FVar1 == NDISimCacheReaderLocal::GetNumInstances) {
    pTVar8 = TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
             ::CreateUObject<UNiagaraDataInterfaceSimCacheReader>
                       ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                         *)local_2e8,this,(pmf_cd2ae9e5)0x148eda300);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2e8,
               (FWriteAccessScope *)&local_240);
    if ((local_2d8 != 0) && (local_2e0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_2e0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_2e0,0,0,0x10);
      local_2d8 = 0;
    }
    if (local_240.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_240.Accessor,&local_240);
    }
    if (local_2e0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2e0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_2e8);
  }
  else if (FVar1 == NDISimCacheReaderLocal::GetInstanceInt) {
    iVar4 = *(int *)((longlong)param_2 + 0x40);
    if (((param_1->FunctionSpecifiers).ArrayNum < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = NDISimCacheReaderLocal::AttributeIndexFromVariable
                      (pUVar5,param_1->Name,
                       *(FName *)((param_1->FunctionSpecifiers).AllocatorInstance.Data + 8),iVar4);
    local_3a0 = (undefined1  [8])0x0;
    local_398.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_398.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3a0,
               (FWriteAccessScope *)&local_198);
    local_180 = &local_398;
    puVar6 = UE::Core::Private::DelegateAllocate(0x28,&local_398);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__H__6B_
      ;
      *(int *)(puVar6 + 1) = iVar4;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceSimCacheReader____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__H__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceSimCacheReader *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar6[3] = 0;
      local_2c0 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceSimCacheReader *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_2c0);
      puVar6[4] = VMGetInstanceInt;
    }
    if (local_198.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_198.Accessor,&local_198);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3a0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3a0,
               (FWriteAccessScope *)&local_228);
    if ((local_398.DelegateSize != 0) &&
       (local_398.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_398.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_398,0,0,0x10);
      local_398.DelegateSize = 0;
    }
    if (local_228.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_228.Accessor,&local_228);
    }
    if (local_398.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_398.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_3a0);
  }
  else if (FVar1 == NDISimCacheReaderLocal::GetInstanceFloat) {
    iVar4 = *(int *)((longlong)param_2 + 0x40);
    if (((param_1->FunctionSpecifiers).ArrayNum < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = NDISimCacheReaderLocal::AttributeIndexFromVariable
                      (pUVar5,param_1->Name,
                       *(FName *)((param_1->FunctionSpecifiers).AllocatorInstance.Data + 8),iVar4);
    local_388 = (undefined1  [8])0x0;
    local_380.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_380.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_388,
               (FWriteAccessScope *)&local_f8);
    local_e0 = &local_380;
    puVar6 = UE::Core::Private::DelegateAllocate(0x28,&local_380);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__H__6B_
      ;
      *(int *)(puVar6 + 1) = iVar4;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceSimCacheReader____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__H__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceSimCacheReader *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar6[3] = 0;
      local_2b8 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceSimCacheReader *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_2b8);
      puVar6[4] = VMGetInstanceFloat;
    }
    if (local_f8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f8.Accessor,&local_f8);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_388);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_388,
               (FWriteAccessScope *)&local_210);
    if ((local_380.DelegateSize != 0) &&
       (local_380.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_380.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_380,0,0,0x10);
      local_380.DelegateSize = 0;
    }
    if (local_210.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_210.Accessor,&local_210);
    }
    if (local_380.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_380.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_388);
  }
  else if (FVar1 == NDISimCacheReaderLocal::GetInstanceVector2) {
    iVar4 = *(int *)((longlong)param_2 + 0x40);
    if (((param_1->FunctionSpecifiers).ArrayNum < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = NDISimCacheReaderLocal::AttributeIndexFromVariable
                      (pUVar5,param_1->Name,
                       *(FName *)((param_1->FunctionSpecifiers).AllocatorInstance.Data + 8),iVar4);
    local_370 = (undefined1  [8])0x0;
    local_368.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_368.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_370,
               (FWriteAccessScope *)&local_d8);
    local_c0 = &local_368;
    puVar6 = UE::Core::Private::DelegateAllocate(0x28,&local_368);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__H__6B_
      ;
      *(int *)(puVar6 + 1) = iVar4;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceSimCacheReader____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__H__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceSimCacheReader *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar6[3] = 0;
      local_2b0 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceSimCacheReader *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_2b0);
      puVar6[4] = VMGetInstanceVector2;
    }
    if (local_d8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d8.Accessor,&local_d8);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_370);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_370,
               (FWriteAccessScope *)&local_1f8);
    if ((local_368.DelegateSize != 0) &&
       (local_368.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_368.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_368,0,0,0x10);
      local_368.DelegateSize = 0;
    }
    if (local_1f8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1f8.Accessor,&local_1f8);
    }
    if (local_368.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_368.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_370);
  }
  else if (FVar1 == NDISimCacheReaderLocal::GetInstanceVector3) {
    iVar4 = *(int *)((longlong)param_2 + 0x40);
    if (((param_1->FunctionSpecifiers).ArrayNum < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = NDISimCacheReaderLocal::AttributeIndexFromVariable
                      (pUVar5,param_1->Name,
                       *(FName *)((param_1->FunctionSpecifiers).AllocatorInstance.Data + 8),iVar4);
    local_358 = (undefined1  [8])0x0;
    local_350.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_350.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_358,
               (FWriteAccessScope *)&local_b8);
    local_a0 = &local_350;
    puVar6 = UE::Core::Private::DelegateAllocate(0x28,&local_350);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__H__6B_
      ;
      *(int *)(puVar6 + 1) = iVar4;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceSimCacheReader____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__H__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceSimCacheReader *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar6[3] = 0;
      local_2a8 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceSimCacheReader *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_2a8);
      puVar6[4] = VMGetInstanceVector3;
    }
    if (local_b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_358);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_358,
               (FWriteAccessScope *)&local_1e0);
    if ((local_350.DelegateSize != 0) &&
       (local_350.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_350.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_350,0,0,0x10);
      local_350.DelegateSize = 0;
    }
    if (local_1e0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1e0.Accessor,&local_1e0);
    }
    if (local_350.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_350.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_358);
  }
  else if (FVar1 == NDISimCacheReaderLocal::GetInstanceVector4) {
    iVar4 = *(int *)((longlong)param_2 + 0x40);
    if (((param_1->FunctionSpecifiers).ArrayNum < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = NDISimCacheReaderLocal::AttributeIndexFromVariable
                      (pUVar5,param_1->Name,
                       *(FName *)((param_1->FunctionSpecifiers).AllocatorInstance.Data + 8),iVar4);
    local_340 = (undefined1  [8])0x0;
    local_338.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_338.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_340,
               (FWriteAccessScope *)&local_98);
    local_80 = &local_338;
    puVar6 = UE::Core::Private::DelegateAllocate(0x28,&local_338);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__H__6B_
      ;
      *(int *)(puVar6 + 1) = iVar4;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceSimCacheReader____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__H__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceSimCacheReader *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar6[3] = 0;
      local_2a0 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceSimCacheReader *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_2a0);
      puVar6[4] = VMGetInstanceVector4;
    }
    if (local_98.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_340);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_340,
               (FWriteAccessScope *)&local_1c8);
    if ((local_338.DelegateSize != 0) &&
       (local_338.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_338.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_338,0,0,0x10);
      local_338.DelegateSize = 0;
    }
    if (local_1c8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1c8.Accessor,&local_1c8);
    }
    if (local_338.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_338.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_340);
  }
  else if (FVar1 == NDISimCacheReaderLocal::GetInstanceColor) {
    iVar4 = *(int *)((longlong)param_2 + 0x40);
    if (((param_1->FunctionSpecifiers).ArrayNum < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = NDISimCacheReaderLocal::AttributeIndexFromVariable
                      (pUVar5,param_1->Name,
                       *(FName *)((param_1->FunctionSpecifiers).AllocatorInstance.Data + 8),iVar4);
    local_328 = (undefined1  [8])0x0;
    local_320.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_320.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_328,
               (FWriteAccessScope *)&local_118);
    local_100 = &local_320;
    puVar6 = UE::Core::Private::DelegateAllocate(0x28,&local_320);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__H__6B_
      ;
      *(int *)(puVar6 + 1) = iVar4;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceSimCacheReader____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__H__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceSimCacheReader *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar6[3] = 0;
      local_298 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceSimCacheReader *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_298);
      puVar6[4] = VMGetInstanceColor;
    }
    if (local_118.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_118.Accessor,&local_118);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_328);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_328,
               (FWriteAccessScope *)&local_1b0);
    if ((local_320.DelegateSize != 0) &&
       (local_320.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_320.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_320,0,0,0x10);
      local_320.DelegateSize = 0;
    }
    if (local_1b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1b0.Accessor,&local_1b0);
    }
    if (local_320.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_320.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_328);
  }
  else {
    if (FVar1 == NDISimCacheReaderLocal::GetInstanceQuat) {
      iVar4 = *(int *)((longlong)param_2 + 0x40);
      if (((param_1->FunctionSpecifiers).ArrayNum < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_2f8 = NDISimCacheReaderLocal::AttributeIndexFromVariable
                            (pUVar5,param_1->Name,
                             *(FName *)((param_1->FunctionSpecifiers).AllocatorInstance.Data + 8),
                             iVar4);
      local_res10[0] = false;
      pTVar8 = TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
               ::CreateUObject<UNiagaraDataInterfaceSimCacheReader,int_const_&,bool>
                         (&local_78,this,(pmf_9a338059)0x148ed9be0,&local_2f8,local_res10);
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar8);
      this_00 = (TDelegateBase<FNotThreadSafeDelegateMode> *)&local_78;
    }
    else if (FVar1 == NDISimCacheReaderLocal::GetInstancePosition) {
      iVar4 = *(int *)((longlong)param_2 + 0x40);
      if (((param_1->FunctionSpecifiers).ArrayNum < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_2f4 = NDISimCacheReaderLocal::AttributeIndexFromVariable
                            (pUVar5,param_1->Name,
                             *(FName *)((param_1->FunctionSpecifiers).AllocatorInstance.Data + 8),
                             iVar4);
      local_res18[0] = false;
      pTVar8 = TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
               ::CreateUObject<UNiagaraDataInterfaceSimCacheReader,int_const_&,bool>
                         (&local_48,this,(pmf_9a338059)0x148ed9b70,&local_2f4,local_res18);
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar8);
      this_00 = (TDelegateBase<FNotThreadSafeDelegateMode> *)&local_48;
    }
    else {
      if (FVar1 != NDISimCacheReaderLocal::GetInstanceID) {
        return;
      }
      iVar4 = *(int *)((longlong)param_2 + 0x40);
      if (((param_1->FunctionSpecifiers).ArrayNum < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_2f0[0] = NDISimCacheReaderLocal::AttributeIndexFromVariable
                               (pUVar5,param_1->Name,
                                *(FName *)((param_1->FunctionSpecifiers).AllocatorInstance.Data + 8)
                                ,iVar4);
      local_3d8[0] = false;
      pTVar8 = TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
               ::CreateUObject<UNiagaraDataInterfaceSimCacheReader,int_const_&,bool>
                         (&local_60,this,(pmf_9a338059)0x148ed9ac0,local_2f0,local_3d8);
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar8);
      this_00 = (TDelegateBase<FNotThreadSafeDelegateMode> *)&local_60;
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(this_00);
  }
  return;
}

// HasPreSimulateTick @ 148ec6a30

bool __thiscall
UNiagaraDataInterfaceSimCacheReader::HasPreSimulateTick(UNiagaraDataInterfaceSimCacheReader *this)

{
  return true;
}

// InitPerInstanceData @ 148ec8230

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

bool __thiscall
UNiagaraDataInterfaceSimCacheReader::InitPerInstanceData
          (UNiagaraDataInterfaceSimCacheReader *this,void *param_1,FNiagaraSystemInstance *param_2)

{
  int iVar1;
  
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)((longlong)param_1 + 0x18),
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)((longlong)param_1 + 0x18) = iVar1;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0xffffffff;
  FNiagaraParameterDirectBinding<UObject_*>::Init
            (param_1,(FNiagaraParameterStore *)&stack0x00000008,
             (FNiagaraVariable *)&param_2->InstanceParameters);
  return true;
}

// PerInstanceDataSize @ 148ec8fc0

int __thiscall
UNiagaraDataInterfaceSimCacheReader::PerInstanceDataSize(UNiagaraDataInterfaceSimCacheReader *this)

{
  return 0x48;
}

// PerInstanceTick @ 148ec9e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

bool __thiscall
UNiagaraDataInterfaceSimCacheReader::PerInstanceTick
          (UNiagaraDataInterfaceSimCacheReader *this,void *param_1,FNiagaraSystemInstance *param_2,
          float param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  code *pcVar3;
  FNiagaraSimCacheGpuResource *pFVar4;
  FSharedReferencer<1> FVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  TObjectPtr<UObject> this_00;
  UClass *pUVar9;
  UNiagaraSimCache *pUVar10;
  FRenderCommandList *pFVar11;
  FCommandList *pFVar12;
  FRenderCommandTag *pFVar13;
  code **ppcVar14;
  undefined ***pppuVar15;
  ulonglong uVar16;
  UNiagaraSimCache *this_01;
  undefined1 auStack_168 [32];
  TSharedPtr<FNiagaraSimCacheGpuResource,1> local_148;
  UNiagaraSimCache *local_138;
  undefined1 local_130 [8];
  code *local_128 [2];
  code *local_118 [3];
  code **local_100;
  code *local_f8 [2];
  undefined **local_e8;
  FNDIProxy *pFStack_e0;
  ulong64 local_d8;
  undefined ***local_d0;
  code *local_c8 [2];
  code *local_b8 [3];
  code **local_a0;
  byte local_98;
  undefined1 local_88 [16];
  undefined **local_78;
  FNDIProxy *pFStack_70;
  ulong64 local_68;
  undefined ***local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_168;
  if ((param_1 == (void *)0x0) || (param_2 == (FNiagaraSystemInstance *)0x0)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("PerInstanceData && SystemInstance",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceSimCacheReader.cpp"
                       ,0x118,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
  }
  this_01 = (this->SimCache).field0_0x0.DebugPtr;
  if (*(int *)param_1 != -1) {
    this_00 = FNiagaraParameterStore::GetUObject
                        (*(FNiagaraParameterStore **)((longlong)param_1 + 8),(int)local_130);
    if (*(longlong *)this_00.field0_0x0 != 0) {
      pUVar9 = Z_Construct_UClass_UNiagaraSimCache_NoRegister();
      bVar6 = FObjectPtr::IsA((FObjectPtr *)this_00.field0_0x0,pUVar9);
      if (bVar6) {
        this_01 = *(UNiagaraSimCache **)this_00.field0_0x0;
        goto LAB_148ec9f2c;
      }
    }
    this_01 = (UNiagaraSimCache *)0x0;
  }
LAB_148ec9f2c:
  pUVar10 = (UNiagaraSimCache *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0x38));
  if (pUVar10 == this_01) {
    if ((this_01 == (UNiagaraSimCache *)0x0) &&
       (*(undefined4 *)((longlong)param_1 + 0x40) = 0xffffffff,
       ((uint)this->_padding_ >> 2 & 1) != 0)) {
      pFStack_e0 = UNiagaraDataInterface::GetProxyAs<NDISimCacheReaderLocal::FNDIProxy>
                             ((UNiagaraDataInterface *)this);
      local_d8 = param_2->ID;
      local_f8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UNiagaraDataInterfaceSimCacheReader::PerInstanceTick'::__l19::<lambda_2>,void,FRHICommandListImmediate_&>
                    ::Call;
      local_d0 = (undefined ***)0x0;
      local_e8 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UNiagaraDataInterfaceSimCacheReader::PerInstanceTick'::`19'::<lambda_2>,1,0>
                  ::_vftable_;
      pFVar11 = FRenderCommandList::GetInstanceTLS();
      if (pFVar11 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceSimCacheReader::PerInstanceTick_::__l19::TSTR_NDISimCacheReader_DestroyRT307>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_f8);
      }
      else {
        pFVar12 = FRenderCommandList::GetRenderThread(pFVar11);
        local_88._0_8_ = local_f8[0];
        local_60 = local_d0;
        local_78 = local_e8;
        pFStack_70 = pFStack_e0;
        local_68 = local_d8;
        local_f8[0] = (code *)0x0;
        local_58 = 2;
        pFVar13 = (FRenderCommandTag *)
                  TRenderCommandTag<`UNiagaraDataInterfaceSimCacheReader::PerInstanceTick'::__l19::TSTR_NDISimCacheReader_DestroyRT307>
                  ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (pFVar12,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_88,pFVar13);
        uVar16 = (ulonglong)local_58;
        if (2 < uVar16) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L"");
          if (bVar6) {
            pcVar3 = (code *)swi(3);
            uVar7 = (*pcVar3)();
            return (bool)uVar7;
          }
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar16] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_88._0_8_ != (code *)0x0) {
            pppuVar15 = (undefined ***)(local_88 + 0x10);
            if (local_60 != (undefined ***)0x0) {
              pppuVar15 = local_60;
            }
            (*(code *)(*pppuVar15)[2])();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar16])(local_88);
        }
      }
      if (local_f8[0] != (code *)0x0) {
        pppuVar15 = &local_e8;
        if (local_d0 != (undefined ***)0x0) {
          pppuVar15 = local_d0;
        }
        (*(code *)(*pppuVar15)[2])();
      }
    }
  }
  else {
    iVar8 = UNiagaraSimCache::GetEmitterIndex(this_01,this->EmitterBinding);
    *(int *)((longlong)param_1 + 0x40) = iVar8;
    FNiagaraSimCacheGpuResource::CreateResource(&local_148,this_01);
    pcVar3 = (code *)this->_padding_;
    if (pcVar3 == (code *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedProxy != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                         ,0x3a0,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
    }
    FVar5.ReferenceController = local_148.SharedReferenceCount.ReferenceController;
    pFVar4 = local_148.Object;
    pcVar2 = (code *)param_2->ID;
    uVar1 = *(undefined4 *)((longlong)param_1 + 0x40);
    local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_148.Object = (FNiagaraSimCacheGpuResource *)0x0;
    local_128[0] = (code *)0x0;
    local_100 = FMemory::Malloc(0x30,8);
    local_100[1] = pcVar3;
    local_100[2] = pcVar2;
    *local_100 = (code *)&UE::Core::Private::Function::
                          TFunction_OwnedObject<`UNiagaraDataInterfaceSimCacheReader::PerInstanceTick'::`12'::<lambda_1>,1,1>
                          ::_vftable_;
    *(undefined4 *)(local_100 + 3) = uVar1;
    local_100[4] = (code *)pFVar4;
    local_100[5] = (code *)FVar5.ReferenceController;
    if (local_100 != (code **)&DAT_fffffffffffffff8) {
      local_128[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`UNiagaraDataInterfaceSimCacheReader::PerInstanceTick'::__l12::<lambda_1>,void,FRHICommandListImmediate_&>
                     ::Call;
    }
    pFVar11 = FRenderCommandList::GetInstanceTLS();
    if (pFVar11 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceSimCacheReader::PerInstanceTick_::__l12::TSTR_NDISimCacheReader_InitRT292>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_128);
    }
    else {
      pFVar12 = FRenderCommandList::GetRenderThread(pFVar11);
      local_c8[0] = local_128[0];
      local_a0 = local_100;
      local_100 = (code **)0x0;
      local_b8[0] = local_118[0];
      local_b8[1] = local_118[1];
      local_b8[2] = local_118[2];
      local_128[0] = (code *)0x0;
      local_98 = 2;
      pFVar13 = (FRenderCommandTag *)
                TRenderCommandTag<`UNiagaraDataInterfaceSimCacheReader::PerInstanceTick'::__l12::TSTR_NDISimCacheReader_InitRT292>
                ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (pFVar12,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_c8,pFVar13);
      uVar16 = (ulonglong)local_98;
      if (2 < uVar16) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return (bool)uVar7;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar16] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if (local_c8[0] != (code *)0x0) {
          ppcVar14 = local_c8 + 2;
          if (local_a0 != (code **)0x0) {
            ppcVar14 = local_a0;
          }
          (**(code **)(*ppcVar14 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar16])();
      }
    }
    if (local_128[0] != (code *)0x0) {
      ppcVar14 = local_128 + 2;
      if (local_100 != (code **)0x0) {
        ppcVar14 = local_100;
      }
      (**(code **)(*ppcVar14 + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
  }
  local_138 = this_01;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_01 != (UNiagaraSimCache *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)this_01);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)((longlong)param_1 + 0x38),(FObjectPtr)&local_138);
  return false;
}

// PostInitProperties @ 148ecb520

void __thiscall
UNiagaraDataInterfaceSimCacheReader::PostInitProperties(UNiagaraDataInterfaceSimCacheReader *this)

{
  TObjectPtr<UObject>_u_0 local_28;
  undefined2 local_20;
  undefined1 local_1e;
  undefined8 local_1c;
  undefined4 local_14;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x10) != 0) {
    local_28 = (TObjectPtr<UObject>_u_0)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_28.DebugPtr != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_28.DebugPtr);
    }
    local_1e = 0;
    local_20 = 1;
    local_1c = 0xffffffffffffffff;
    local_14 = 0xffffffff;
    FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_28.ObjectPtr);
    FNiagaraTypeRegistry::Register
              ((FNiagaraTypeDefinition *)&local_28.ObjectPtr,AllowParameter|AllowAnyVariable);
  }
  return;
}

// SetShaderParameters @ 148ed0f60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceSimCacheReader::SetShaderParameters
          (UNiagaraDataInterfaceSimCacheReader *this,
          FNiagaraDataInterfaceSetShaderParametersContext *param_1)

{
  TSharedPtr<FNiagaraSimCacheGpuResource,1> *this_00;
  FNiagaraDataInterfaceProxy *pFVar1;
  FNiagaraDataInterfaceParametersCS *pFVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FName FVar6;
  ForAnyElementType *pFVar7;
  UNiagaraSimCache *pUVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  ulong64 uVar12;
  ulong64 *puVar13;
  FShaderParametersMetadata *pFVar14;
  FRHIShaderResourceView *pFVar15;
  FNiagaraSimCacheGpuResource *pFVar16;
  FNiagaraDataInterfaceParametersCS *pFVar17;
  FNiagaraTypeDefinition *pFVar18;
  longlong *plVar19;
  uchar *puVar20;
  uint uVar21;
  int *piVar22;
  int iVar23;
  longlong lVar24;
  FName *pFVar25;
  ulonglong uVar26;
  uint uVar27;
  ulong64 *puVar28;
  ulonglong uVar29;
  ForAnyElementType *pFVar30;
  uint uVar31;
  ulong64 *puVar32;
  ulonglong uVar33;
  longlong *plVar34;
  int local_res18 [2];
  int local_res20;
  FNiagaraVariableBase local_a8;
  FNameEntryId local_98;
  uint uStack_94;
  longlong local_90;
  ForAnyElementType *local_88;
  FNiagaraDataInterfaceParametersCS *local_80;
  FNiagaraDataInterfaceParametersCS **local_78;
  ulong64 *local_70;
  UNiagaraSimCache *local_68;
  longlong *local_60;
  FNiagaraTypeDefinition local_58;
  
  if ((param_1->DataInterfaceProxy == (FNiagaraDataInterfaceProxy *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataInterfaceProxy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                         ,0x1c1,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar1 = param_1->DataInterfaceProxy;
  uVar12 = FNiagaraDataInterfaceSetShaderParametersContext::GetSystemInstanceID(param_1);
  puVar32 = (ulong64 *)0x0;
  puVar13 = puVar32;
  if (pFVar1[1].SourceDIName.ComparisonIndex.Value != *(uint *)((longlong)&pFVar1[4]._padding_ + 4))
  {
    pFVar25 = (FName *)pFVar1[5]._padding_;
    if ((FName *)pFVar1[5]._padding_ == (FName *)0x0) {
      pFVar25 = &pFVar1[4].SourceDIName;
    }
    uVar21 = (&pFVar25->ComparisonIndex)
             [(uVar12 >> 0x20) * 0x17 + uVar12 &
              (ulonglong)(pFVar1[5].SourceDIName.ComparisonIndex.Value - 1)].Value;
    if (uVar21 != 0xffffffff) {
      do {
        puVar13 = (ulong64 *)((longlong)(int)uVar21 * 0x78 + pFVar1[1]._padding_);
        if (*puVar13 == uVar12) break;
        uVar21 = (uint)puVar13[0xe];
        puVar13 = puVar32;
      } while (uVar21 != 0xffffffff);
    }
  }
  puVar28 = puVar13 + 1;
  if (puVar13 == (ulong64 *)0x0) {
    puVar28 = puVar32;
  }
  uVar21 = param_1->ParametersOffset + 0xf & 0xfffffff0;
  local_70 = puVar28;
  pFVar14 = TShaderParameterStructTypeInfo<UNiagaraDataInterfaceSimCacheReader::FShaderParameters>::
            GetStructMetadata();
  piVar22 = (int *)(param_1->BaseParameters + uVar21);
  param_1->ParametersOffset = pFVar14->Size + uVar21;
  if (puVar28 != (ulong64 *)0x0) {
    this_00 = (TSharedPtr<FNiagaraSimCacheGpuResource,1> *)(puVar28 + 1);
    if ((puVar28[1] == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (0 < this_00->Object->NumFrames) {
      if ((this_00->Object == (FNiagaraSimCacheGpuResource *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *piVar22 = this_00->Object->NumFrames;
      if ((this_00->Object == (FNiagaraSimCacheGpuResource *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      piVar22[1] = this_00->Object->NumEmitters;
      piVar22[2] = (uint)*puVar28;
      if ((this_00->Object == (FNiagaraSimCacheGpuResource *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar15 = (this_00->Object->SimCacheBuffer).SRV.Reference;
      if (pFVar15 == (FRHIShaderResourceView *)0x0) {
        pFVar15 = FNiagaraRenderer::GetDummyUIntBuffer();
      }
      *(FRHIShaderResourceView **)(piVar22 + 4) = pFVar15;
      if ((param_1->ShaderStorage == (FNiagaraDataInterfaceParametersCS *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("ShaderStorage != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                             ,0x1f1,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar2 = param_1->ShaderStorage;
      iVar23 = 1;
      if (1 < *(int *)(pFVar2 + 8) / 2) {
        iVar23 = *(int *)(pFVar2 + 8) / 2;
      }
      iVar23 = (int)((iVar23 + 3 >> 0x1f & 3U) + iVar23 + 3) >> 2;
      uVar21 = (int)((ulonglong)pFVar2 >> 0x20) * 0x17 + (int)pFVar2;
      local_res20 = iVar23;
      local_80 = pFVar2;
      if ((uint)puVar28[4] != *(uint *)((longlong)puVar28 + 0x4c)) {
        puVar13 = (ulong64 *)puVar28[0xb];
        if ((ulong64 *)puVar28[0xb] == (ulong64 *)0x0) {
          puVar13 = puVar28 + 10;
        }
        uVar27 = *(uint *)((longlong)puVar13 + (ulonglong)((uint)puVar28[0xc] - 1 & uVar21) * 4);
        if (uVar27 != 0xffffffff) {
          do {
            plVar19 = (longlong *)((longlong)(int)uVar27 * 0x20 + puVar28[3]);
            if ((FNiagaraDataInterfaceParametersCS *)*plVar19 == pFVar2) {
              if (plVar19 != (longlong *)0x0) goto LAB_148ed1233;
              break;
            }
            uVar27 = *(uint *)(plVar19 + 3);
          } while (uVar27 != 0xffffffff);
        }
      }
      local_78 = &local_80;
      TSet<TTuple<unsigned___int64,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<unsigned___int64_&&>_>
                ((TSet<TTuple<unsigned___int64,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  *)(puVar28 + 3),(uint)local_res18,
                 (TKeyInitializer<unsigned___int64_&&> *)(ulonglong)uVar21,(bool *)&local_78);
      plVar19 = (longlong *)((longlong)local_res18[0] * 0x20 + puVar28[3]);
LAB_148ed1233:
      pFVar30 = (ForAnyElementType *)(plVar19 + 1);
      plVar34 = plVar19 + 2;
      local_88 = pFVar30;
      local_60 = plVar34;
      if ((int)plVar19[2] == 0) {
        pFVar16 = TSharedPtr<FNiagaraSimCacheGpuResource,1>::operator->(this_00);
        local_68 = (UNiagaraSimCache *)FWeakObjectPtr::Get(&(pFVar16->WeakSimCache).WeakPtr);
        iVar10 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (4,4,iVar23 * 4,pFVar30,(int *)plVar34,(int *)((longlong)plVar19 + 0x14))
        ;
        memset(pFVar30->Data + (longlong)iVar10 * 4,0,(longlong)(iVar23 * 4) << 2);
        pFVar7 = local_88;
        iVar10 = *(int *)(pFVar2 + 8);
        uVar26 = 0;
        if (iVar10 / 2 < 1) {
          plVar34 = plVar19 + 2;
        }
        else {
          local_90 = 0;
          uVar29 = uVar26;
          uVar33 = uVar26;
          do {
            lVar24 = local_90;
            uVar27 = (uint)uVar29;
            uVar21 = 0;
            if ((int)uVar27 < iVar10) {
              uVar21 = ~uVar27 >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar17 = *(FNiagaraDataInterfaceParametersCS **)pFVar2;
            if (((ulonglong)pFVar17 & 1) != 0) {
              pFVar17 = pFVar2 + ((longlong)pFVar17 >> 0x18);
            }
            local_98.Value = (uint)*(undefined8 *)(pFVar17 + uVar26);
            uStack_94 = (uint)((ulonglong)*(undefined8 *)(pFVar17 + uVar26) >> 0x20);
            uVar21 = 0;
            if ((int)(uVar27 + 1) < *(int *)(pFVar2 + 8)) {
              uVar21 = ~(uVar27 + 1) >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar17 = *(FNiagaraDataInterfaceParametersCS **)pFVar2;
            if (((ulonglong)pFVar17 & 1) != 0) {
              pFVar17 = pFVar2 + ((longlong)pFVar17 >> 0x18);
            }
            uVar3 = *(undefined8 *)(pFVar17 + uVar26 + 8);
            FVar6.Number = uStack_94;
            FVar6.ComparisonIndex.Value = local_98.Value;
            if (FVar6 == (FName)0x0) {
              uVar21 = 0xffffffff;
            }
            else {
              uVar21 = (uint)*local_70;
              pFVar18 = NDISimCacheReaderLocal::FunctionNameToTypeDef(&local_58,FVar6);
              local_a8.Name.ComparisonIndex.Value = (uint)uVar3;
              local_a8.Name.Number = (uint)((ulonglong)uVar3 >> 0x20);
              local_a8.TypeDefHandle.RegisteredTypeIndex =
                   FNiagaraTypeDefinitionHandle::Register(&local_a8.TypeDefHandle,pFVar18);
              pUVar8 = local_68;
              uVar11 = FNiagaraSimCacheAttributeReaderHelper::FindVariableIndex
                                 (local_68,&local_a8,uVar21);
              if (uVar11 != 0xffffffff) {
                uVar31 = 0;
                if ((int)uVar21 < (pUVar8->CacheLayout).EmitterLayouts.ArrayNum) {
                  uVar31 = ~uVar21 >> 0x1f;
                }
                if ((uVar31 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                pFVar4 = (pUVar8->CacheLayout).EmitterLayouts.AllocatorInstance.Data;
                uVar31 = 0;
                if ((int)uVar11 < *(int *)(pFVar4 + (longlong)(int)uVar21 * 0xb8 + 0x18)) {
                  uVar31 = ~uVar11 >> 0x1f;
                }
                if ((uVar31 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                lVar24 = *(longlong *)(pFVar4 + (longlong)(int)uVar21 * 0xb8 + 0x10) +
                         (longlong)(int)uVar11 * 0x18;
                if (lVar24 != 0) {
                  pFVar18 = FNiagaraTypeDefinitionHandle::Resolve(&local_a8.TypeDefHandle);
                  if (((((TObjectPtr<UObject>_u_0)(pFVar18->ClassStructOrEnum).field0_0x0.DebugPtr
                         == FNiagaraTypeDefinition::IntDef.ClassStructOrEnum.field0_0x0) &&
                       (pFVar18->UnderlyingType == FNiagaraTypeDefinition::IntDef.UnderlyingType))
                      && (pFVar18->Flags == FNiagaraTypeDefinition::IntDef.Flags)) ||
                     (((pFVar18 = FNiagaraTypeDefinitionHandle::Resolve(&local_a8.TypeDefHandle),
                       (TObjectPtr<UObject>_u_0)(pFVar18->ClassStructOrEnum).field0_0x0.DebugPtr ==
                       FNiagaraTypeDefinition::IDDef.ClassStructOrEnum.field0_0x0 &&
                       (pFVar18->UnderlyingType == FNiagaraTypeDefinition::IDDef.UnderlyingType)) &&
                      (pFVar18->Flags == FNiagaraTypeDefinition::IDDef.Flags)))) {
                    uVar21 = (uint)*(ushort *)(lVar24 + 0x14);
                    lVar24 = local_90;
                  }
                  else {
                    uVar21 = (uint)*(ushort *)(lVar24 + 0xc);
                    lVar24 = local_90;
                  }
                  goto LAB_148ed1544;
                }
              }
              uVar21 = 0xffffffff;
              lVar24 = local_90;
            }
LAB_148ed1544:
            uVar31 = (uint)uVar33;
            uVar11 = 0;
            if ((int)uVar31 < *(int *)&pFVar7[1].Data) {
              uVar11 = ~uVar31 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar33 = (ulonglong)(uVar31 + 1);
            uVar29 = (ulonglong)(uVar27 + 2);
            uVar26 = uVar26 + 0x10;
            *(uint *)(pFVar7->Data + lVar24) = uVar21;
            local_90 = lVar24 + 4;
            iVar10 = *(int *)(pFVar2 + 8);
            pFVar30 = local_88;
            plVar34 = local_60;
            iVar23 = local_res20;
          } while ((int)(uVar31 + 1) < iVar10 / 2);
        }
      }
      uVar21 = param_1->ParametersOffset + 0xf & 0xfffffff0;
      puVar20 = param_1->BaseParameters;
      param_1->ParametersOffset = iVar23 * 0x10 + uVar21;
      if ((iVar23 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      memcpy(puVar20 + uVar21,pFVar30->Data,(ulonglong)(uint)((int)*plVar34 << 2));
      return;
    }
  }
  piVar22[0] = 0;
  piVar22[1] = 0;
  piVar22[2] = -1;
  pFVar15 = FNiagaraRenderer::GetDummyUIntBuffer();
  *(FRHIShaderResourceView **)(piVar22 + 4) = pFVar15;
  uVar21 = param_1->ParametersOffset + 0xf & 0xfffffff0;
  puVar20 = param_1->BaseParameters + uVar21;
  param_1->ParametersOffset = uVar21 + 0x10;
  puVar20[0] = '\0';
  puVar20[1] = '\0';
  puVar20[2] = '\0';
  puVar20[3] = '\0';
  puVar20[4] = '\0';
  puVar20[5] = '\0';
  puVar20[6] = '\0';
  puVar20[7] = '\0';
  puVar20[8] = '\0';
  puVar20[9] = '\0';
  puVar20[10] = '\0';
  puVar20[0xb] = '\0';
  puVar20[0xc] = '\0';
  puVar20[0xd] = '\0';
  puVar20[0xe] = '\0';
  puVar20[0xf] = '\0';
  return;
}

// StaticRegisterNativesUNiagaraDataInterfaceSimCacheReader @ 148ed4c90

void __cdecl
UNiagaraDataInterfaceSimCacheReader::StaticRegisterNativesUNiagaraDataInterfaceSimCacheReader(void)

{
  return;
}

// VMGetEmitterIndex @ 148ed96e0

void __thiscall
UNiagaraDataInterfaceSimCacheReader::VMGetEmitterIndex
          (UNiagaraDataInterfaceSimCacheReader *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  int iVar2;
  int local_20 [2];
  FUserPtrHandler<NDISimCacheReaderLocal::FInstanceData_GameThread> local_18;
  
  VectorVM::FUserPtrHandler<NDISimCacheReaderLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDISimCacheReaderLocal::FInstanceData_GameThread>(&local_18,param_1);
  iVar2 = 0;
  local_20[0] = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  pfVar1 = pfVar1 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < param_1->NumInstances) {
    do {
      iVar2 = iVar2 + 1;
      *pfVar1 = (float)(local_18.Ptr)->EmitterIndex;
      pfVar1 = pfVar1 + local_20[0];
    } while (iVar2 < param_1->NumInstances);
  }
  return;
}

// VMGetInstanceColor @ 148ed9a10

void __thiscall
UNiagaraDataInterfaceSimCacheReader::VMGetInstanceColor
          (UNiagaraDataInterfaceSimCacheReader *this,FVectorVMExternalFunctionContext *param_1,
          int param_2)

{
  FLinearColor_u_0 local_48;
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &
             ___7__TFunction_OwnedObject_P6A_AUFLinearColor__AEAUFNiagaraSimCacheAttributeReaderHelper__H_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_48 = FLinearColor::White.field0_0x0;
  local_20 = `UNiagaraDataInterfaceSimCacheReader::VMGetInstanceColor'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<FLinearColor_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),FLinearColor,FNiagaraSimCacheAttributeReaderHelper_&,int>
                ::Call;
  NDISimCacheReaderLocal::VMInstanceGetFunction<FLinearColor>
            (param_1,(FLinearColor *)&local_48._s_0,param_2,
             (TFunction<FLinearColor___cdecl(FNiagaraSimCacheAttributeReaderHelper_&,int)> *)
             local_38);
  return;
}

// VMGetInstanceFloat @ 148ed9a70

void __thiscall
UNiagaraDataInterfaceSimCacheReader::VMGetInstanceFloat
          (UNiagaraDataInterfaceSimCacheReader *this,FVectorVMExternalFunctionContext *param_1,
          int param_2)

{
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &
             ___7__TFunction_OwnedObject_P6AMAEAUFNiagaraSimCacheAttributeReaderHelper__H_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_20 = `UNiagaraDataInterfaceSimCacheReader::VMGetInstanceFloat'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<float_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),float,FNiagaraSimCacheAttributeReaderHelper_&,int>
                ::Call;
  NDISimCacheReaderLocal::VMInstanceGetFunction<float>
            (param_1,0.0,param_2,
             (TFunction<float___cdecl(FNiagaraSimCacheAttributeReaderHelper_&,int)> *)local_38);
  return;
}

// VMGetInstanceID @ 148ed9ac0

void __thiscall
UNiagaraDataInterfaceSimCacheReader::VMGetInstanceID
          (UNiagaraDataInterfaceSimCacheReader *this,FVectorVMExternalFunctionContext *param_1,
          int param_2,bool param_3)

{
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &
             ___7__TFunction_OwnedObject_P6A_AUFNiagaraID__AEAUFNiagaraSimCacheAttributeReaderHelper__H_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_20 = `UNiagaraDataInterfaceSimCacheReader::VMGetInstanceID'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<FNiagaraID_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),FNiagaraID,FNiagaraSimCacheAttributeReaderHelper_&,int>
                ::Call;
  NDISimCacheReaderLocal::VMInstanceGetFunction<FNiagaraID>
            (param_1,(FNiagaraID)0xffffffffffffffff,param_2,
             (TFunction<FNiagaraID___cdecl(FNiagaraSimCacheAttributeReaderHelper_&,int)> *)local_38)
  ;
  return;
}

// VMGetInstanceInt @ 148ed9b20

void __thiscall
UNiagaraDataInterfaceSimCacheReader::VMGetInstanceInt
          (UNiagaraDataInterfaceSimCacheReader *this,FVectorVMExternalFunctionContext *param_1,
          int param_2)

{
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &
             ___7__TFunction_OwnedObject_P6AHAEAUFNiagaraSimCacheAttributeReaderHelper__H_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_20 = `UNiagaraDataInterfaceSimCacheReader::VMGetInstanceInt'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<int_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),int,FNiagaraSimCacheAttributeReaderHelper_&,int>
                ::Call;
  NDISimCacheReaderLocal::VMInstanceGetFunction<int>
            (param_1,0,param_2,
             (TFunction<int___cdecl(FNiagaraSimCacheAttributeReaderHelper_&,int)> *)local_38);
  return;
}

// VMGetInstancePosition @ 148ed9b70

void __thiscall
UNiagaraDataInterfaceSimCacheReader::VMGetInstancePosition
          (UNiagaraDataInterfaceSimCacheReader *this,FVectorVMExternalFunctionContext *param_1,
          int param_2,bool param_3)

{
  TVector<float>_u_0 local_48;
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  local_28 = &
             ___7__TFunction_OwnedObject_P6A_AU__TVector_M_Math_UE__AEAUFNiagaraSimCacheAttributeReaderHelper__H_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_10 = 0;
  local_20 = `UNiagaraDataInterfaceSimCacheReader::VMGetInstancePosition'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>;
  local_48._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<UE::Math::TVector<float>_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),UE::Math::TVector<float>,FNiagaraSimCacheAttributeReaderHelper_&,int>
                ::Call;
  local_48._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  NDISimCacheReaderLocal::VMInstanceGetFunction<UE::Math::TVector<float>_>
            (param_1,(TVector<float> *)&local_48._s_0,param_2,
             (TFunction<UE::Math::TVector<float>___cdecl(FNiagaraSimCacheAttributeReaderHelper_&,int)>
              *)local_38);
  return;
}

// VMGetInstanceQuat @ 148ed9be0

void __thiscall
UNiagaraDataInterfaceSimCacheReader::VMGetInstanceQuat
          (UNiagaraDataInterfaceSimCacheReader *this,FVectorVMExternalFunctionContext *param_1,
          int param_2,bool param_3)

{
  TQuat<float> local_48;
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  local_28 = &
             ___7__TFunction_OwnedObject_P6A_AU__TQuat_M_Math_UE__AEAUFNiagaraSimCacheAttributeReaderHelper__H_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_10 = 0;
  local_48 = UE::Math::TQuat<float>::Identity;
  local_20 = `UNiagaraDataInterfaceSimCacheReader::VMGetInstanceQuat'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<UE::Math::TQuat<float>_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),UE::Math::TQuat<float>,FNiagaraSimCacheAttributeReaderHelper_&,int>
                ::Call;
  NDISimCacheReaderLocal::VMInstanceGetFunction<UE::Math::TQuat<float>_>
            (param_1,&local_48,param_2,
             (TFunction<UE::Math::TQuat<float>___cdecl(FNiagaraSimCacheAttributeReaderHelper_&,int)>
              *)local_38);
  return;
}

// VMGetInstanceVector2 @ 148ed9c40

void __thiscall
UNiagaraDataInterfaceSimCacheReader::VMGetInstanceVector2
          (UNiagaraDataInterfaceSimCacheReader *this,FVectorVMExternalFunctionContext *param_1,
          int param_2)

{
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &
             ___7__TFunction_OwnedObject_P6A_AU__TVector2_M_Math_UE__AEAUFNiagaraSimCacheAttributeReaderHelper__H_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_20 = `UNiagaraDataInterfaceSimCacheReader::VMGetInstanceVector2'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<UE::Math::TVector2<float>_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),UE::Math::TVector2<float>,FNiagaraSimCacheAttributeReaderHelper_&,int>
                ::Call;
  NDISimCacheReaderLocal::VMInstanceGetFunction<UE::Math::TVector2<float>_>
            (param_1,UE::Math::TVector2<float>::ZeroVector,param_2,
             (TFunction<UE::Math::TVector2<float>___cdecl(FNiagaraSimCacheAttributeReaderHelper_&,int)>
              *)local_38);
  return;
}

// VMGetInstanceVector3 @ 148ed9ca0

void __thiscall
UNiagaraDataInterfaceSimCacheReader::VMGetInstanceVector3
          (UNiagaraDataInterfaceSimCacheReader *this,FVectorVMExternalFunctionContext *param_1,
          int param_2)

{
  TVector<float>_u_0 local_48;
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  local_28 = &
             ___7__TFunction_OwnedObject_P6A_AU__TVector_M_Math_UE__AEAUFNiagaraSimCacheAttributeReaderHelper__H_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_10 = 0;
  local_20 = `UNiagaraDataInterfaceSimCacheReader::VMGetInstanceVector3'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>;
  local_48._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<UE::Math::TVector<float>_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),UE::Math::TVector<float>,FNiagaraSimCacheAttributeReaderHelper_&,int>
                ::Call;
  local_48._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  NDISimCacheReaderLocal::VMInstanceGetFunction<UE::Math::TVector<float>_>
            (param_1,(TVector<float> *)&local_48._s_0,param_2,
             (TFunction<UE::Math::TVector<float>___cdecl(FNiagaraSimCacheAttributeReaderHelper_&,int)>
              *)local_38);
  return;
}

// VMGetInstanceVector4 @ 148ed9d10

void __thiscall
UNiagaraDataInterfaceSimCacheReader::VMGetInstanceVector4
          (UNiagaraDataInterfaceSimCacheReader *this,FVectorVMExternalFunctionContext *param_1,
          int param_2)

{
  TVector4<float>_u_0 local_48;
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &
             ___7__TFunction_OwnedObject_P6A_AU__TVector4_M_Math_UE__AEAUFNiagaraSimCacheAttributeReaderHelper__H_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_48._0_8_ = 0;
  local_48._8_8_ = 0;
  local_20 = `UNiagaraDataInterfaceSimCacheReader::VMGetInstanceVector4'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<UE::Math::TVector4<float>_(__cdecl*)(FNiagaraSimCacheAttributeReaderHelper_&,int),UE::Math::TVector4<float>,FNiagaraSimCacheAttributeReaderHelper_&,int>
                ::Call;
  NDISimCacheReaderLocal::VMInstanceGetFunction<UE::Math::TVector4<float>_>
            (param_1,(TVector4<float> *)&local_48._s_0,param_2,
             (TFunction<UE::Math::TVector4<float>___cdecl(FNiagaraSimCacheAttributeReaderHelper_&,int)>
              *)local_38);
  return;
}

// VMGetNumEmitters @ 148eda1c0

void __thiscall
UNiagaraDataInterfaceSimCacheReader::VMGetNumEmitters
          (UNiagaraDataInterfaceSimCacheReader *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  UObject *pUVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  int local_20 [2];
  FUserPtrHandler<NDISimCacheReaderLocal::FInstanceData_GameThread> local_18;
  
  VectorVM::FUserPtrHandler<NDISimCacheReaderLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDISimCacheReaderLocal::FInstanceData_GameThread>(&local_18,param_1);
  iVar5 = 0;
  local_20[0] = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  iVar3 = local_20[0] * param_1->PerInstanceFnInstanceIdx;
  pUVar2 = FWeakObjectPtr::Get(&((local_18.Ptr)->WeakSimCache).WeakPtr);
  if (pUVar2 == (UObject *)0x0) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = *(float *)&pUVar2[9].field_0x20;
  }
  if (0 < param_1->NumInstances) {
    pfVar1 = pfVar1 + iVar3;
    do {
      iVar5 = iVar5 + 1;
      *pfVar1 = fVar4;
      pfVar1 = pfVar1 + local_20[0];
    } while (iVar5 < param_1->NumInstances);
  }
  return;
}

// VMGetNumFrames @ 148eda260

void __thiscall
UNiagaraDataInterfaceSimCacheReader::VMGetNumFrames
          (UNiagaraDataInterfaceSimCacheReader *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  UObject *pUVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  int local_20 [2];
  FUserPtrHandler<NDISimCacheReaderLocal::FInstanceData_GameThread> local_18;
  
  VectorVM::FUserPtrHandler<NDISimCacheReaderLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDISimCacheReaderLocal::FInstanceData_GameThread>(&local_18,param_1);
  iVar5 = 0;
  local_20[0] = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  iVar3 = local_20[0] * param_1->PerInstanceFnInstanceIdx;
  pUVar2 = FWeakObjectPtr::Get(&((local_18.Ptr)->WeakSimCache).WeakPtr);
  if (pUVar2 == (UObject *)0x0) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = *(float *)&pUVar2[10].field_0x8;
  }
  if (0 < param_1->NumInstances) {
    pfVar1 = pfVar1 + iVar3;
    do {
      iVar5 = iVar5 + 1;
      *pfVar1 = fVar4;
      pfVar1 = pfVar1 + local_20[0];
    } while (iVar5 < param_1->NumInstances);
  }
  return;
}

// VMGetNumInstances @ 148eda300

void __thiscall
UNiagaraDataInterfaceSimCacheReader::VMGetNumInstances
          (UNiagaraDataInterfaceSimCacheReader *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UObject *pUVar6;
  UObject *pUVar7;
  float fVar8;
  float fVar9;
  longlong lVar10;
  float *pfVar11;
  int iVar12;
  float *local_68;
  int local_60 [2];
  FUserPtrHandler<NDISimCacheReaderLocal::FInstanceData_GameThread> local_58;
  float *local_48;
  float *local_40;
  int local_38 [4];
  
  VectorVM::FUserPtrHandler<NDISimCacheReaderLocal::FInstanceData_GameThread>::
  FUserPtrHandler<NDISimCacheReaderLocal::FInstanceData_GameThread>(&local_58,param_1);
  local_38[0] = 0;
  local_48 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_38);
  local_60[0] = 0;
  local_48 = local_48 + local_38[0] * param_1->PerInstanceFnInstanceIdx;
  local_40 = local_48;
  local_68 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_60);
  local_68 = local_68 + local_60[0] * param_1->PerInstanceFnInstanceIdx;
  pUVar6 = FWeakObjectPtr::Get(&((local_58.Ptr)->WeakSimCache).WeakPtr);
  fVar8 = 0.0;
  iVar12 = 0;
  fVar9 = -NAN;
  if (0 < param_1->NumInstances) {
    do {
      pfVar11 = local_48 + local_38[0];
      fVar1 = *local_48;
      local_48 = pfVar11;
      if (fVar1 != fVar9) {
        fVar9 = fVar1;
        if (pUVar6 != (UObject *)0x0) {
          uVar2 = (local_58.Ptr)->EmitterIndex;
          pUVar7 = FWeakObjectPtr::Get(&((local_58.Ptr)->WeakSimCache).WeakPtr);
          if (((*(longlong *)&pUVar7[1].field_0x18 != 0) && (-1 < (int)fVar1)) &&
             ((int)fVar1 < *(int *)&pUVar7[10].field_0x8)) {
            uVar5 = 0;
            if ((int)fVar1 < *(int *)&pUVar7[10].field_0x8) {
              uVar5 = ~(uint)fVar1 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            lVar10 = (longlong)(int)fVar1 * 0x160 + *(longlong *)(pUVar7 + 10);
            if (uVar2 == 0xffffffff) {
              pfVar11 = (float *)(lVar10 + 0xb0);
              pUVar7 = pUVar7 + 5;
            }
            else {
              if (((int)uVar2 < 0) || (*(int *)&pUVar7[9].field_0x20 <= (int)uVar2))
              goto LAB_148eda57c;
              uVar5 = 0;
              if ((int)uVar2 < *(int *)(lVar10 + 0x150)) {
                uVar5 = ~uVar2 >> 0x1f;
              }
              if ((uVar5 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pfVar11 = (float *)(*(longlong *)(lVar10 + 0x148) + (longlong)(int)uVar2 * 0xd8 + 0x40
                                 );
              uVar5 = 0;
              if ((int)uVar2 < *(int *)&pUVar7[9].field_0x20) {
                uVar5 = ~uVar2 >> 0x1f;
              }
              if ((uVar5 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pUVar7 = (UObject *)((longlong)(int)uVar2 * 0xb8 + *(longlong *)&pUVar7[9].field_0x18)
              ;
            }
            if (((*pfVar11 != 0.0) && (0 < *(int *)&pUVar7->field_0x18)) &&
               (*(longlong *)&pUVar7->field_0x10 != 0)) {
              fVar8 = *pfVar11;
              goto LAB_148eda57f;
            }
          }
        }
LAB_148eda57c:
        fVar8 = 0.0;
      }
LAB_148eda57f:
      iVar12 = iVar12 + 1;
      *local_68 = fVar8;
      local_68 = local_68 + local_60[0];
    } while (iVar12 < param_1->NumInstances);
  }
  return;
}

