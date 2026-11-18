// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 52

// StaticClass @ 149198710

UClass * __cdecl UNiagaraDataInterfaceParticleRead::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceParticleRead.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceParticleRead",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceParticleRead.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceParticleRead,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceParticleRead>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceParticleRead>,local_res8,
               UNiagaraDataInterfaceRWBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceParticleRead.InnerSingleton;
}

// UNiagaraDataInterfaceParticleRead @ 1491ac080

UNiagaraDataInterfaceParticleRead * __thiscall
UNiagaraDataInterfaceParticleRead::UNiagaraDataInterfaceParticleRead
          (UNiagaraDataInterfaceParticleRead *this,FVTableHelper *param_1)

{
  UNiagaraDataInterfaceRWBase::UNiagaraDataInterfaceRWBase
            ((UNiagaraDataInterfaceRWBase *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceParticleRead__6B_;
  (this->EmitterBinding).EmitterName.Number = 0;
  (this->EmitterBinding).BindingMode = Other;
  (this->EmitterBinding).EmitterName.ComparisonIndex = 0;
  return this;
}

// UNiagaraDataInterfaceParticleRead @ 1491ac0c0

UNiagaraDataInterfaceParticleRead * __thiscall
UNiagaraDataInterfaceParticleRead::UNiagaraDataInterfaceParticleRead
          (UNiagaraDataInterfaceParticleRead *this,FObjectInitializer *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  UNiagaraDataInterfaceRWBase::UNiagaraDataInterfaceRWBase
            ((UNiagaraDataInterfaceRWBase *)this,param_1);
  puVar2 = (undefined8 *)0x0;
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceParticleRead__6B_;
  (this->EmitterBinding).BindingMode = Other;
  (this->EmitterBinding).EmitterName.ComparisonIndex = 0;
  (this->EmitterBinding).EmitterName.Number = 0;
  puVar1 = ::operator_new(0x60);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[9] = 0;
    puVar1[0xb] = 0;
    *puVar1 = &___7FNiagaraDataInterfaceProxyParticleRead__6B_;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[6] = 0;
    *(undefined4 *)(puVar1 + 7) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x3c) = 0x80;
    *(undefined4 *)(puVar1 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x44) = 0;
    puVar1[10] = 0;
    puVar2 = puVar1;
  }
  puVar1 = (undefined8 *)this->_padding_;
  if ((puVar1 != puVar2) && (this->_padding_ = (longlong)puVar2, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return this;
}

// ~UNiagaraDataInterfaceParticleRead @ 1491ad5d0

void __thiscall
UNiagaraDataInterfaceParticleRead::~UNiagaraDataInterfaceParticleRead
          (UNiagaraDataInterfaceParticleRead *this)

{
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceParticleRead__6B_;
  UNiagaraDataInterfaceRWBase::~UNiagaraDataInterfaceRWBase((UNiagaraDataInterfaceRWBase *)this);
  return;
}

// operator() @ 1491b0eb0

void __thiscall
`UNiagaraDataInterfaceParticleRead::InitPerInstanceData'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandList *param_1)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FString *pFVar8;
  longlong lVar9;
  longlong lVar10;
  TKeyInitializer<unsigned___int64_const_&> local_res8;
  ulonglong *local_res18;
  FString local_28;
  
  lVar9 = *(longlong *)this;
  pFVar8 = ::FString::FString(&local_28,(FString *)((longlong)this + 0x18));
  cVar1 = *(char *)((longlong)this + 0x10);
  bVar6 = IsInRenderingThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceParticleRead.cpp"
                         ,0xff,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar3 = *(ulonglong *)((longlong)this + 8);
  if (*(int *)(lVar9 + 0x18) != *(int *)(lVar9 + 0x44)) {
    lVar10 = *(longlong *)(lVar9 + 0x50);
    if (*(longlong *)(lVar9 + 0x50) == 0) {
      lVar10 = lVar9 + 0x48;
    }
    iVar7 = *(int *)(lVar10 + ((ulonglong)(*(int *)(lVar9 + 0x58) - 1) &
                              (uVar3 >> 0x20) * 0x17 + uVar3) * 4);
    if (iVar7 != -1) {
      do {
        if (*(ulonglong *)((longlong)iVar7 * 0x60 + *(longlong *)(lVar9 + 0x10)) == uVar3) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("!SystemsRenderData.Contains(InstanceID)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceParticleRead.cpp"
                             ,0x100,L"");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          break;
        }
        iVar7 = *(int *)((longlong)iVar7 * 0x60 + 0x58 + *(longlong *)(lVar9 + 0x10));
      } while (iVar7 != -1);
    }
  }
  local_res18 = (ulonglong *)((longlong)this + 8);
  TSet<TTuple<unsigned___int64,FNDIParticleRead_RenderInstanceData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIParticleRead_RenderInstanceData,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<unsigned___int64_const_&>_>
            ((TSet<TTuple<unsigned___int64,FNDIParticleRead_RenderInstanceData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIParticleRead_RenderInstanceData,0>,FDefaultSetAllocator>
              *)(lVar9 + 0x10),&local_res8,(bool *)&local_res18);
  lVar9 = (longlong)(int)local_res8.Key * 0x60 + *(longlong *)(lVar9 + 0x10);
  *(uint *)(lVar9 + 0x48) = (uint)(cVar1 != '\0');
  iVar2 = (pFVar8->Data).ArrayNum;
  iVar7 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar7 = 0;
  }
  ::FString::AssignRange
            ((FString *)(lVar9 + 0x10),(wchar_t *)(pFVar8->Data).AllocatorInstance.Data,iVar7);
  pFVar4 = (pFVar8->Data).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return;
}

// operator() @ 1491b12a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UNiagaraDataInterfaceParticleRead::SetShaderParameters'::__l2::<lambda_1>::operator()
          (void *this,bool param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  FRHIShaderResourceView *pFVar4;
  
  if (param_1) {
    *(undefined4 *)(**(longlong **)this + 4) = 0;
    *(undefined4 *)(**(longlong **)this + 8) = 0;
    pFVar4 = FNiagaraRenderer::GetDummyIntBuffer();
    *(FRHIShaderResourceView **)(**(longlong **)this + 0x20) = pFVar4;
  }
  *(undefined4 *)(**(longlong **)this + 0xc) = 0xffffffff;
  *(undefined4 *)(**(longlong **)this + 0x10) = 0;
  *(undefined4 *)(**(longlong **)this + 0x14) = 0;
  *(undefined4 *)(**(longlong **)this + 0x18) = 0;
  *(undefined4 *)(**(longlong **)this + 0x1c) = 0xffffffff;
  pFVar4 = FNiagaraRenderer::GetDummyIntBuffer();
  *(FRHIShaderResourceView **)(**(longlong **)this + 0x28) = pFVar4;
  pFVar4 = FNiagaraRenderer::GetDummyFloatBuffer();
  *(FRHIShaderResourceView **)(**(longlong **)this + 0x30) = pFVar4;
  pFVar4 = FNiagaraRenderer::GetDummyIntBuffer();
  *(FRHIShaderResourceView **)(**(longlong **)this + 0x38) = pFVar4;
  pFVar4 = FNiagaraRenderer::GetDummyHalfBuffer();
  uVar3 = _UNK_15060db28;
  uVar2 = ___xmm_ffffffffffffffffffffffffffffffff;
  *(FRHIShaderResourceView **)(**(longlong **)this + 0x40) = pFVar4;
  puVar1 = (undefined8 *)**(longlong **)((longlong)this + 8);
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  puVar1 = (undefined8 *)**(undefined8 **)((longlong)this + 0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  return;
}

// operator() @ 1491b1610

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
`UNiagaraDataInterfaceParticleRead::GetVMExternalFunction'::__l5::<lambda_1>::operator()
          (void *this,FVectorVMExternalFunctionContext *param_1)

{
  uint uVar1;
  float *pfVar2;
  int iVar3;
  int local_20 [2];
  FUserPtrHandler<FNDIParticleRead_InstanceData> local_18;
  
  VectorVM::FUserPtrHandler<FNDIParticleRead_InstanceData>::
  FUserPtrHandler<FNDIParticleRead_InstanceData>(&local_18,param_1);
  iVar3 = 0;
  local_20[0] = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  uVar1 = 0;
  if ((local_18.Ptr)->EmitterInstance != (FNiagaraEmitterInstance *)0x0) {
    uVar1 = (local_18.Ptr)->EmitterInstance->bLocalSpace;
  }
  if (0 < param_1->NumInstances) {
    pfVar2 = pfVar2 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
    do {
      iVar3 = iVar3 + 1;
      *pfVar2 = (float)((uVar1 ^ 1) - 1);
      pfVar2 = pfVar2 + local_20[0];
    } while (iVar3 < param_1->NumInstances);
  }
  return;
}

// BuildShaderParameters @ 1491b5c20

void __thiscall
UNiagaraDataInterfaceParticleRead::BuildShaderParameters
          (UNiagaraDataInterfaceParticleRead *this,FNiagaraShaderParametersBuilder *param_1)

{
  int *piVar1;
  uint uVar2;
  FShaderParametersMetadataBuilder *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FShaderParametersMetadata *pFVar7;
  FScriptContainerElement *pFVar8;
  wchar_t *pwVar9;
  
  pFVar3 = param_1->MetadataBuilder;
  if ((param_1->GPUParamInfo->DataInterfaceHLSLSymbol).Data.ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(param_1->GPUParamInfo->DataInterfaceHLSLSymbol).Data.AllocatorInstance.Data
    ;
  }
  pFVar3->NextMemberOffset = pFVar3->NextMemberOffset + 0xf & 0xfffffff0;
  pFVar7 = TShaderParameterStructTypeInfo<UNiagaraDataInterfaceParticleRead::FShaderParameters>::
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
  pFVar8 = (pFVar3->Members).AllocatorInstance.Data + (longlong)iVar6 * 0x30;
  *(wchar_t **)pFVar8 = pwVar9;
  *(undefined4 *)(pFVar8 + 0x1c) = 1;
  *(undefined8 *)(pFVar8 + 0x20) = 1;
  *(wchar_t **)(pFVar8 + 8) = L"";
  *(undefined4 *)(pFVar8 + 0x10) = 0x7b;
  *(uint *)(pFVar8 + 0x14) = uVar2;
  *(undefined2 *)(pFVar8 + 0x18) = 0x14;
  *(FShaderParametersMetadata **)(pFVar8 + 0x28) = pFVar7;
  pFVar3->NextMemberOffset = pFVar3->NextMemberOffset + 0x50;
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
  iVar6 = (int)(iVar6 + (iVar6 >> 0x1f & 3U)) >> 2;
  if (iVar6 < 1) {
    iVar6 = 1;
  }
  FNiagaraShaderParametersBuilder::AddLooseParamArray<UE::Math::TIntVector4<int>_>
            (param_1,AttributeIndicesMetadataName,iVar6);
  FNiagaraShaderParametersBuilder::AddLooseParamArray<UE::Math::TIntVector4<int>_>
            (param_1,AttributeCompressedMetadataName,iVar6);
  return;
}

// CanExecuteOnTarget @ 1491b6cf0

bool __thiscall
UNiagaraDataInterfaceParticleRead::CanExecuteOnTarget
          (UNiagaraDataInterfaceParticleRead *this,ENiagaraSimTarget param_1)

{
  return true;
}

// CopyToInternal @ 1491b7c80

bool __thiscall
UNiagaraDataInterfaceParticleRead::CopyToInternal
          (UNiagaraDataInterfaceParticleRead *this,UNiagaraDataInterface *param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  UClass *pUVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  FString local_28;
  FString local_18;
  
  bVar4 = UNiagaraDataInterface::CopyToInternal((UNiagaraDataInterface *)this,param_1);
  if (!bVar4) {
    return false;
  }
  lVar1 = *(longlong *)&this->EmitterBinding;
  uVar2 = (this->EmitterBinding).EmitterName.Number;
  if (param_1 != (UNiagaraDataInterface *)0x0) {
    pUVar5 = StaticClass();
    iVar3 = (int)pUVar5->_padding_;
    if ((iVar3 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar3 * 8)
        == &pUVar5->_padding_)) {
      param_1[1]._padding_ = lVar1;
      *(uint *)&param_1[1]._padding_ = uVar2;
      return true;
    }
    pFVar6 = GetTypeName<UNiagaraDataInterfaceParticleRead>(&local_28);
    pwVar7 = L"";
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    pFVar6 = GetFullNameForCastLogError<UNiagaraDataInterface>(&local_18,param_1);
    if ((pFVar6->Data).ArrayNum != 0) {
      pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar7,pwVar8);
  }
  pFVar6 = GetTypeName<UNiagaraDataInterfaceParticleRead>(&local_28);
  if ((pFVar6->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar7);
}

// CreateShaderStorage @ 1491bd310

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FNiagaraDataInterfaceParametersCS * __thiscall
UNiagaraDataInterfaceParticleRead::CreateShaderStorage
          (UNiagaraDataInterfaceParticleRead *this,FNiagaraDataInterfaceGPUParamInfo *param_1,
          FShaderParameterMap *param_2)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  TArray<FMemoryImageName,TMemoryImageAllocator<0>_> *pTVar7;
  FNiagaraDataInterfaceParametersCS *pFVar8;
  FName FVar9;
  ForAnyElementType FVar10;
  undefined1 uVar11;
  FName FVar12;
  uint uVar13;
  TArray<FMemoryImageName,TMemoryImageAllocator<0>_> *pTVar14;
  FName FVar15;
  uint uVar16;
  FName *pFVar17;
  TArray<FMemoryImageName,TMemoryImageAllocator<0>_> *this_00;
  undefined1 local_res20 [8];
  longlong local_58;
  longlong local_50;
  
  pTVar7 = ::operator_new(0x20);
  pTVar14 = (TArray<FMemoryImageName,TMemoryImageAllocator<0>_> *)0x0;
  this_00 = pTVar14;
  if (pTVar7 != (TArray<FMemoryImageName,TMemoryImageAllocator<0>_> *)0x0) {
    pTVar7->AllocatorInstance = (ForAnyElementType)0x0;
    pTVar7->ArrayNum = 0;
    pTVar7->ArrayMax = 0;
    pTVar7[1].AllocatorInstance = (ForAnyElementType)0x0;
    pTVar7[1].ArrayNum = 0;
    pTVar7[1].ArrayMax = 0;
    this_00 = pTVar7;
  }
  iVar1 = (param_1->GeneratedFunctions).ArrayNum;
  TArray<FMemoryImageName,TMemoryImageAllocator<0>_>::SetNum(this_00,iVar1,Default);
  TArray<enum_ENiagaraParticleDataValueType,TMemoryImageAllocator<0>_>::SetNum
            (this_00 + 1,iVar1,Default);
  if (0 < iVar1) {
    local_50 = 0;
    local_58 = 0;
    do {
      uVar13 = (uint)pTVar14;
      uVar16 = ~uVar13 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar13 < (param_1->GeneratedFunctions).ArrayNum) {
        uVar5 = uVar16;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pFVar8 = (FNiagaraDataInterfaceParametersCS *)(*pcVar2)();
        return pFVar8;
      }
      pFVar17 = (FName *)((param_1->GeneratedFunctions).AllocatorInstance.Data + local_50);
      uVar5 = pFVar17[4].ComparisonIndex.Value;
      FVar12 = pFVar17[3];
      FVar15 = (FName)((longlong)(int)uVar5 * 0x10 + (longlong)FVar12);
      FVar9 = UNiagaraDataInterfaceRWBase::NAME_Attribute;
      while( true ) {
        if (pFVar17[4].ComparisonIndex.Value != uVar5) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<TTuple<FName,FName>_const_,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_res20);
          FVar9 = UNiagaraDataInterfaceRWBase::NAME_Attribute;
        }
        uVar6 = 0;
        if (FVar12 == FVar15) goto LAB_1491bd617;
        if (*(FName *)FVar12 == FVar9) break;
        FVar12 = (FName)((longlong)FVar12 + 0x10);
      }
      if ((longlong *)((longlong)FVar12 + 8) == (longlong *)0x0) {
LAB_1491bd617:
        uVar5 = uVar6;
        if ((int)uVar13 < this_00->ArrayNum) {
          uVar5 = uVar16;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pFVar8 = (FNiagaraDataInterfaceParametersCS *)(*pcVar2)();
          return pFVar8;
        }
        FVar10 = this_00->AllocatorInstance;
        if (((ulonglong)FVar10 & 1) != 0) {
          FVar10 = (ForAnyElementType)
                   ((longlong)&(this_00->AllocatorInstance).field_0x0 + ((longlong)FVar10 >> 0x18));
        }
        *(undefined8 *)((longlong)FVar10 + local_58 * 8) = 0;
        if ((int)uVar13 < this_00[1].ArrayNum) {
          uVar6 = uVar16;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pFVar8 = (FNiagaraDataInterfaceParametersCS *)(*pcVar2)();
          return pFVar8;
        }
        FVar10 = this_00[1].AllocatorInstance;
        if (((ulonglong)FVar10 & 1) != 0) {
          FVar10 = (ForAnyElementType)
                   ((longlong)&this_00[1].AllocatorInstance.field_0x0 + ((longlong)FVar10 >> 0x18));
        }
        *(undefined1 *)((longlong)FVar10 + local_58) = 0;
      }
      else {
        lVar3 = *(longlong *)((longlong)FVar12 + 8);
        uVar5 = uVar6;
        if ((int)uVar13 < this_00->ArrayNum) {
          uVar5 = uVar16;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pFVar8 = (FNiagaraDataInterfaceParametersCS *)(*pcVar2)();
          return pFVar8;
        }
        FVar10 = this_00->AllocatorInstance;
        if (((ulonglong)FVar10 & 1) != 0) {
          FVar10 = (ForAnyElementType)
                   ((longlong)&(this_00->AllocatorInstance).field_0x0 + ((longlong)FVar10 >> 0x18));
        }
        *(longlong *)((longlong)FVar10 + local_58 * 8) = lVar3;
        FVar12 = *pFVar17;
        if ((FVar12 == GetIntByIDFunctionName) || (FVar12 == GetIntByIndexFunctionName)) {
          uVar11 = 1;
        }
        else if ((FVar12 == GetBoolByIDFunctionName) || (FVar12 == GetBoolByIndexFunctionName)) {
          uVar11 = 6;
        }
        else if ((FVar12 == GetFloatByIDFunctionName) || (FVar12 == GetFloatByIndexFunctionName)) {
          uVar11 = 2;
        }
        else if ((FVar12 == GetVec2ByIDFunctionName) || (FVar12 == GetVec2ByIndexFunctionName)) {
          uVar11 = 3;
        }
        else if ((FVar12 == GetVec3ByIDFunctionName) || (FVar12 == GetVec3ByIndexFunctionName)) {
          uVar11 = 4;
        }
        else if ((FVar12 == GetVec4ByIDFunctionName) || (FVar12 == GetVec4ByIndexFunctionName)) {
          uVar11 = 5;
        }
        else if ((FVar12 == GetColorByIDFunctionName) || (FVar12 == GetColorByIndexFunctionName)) {
          uVar11 = 7;
        }
        else if ((FVar12 == GetPositionByIDFunctionName) ||
                (FVar12 == GetPositionByIndexFunctionName)) {
          uVar11 = 10;
        }
        else if ((FVar12 == GetQuatByIDFunctionName) || (FVar12 == GetQuatByIndexFunctionName)) {
          uVar11 = 8;
        }
        else if ((FVar12 == GetIDByIDFunctionName) || (FVar12 == GetIDByIndexFunctionName)) {
          uVar11 = 9;
        }
        else {
          uVar11 = 0;
        }
        if ((int)uVar13 < this_00[1].ArrayNum) {
          uVar6 = uVar16;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pFVar8 = (FNiagaraDataInterfaceParametersCS *)(*pcVar2)();
          return pFVar8;
        }
        FVar10 = this_00[1].AllocatorInstance;
        if (((ulonglong)FVar10 & 1) != 0) {
          FVar10 = (ForAnyElementType)
                   ((longlong)&this_00[1].AllocatorInstance.field_0x0 + ((longlong)FVar10 >> 0x18));
        }
        *(undefined1 *)((longlong)FVar10 + local_58) = uVar11;
      }
      local_58 = local_58 + 1;
      local_50 = local_50 + 0x50;
      pTVar14 = (TArray<FMemoryImageName,TMemoryImageAllocator<0>_> *)(ulonglong)(uVar13 + 1);
    } while (local_58 < iVar1);
  }
  return (FNiagaraDataInterfaceParametersCS *)this_00;
}

// DestroyPerInstanceData @ 1491be500

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
UNiagaraDataInterfaceParticleRead::DestroyPerInstanceData
          (UNiagaraDataInterfaceParticleRead *this,void *param_1,FNiagaraSystemInstance *param_2)

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
              TFunction_OwnedObject<`UNiagaraDataInterfaceParticleRead::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_68 = param_2->ID;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UNiagaraDataInterfaceParticleRead::DestroyPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  lStack_70 = lVar1;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceParticleRead::DestroyPerInstanceData_::__l2::TSTR_FNDIParticleReadDestroyRTInstance491>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
             TRenderCommandTag<`UNiagaraDataInterfaceParticleRead::DestroyPerInstanceData'::__l2::TSTR_FNDIParticleReadDestroyRTInstance491>
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
  return;
}

// Equals @ 1491c11f0

bool __thiscall
UNiagaraDataInterfaceParticleRead::Equals
          (UNiagaraDataInterfaceParticleRead *this,UNiagaraDataInterface *param_1)

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
      pFVar4 = GetTypeName<UNiagaraDataInterfaceParticleRead>(&local_28);
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
      pFVar4 = GetTypeName<UNiagaraDataInterfaceParticleRead>(&local_28);
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
    if (((ENiagaraDataInterfaceEmitterBindingMode)param_1[1]._padding_ ==
         (this->EmitterBinding).BindingMode) &&
       (*(FName *)((longlong)&param_1[1]._padding_ + 4) == (this->EmitterBinding).EmitterName)) {
      return true;
    }
  }
  return false;
}

// GetEmitterDependencies @ 1491c7af0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceParticleRead::GetEmitterDependencies
          (UNiagaraDataInterfaceParticleRead *this,UNiagaraSystem *param_1,
          TArray<FVersionedNiagaraEmitter,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  FVersionedNiagaraEmitter *pFVar2;
  UNiagaraEmitter *pUVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  FNiagaraEmitterHandle *this_00;
  FVersionedNiagaraEmitter *pFVar8;
  FVersionedNiagaraEmitter local_28;
  
  if ((param_1 != (UNiagaraSystem *)0x0) &&
     (this_00 = FNiagaraDataInterfaceEmitterBinding::ResolveHandle
                          (&this->EmitterBinding,(UNiagaraDataInterface *)this),
     this_00 != (FNiagaraEmitterHandle *)0x0)) {
    pFVar8 = FNiagaraEmitterHandle::GetInstance(this_00,&local_28);
    pFVar2 = (FVersionedNiagaraEmitter *)(param_2->AllocatorInstance).Data;
    if ((pFVar2 <= pFVar8) &&
       ((pFVar8 < pFVar2 + param_2->ArrayMax &&
        (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar6)))) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = param_2->ArrayNum;
    if (iVar7 == param_2->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar7 + 1;
    pFVar1 = (param_2->AllocatorInstance).Data + (longlong)iVar7 * 0x18;
    pUVar3 = (pFVar8->Emitter).field0_0x0.DebugPtr;
    *(UNiagaraEmitter **)pFVar1 = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UNiagaraEmitter *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    uVar5 = *(undefined8 *)&(pFVar8->Version).C;
    *(undefined8 *)(pFVar1 + 8) = *(undefined8 *)&pFVar8->Version;
    *(undefined8 *)(pFVar1 + 0x10) = uVar5;
  }
  return;
}

// GetEmitterReferencesByName @ 1491c7c00

void __thiscall
UNiagaraDataInterfaceParticleRead::GetEmitterReferencesByName
          (UNiagaraDataInterfaceParticleRead *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  UNiagaraEmitter *this_00;
  FString *pFVar1;
  
  this_00 = FNiagaraDataInterfaceEmitterBinding::Resolve
                      (&this->EmitterBinding,(UNiagaraDataInterface *)this);
  if (this_00 != (UNiagaraEmitter *)0x0) {
    pFVar1 = UNiagaraEmitterBase::GetUniqueEmitterName((UNiagaraEmitterBase *)this_00);
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString_const_&>(param_1,pFVar1);
    return;
  }
  return;
}

// GetNumParticles @ 1491c9370

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
UNiagaraDataInterfaceParticleRead::GetNumParticles
          (UNiagaraDataInterfaceParticleRead *this,FVectorVMExternalFunctionContext *param_1)

{
  FNiagaraEmitterInstance *pFVar1;
  FNiagaraDataBuffer *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  float *pfVar6;
  int iVar7;
  float fVar8;
  int iVar9;
  int local_20 [2];
  FUserPtrHandler<FNDIParticleRead_InstanceData> local_18;
  
  VectorVM::FUserPtrHandler<FNDIParticleRead_InstanceData>::
  FUserPtrHandler<FNDIParticleRead_InstanceData>(&local_18,param_1);
  iVar9 = 0;
  fVar8 = 0.0;
  local_20[0] = 0;
  pfVar6 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  iVar4 = local_20[0];
  iVar7 = local_20[0] * param_1->PerInstanceFnInstanceIdx;
  pFVar1 = (local_18.Ptr)->EmitterInstance;
  if (pFVar1 != (FNiagaraEmitterInstance *)0x0) {
    if ((pFVar1->ParticleDataSet == (FNiagaraDataSet *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ParticleDataSet",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraEmitterInstance.h"
                           ,0x3a,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar2 = pFVar1->ParticleDataSet->CurrentData;
    if (pFVar2 != (FNiagaraDataBuffer *)0x0) {
      fVar8 = (float)pFVar2->NumInstances;
    }
  }
  if (0 < param_1->NumInstances) {
    pfVar6 = pfVar6 + iVar7;
    do {
      iVar9 = iVar9 + 1;
      *pfVar6 = fVar8;
      pfVar6 = pfVar6 + iVar4;
    } while (iVar9 < param_1->NumInstances);
  }
  return;
}

// GetNumSpawnedParticles @ 1491c9460

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
UNiagaraDataInterfaceParticleRead::GetNumSpawnedParticles
          (UNiagaraDataInterfaceParticleRead *this,FVectorVMExternalFunctionContext *param_1)

{
  FNiagaraEmitterInstance *pFVar1;
  FNiagaraDataBuffer *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  float *pfVar6;
  int iVar7;
  float fVar8;
  int iVar9;
  int local_20 [2];
  FUserPtrHandler<FNDIParticleRead_InstanceData> local_18;
  
  VectorVM::FUserPtrHandler<FNDIParticleRead_InstanceData>::
  FUserPtrHandler<FNDIParticleRead_InstanceData>(&local_18,param_1);
  iVar9 = 0;
  fVar8 = 0.0;
  local_20[0] = 0;
  pfVar6 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  iVar4 = local_20[0];
  iVar7 = local_20[0] * param_1->PerInstanceFnInstanceIdx;
  pFVar1 = (local_18.Ptr)->EmitterInstance;
  if (pFVar1 != (FNiagaraEmitterInstance *)0x0) {
    if ((pFVar1->ParticleDataSet == (FNiagaraDataSet *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ParticleDataSet",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraEmitterInstance.h"
                           ,0x3a,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar2 = pFVar1->ParticleDataSet->CurrentData;
    if (pFVar2 != (FNiagaraDataBuffer *)0x0) {
      fVar8 = (float)pFVar2->NumSpawnedInstances;
    }
  }
  if (0 < param_1->NumInstances) {
    pfVar6 = pfVar6 + iVar7;
    do {
      iVar9 = iVar9 + 1;
      *pfVar6 = fVar8;
      pfVar6 = pfVar6 + iVar4;
    } while (iVar9 < param_1->NumInstances);
  }
  return;
}

// GetParticleIndex @ 1491c9860

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
UNiagaraDataInterfaceParticleRead::GetParticleIndex
          (UNiagaraDataInterfaceParticleRead *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  float fVar2;
  FNiagaraEmitterInstance *pFVar3;
  FNiagaraDataBuffer *pFVar4;
  code *pcVar5;
  FName FVar6;
  bool bVar7;
  float fVar8;
  float *pfVar9;
  int iVar10;
  int local_90 [2];
  FUserPtrHandler<FNDIParticleRead_InstanceData> local_88;
  float *local_78;
  float *local_70;
  int local_68 [2];
  float *local_60;
  float *local_58;
  int local_50 [2];
  FNiagaraDataSetReaderStruct<FNiagaraID> local_48;
  
  VectorVM::FUserPtrHandler<FNDIParticleRead_InstanceData>::
  FUserPtrHandler<FNDIParticleRead_InstanceData>(&local_88,param_1);
  iVar10 = 0;
  local_68[0] = 0;
  local_78 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_68);
  local_50[0] = 0;
  local_78 = local_78 + local_68[0] * param_1->PerInstanceFnInstanceIdx;
  local_70 = local_78;
  local_60 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_50);
  local_90[0] = 0;
  local_60 = local_60 + local_50[0] * param_1->PerInstanceFnInstanceIdx;
  local_58 = local_60;
  pfVar9 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_90);
  pfVar9 = pfVar9 + local_90[0] * param_1->PerInstanceFnInstanceIdx;
  pFVar3 = (local_88.Ptr)->EmitterInstance;
  if (pFVar3 != (FNiagaraEmitterInstance *)0x0) {
    if ((pFVar3->ParticleDataSet == (FNiagaraDataSet *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ParticleDataSet",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraEmitterInstance.h"
                           ,0x3a,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FVar6 = ParticleReadIDName;
    pFVar4 = pFVar3->ParticleDataSet->CurrentData;
    if (pFVar4 != (FNiagaraDataBuffer *)0x0) {
      if ((pFVar3->ParticleDataSet == (FNiagaraDataSet *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ParticleDataSet",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraEmitterInstance.h"
                             ,0x3a,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FNiagaraDataSetAccessorStruct<FNiagaraID>::CreateReader
                (&local_48,pFVar3->ParticleDataSet,FVar6);
      if (param_1->NumInstances < 1) {
        return;
      }
      do {
        fVar1 = *local_78;
        fVar2 = *local_60;
        local_78 = local_78 + local_68[0];
        local_60 = local_60 + local_50[0];
        fVar8 = -NAN;
        if ((-1 < (int)fVar1) && ((int)fVar1 < (pFVar4->IDToIndexTable).ArrayNum)) {
          if (((int)fVar1 < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          fVar8 = *(float *)((pFVar4->IDToIndexTable).AllocatorInstance.Data +
                            (longlong)(int)fVar1 * 4);
          if ((-1 < (int)fVar8) &&
             ((((local_48.bIsValid == false || (local_48.NumInstances <= (int)fVar8)) ||
               ((float)local_48.Int32Components[(int)fVar8] != fVar1)) ||
              ((float)local_48.Int32Components[local_48.ComponentStride + (int)fVar8] != fVar2)))) {
            fVar8 = -NAN;
          }
        }
        iVar10 = iVar10 + 1;
        *pfVar9 = fVar8;
        pfVar9 = pfVar9 + local_90[0];
        if (param_1->NumInstances <= iVar10) {
          return;
        }
      } while( true );
    }
  }
  if (0 < param_1->NumInstances) {
    do {
      iVar10 = iVar10 + 1;
      *pfVar9 = -NAN;
      pfVar9 = pfVar9 + local_90[0];
    } while (iVar10 < param_1->NumInstances);
  }
  return;
}

// GetParticleIndexFromIDTable @ 1491c9ad0

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
UNiagaraDataInterfaceParticleRead::GetParticleIndexFromIDTable
          (UNiagaraDataInterfaceParticleRead *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  float fVar2;
  FNiagaraEmitterInstance *pFVar3;
  FNiagaraDataBuffer *pFVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  int local_70 [2];
  float *local_68;
  int local_60 [2];
  FUserPtrHandler<FNDIParticleRead_InstanceData> local_58;
  float *local_48;
  float *local_40;
  int local_38 [4];
  
  VectorVM::FUserPtrHandler<FNDIParticleRead_InstanceData>::
  FUserPtrHandler<FNDIParticleRead_InstanceData>(&local_58,param_1);
  iVar12 = 0;
  local_38[0] = 0;
  local_48 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_38);
  local_70[0] = 0;
  local_48 = local_48 + local_38[0] * param_1->PerInstanceFnInstanceIdx;
  local_40 = local_48;
  pfVar9 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_70);
  iVar6 = local_70[0];
  local_60[0] = 0;
  pfVar9 = pfVar9 + local_70[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar10 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_60);
  iVar7 = local_60[0];
  pfVar10 = pfVar10 + local_60[0] * param_1->PerInstanceFnInstanceIdx;
  pFVar3 = (local_58.Ptr)->EmitterInstance;
  if (pFVar3 == (FNiagaraEmitterInstance *)0x0) {
    iVar11 = param_1->NumInstances;
  }
  else {
    local_68 = pfVar10;
    if ((pFVar3->ParticleDataSet == (FNiagaraDataSet *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ParticleDataSet",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraEmitterInstance.h"
                           ,0x3a,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar11 = param_1->NumInstances;
    pFVar4 = pFVar3->ParticleDataSet->CurrentData;
    if (pFVar4 != (FNiagaraDataBuffer *)0x0) {
      if (iVar11 < 1) {
        return;
      }
      do {
        pfVar1 = local_48 + local_38[0];
        fVar2 = *local_48;
        local_48 = pfVar1;
        if (((int)fVar2 < 0) || ((pFVar4->IDToIndexTable).ArrayNum <= (int)fVar2)) {
          *pfVar9 = 0.0;
          *pfVar10 = -NAN;
        }
        else {
          if (((int)fVar2 < 0) &&
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
          fVar2 = *(float *)((pFVar4->IDToIndexTable).AllocatorInstance.Data +
                            (longlong)(int)fVar2 * 4);
          *pfVar9 = (float)-(uint)(fVar2 != -NAN);
          *pfVar10 = fVar2;
        }
        pfVar9 = pfVar9 + iVar6;
        iVar12 = iVar12 + 1;
        pfVar10 = pfVar10 + iVar7;
        local_68 = pfVar10;
        if (param_1->NumInstances <= iVar12) {
          return;
        }
      } while( true );
    }
  }
  if (0 < iVar11) {
    do {
      iVar12 = iVar12 + 1;
      *pfVar9 = 0.0;
      *pfVar10 = -NAN;
      pfVar10 = pfVar10 + iVar7;
      pfVar9 = pfVar9 + iVar6;
    } while (iVar12 < param_1->NumInstances);
  }
  return;
}

// GetPrivateStaticClass @ 1491ca1a0

UClass * __cdecl UNiagaraDataInterfaceParticleRead::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceParticleRead.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceParticleRead",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceParticleRead.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceParticleRead,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceParticleRead>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceParticleRead>,local_res8,
               UNiagaraDataInterfaceRWBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceParticleRead.InnerSingleton;
}

// GetShaderStorageType @ 1491cadf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
UNiagaraDataInterfaceParticleRead::GetShaderStorageType(UNiagaraDataInterfaceParticleRead *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = ' ';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FNiagaraDataInt;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = FNiagaraDataInterfaceParametersCS_ParticleRead::InternalDestroy;
    ::TypeBuffer._72_8_ =
         TGetDefaultObjectHelper<FNiagaraDataInterfaceParametersCS_ParticleRead,0>::Do;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FNiagaraDataInterfaceParametersCS_ParticleRead::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "AttributeTypes";
    DAT_15527574a = Freeze::FindFieldNameLength(L"AttributeTypes");
    if ((DAT_155275cbf & 2) == 0) {
      DAT_155275cbf = DAT_155275cbf | 3;
      _DAT_155275c60 = L"(TArray<T, AllocatorType>)";
      _DAT_155275c78 =
           TStaticGetTypeLayoutHelper<TArray<enum_ENiagaraParticleDataValueType,TMemoryImageAllocator<0>_>_>
           ::CallWriteMemoryImage;
      _DAT_155275c80 =
           TStaticGetTypeLayoutHelper<TArray<enum_ENiagaraParticleDataValueType,TMemoryImageAllocator<0>_>_>
           ::CallUnfrozenCopy;
      _DAT_155275c88 =
           TStaticGetTypeLayoutHelper<TArray<enum_ENiagaraParticleDataValueType,TMemoryImageAllocator<0>_>_>
           ::CallAppendHash;
      _DAT_155275c90 =
           TStaticGetTypeLayoutHelper<TArray<enum_ENiagaraParticleDataValueType,TMemoryImageAllocator<0>_>_>
           ::CallGetTargetAlignment;
      _DAT_155275c98 =
           TStaticGetTypeLayoutHelper<TArray<enum_ENiagaraParticleDataValueType,TMemoryImageAllocator<0>_>_>
           ::CallToString;
      _DAT_155275c70 =
           TStaticGetTypeLayoutHelper<TArray<enum_ENiagaraParticleDataValueType,TMemoryImageAllocator<0>_>_>
           ::CallDestroy;
      _DAT_155275cb0 = 0x10;
      _DAT_155275cb8 = 8;
      DAT_155275cbc = 0;
      _DAT_155275cb4 = 0x10;
    }
    _DAT_155275740 = 0x10;
    _DAT_155275728 =
         &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<ENiagaraParticleDataValueType,TMemoryImageAllocator<0>_>_>::Do(void)'
          ::__l2::TypeBuffer;
    DAT_155275730 = ::TypeBuffer[0x10];
    DAT_155275730_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155275730_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155275730_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155275730_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155275730_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155275730_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155275730_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FNiagaraDataInterfaceParametersCS_ParticleRead::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155275738 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155275744 = 1;
    _DAT_155275748 = 0;
    `public:_static_void___cdecl_FNiagaraDataInterfaceParametersCS_ParticleRead::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "AttributeNames";
    DAT_15527571a = Freeze::FindFieldNameLength(L"AttributeNames");
    if ((DAT_15526e697 & 2) == 0) {
      DAT_15526e697 = DAT_15526e697 | 3;
      _DAT_15526e638 = L"(TArray<T, AllocatorType>)";
      _DAT_15526e650 =
           TStaticGetTypeLayoutHelper<TArray<FMemoryImageName,TMemoryImageAllocator<0>_>_>::
           CallWriteMemoryImage;
      _DAT_15526e658 =
           TStaticGetTypeLayoutHelper<TArray<FMemoryImageName,TMemoryImageAllocator<0>_>_>::
           CallUnfrozenCopy;
      _DAT_15526e660 =
           TStaticGetTypeLayoutHelper<TArray<FMemoryImageName,TMemoryImageAllocator<0>_>_>::
           CallAppendHash;
      _DAT_15526e668 =
           TStaticGetTypeLayoutHelper<TArray<FMemoryImageName,TMemoryImageAllocator<0>_>_>::
           CallGetTargetAlignment;
      _DAT_15526e670 =
           TStaticGetTypeLayoutHelper<TArray<FMemoryImageName,TMemoryImageAllocator<0>_>_>::
           CallToString;
      _DAT_15526e648 =
           TStaticGetTypeLayoutHelper<TArray<FMemoryImageName,TMemoryImageAllocator<0>_>_>::
           CallDestroy;
      _DAT_15526e688 = 0x10;
      _DAT_15526e690 = 8;
      DAT_15526e694 = 0;
      _DAT_15526e68c = 0x10;
    }
    _DAT_155275708 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1552756f8 =
         &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<FMemoryImageName,TMemoryImageAllocator<0>_>_>::Do(void)'
          ::__l2::TypeBuffer;
    DAT_155275700 = ::TypeBuffer[0x10];
    DAT_155275700_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155275700_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155275700_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155275700_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155275700_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155275700_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155275700_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FNiagaraDataInterfaceParametersCS_ParticleRead::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_155275710 = 0;
    _DAT_155275714 = 1;
    _DAT_155275718 = 0;
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

// GetSpawnedIDAtIndex @ 1491cae00

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
UNiagaraDataInterfaceParticleRead::GetSpawnedIDAtIndex
          (UNiagaraDataInterfaceParticleRead *this,FVectorVMExternalFunctionContext *param_1)

{
  FNiagaraEmitterInstance *pFVar1;
  FNiagaraDataSet *pFVar2;
  code *pcVar3;
  bool bVar4;
  float fVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  FScriptContainerElement *pFVar13;
  float fVar14;
  int iVar15;
  float fVar16;
  int iVar17;
  int local_90 [2];
  float *local_88;
  int local_80 [2];
  float *local_78;
  int local_70 [2];
  FUserPtrHandler<FNDIParticleRead_InstanceData> local_68;
  float *local_58;
  float *local_50;
  int local_48 [4];
  
  VectorVM::FUserPtrHandler<FNDIParticleRead_InstanceData>::
  FUserPtrHandler<FNDIParticleRead_InstanceData>(&local_68,param_1);
  local_48[0] = 0;
  pfVar6 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_48);
  local_90[0] = 0;
  pfVar6 = pfVar6 + local_48[0] * param_1->PerInstanceFnInstanceIdx;
  local_58 = pfVar6;
  local_50 = pfVar6;
  pfVar7 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_90);
  iVar10 = local_90[0] * param_1->PerInstanceFnInstanceIdx;
  local_80[0] = 0;
  pfVar8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_80);
  iVar11 = local_80[0] * param_1->PerInstanceFnInstanceIdx;
  local_70[0] = 0;
  local_88 = pfVar8 + iVar11;
  pfVar9 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_70);
  pfVar9 = pfVar9 + local_70[0] * param_1->PerInstanceFnInstanceIdx;
  pFVar1 = (local_68.Ptr)->EmitterInstance;
  if (pFVar1 == (FNiagaraEmitterInstance *)0x0) {
    iVar17 = 0;
    fVar16 = 0.0;
    pFVar13 = (FScriptContainerElement *)0x0;
  }
  else {
    local_78 = pfVar9;
    if (pFVar1->ParticleDataSet == (FNiagaraDataSet *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParticleDataSet",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraEmitterInstance.h"
                         ,0x39,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2 = pFVar1->ParticleDataSet;
    iVar17 = pFVar2->NumSpawnedIDs;
    pFVar13 = (pFVar2->FreeIDsTable).AllocatorInstance.Data +
              (longlong)(pFVar2->FreeIDsTable).ArrayMax * 4;
    if (pFVar13 != (FScriptContainerElement *)0x0) {
      pFVar13 = pFVar13 + (longlong)iVar17 * -4;
    }
    if (pFVar2 == (FNiagaraDataSet *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParticleDataSet",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraEmitterInstance.h"
                         ,0x39,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    fVar16 = (float)pFVar1->ParticleDataSet->IDAcquireTag;
  }
  iVar15 = 0;
  if (0 < param_1->NumInstances) {
    pfVar7 = pfVar7 + iVar10;
    pfVar8 = pfVar8 + iVar11;
    do {
      fVar12 = *pfVar6;
      pfVar6 = pfVar6 + local_48[0];
      if (((int)fVar12 < 0) || (iVar17 <= (int)fVar12)) {
        fVar5 = 0.0;
        fVar12 = 0.0;
        fVar14 = 0.0;
      }
      else {
        fVar12 = *(float *)(pFVar13 + (longlong)(int)fVar12 * 4);
        fVar5 = -NAN;
        fVar14 = fVar16;
      }
      iVar15 = iVar15 + 1;
      *pfVar7 = fVar5;
      *pfVar8 = fVar12;
      *pfVar9 = fVar14;
      pfVar7 = pfVar7 + local_90[0];
      pfVar8 = pfVar8 + local_80[0];
      pfVar9 = pfVar9 + local_70[0];
    } while (iVar15 < param_1->NumInstances);
  }
  return;
}

// GetVMExternalFunction @ 1491ccf30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceParticleRead::GetVMExternalFunction
          (UNiagaraDataInterfaceParticleRead *this,FVMExternalFunctionBindingInfo *param_1,
          void *param_2,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  FName FVar1;
  FNiagaraDataSetCompiledData *pFVar2;
  FName FVar3;
  code *pcVar4;
  FNameEntryId FVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  FNiagaraDataSet *pFVar11;
  FName *pFVar12;
  FName *pFVar13;
  longlong lVar14;
  UNiagaraDataInterfaceParticleRead *pUVar15;
  UNiagaraDataInterfaceParticleRead *pUVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  uint uVar19;
  uint uVar20;
  FName local_a98 [2];
  UNiagaraDataInterfaceParticleRead *local_a88;
  FNameEntryId FStack_a80;
  uint uStack_a7c;
  TArrayView<FNiagaraVariableBase_const_,int> local_a78;
  undefined1 local_a68 [8];
  FDelegateAllocation local_a60;
  undefined1 local_a50 [8];
  FDelegateAllocation local_a48;
  undefined1 local_a38 [8];
  FDelegateAllocation local_a30;
  undefined1 local_a20 [8];
  FDelegateAllocation local_a18;
  undefined1 local_a08 [8];
  FDelegateAllocation local_a00;
  undefined1 local_9f0 [8];
  FDelegateAllocation local_9e8;
  undefined1 local_9d8 [8];
  FDelegateAllocation local_9d0;
  undefined1 local_9c0 [8];
  FDelegateAllocation local_9b8;
  undefined1 local_9a8 [8];
  FDelegateAllocation local_9a0;
  undefined1 local_990 [8];
  FDelegateAllocation local_988;
  undefined1 local_978 [8];
  FDelegateAllocation local_970;
  undefined1 local_960 [8];
  FDelegateAllocation local_958;
  undefined1 local_948 [8];
  FDelegateAllocation local_940;
  undefined1 local_930 [8];
  FDelegateAllocation local_928;
  undefined1 local_918 [8];
  FDelegateAllocation local_910;
  undefined1 local_900 [8];
  FDelegateAllocation local_8f8;
  undefined1 local_8e8 [8];
  FDelegateAllocation local_8e0;
  undefined1 local_8d0 [8];
  FDelegateAllocation local_8c8;
  undefined1 local_8b8 [8];
  FDelegateAllocation local_8b0;
  undefined1 local_8a0 [8];
  FDelegateAllocation local_898;
  undefined1 local_888 [8];
  FDelegateAllocation local_880;
  undefined1 local_870 [8];
  FDelegateAllocation local_868;
  undefined1 local_858 [8];
  FDelegateAllocation local_850;
  undefined1 local_840 [8];
  FDelegateAllocation local_838;
  FString local_828;
  FName local_818;
  FNiagaraVariableBase local_810;
  undefined8 local_800;
  undefined8 local_7f8;
  FName local_7f0;
  FNiagaraTypeDefinitionHandle local_7e8 [2];
  undefined8 local_7e0;
  undefined8 local_7d8;
  FDestructionSentinel local_7d0;
  FDestructionSentinel local_7b8;
  FDestructionSentinel local_7a0;
  FDestructionSentinel local_788;
  FDestructionSentinel local_770;
  FDestructionSentinel local_758;
  FDestructionSentinel local_740;
  FDestructionSentinel local_728;
  FDestructionSentinel local_710;
  FDestructionSentinel local_6f8;
  FDestructionSentinel local_6e0;
  FDestructionSentinel local_6c8;
  FDestructionSentinel local_6b0;
  FDestructionSentinel local_698;
  FDestructionSentinel local_680;
  FDestructionSentinel local_668;
  FDestructionSentinel local_650;
  FDestructionSentinel local_638;
  FDestructionSentinel local_620;
  FDestructionSentinel local_608;
  FDestructionSentinel local_5f0;
  FDestructionSentinel local_5d8;
  FDestructionSentinel local_5c0;
  FDestructionSentinel local_5a8;
  FDelegateAllocation *local_590;
  FDestructionSentinel local_588;
  FDelegateAllocation *local_570;
  FDestructionSentinel local_568;
  FDelegateAllocation *local_550;
  FDestructionSentinel local_548;
  FDelegateAllocation *local_530;
  FDestructionSentinel local_528;
  FDelegateAllocation *local_510;
  FDestructionSentinel local_508;
  FDelegateAllocation *local_4f0;
  FDestructionSentinel local_4e8;
  FDelegateAllocation *local_4d0;
  FDestructionSentinel local_4c8;
  FDelegateAllocation *local_4b0;
  FDestructionSentinel local_4a8;
  FDelegateAllocation *local_490;
  FDestructionSentinel local_488;
  FDelegateAllocation *local_470;
  FDestructionSentinel local_468;
  FDelegateAllocation *local_450;
  FDestructionSentinel local_448;
  FDelegateAllocation *local_430;
  FDestructionSentinel local_428;
  FDelegateAllocation *local_410;
  FDestructionSentinel local_408;
  FDelegateAllocation *local_3f0;
  FDestructionSentinel local_3e8;
  FDelegateAllocation *local_3d0;
  FDestructionSentinel local_3c8;
  FDelegateAllocation *local_3b0;
  FDestructionSentinel local_3a8;
  FDelegateAllocation *local_390;
  FDestructionSentinel local_388;
  FDelegateAllocation *local_370;
  FDestructionSentinel local_368;
  FDelegateAllocation *local_350;
  FDestructionSentinel local_348;
  FDelegateAllocation *local_330;
  FDestructionSentinel local_328;
  FDelegateAllocation *local_310;
  FDestructionSentinel local_308;
  FDelegateAllocation *local_2f0;
  FDestructionSentinel local_2e8;
  FDelegateAllocation *local_2d0;
  FDestructionSentinel local_2c8;
  FDelegateAllocation *local_2b0;
  TArrayView<FNiagaraVariableBase_const_,int> local_2a8;
  TArrayView<FNiagaraVariableBase_const_,int> local_298;
  TArrayView<FNiagaraVariableBase_const_,int> local_288;
  TArrayView<FNiagaraVariableBase_const_,int> local_278;
  TArrayView<FNiagaraVariableBase_const_,int> local_268;
  TArrayView<FNiagaraVariableBase_const_,int> local_258;
  TArrayView<FNiagaraVariableBase_const_,int> local_248;
  TArrayView<FNiagaraVariableBase_const_,int> local_238;
  TArrayView<FNiagaraVariableBase_const_,int> local_228;
  TArrayView<FNiagaraVariableBase_const_,int> local_218;
  TArrayView<FNiagaraVariableBase_const_,int> local_208;
  TArrayView<FNiagaraVariableBase_const_,int> local_1f8;
  TArrayView<FNiagaraVariableBase_const_,int> local_1e8;
  TArrayView<FNiagaraVariableBase_const_,int> local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  TArrayView<FNiagaraVariableBase_const_,int> local_188;
  TArrayView<FNiagaraVariableBase_const_,int> local_178;
  TArrayView<FNiagaraVariableBase_const_,int> local_168;
  TArrayView<FNiagaraVariableBase_const_,int> local_158;
  TArrayView<FNiagaraVariableBase_const_,int> local_148;
  TArrayView<FNiagaraVariableBase_const_,int> local_138;
  TArrayView<FNiagaraVariableBase_const_,int> local_128;
  TArrayView<FNiagaraVariableBase_const_,int> local_118;
  TArrayView<FNiagaraVariableBase_const_,int> local_108;
  TArrayView<FNiagaraVariableBase_const_,int> local_f8;
  TArrayView<FNiagaraVariableBase_const_,int> local_e8;
  TArrayView<FNiagaraVariableBase_const_,int> local_d8;
  TArrayView<FNiagaraVariableBase_const_,int> local_c8;
  TArrayView<FNiagaraVariableBase_const_,int> local_b8;
  TArrayView<FNiagaraVariableBase_const_,int> local_a8;
  TArrayView<FNiagaraVariableBase_const_,int> local_98;
  TArrayView<FNiagaraVariableBase_const_,int> local_88;
  TArrayView<FNiagaraVariableBase_const_,int> local_78;
  TArrayView<FNiagaraVariableBase_const_,int> local_68;
  TArrayView<FNiagaraVariableBase_const_,int> local_58 [2];
  
  FVar1 = param_1->Name;
  if (FVar1 == GetLocalSpaceName) {
    local_918 = (undefined1  [8])0x0;
    local_910.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_910.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_918,
               (FWriteAccessScope *)&local_508);
    local_4f0 = &local_910;
    puVar9 = UE::Core::Private::DelegateAllocate(0x20,&local_910);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar10 = FDelegateHandle::GenerateNewID();
      puVar9[2] = uVar10;
      *puVar9 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceParticleRead::GetVMExternalFunction'::`5'::<lambda_1>_>
                 ::_vftable_;
      puVar9[3] = this;
    }
    if (local_508.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_508.Accessor,&local_508);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_918);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_918,
               (FWriteAccessScope *)&local_5d8);
    if ((local_910.DelegateSize != 0) &&
       (local_910.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_910.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_910,0,0,0x10);
      local_910.DelegateSize = 0;
    }
    if (local_5d8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5d8.Accessor,&local_5d8);
    }
    if (local_910.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_910.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_918);
    return;
  }
  if (FVar1 == GetNumSpawnedParticlesFunctionName) {
    local_900 = (undefined1  [8])0x0;
    local_8f8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_8f8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_900,
               (FWriteAccessScope *)&local_4e8);
    local_4d0 = &local_8f8;
    puVar9 = UE::Core::Private::DelegateAllocate(0x20,&local_8f8);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar10 = FDelegateHandle::GenerateNewID();
      puVar9[2] = uVar10;
      *puVar9 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceParticleRead_GetNumSpawnedParticlesBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar9[3] = this;
    }
    if (local_4e8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4e8.Accessor,&local_4e8);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_900);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_900,
               (FWriteAccessScope *)&local_5f0);
    if ((local_8f8.DelegateSize != 0) &&
       (local_8f8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_8f8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_8f8,0,0,0x10);
      local_8f8.DelegateSize = 0;
    }
    if (local_5f0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5f0.Accessor,&local_5f0);
    }
    if (local_8f8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_8f8.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_900);
    return;
  }
  if (FVar1 == GetIDAtSpawnIndexFunctionName) {
    local_8e8 = (undefined1  [8])0x0;
    local_8e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_8e0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_8e8,
               (FWriteAccessScope *)&local_4c8);
    local_4b0 = &local_8e0;
    puVar9 = UE::Core::Private::DelegateAllocate(0x20,&local_8e0);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar10 = FDelegateHandle::GenerateNewID();
      puVar9[2] = uVar10;
      *puVar9 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceParticleRead_GetSpawnedIDAtIndexBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar9[3] = this;
    }
    if (local_4c8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4c8.Accessor,&local_4c8);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_8e8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_8e8,
               (FWriteAccessScope *)&local_608);
    if ((local_8e0.DelegateSize != 0) &&
       (local_8e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_8e0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_8e0,0,0,0x10);
      local_8e0.DelegateSize = 0;
    }
    if (local_608.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_608.Accessor,&local_608);
    }
    if (local_8e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_8e0.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_8e8);
    return;
  }
  if (FVar1 == GetNumParticlesFunctionName) {
    local_8d0 = (undefined1  [8])0x0;
    local_8c8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_8c8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_8d0,
               (FWriteAccessScope *)&local_4a8);
    local_490 = &local_8c8;
    puVar9 = UE::Core::Private::DelegateAllocate(0x20,&local_8c8);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar10 = FDelegateHandle::GenerateNewID();
      puVar9[2] = uVar10;
      *puVar9 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceParticleRead_GetNumParticlesBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar9[3] = this;
    }
    if (local_4a8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4a8.Accessor,&local_4a8);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_8d0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_8d0,
               (FWriteAccessScope *)&local_620);
    if ((local_8c8.DelegateSize != 0) &&
       (local_8c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_8c8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_8c8,0,0,0x10);
      local_8c8.DelegateSize = 0;
    }
    if (local_620.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_620.Accessor,&local_620);
    }
    if (local_8c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_8c8.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_8d0);
    return;
  }
  if (FVar1 == GetParticleIndexFunctionName) {
    local_a50 = (undefined1  [8])0x0;
    local_a48.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_a48.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a50,
               (FWriteAccessScope *)&local_488);
    local_470 = &local_a48;
    puVar9 = UE::Core::Private::DelegateAllocate(0x20,&local_a48);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar10 = FDelegateHandle::GenerateNewID();
      puVar9[2] = uVar10;
      *puVar9 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceParticleRead_GetParticleIndexBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar9[3] = this;
    }
    if (local_488.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_488.Accessor,&local_488);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a50);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a50,
               (FWriteAccessScope *)&local_650);
    if ((local_a48.DelegateSize != 0) &&
       (local_a48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_a48.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_a48,0,0,0x10);
      local_a48.DelegateSize = 0;
    }
    if (local_650.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_650.Accessor,&local_650);
    }
    if (local_a48.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_a48.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_a50);
    return;
  }
  if (FVar1 == GetParticleIndexFromIDTableName) {
    local_8b8 = (undefined1  [8])0x0;
    local_8b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_8b0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_8b8,
               (FWriteAccessScope *)&local_468);
    local_450 = &local_8b0;
    puVar9 = UE::Core::Private::DelegateAllocate(0x20,&local_8b0);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar10 = FDelegateHandle::GenerateNewID();
      puVar9[2] = uVar10;
      *puVar9 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceParticleRead_GetParticleIndexFromIDTableBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar9[3] = this;
    }
    if (local_468.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_468.Accessor,&local_468);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_8b8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_8b8,
               (FWriteAccessScope *)&local_668);
    if ((local_8b0.DelegateSize != 0) &&
       (local_8b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_8b0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_8b0,0,0,0x10);
      local_8b0.DelegateSize = 0;
    }
    if (local_668.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_668.Accessor,&local_668);
    }
    if (local_8b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_8b0.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_8b8);
    return;
  }
  pFVar13 = (FName *)(param_1->FunctionSpecifiers).AllocatorInstance.Data;
  pFVar12 = pFVar13 + (longlong)(param_1->FunctionSpecifiers).ArrayNum * 2;
  while( true ) {
    if (pFVar13 == pFVar12) {
      if ((byte)LogNiagara._0_1_ < 2) {
        return;
      }
      ::FName::ToString(&param_1->Name,&local_1c8);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      if (local_1c8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
      return;
    }
    if (*pFVar13 == UNiagaraDataInterfaceRWBase::NAME_Attribute) break;
    pFVar13 = pFVar13 + 2;
  }
  lVar14 = 0;
  uVar19 = 0;
  pUVar16 = (UNiagaraDataInterfaceParticleRead *)0x0;
  local_a78._0_12_ = ZEXT812(0);
  if (*(FNiagaraEmitterInstance **)((longlong)param_2 + 8) == (FNiagaraEmitterInstance *)0x0) {
    uVar17 = 0;
    uVar18 = 0;
    uVar20 = local_a78._12_4_;
  }
  else {
    pFVar11 = FNiagaraEmitterInstance::GetParticleData
                        (*(FNiagaraEmitterInstance **)((longlong)param_2 + 8));
    pFVar2 = (pFVar11->CompiledData).StructPtr;
    local_a88 = (UNiagaraDataInterfaceParticleRead *)(pFVar2->Variables).AllocatorInstance.Data;
    uVar19 = (pFVar2->Variables).ArrayNum;
    if (((int)uVar19 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_a78.ArrayNum = uVar19;
    local_a78.DataPtr = (FNiagaraVariableBase *)local_a88;
    local_a78._12_4_ = uStack_a7c;
    uVar17 = SUB84(local_a88,0);
    uVar18 = (undefined4)((ulonglong)local_a88 >> 0x20);
    pUVar16 = local_a88;
    uVar20 = uStack_a7c;
    FStack_a80.Value = uVar19;
  }
  uVar6 = uStack_a7c;
  FVar5.Value = FStack_a80.Value;
  FVar1 = param_1->Name;
  FVar3 = pFVar13[1];
  FStack_a80 = FVar3.ComparisonIndex.Value;
  uStack_a7c = FVar3.Number;
  local_a98[0] = FVar3;
  if (FVar1 == GetIntByIDFunctionName) {
    local_8a0 = (undefined1  [8])0x0;
    local_898.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_898.DelegateSize = 0;
    local_a88 = this;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_8a0,
               (FWriteAccessScope *)&local_448);
    local_430 = &local_898;
    puVar9 = UE::Core::Private::DelegateAllocate(0x28,&local_898);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar10 = FDelegateHandle::GenerateNewID();
      puVar9[2] = uVar10;
      *puVar9 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_VFName___TUNiagaraDataInterfaceParticleRead_ReadIntBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____VFName___Z___V__6B_
      ;
      puVar9[3] = local_a88;
      puVar9[4] = CONCAT44(uStack_a7c,FStack_a80.Value);
    }
    if (local_448.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_448.Accessor,&local_448);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_8a0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_8a0,
               (FWriteAccessScope *)&local_5c0);
    if ((local_898.DelegateSize != 0) &&
       (local_898.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_898.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_898,0,0,0x10);
      local_898.DelegateSize = 0;
    }
    if (local_5c0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5c0.Accessor,&local_5c0);
    }
    if (local_898.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_898.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_8a0);
    local_2a8.DataPtr._0_4_ = uVar17;
    local_2a8.DataPtr._4_4_ = uVar18;
    local_2a8.ArrayNum = uVar19;
    local_2a8._12_4_ = uVar20;
    bVar7 = HasMatchingVariable(&local_2a8,local_a98[0],&FNiagaraTypeDefinition::IntDef);
  }
  else if (FVar1 == GetBoolByIDFunctionName) {
    local_888 = (undefined1  [8])0x0;
    local_880.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_880.DelegateSize = 0;
    local_a88 = this;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_888,
               (FWriteAccessScope *)&local_428);
    local_410 = &local_880;
    puVar9 = UE::Core::Private::DelegateAllocate(0x28,&local_880);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar10 = FDelegateHandle::GenerateNewID();
      puVar9[2] = uVar10;
      *puVar9 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_VFName___TUNiagaraDataInterfaceParticleRead_ReadBoolBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____VFName___Z___V__6B_
      ;
      puVar9[3] = local_a88;
      puVar9[4] = CONCAT44(uStack_a7c,FStack_a80.Value);
    }
    if (local_428.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_428.Accessor,&local_428);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_888);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_888,
               (FWriteAccessScope *)&local_638);
    if ((local_880.DelegateSize != 0) &&
       (local_880.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_880.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_880,0,0,0x10);
      local_880.DelegateSize = 0;
    }
    if (local_638.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_638.Accessor,&local_638);
    }
    if (local_880.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_880.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_888);
    local_298.DataPtr._0_4_ = uVar17;
    local_298.DataPtr._4_4_ = uVar18;
    local_298.ArrayNum = uVar19;
    local_298._12_4_ = uVar20;
    bVar7 = HasMatchingVariable(&local_298,local_a98[0],&FNiagaraTypeDefinition::BoolDef);
  }
  else if (FVar1 == GetFloatByIDFunctionName) {
    local_870 = (undefined1  [8])0x0;
    local_868.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_868.DelegateSize = 0;
    local_a88 = this;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_870,
               (FWriteAccessScope *)&local_408);
    local_3f0 = &local_868;
    puVar9 = UE::Core::Private::DelegateAllocate(0x28,&local_868);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar10 = FDelegateHandle::GenerateNewID();
      puVar9[2] = uVar10;
      *puVar9 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_VFName___TUNiagaraDataInterfaceParticleRead_ReadFloatBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____VFName___Z___V__6B_
      ;
      puVar9[3] = local_a88;
      puVar9[4] = CONCAT44(uStack_a7c,FStack_a80.Value);
    }
    if (local_408.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_408.Accessor,&local_408);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_870);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_870,
               (FWriteAccessScope *)&local_680);
    if ((local_868.DelegateSize != 0) &&
       (local_868.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_868.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_868,0,0,0x10);
      local_868.DelegateSize = 0;
    }
    if (local_680.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_680.Accessor,&local_680);
    }
    if (local_868.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_868.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_870);
    local_288.DataPtr._0_4_ = uVar17;
    local_288.DataPtr._4_4_ = uVar18;
    local_288.ArrayNum = uVar19;
    local_288._12_4_ = uVar20;
    bVar7 = HasMatchingVariable(&local_288,local_a98[0],&FNiagaraTypeDefinition::FloatDef);
    if (bVar7) {
      return;
    }
    local_278.DataPtr._0_4_ = uVar17;
    local_278.DataPtr._4_4_ = uVar18;
    local_278.ArrayNum = uVar19;
    local_278._12_4_ = uVar20;
    bVar7 = HasMatchingVariable(&local_278,local_a98[0],&FNiagaraTypeDefinition::HalfDef);
  }
  else if (FVar1 == GetVec2ByIDFunctionName) {
    local_858 = (undefined1  [8])0x0;
    local_850.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_850.DelegateSize = 0;
    local_a88 = this;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_858,
               (FWriteAccessScope *)&local_528);
    local_510 = &local_850;
    puVar9 = UE::Core::Private::DelegateAllocate(0x28,&local_850);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar10 = FDelegateHandle::GenerateNewID();
      puVar9[2] = uVar10;
      *puVar9 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_VFName___TUNiagaraDataInterfaceParticleRead_ReadVector2Binder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____VFName___Z___V__6B_
      ;
      puVar9[3] = local_a88;
      puVar9[4] = CONCAT44(uStack_a7c,FStack_a80.Value);
    }
    if (local_528.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_528.Accessor,&local_528);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_858);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_858,
               (FWriteAccessScope *)&local_698);
    if ((local_850.DelegateSize != 0) &&
       (local_850.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_850.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_850,0,0,0x10);
      local_850.DelegateSize = 0;
    }
    if (local_698.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_698.Accessor,&local_698);
    }
    if (local_850.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_850.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_858);
    local_1d8.DataPtr._0_4_ = uVar17;
    local_1d8.DataPtr._4_4_ = uVar18;
    local_1d8.ArrayNum = uVar19;
    local_1d8._12_4_ = uVar20;
    bVar7 = HasMatchingVariable(&local_1d8,local_a98[0],&FNiagaraTypeDefinition::Vec2Def);
    if (bVar7) {
      return;
    }
    local_1e8.DataPtr._0_4_ = uVar17;
    local_1e8.DataPtr._4_4_ = uVar18;
    local_1e8.ArrayNum = uVar19;
    local_1e8._12_4_ = uVar20;
    bVar7 = HasMatchingVariable(&local_1e8,local_a98[0],&FNiagaraTypeDefinition::HalfVec2Def);
  }
  else if (FVar1 == GetVec3ByIDFunctionName) {
    FStack_a80.Value = FVar5.Value;
    uStack_a7c = uVar6;
    local_1f8.DataPtr._0_4_ = uVar17;
    local_1f8.DataPtr._4_4_ = uVar18;
    local_1f8.ArrayNum = uVar19;
    local_1f8._12_4_ = uVar20;
    bVar7 = HasMatchingVariable(&local_1f8,FVar3,&FNiagaraTypeDefinition::PositionDef);
    FVar1 = local_a98[0];
    if (bVar7) {
      TUNiagaraDataInterfaceParticleRead_ReadPositionBinder::Bind<FName>
                ((UNiagaraDataInterface *)this,param_3,local_a98[0]);
      return;
    }
    local_a68 = (undefined1  [8])0x0;
    local_a60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_a60.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a68,
               (FWriteAccessScope *)&local_3e8);
    local_3d0 = &local_a60;
    puVar9 = UE::Core::Private::DelegateAllocate(0x28,&local_a60);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar10 = FDelegateHandle::GenerateNewID();
      puVar9[2] = uVar10;
      *puVar9 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_VFName___TUNiagaraDataInterfaceParticleRead_ReadVector3Binder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____VFName___Z___V__6B_
      ;
      puVar9[3] = this;
      *(FName *)(puVar9 + 4) = FVar1;
      uVar17 = local_a78.DataPtr._0_4_;
      uVar18 = local_a78.DataPtr._4_4_;
      uVar19 = local_a78.ArrayNum;
      uVar20 = local_a78._12_4_;
    }
    if (local_3e8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3e8.Accessor,&local_3e8);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a68);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a68,
               (FWriteAccessScope *)&local_6b0);
    if ((local_a60.DelegateSize != 0) &&
       (local_a60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_a60.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_a60,0,0,0x10);
      local_a60.DelegateSize = 0;
    }
    if (local_6b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6b0.Accessor,&local_6b0);
    }
    if (local_a60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_a60.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_a68);
    local_208.DataPtr._0_4_ = uVar17;
    local_208.DataPtr._4_4_ = uVar18;
    local_208.ArrayNum = uVar19;
    local_208._12_4_ = uVar20;
    bVar7 = HasMatchingVariable(&local_208,local_a98[0],&FNiagaraTypeDefinition::Vec3Def);
    if (bVar7) {
      return;
    }
    local_218.DataPtr._0_4_ = uVar17;
    local_218.DataPtr._4_4_ = uVar18;
    local_218.ArrayNum = uVar19;
    local_218._12_4_ = uVar20;
    bVar7 = HasMatchingVariable(&local_218,local_a98[0],&FNiagaraTypeDefinition::HalfVec3Def);
  }
  else if (FVar1 == GetVec4ByIDFunctionName) {
    local_a38 = (undefined1  [8])0x0;
    local_a30.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_a30.DelegateSize = 0;
    local_a88 = this;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a38,
               (FWriteAccessScope *)&local_3c8);
    local_3b0 = &local_a30;
    puVar9 = UE::Core::Private::DelegateAllocate(0x28,&local_a30);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar10 = FDelegateHandle::GenerateNewID();
      puVar9[2] = uVar10;
      *puVar9 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_VFName___TUNiagaraDataInterfaceParticleRead_ReadVector4Binder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____VFName___Z___V__6B_
      ;
      puVar9[3] = local_a88;
      puVar9[4] = CONCAT44(uStack_a7c,FStack_a80.Value);
    }
    if (local_3c8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3c8.Accessor,&local_3c8);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a38,
               (FWriteAccessScope *)&local_6c8);
    if ((local_a30.DelegateSize != 0) &&
       (local_a30.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_a30.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_a30,0,0,0x10);
      local_a30.DelegateSize = 0;
    }
    if (local_6c8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6c8.Accessor,&local_6c8);
    }
    if (local_a30.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_a30.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_a38);
    local_138.DataPtr._0_4_ = uVar17;
    local_138.DataPtr._4_4_ = uVar18;
    local_138.ArrayNum = uVar19;
    local_138._12_4_ = uVar20;
    bVar7 = HasMatchingVariable(&local_138,local_a98[0],&FNiagaraTypeDefinition::Vec4Def);
    if (bVar7) {
      return;
    }
    local_228.DataPtr._0_4_ = uVar17;
    local_228.DataPtr._4_4_ = uVar18;
    local_228.ArrayNum = uVar19;
    local_228._12_4_ = uVar20;
    bVar7 = HasMatchingVariable(&local_228,local_a98[0],&FNiagaraTypeDefinition::HalfVec4Def);
  }
  else if (FVar1 == GetPositionByIDFunctionName) {
    FStack_a80.Value = FVar5.Value;
    uStack_a7c = uVar6;
    TUNiagaraDataInterfaceParticleRead_ReadPositionBinder::Bind<FName>
              ((UNiagaraDataInterface *)this,param_3,FVar3);
    local_238.DataPtr._0_4_ = uVar17;
    local_238.DataPtr._4_4_ = uVar18;
    local_238.ArrayNum = uVar19;
    local_238._12_4_ = uVar20;
    bVar7 = HasMatchingVariable(&local_238,local_a98[0],&FNiagaraTypeDefinition::PositionDef);
    if (bVar7) {
      return;
    }
    local_248.DataPtr._0_4_ = uVar17;
    local_248.DataPtr._4_4_ = uVar18;
    local_248.ArrayNum = uVar19;
    local_248._12_4_ = uVar20;
    bVar7 = HasMatchingVariable(&local_248,local_a98[0],&FNiagaraTypeDefinition::HalfVec3Def);
  }
  else if (FVar1 == GetColorByIDFunctionName) {
    local_a20 = (undefined1  [8])0x0;
    local_a18.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_a18.DelegateSize = 0;
    FStack_a80.Value = FVar5.Value;
    uStack_a7c = uVar6;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a20,
               (FWriteAccessScope *)&local_3a8);
    local_390 = &local_a18;
    puVar9 = UE::Core::Private::DelegateAllocate(0x28,&local_a18);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar10 = FDelegateHandle::GenerateNewID();
      puVar9[2] = uVar10;
      *puVar9 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_VFName___TUNiagaraDataInterfaceParticleRead_ReadColorBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____VFName___Z___V__6B_
      ;
      puVar9[3] = this;
      *(FName *)(puVar9 + 4) = FVar3;
      uVar17 = local_a78.DataPtr._0_4_;
      uVar18 = local_a78.DataPtr._4_4_;
      uVar19 = local_a78.ArrayNum;
      uVar20 = local_a78._12_4_;
    }
    if (local_3a8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3a8.Accessor,&local_3a8);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a20);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a20,
               (FWriteAccessScope *)&local_6e0);
    if ((local_a18.DelegateSize != 0) &&
       (local_a18.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_a18.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_a18,0,0,0x10);
      local_a18.DelegateSize = 0;
    }
    if (local_6e0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6e0.Accessor,&local_6e0);
    }
    if (local_a18.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_a18.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_a20);
    local_258.DataPtr._0_4_ = uVar17;
    local_258.DataPtr._4_4_ = uVar18;
    local_258.ArrayNum = uVar19;
    local_258._12_4_ = uVar20;
    bVar7 = HasMatchingVariable(&local_258,local_a98[0],&FNiagaraTypeDefinition::ColorDef);
    if (bVar7) {
      return;
    }
    local_268.DataPtr._0_4_ = uVar17;
    local_268.DataPtr._4_4_ = uVar18;
    local_268.ArrayNum = uVar19;
    local_268._12_4_ = uVar20;
    bVar7 = HasMatchingVariable(&local_268,local_a98[0],&FNiagaraTypeDefinition::HalfVec4Def);
  }
  else if (FVar1 == GetQuatByIDFunctionName) {
    local_a08 = (undefined1  [8])0x0;
    local_a00.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_a00.DelegateSize = 0;
    FStack_a80.Value = FVar5.Value;
    uStack_a7c = uVar6;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a08,
               (FWriteAccessScope *)&local_388);
    local_370 = &local_a00;
    puVar9 = UE::Core::Private::DelegateAllocate(0x28,&local_a00);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar10 = FDelegateHandle::GenerateNewID();
      puVar9[2] = uVar10;
      *puVar9 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_VFName___TUNiagaraDataInterfaceParticleRead_ReadQuatBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____VFName___Z___V__6B_
      ;
      puVar9[3] = this;
      *(FName *)(puVar9 + 4) = FVar3;
      uVar17 = local_a78.DataPtr._0_4_;
      uVar18 = local_a78.DataPtr._4_4_;
      uVar19 = local_a78.ArrayNum;
      uVar20 = local_a78._12_4_;
    }
    if (local_388.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_388.Accessor,&local_388);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a08);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a08,
               (FWriteAccessScope *)&local_6f8);
    if ((local_a00.DelegateSize != 0) &&
       (local_a00.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_a00.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_a00,0,0,0x10);
      local_a00.DelegateSize = 0;
    }
    if (local_6f8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6f8.Accessor,&local_6f8);
    }
    if (local_a00.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_a00.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_a08);
    local_58[0].DataPtr._0_4_ = uVar17;
    local_58[0].DataPtr._4_4_ = uVar18;
    local_58[0].ArrayNum = uVar19;
    local_58[0]._12_4_ = uVar20;
    bVar7 = HasMatchingVariable(local_58,local_a98[0],&FNiagaraTypeDefinition::QuatDef);
    if (bVar7) {
      return;
    }
    local_68.DataPtr._0_4_ = uVar17;
    local_68.DataPtr._4_4_ = uVar18;
    local_68.ArrayNum = uVar19;
    local_68._12_4_ = uVar20;
    bVar7 = HasMatchingVariable(&local_68,local_a98[0],&FNiagaraTypeDefinition::HalfVec4Def);
  }
  else if (FVar1 == GetIDByIDFunctionName) {
    local_9f0 = (undefined1  [8])0x0;
    local_9e8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_9e8.DelegateSize = 0;
    FStack_a80.Value = FVar5.Value;
    uStack_a7c = uVar6;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_9f0,
               (FWriteAccessScope *)&local_368);
    local_350 = &local_9e8;
    puVar9 = UE::Core::Private::DelegateAllocate(0x28,&local_9e8);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar10 = FDelegateHandle::GenerateNewID();
      puVar9[2] = uVar10;
      *puVar9 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_VFName___TUNiagaraDataInterfaceParticleRead_ReadIDBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____VFName___Z___V__6B_
      ;
      puVar9[3] = this;
      *(FName *)(puVar9 + 4) = FVar3;
      pUVar16 = (UNiagaraDataInterfaceParticleRead *)local_a78.DataPtr;
      uVar19 = local_a78.ArrayNum;
    }
    if (local_368.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_368.Accessor,&local_368);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_9f0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_9f0,
               (FWriteAccessScope *)&local_710);
    if ((local_9e8.DelegateSize != 0) &&
       (local_9e8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_9e8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_9e8,0,0,0x10);
      local_9e8.DelegateSize = 0;
    }
    if (local_710.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_710.Accessor,&local_710);
    }
    if (local_9e8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_9e8.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_9f0);
    local_7f0 = local_a98[0];
    local_7e8[0].RegisteredTypeIndex =
         FNiagaraTypeDefinitionHandle::Register(local_7e8,&FNiagaraTypeDefinition::IDDef);
    local_7e0 = 0;
    local_7d8 = 0;
    for (pUVar15 = pUVar16;
        pUVar15 !=
        (UNiagaraDataInterfaceParticleRead *)
        ((longlong)&pUVar16->_padding_ + (longlong)(int)uVar19 * 0xc);
        pUVar15 = (UNiagaraDataInterfaceParticleRead *)((longlong)&pUVar15->_padding_ + 4)) {
      if (((FName)pUVar15->_padding_ == local_7f0) &&
         ((int)pUVar15->_padding_ == local_7e8[0].RegisteredTypeIndex)) {
        bVar7 = (int)(((longlong)pUVar15 - (longlong)pUVar16) / 0xc) == -1;
        goto LAB_1491cf225;
      }
    }
    bVar7 = true;
LAB_1491cf225:
    bVar7 = !bVar7;
  }
  else if (FVar1 == GetIntByIndexFunctionName) {
    local_960 = (undefined1  [8])0x0;
    local_958.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_958.DelegateSize = 0;
    FStack_a80.Value = FVar5.Value;
    uStack_a7c = uVar6;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_960,
               (FWriteAccessScope *)&local_348);
    local_330 = &local_958;
    puVar9 = UE::Core::Private::DelegateAllocate(0x28,&local_958);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar10 = FDelegateHandle::GenerateNewID();
      puVar9[2] = uVar10;
      *puVar9 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_VFName___TUNiagaraDataInterfaceParticleRead_ReadIntByIndexBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____VFName___Z___V__6B_
      ;
      puVar9[3] = this;
      *(FName *)(puVar9 + 4) = FVar3;
      uVar17 = local_a78.DataPtr._0_4_;
      uVar18 = local_a78.DataPtr._4_4_;
      uVar19 = local_a78.ArrayNum;
      uVar20 = local_a78._12_4_;
    }
    if (local_348.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_348.Accessor,&local_348);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_960);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_960,
               (FWriteAccessScope *)&local_728);
    if ((local_958.DelegateSize != 0) &&
       (local_958.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_958.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_958,0,0,0x10);
      local_958.DelegateSize = 0;
    }
    if (local_728.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_728.Accessor,&local_728);
    }
    if (local_958.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_958.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_960);
    local_78.DataPtr._0_4_ = uVar17;
    local_78.DataPtr._4_4_ = uVar18;
    local_78.ArrayNum = uVar19;
    local_78._12_4_ = uVar20;
    bVar7 = HasMatchingVariable(&local_78,local_a98[0],&FNiagaraTypeDefinition::IntDef);
  }
  else if (FVar1 == GetBoolByIndexFunctionName) {
    local_930 = (undefined1  [8])0x0;
    local_928.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_928.DelegateSize = 0;
    FStack_a80.Value = FVar5.Value;
    uStack_a7c = uVar6;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_930,
               (FWriteAccessScope *)&local_328);
    local_310 = &local_928;
    puVar9 = UE::Core::Private::DelegateAllocate(0x28,&local_928);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar10 = FDelegateHandle::GenerateNewID();
      puVar9[2] = uVar10;
      *puVar9 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_VFName___TUNiagaraDataInterfaceParticleRead_ReadBoolByIndexBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____VFName___Z___V__6B_
      ;
      puVar9[3] = this;
      *(FName *)(puVar9 + 4) = FVar3;
      uVar17 = local_a78.DataPtr._0_4_;
      uVar18 = local_a78.DataPtr._4_4_;
      uVar19 = local_a78.ArrayNum;
      uVar20 = local_a78._12_4_;
    }
    if (local_328.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_328.Accessor,&local_328);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_930);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_930,
               (FWriteAccessScope *)&local_740);
    if ((local_928.DelegateSize != 0) &&
       (local_928.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_928.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_928,0,0,0x10);
      local_928.DelegateSize = 0;
    }
    if (local_740.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_740.Accessor,&local_740);
    }
    if (local_928.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_928.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_930);
    local_88.DataPtr._0_4_ = uVar17;
    local_88.DataPtr._4_4_ = uVar18;
    local_88.ArrayNum = uVar19;
    local_88._12_4_ = uVar20;
    bVar7 = HasMatchingVariable(&local_88,local_a98[0],&FNiagaraTypeDefinition::BoolDef);
  }
  else if (FVar1 == GetFloatByIndexFunctionName) {
    local_948 = (undefined1  [8])0x0;
    local_940.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_940.DelegateSize = 0;
    FStack_a80.Value = FVar5.Value;
    uStack_a7c = uVar6;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_948,
               (FWriteAccessScope *)&local_308);
    local_2f0 = &local_940;
    puVar9 = UE::Core::Private::DelegateAllocate(0x28,&local_940);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar10 = FDelegateHandle::GenerateNewID();
      puVar9[2] = uVar10;
      *puVar9 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_VFName___TUNiagaraDataInterfaceParticleRead_ReadFloatByIndexBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____VFName___Z___V__6B_
      ;
      puVar9[3] = this;
      *(FName *)(puVar9 + 4) = FVar3;
      uVar17 = local_a78.DataPtr._0_4_;
      uVar18 = local_a78.DataPtr._4_4_;
      uVar19 = local_a78.ArrayNum;
      uVar20 = local_a78._12_4_;
    }
    if (local_308.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_308.Accessor,&local_308);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_948);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_948,
               (FWriteAccessScope *)&local_758);
    if ((local_940.DelegateSize != 0) &&
       (local_940.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_940.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_940,0,0,0x10);
      local_940.DelegateSize = 0;
    }
    if (local_758.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_758.Accessor,&local_758);
    }
    if (local_940.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_940.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_948);
    local_98.DataPtr._0_4_ = uVar17;
    local_98.DataPtr._4_4_ = uVar18;
    local_98.ArrayNum = uVar19;
    local_98._12_4_ = uVar20;
    bVar7 = HasMatchingVariable(&local_98,local_a98[0],&FNiagaraTypeDefinition::FloatDef);
    if (bVar7) {
      return;
    }
    local_a8.DataPtr._0_4_ = uVar17;
    local_a8.DataPtr._4_4_ = uVar18;
    local_a8.ArrayNum = uVar19;
    local_a8._12_4_ = uVar20;
    bVar7 = HasMatchingVariable(&local_a8,local_a98[0],&FNiagaraTypeDefinition::HalfDef);
  }
  else if (FVar1 == GetVec2ByIndexFunctionName) {
    local_978 = (undefined1  [8])0x0;
    local_970.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_970.DelegateSize = 0;
    FStack_a80.Value = FVar5.Value;
    uStack_a7c = uVar6;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_978,
               (FWriteAccessScope *)&local_2e8);
    local_2d0 = &local_970;
    puVar9 = UE::Core::Private::DelegateAllocate(0x28,&local_970);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar10 = FDelegateHandle::GenerateNewID();
      puVar9[2] = uVar10;
      *puVar9 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_VFName___TUNiagaraDataInterfaceParticleRead_ReadVector2ByIndexBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____VFName___Z___V__6B_
      ;
      puVar9[3] = this;
      *(FName *)(puVar9 + 4) = FVar3;
      uVar17 = local_a78.DataPtr._0_4_;
      uVar18 = local_a78.DataPtr._4_4_;
      uVar19 = local_a78.ArrayNum;
      uVar20 = local_a78._12_4_;
    }
    if (local_2e8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2e8.Accessor,&local_2e8);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_978);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_978,
               (FWriteAccessScope *)&local_770);
    if ((local_970.DelegateSize != 0) &&
       (local_970.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_970.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_970,0,0,0x10);
      local_970.DelegateSize = 0;
    }
    if (local_770.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_770.Accessor,&local_770);
    }
    if (local_970.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_970.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_978);
    local_b8.DataPtr._0_4_ = uVar17;
    local_b8.DataPtr._4_4_ = uVar18;
    local_b8.ArrayNum = uVar19;
    local_b8._12_4_ = uVar20;
    bVar7 = HasMatchingVariable(&local_b8,local_a98[0],&FNiagaraTypeDefinition::Vec2Def);
    if (bVar7) {
      return;
    }
    local_c8.DataPtr._0_4_ = uVar17;
    local_c8.DataPtr._4_4_ = uVar18;
    local_c8.ArrayNum = uVar19;
    local_c8._12_4_ = uVar20;
    bVar7 = HasMatchingVariable(&local_c8,local_a98[0],&FNiagaraTypeDefinition::HalfVec2Def);
  }
  else if (FVar1 == GetVec3ByIndexFunctionName) {
    FStack_a80.Value = FVar5.Value;
    uStack_a7c = uVar6;
    local_d8.DataPtr._0_4_ = uVar17;
    local_d8.DataPtr._4_4_ = uVar18;
    local_d8.ArrayNum = uVar19;
    local_d8._12_4_ = uVar20;
    bVar7 = HasMatchingVariable(&local_d8,FVar3,&FNiagaraTypeDefinition::PositionDef);
    FVar1 = local_a98[0];
    if (bVar7) {
      TUNiagaraDataInterfaceParticleRead_ReadPositionByIndexBinder::Bind<FName>
                ((UNiagaraDataInterface *)this,param_3,local_a98[0]);
      return;
    }
    local_990 = (undefined1  [8])0x0;
    local_988.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_988.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_990,
               (FWriteAccessScope *)&local_2c8);
    local_2b0 = &local_988;
    puVar9 = UE::Core::Private::DelegateAllocate(0x28,&local_988);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar10 = FDelegateHandle::GenerateNewID();
      puVar9[2] = uVar10;
      *puVar9 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_VFName___TUNiagaraDataInterfaceParticleRead_ReadVector3ByIndexBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____VFName___Z___V__6B_
      ;
      puVar9[3] = this;
      *(FName *)(puVar9 + 4) = FVar1;
      uVar17 = local_a78.DataPtr._0_4_;
      uVar18 = local_a78.DataPtr._4_4_;
      uVar19 = local_a78.ArrayNum;
      uVar20 = local_a78._12_4_;
    }
    if (local_2c8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2c8.Accessor,&local_2c8);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_990);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_990,
               (FWriteAccessScope *)&local_788);
    if ((local_988.DelegateSize != 0) &&
       (local_988.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_988.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_988,0,0,0x10);
      local_988.DelegateSize = 0;
    }
    if (local_788.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_788.Accessor,&local_788);
    }
    if (local_988.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_988.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_990);
    local_e8.DataPtr._0_4_ = uVar17;
    local_e8.DataPtr._4_4_ = uVar18;
    local_e8.ArrayNum = uVar19;
    local_e8._12_4_ = uVar20;
    bVar7 = HasMatchingVariable(&local_e8,local_a98[0],&FNiagaraTypeDefinition::Vec3Def);
    if (bVar7) {
      return;
    }
    local_f8.DataPtr._0_4_ = uVar17;
    local_f8.DataPtr._4_4_ = uVar18;
    local_f8.ArrayNum = uVar19;
    local_f8._12_4_ = uVar20;
    bVar7 = HasMatchingVariable(&local_f8,local_a98[0],&FNiagaraTypeDefinition::HalfVec3Def);
  }
  else if (FVar1 == GetVec4ByIndexFunctionName) {
    local_9a8 = (undefined1  [8])0x0;
    local_9a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_9a0.DelegateSize = 0;
    FStack_a80.Value = FVar5.Value;
    uStack_a7c = uVar6;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_9a8,
               (FWriteAccessScope *)&local_5a8);
    local_590 = &local_9a0;
    puVar9 = UE::Core::Private::DelegateAllocate(0x28,&local_9a0);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar10 = FDelegateHandle::GenerateNewID();
      puVar9[2] = uVar10;
      *puVar9 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_VFName___TUNiagaraDataInterfaceParticleRead_ReadVector4ByIndexBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____VFName___Z___V__6B_
      ;
      puVar9[3] = this;
      *(FName *)(puVar9 + 4) = FVar3;
      uVar17 = local_a78.DataPtr._0_4_;
      uVar18 = local_a78.DataPtr._4_4_;
      uVar19 = local_a78.ArrayNum;
      uVar20 = local_a78._12_4_;
    }
    if (local_5a8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5a8.Accessor,&local_5a8);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_9a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_9a8,
               (FWriteAccessScope *)&local_7a0);
    if ((local_9a0.DelegateSize != 0) &&
       (local_9a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_9a0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_9a0,0,0,0x10);
      local_9a0.DelegateSize = 0;
    }
    if (local_7a0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7a0.Accessor,&local_7a0);
    }
    if (local_9a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_9a0.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_9a8);
    local_108.DataPtr._0_4_ = uVar17;
    local_108.DataPtr._4_4_ = uVar18;
    local_108.ArrayNum = uVar19;
    local_108._12_4_ = uVar20;
    bVar7 = HasMatchingVariable(&local_108,local_a98[0],&FNiagaraTypeDefinition::Vec4Def);
    if (bVar7) {
      return;
    }
    local_118.DataPtr._0_4_ = uVar17;
    local_118.DataPtr._4_4_ = uVar18;
    local_118.ArrayNum = uVar19;
    local_118._12_4_ = uVar20;
    bVar7 = HasMatchingVariable(&local_118,local_a98[0],&FNiagaraTypeDefinition::HalfVec4Def);
  }
  else if (FVar1 == GetPositionByIndexFunctionName) {
    FStack_a80.Value = FVar5.Value;
    uStack_a7c = uVar6;
    TUNiagaraDataInterfaceParticleRead_ReadPositionByIndexBinder::Bind<FName>
              ((UNiagaraDataInterface *)this,param_3,FVar3);
    local_128.DataPtr._0_4_ = uVar17;
    local_128.DataPtr._4_4_ = uVar18;
    local_128.ArrayNum = uVar19;
    local_128._12_4_ = uVar20;
    bVar7 = HasMatchingVariable(&local_128,local_a98[0],&FNiagaraTypeDefinition::PositionDef);
    if (bVar7) {
      return;
    }
    local_148.DataPtr._0_4_ = uVar17;
    local_148.DataPtr._4_4_ = uVar18;
    local_148.ArrayNum = uVar19;
    local_148._12_4_ = uVar20;
    bVar7 = HasMatchingVariable(&local_148,local_a98[0],&FNiagaraTypeDefinition::HalfVec3Def);
  }
  else if (FVar1 == GetColorByIndexFunctionName) {
    local_9c0 = (undefined1  [8])0x0;
    local_9b8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_9b8.DelegateSize = 0;
    FStack_a80.Value = FVar5.Value;
    uStack_a7c = uVar6;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_9c0,
               (FWriteAccessScope *)&local_588);
    local_570 = &local_9b8;
    puVar9 = UE::Core::Private::DelegateAllocate(0x28,&local_9b8);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar10 = FDelegateHandle::GenerateNewID();
      puVar9[2] = uVar10;
      *puVar9 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_VFName___TUNiagaraDataInterfaceParticleRead_ReadColorByIndexBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____VFName___Z___V__6B_
      ;
      puVar9[3] = this;
      *(FName *)(puVar9 + 4) = FVar3;
      uVar17 = local_a78.DataPtr._0_4_;
      uVar18 = local_a78.DataPtr._4_4_;
      uVar19 = local_a78.ArrayNum;
      uVar20 = local_a78._12_4_;
    }
    if (local_588.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_588.Accessor,&local_588);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_9c0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_9c0,
               (FWriteAccessScope *)&local_7b8);
    if ((local_9b8.DelegateSize != 0) &&
       (local_9b8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_9b8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_9b8,0,0,0x10);
      local_9b8.DelegateSize = 0;
    }
    if (local_7b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7b8.Accessor,&local_7b8);
    }
    if (local_9b8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_9b8.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_9c0);
    local_158.DataPtr._0_4_ = uVar17;
    local_158.DataPtr._4_4_ = uVar18;
    local_158.ArrayNum = uVar19;
    local_158._12_4_ = uVar20;
    bVar7 = HasMatchingVariable(&local_158,local_a98[0],&FNiagaraTypeDefinition::ColorDef);
    if (bVar7) {
      return;
    }
    local_168.DataPtr._0_4_ = uVar17;
    local_168.DataPtr._4_4_ = uVar18;
    local_168.ArrayNum = uVar19;
    local_168._12_4_ = uVar20;
    bVar7 = HasMatchingVariable(&local_168,local_a98[0],&FNiagaraTypeDefinition::HalfVec4Def);
  }
  else {
    if (FVar1 != GetQuatByIndexFunctionName) {
      FStack_a80.Value = FVar5.Value;
      uStack_a7c = uVar6;
      if (FVar1 != GetIDByIndexFunctionName) goto LAB_1491cf230;
      local_840 = (undefined1  [8])0x0;
      local_838.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_838.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_840,
                 (FWriteAccessScope *)&local_548);
      local_530 = &local_838;
      puVar9 = UE::Core::Private::DelegateAllocate(0x28,&local_838);
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = &
                  ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar10 = FDelegateHandle::GenerateNewID();
        puVar9[2] = uVar10;
        *puVar9 = &
                  ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_VFName___TUNiagaraDataInterfaceParticleRead_ReadIDByIndexBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____VFName___Z___V__6B_
        ;
        puVar9[3] = this;
        *(FName *)(puVar9 + 4) = FVar3;
      }
      if (local_548.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_548.Accessor,&local_548);
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_840);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_840);
      local_810.Name = local_a98[0];
      local_810.TypeDefHandle.RegisteredTypeIndex =
           FNiagaraTypeDefinitionHandle::Register
                     (&local_810.TypeDefHandle,&FNiagaraTypeDefinition::IDDef);
      local_800 = 0;
      local_7f8 = 0;
      iVar8 = TArrayView<FNiagaraVariableBase_const_,int>::Find(&local_a78,&local_810);
      bVar7 = iVar8 == -1;
      goto LAB_1491cf225;
    }
    local_9d8 = (undefined1  [8])0x0;
    local_9d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_9d0.DelegateSize = 0;
    FStack_a80.Value = FVar5.Value;
    uStack_a7c = uVar6;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_9d8,
               (FWriteAccessScope *)&local_568);
    local_550 = &local_9d0;
    puVar9 = UE::Core::Private::DelegateAllocate(0x28,&local_9d0);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar10 = FDelegateHandle::GenerateNewID();
      puVar9[2] = uVar10;
      *puVar9 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1____Bind_VFName___TUNiagaraDataInterfaceParticleRead_ReadQuatByIndexBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____VFName___Z___V__6B_
      ;
      puVar9[3] = this;
      *(FName *)(puVar9 + 4) = FVar3;
      uVar17 = local_a78.DataPtr._0_4_;
      uVar18 = local_a78.DataPtr._4_4_;
      uVar19 = local_a78.ArrayNum;
      uVar20 = local_a78._12_4_;
    }
    if (local_568.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_568.Accessor,&local_568);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_9d8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_9d8,
               (FWriteAccessScope *)&local_7d0);
    if ((local_9d0.DelegateSize != 0) &&
       (local_9d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_9d0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_9d0,0,0,0x10);
      local_9d0.DelegateSize = 0;
    }
    if (local_7d0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7d0.Accessor,&local_7d0);
    }
    if (local_9d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_9d0.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_9d8);
    local_178.DataPtr._0_4_ = uVar17;
    local_178.DataPtr._4_4_ = uVar18;
    local_178.ArrayNum = uVar19;
    local_178._12_4_ = uVar20;
    bVar7 = HasMatchingVariable(&local_178,local_a98[0],&FNiagaraTypeDefinition::QuatDef);
    if (bVar7) {
      return;
    }
    local_188.DataPtr._0_4_ = uVar17;
    local_188.DataPtr._4_4_ = uVar18;
    local_188.ArrayNum = uVar19;
    local_188._12_4_ = uVar20;
    bVar7 = HasMatchingVariable(&local_188,local_a98[0],&FNiagaraTypeDefinition::HalfVec4Def);
  }
  if (bVar7 != false) {
    return;
  }
LAB_1491cf230:
  if (*(longlong *)param_2 != 0) {
    lVar14 = *(longlong *)(*(longlong *)param_2 + 0x50);
  }
  if (2 < (byte)LogNiagara._0_1_) {
    FNiagaraDataInterfaceEmitterBinding::ResolveUniqueName
              (&this->EmitterBinding,&local_1b8,(UNiagaraDataInterface *)this);
    if (lVar14 == 0) {
      ::FString::FString(&local_828,L"None");
    }
    else {
      local_818 = *(FName *)(lVar14 + 0x18);
      ::FName::ToString(&local_818,&local_828);
    }
    ::FName::ToString(local_a98,&local_1a8);
    ::FName::ToString(&param_1->Name,&local_198);
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)&PTR_u_ParticleRead__F_151da23e0,
               (FLogCategoryBase *)&LogNiagara);
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
    if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
    }
    if (local_828.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_828.Data.AllocatorInstance.Data);
    }
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// HasInternalAttributeReads @ 1491d10a0

bool __thiscall
UNiagaraDataInterfaceParticleRead::HasInternalAttributeReads
          (UNiagaraDataInterfaceParticleRead *this,UNiagaraEmitter *param_1,UNiagaraEmitter *param_2
          )

{
  UNiagaraEmitter *pUVar1;
  
  pUVar1 = FNiagaraDataInterfaceEmitterBinding::Resolve
                     (&this->EmitterBinding,(UNiagaraDataInterface *)this);
  return param_2 == pUVar1;
}

// InitPerInstanceData @ 1491d29e0

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
UNiagaraDataInterfaceParticleRead::InitPerInstanceData
          (UNiagaraDataInterfaceParticleRead *this,void *param_1,FNiagaraSystemInstance *param_2)

{
  FNiagaraDataInterfaceEmitterBinding *this_00;
  UNiagaraSystem *this_01;
  longlong lVar1;
  code *pcVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UNiagaraEmitter *pUVar6;
  FRenderCommandList *this_02;
  FCommandList *this_03;
  FRenderCommandTag *pFVar7;
  FScriptContainerElement *pFVar8;
  code **ppcVar9;
  FScriptContainerElement *pFVar10;
  ulonglong uVar11;
  byte bVar12;
  int iVar13;
  int iVar14;
  ForAnyElementType FVar15;
  undefined1 auStack_148 [32];
  UNiagaraDataInterfaceParticleRead *local_128;
  FString local_120;
  FString local_110;
  FName local_100;
  FNiagaraSystemInstance *local_f8;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  code *local_b8 [2];
  code *local_a8 [3];
  code **local_90;
  undefined1 local_88 [40];
  code **local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_148;
  *(FNiagaraSystemInstance **)param_1 = param_2;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  this_00 = &this->EmitterBinding;
  local_128 = this;
  local_f8 = param_2;
  pUVar6 = FNiagaraDataInterfaceEmitterBinding::Resolve(this_00,(UNiagaraDataInterface *)this);
  if (pUVar6 != (UNiagaraEmitter *)0x0) {
    iVar13 = (param_2->Emitters).ArrayNum;
    pFVar10 = (param_2->Emitters).AllocatorInstance.Data;
    if ((iVar13 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pFVar8 = pFVar10 + (longlong)iVar13 * 0x10;
    for (; this = local_128, pFVar10 != pFVar8; pFVar10 = pFVar10 + 0x10) {
      if (pUVar6 == *(UNiagaraEmitter **)(*(longlong *)pFVar10 + 0x28)) {
        *(longlong *)((longlong)param_1 + 8) = *(longlong *)pFVar10;
        break;
      }
    }
  }
  if (((*(longlong *)((longlong)param_1 + 8) == 0) &&
      (bVar4 = FNiagaraUtilities::LogVerboseWarnings(), bVar4)) && (2 < (byte)LogNiagara._0_1_)) {
    this_01 = param_2->System;
    if ((this_01 == (UNiagaraSystem *)0x0) || (this_01->_padding_ == 0)) {
      ::FString::FString(&local_110,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this_01,&local_110,(UObject *)0x0,None);
    }
    FNiagaraDataInterfaceEmitterBinding::ResolveUniqueName
              (this_00,&local_e0,(UNiagaraDataInterface *)this);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data.AllocatorInstance.Data);
    }
  }
  FVar15.Data = (FScriptContainerElement *)0x0;
  iVar13 = 0;
  iVar14 = 0;
  lVar1 = *(longlong *)(*(longlong *)param_1 + 0x50);
  if (lVar1 != 0) {
    FNiagaraDataInterfaceEmitterBinding::ResolveUniqueName
              (&this->EmitterBinding,&local_d0,(UNiagaraDataInterface *)this);
    local_100 = *(FName *)(lVar1 + 0x18);
    ::FName::ToString(&local_100,&local_f0);
    ::FString::PrintfImpl(&local_120,L"%s.%s");
    FVar15.Data = local_120.Data.AllocatorInstance.Data;
    iVar13 = local_120.Data.ArrayNum;
    iVar14 = local_120.Data.ArrayMax;
    local_120.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_120.Data.ArrayNum = 0;
    local_120.Data.ArrayMax = 0;
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
  }
  pcVar3 = (code *)this->_padding_;
  if ((pcVar3 == (code *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedProxy != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                         ,0x3a0,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  bVar12 = 0;
  if (*(longlong *)((longlong)param_1 + 8) != 0) {
    bVar12 = *(byte *)(*(longlong *)((longlong)param_1 + 8) + 0xd0) & 1;
  }
  local_b8[0] = (code *)0x0;
  pcVar2 = (code *)local_f8->ID;
  local_90 = FMemory::Malloc(0x30,8);
  local_90[1] = pcVar3;
  local_90[2] = pcVar2;
  *local_90 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`UNiagaraDataInterfaceParticleRead::InitPerInstanceData'::`2'::<lambda_1>,1,1>
                       ::_vftable_;
  *(byte *)(local_90 + 3) = bVar12;
  local_90[4] = (code *)FVar15.Data;
  *(int *)(local_90 + 5) = iVar13;
  *(int *)((longlong)local_90 + 0x2c) = iVar14;
  if (local_90 != (code **)&DAT_fffffffffffffff8) {
    local_b8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UNiagaraDataInterfaceParticleRead::InitPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  this_02 = FRenderCommandList::GetInstanceTLS();
  if (this_02 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceParticleRead::InitPerInstanceData_::__l2::TSTR_FNDIParticleReadCreateRTInstance475>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_b8);
  }
  else {
    this_03 = FRenderCommandList::GetRenderThread(this_02);
    local_88._0_8_ = local_b8[0];
    local_60 = local_90;
    local_90 = (code **)0x0;
    local_88._16_8_ = local_a8[0];
    local_88._24_8_ = local_a8[1];
    local_88._32_8_ = local_a8[2];
    local_b8[0] = (code *)0x0;
    local_58 = 2;
    pFVar7 = (FRenderCommandTag *)
             TRenderCommandTag<`UNiagaraDataInterfaceParticleRead::InitPerInstanceData'::__l2::TSTR_FNDIParticleReadCreateRTInstance475>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_03,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_88,pFVar7);
    uVar11 = (ulonglong)local_58;
    if ((2 < uVar11) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar11] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_88._0_8_ != (code *)0x0) {
        ppcVar9 = (code **)(local_88 + 0x10);
        if (local_60 != (code **)0x0) {
          ppcVar9 = local_60;
        }
        (**(code **)(*ppcVar9 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar11])(local_88);
    }
  }
  if (local_b8[0] != (code *)0x0) {
    ppcVar9 = local_b8 + 2;
    if (local_90 != (code **)0x0) {
      ppcVar9 = local_90;
    }
    (**(code **)(*ppcVar9 + 0x10))();
  }
  return true;
}

// PerInstanceDataSize @ 1491d53b0

int __thiscall
UNiagaraDataInterfaceParticleRead::PerInstanceDataSize(UNiagaraDataInterfaceParticleRead *this)

{
  return 0x10;
}

// PostInitProperties @ 1491d7830

void __thiscall
UNiagaraDataInterfaceParticleRead::PostInitProperties(UNiagaraDataInterfaceParticleRead *this)

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
              ((FNiagaraTypeDefinition *)&local_28.ObjectPtr,AllowParameter|AllowNotUserVariable);
  }
  return;
}

// PostLoad @ 1491d7eb0

void __thiscall UNiagaraDataInterfaceParticleRead::PostLoad(UNiagaraDataInterfaceParticleRead *this)

{
  longlong *_Dst;
  bool bVar1;
  int iVar2;
  uint *puVar3;
  FTlsAutoCleanup *pFVar4;
  FTlsAutoCleanup FVar5;
  FUObjectItem *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  code *pcStack_18;
  undefined1 *puStack_10;
  
  puVar3 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  puStack_10 = auStackX_8;
  pcStack_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  pFVar4 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&pcStack_18,puVar3);
  FVar7 = pFVar4[0x2d];
  if (pFVar4[0x2d] == (FTlsAutoCleanup)0x0) {
    FVar7 = (FTlsAutoCleanup)(pFVar4 + 0x1d);
  }
  FVar5 = FVar7;
  do {
    if (FVar5 == (FTlsAutoCleanup)((longlong)FVar7 + (longlong)*(int *)(pFVar4 + 0x2e) * 8)) {
LAB_142105eef:
      if ((*(uint *)(this->_padding_ + 0xd4) & 0x400) != 0) {
        UObject::LoadConfig((UObject *)this,(UClass *)0x0,(wchar_t *)0x0,0,(FProperty *)0x0,
                            (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                             *)0x0);
      }
      bVar1 = IsThisNotNull(this,"UObject::CanCheckDefaultSubObjects");
      if ((((bVar1) && ((this->_padding_ & 0x3400) == 0)) &&
          (((uint)this->_padding_ >> 0x1e & 1) == 0)) &&
         (pFVar6 = FUObjectArray::IndexToObject
                             (&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4)),
         ((uint)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
        FIsDuplicatingClassForReinstancing::operator_bool(&GIsDuplicatingClassForReinstancing);
      }
      return;
    }
    if (*(UNiagaraDataInterfaceParticleRead **)FVar5 == this) {
      iVar2 = (int)((longlong)FVar5 - (longlong)FVar7 >> 3);
      if (iVar2 != -1) {
        _Dst = (longlong *)((longlong)FVar7 + (longlong)iVar2 * 8);
        memmove(_Dst,_Dst + 1,(longlong)((*(int *)(pFVar4 + 0x2e) - iVar2) + -1) << 3);
        *(int *)(pFVar4 + 0x2e) = *(int *)(pFVar4 + 0x2e) + -1;
      }
      goto LAB_142105eef;
    }
    FVar5 = (FTlsAutoCleanup)((longlong)FVar5 + 8);
  } while( true );
}

// ProvidePerInstanceDataForRenderThread @ 1491d92d0

void __thiscall
UNiagaraDataInterfaceParticleRead::ProvidePerInstanceDataForRenderThread
          (UNiagaraDataInterfaceParticleRead *this,void *param_1,void *param_2,ulong64 *param_3)

{
  *(undefined8 *)param_1 = 0;
  if ((param_2 != (void *)0x0) && (*(longlong *)((longlong)param_2 + 8) != 0)) {
    *(undefined8 *)param_1 = *(undefined8 *)(*(longlong *)((longlong)param_2 + 8) + 0x18);
  }
  return;
}

// ReadBool @ 1491d9a40

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
UNiagaraDataInterfaceParticleRead::ReadBool
          (UNiagaraDataInterfaceParticleRead *this,FVectorVMExternalFunctionContext *param_1,
          FName param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FNiagaraEmitterInstance *this_00;
  FNiagaraDataBuffer *pFVar4;
  code *pcVar5;
  FName FVar6;
  bool bVar7;
  FNiagaraDataSet *pFVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  char cVar13;
  int local_res20;
  FNiagaraDataSetReaderInt32<FNiagaraBool> local_c0;
  FNiagaraDataSetReaderStruct<FNiagaraID> local_b0;
  FDirectReadParamHandler<FNiagaraBool> local_88;
  
  FDirectReadParamHandler<FNiagaraBool>::FDirectReadParamHandler<FNiagaraBool>(&local_88,param_1);
  this_00 = (local_88.InstanceData.Ptr)->EmitterInstance;
  if (this_00 != (FNiagaraEmitterInstance *)0x0) {
    if ((this_00->ParticleDataSet == (FNiagaraDataSet *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ParticleDataSet",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraEmitterInstance.h"
                           ,0x39,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar4 = this_00->ParticleDataSet->CurrentData;
    if (((pFVar4 != (FNiagaraDataBuffer *)0x0) &&
        (this_00->GPUExecContext == (FNiagaraComputeExecutionContext *)0x0)) &&
       (uVar1 = pFVar4->NumInstances, 0 < (pFVar4->IDToIndexTable).ArrayNum)) {
      pFVar8 = FNiagaraEmitterInstance::GetParticleData(this_00);
      FNiagaraDataSetAccessorInt32<FNiagaraBool>::CreateReader(&local_c0,pFVar8,param_2);
      FVar6 = ParticleReadIDName;
      pFVar8 = FNiagaraEmitterInstance::GetParticleData(this_00);
      FNiagaraDataSetAccessorStruct<FNiagaraID>::CreateReader(&local_b0,pFVar8,FVar6);
      if ((local_b0.bIsValid != false) && (local_c0.bIsValid != false)) {
        local_res20 = 0;
        cVar13 = local_b0.bIsValid;
        if (param_1->NumInstances < 1) {
          return;
        }
        do {
          iVar10 = 0;
          iVar9 = *local_88.ParticleIDAcquireTagParam.InputPtr;
          iVar2 = *local_88.ParticleIDIndexParam.InputPtr;
          local_88.ParticleIDAcquireTagParam.InputPtr =
               local_88.ParticleIDAcquireTagParam.InputPtr +
               local_88.ParticleIDAcquireTagParam.AdvanceOffset;
          iVar12 = 1;
          local_88.ParticleIDIndexParam.InputPtr =
               local_88.ParticleIDIndexParam.InputPtr + local_88.ParticleIDIndexParam.AdvanceOffset;
          iVar11 = 0;
          if ((-1 < iVar2) && (iVar11 = 0, iVar2 < (pFVar4->IDToIndexTable).ArrayNum)) {
            if ((iVar2 < 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               cVar13 = local_b0.bIsValid, bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar12 = 1;
            iVar3 = *(int *)((pFVar4->IDToIndexTable).AllocatorInstance.Data + (longlong)iVar2 * 4);
            iVar11 = iVar10;
            if (((((-1 < iVar3) && (iVar3 < (int)uVar1)) && (cVar13 != '\0')) &&
                ((iVar3 < local_b0.NumInstances && (local_b0.Int32Components[iVar3] == iVar2)))) &&
               (local_b0.Int32Components[local_b0.ComponentStride + iVar3] == iVar9)) {
              iVar11 = 0;
              if ((local_c0.bIsValid != false) && (iVar11 = 0, iVar3 < local_c0.NumInstances)) {
                iVar11 = *(int *)(local_c0.ComponentData[0] + (longlong)iVar3 * 4);
              }
              iVar12 = 0;
            }
          }
          local_res20 = local_res20 + 1;
          (local_88.OutValid.Data.Register)->Value = iVar12 + -1;
          local_88.OutValid.Data.Register =
               local_88.OutValid.Data.Register + local_88.OutValid.Data.AdvanceOffset;
          (local_88.OutValue.Data.Register)->Value = iVar11;
          local_88.OutValue.Data.Register =
               local_88.OutValue.Data.Register + local_88.OutValue.Data.AdvanceOffset;
          if (param_1->NumInstances <= local_res20) {
            return;
          }
        } while( true );
      }
    }
  }
  iVar9 = 0;
  if (0 < param_1->NumInstances) {
    do {
      iVar9 = iVar9 + 1;
      (local_88.OutValid.Data.Register)->Value = 0;
      (local_88.OutValue.Data.Register)->Value = 0;
      local_88.OutValue.Data.Register =
           local_88.OutValue.Data.Register + local_88.OutValue.Data.AdvanceOffset;
      local_88.OutValid.Data.Register =
           local_88.OutValid.Data.Register + local_88.OutValid.Data.AdvanceOffset;
    } while (iVar9 < param_1->NumInstances);
  }
  return;
}

// ReadBoolByIndex @ 1491d9cd0

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
UNiagaraDataInterfaceParticleRead::ReadBoolByIndex
          (UNiagaraDataInterfaceParticleRead *this,FVectorVMExternalFunctionContext *param_1,
          FName param_2)

{
  uint uVar1;
  int iVar2;
  FNiagaraEmitterInstance *this_00;
  FNiagaraDataBuffer *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FNiagaraDataSet *pFVar7;
  int iVar8;
  int iVar9;
  FNiagaraBool *local_res20;
  FNiagaraDataSetReaderInt32<FNiagaraBool> local_88;
  FDirectReadByIndexParamHandler<FNiagaraBool> local_78;
  
  FDirectReadByIndexParamHandler<FNiagaraBool>::FDirectReadByIndexParamHandler<FNiagaraBool>
            (&local_78,param_1);
  this_00 = (local_78.InstanceData.Ptr)->EmitterInstance;
  if (this_00 != (FNiagaraEmitterInstance *)0x0) {
    if ((this_00->ParticleDataSet == (FNiagaraDataSet *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ParticleDataSet",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraEmitterInstance.h"
                           ,0x39,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = this_00->ParticleDataSet->CurrentData;
    if (((pFVar3 != (FNiagaraDataBuffer *)0x0) && (uVar1 = pFVar3->NumInstances, uVar1 != 0)) &&
       (this_00->GPUExecContext == (FNiagaraComputeExecutionContext *)0x0)) {
      pFVar7 = FNiagaraEmitterInstance::GetParticleData(this_00);
      FNiagaraDataSetAccessorInt32<FNiagaraBool>::CreateReader(&local_88,pFVar7,param_2);
      if (local_88.bIsValid != false) {
        iVar9 = 0;
        if (param_1->NumInstances < 1) {
          return;
        }
        local_res20 = local_78.OutValid.Data.Register;
        do {
          iVar2 = *local_78.ParticleIndexParam.InputPtr;
          iVar6 = 0;
          local_78.ParticleIndexParam.InputPtr =
               local_78.ParticleIndexParam.InputPtr + local_78.ParticleIndexParam.AdvanceOffset;
          iVar8 = 1;
          if ((-1 < iVar2) && (iVar2 < (int)uVar1)) {
            if ((local_88.bIsValid != false) && (iVar2 < local_88.NumInstances)) {
              iVar6 = *(int *)(local_88.ComponentData[0] + (longlong)iVar2 * 4);
            }
            iVar8 = 0;
          }
          iVar9 = iVar9 + 1;
          local_res20->Value = iVar8 + -1;
          (local_78.OutValue.Data.Register)->Value = iVar6;
          local_78.OutValue.Data.Register =
               local_78.OutValue.Data.Register + local_78.OutValue.Data.AdvanceOffset;
          local_res20 = local_res20 + local_78.OutValid.Data.AdvanceOffset;
        } while (iVar9 < param_1->NumInstances);
        return;
      }
    }
  }
  iVar9 = 0;
  if (0 < param_1->NumInstances) {
    do {
      iVar9 = iVar9 + 1;
      (local_78.OutValid.Data.Register)->Value = 0;
      (local_78.OutValue.Data.Register)->Value = 0;
      local_78.OutValue.Data.Register =
           local_78.OutValue.Data.Register + local_78.OutValue.Data.AdvanceOffset;
      local_78.OutValid.Data.Register =
           local_78.OutValid.Data.Register + local_78.OutValid.Data.AdvanceOffset;
    } while (iVar9 < param_1->NumInstances);
  }
  return;
}

// ReadColor @ 1491d9ed0

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
UNiagaraDataInterfaceParticleRead::ReadColor
          (UNiagaraDataInterfaceParticleRead *this,FVectorVMExternalFunctionContext *param_1,
          FName param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FNiagaraEmitterInstance *this_00;
  FNiagaraDataBuffer *pFVar4;
  code *pcVar5;
  FLinearColor FVar6;
  FName FVar7;
  bool bVar8;
  int iVar9;
  FNiagaraDataSet *pFVar10;
  int iVar11;
  FLinearColor_u_0 FVar12;
  int local_res20;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  FDirectReadParamHandler<FLinearColor> local_138;
  FNiagaraDataSetReaderStruct<FNiagaraID> local_a8;
  FLinearColor_u_0 local_88;
  FNiagaraDataSetReaderFloat<FLinearColor> local_78 [2];
  
  FVar6.field0_0x0 = FLinearColor::White.field0_0x0;
  FDirectReadParamHandler<FLinearColor>::FDirectReadParamHandler<FLinearColor>(&local_138,param_1);
  this_00 = (local_138.InstanceData.Ptr)->EmitterInstance;
  if (this_00 != (FNiagaraEmitterInstance *)0x0) {
    if ((this_00->ParticleDataSet == (FNiagaraDataSet *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ParticleDataSet",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraEmitterInstance.h"
                           ,0x39,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar4 = this_00->ParticleDataSet->CurrentData;
    if (((pFVar4 != (FNiagaraDataBuffer *)0x0) &&
        (this_00->GPUExecContext == (FNiagaraComputeExecutionContext *)0x0)) &&
       (uVar1 = pFVar4->NumInstances, 0 < (pFVar4->IDToIndexTable).ArrayNum)) {
      pFVar10 = FNiagaraEmitterInstance::GetParticleData(this_00);
      FNiagaraDataSetAccessorFloat<FLinearColor>::CreateReader(local_78,pFVar10,param_2);
      FVar7 = ParticleReadIDName;
      pFVar10 = FNiagaraEmitterInstance::GetParticleData(this_00);
      FNiagaraDataSetAccessorStruct<FNiagaraID>::CreateReader(&local_a8,pFVar10,FVar7);
      if ((local_a8.bIsValid != false) && (local_78[0].bIsValid != false)) {
        local_res20 = 0;
        if (param_1->NumInstances < 1) {
          return;
        }
        do {
          iVar11 = *local_138.ParticleIDAcquireTagParam.InputPtr;
          iVar2 = *local_138.ParticleIDIndexParam.InputPtr;
          local_138.ParticleIDAcquireTagParam.InputPtr =
               local_138.ParticleIDAcquireTagParam.InputPtr +
               local_138.ParticleIDAcquireTagParam.AdvanceOffset;
          local_138.ParticleIDIndexParam.InputPtr =
               local_138.ParticleIDIndexParam.InputPtr +
               local_138.ParticleIDIndexParam.AdvanceOffset;
          iVar9 = 1;
          FVar12 = FVar6.field0_0x0;
          if ((-1 < iVar2) && (iVar2 < (pFVar4->IDToIndexTable).ArrayNum)) {
            if ((iVar2 < 0) &&
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
            iVar3 = *(int *)((pFVar4->IDToIndexTable).AllocatorInstance.Data + (longlong)iVar2 * 4);
            iVar9 = 1;
            if ((-1 < iVar3) && (iVar3 < (int)uVar1)) {
              if ((local_a8.bIsValid == false) ||
                 (((local_a8.NumInstances <= iVar3 || (local_a8.Int32Components[iVar3] != iVar2)) ||
                  (local_a8.Int32Components[local_a8.ComponentStride + iVar3] != iVar11)))) {
                iVar9 = 1;
              }
              else if ((local_78[0].bIsValid == false) || (local_78[0].NumInstances <= iVar3)) {
                local_88 = FVar6.field0_0x0;
                iVar9 = 0;
              }
              else {
                FNiagaraDataSetReaderFloat<FLinearColor>::Get
                          (local_78,(FLinearColor *)&local_88._s_0,iVar3);
                iVar9 = 0;
                FVar12 = local_88;
              }
            }
          }
          local_res20 = local_res20 + 1;
          (local_138.OutValid.Data.Register)->Value = iVar9 + -1;
          local_138.OutValid.Data.Register =
               local_138.OutValid.Data.Register + local_138.OutValid.Data.AdvanceOffset;
          *local_138.OutValue.R.Register = FVar12._s_0.R;
          local_138.OutValue.R.Register =
               local_138.OutValue.R.Register + local_138.OutValue.R.AdvanceOffset;
          *local_138.OutValue.G.Register = FVar12._s_0.G;
          local_138.OutValue.G.Register =
               local_138.OutValue.G.Register + local_138.OutValue.G.AdvanceOffset;
          *local_138.OutValue.B.Register = FVar12._s_0.B;
          local_138.OutValue.B.Register =
               local_138.OutValue.B.Register + local_138.OutValue.B.AdvanceOffset;
          *local_138.OutValue.A.Register = FVar12._s_0.A;
          local_138.OutValue.A.Register =
               local_138.OutValue.A.Register + local_138.OutValue.A.AdvanceOffset;
          if (param_1->NumInstances <= local_res20) {
            return;
          }
        } while( true );
      }
    }
  }
  iVar11 = 0;
  if (0 < param_1->NumInstances) {
    fStack_13c = FVar6.field0_0x0._12_4_;
    fStack_140 = FVar6.field0_0x0._8_4_;
    fStack_144 = FVar6.field0_0x0._4_4_;
    local_148 = FVar6.field0_0x0._0_4_;
    do {
      iVar11 = iVar11 + 1;
      (local_138.OutValid.Data.Register)->Value = 0;
      *local_138.OutValue.R.Register = local_148;
      *local_138.OutValue.G.Register = fStack_144;
      *local_138.OutValue.B.Register = fStack_140;
      *local_138.OutValue.A.Register = fStack_13c;
      local_138.OutValue.A.Register =
           local_138.OutValue.A.Register + local_138.OutValue.A.AdvanceOffset;
      local_138.OutValue.B.Register =
           local_138.OutValue.B.Register + local_138.OutValue.B.AdvanceOffset;
      local_138.OutValue.G.Register =
           local_138.OutValue.G.Register + local_138.OutValue.G.AdvanceOffset;
      local_138.OutValue.R.Register =
           local_138.OutValue.R.Register + local_138.OutValue.R.AdvanceOffset;
      local_138.OutValid.Data.Register =
           local_138.OutValid.Data.Register + local_138.OutValid.Data.AdvanceOffset;
    } while (iVar11 < param_1->NumInstances);
  }
  return;
}

// ReadColorByIndex @ 1491da280

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
UNiagaraDataInterfaceParticleRead::ReadColorByIndex
          (UNiagaraDataInterfaceParticleRead *this,FVectorVMExternalFunctionContext *param_1,
          FName param_2)

{
  uint uVar1;
  float fVar2;
  FNiagaraEmitterInstance *this_00;
  FNiagaraDataBuffer *pFVar3;
  code *pcVar4;
  FLinearColor FVar5;
  bool bVar6;
  FNiagaraDataSet *pFVar7;
  int iVar8;
  longlong lVar9;
  float *pfVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  FLinearColor_u_0 FVar16;
  float *local_res10;
  float *local_res20;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float *local_148;
  float *local_140;
  float *local_138;
  FUserPtrHandler<FNDIParticleRead_InstanceData> local_128;
  float *local_118;
  float *local_110;
  int local_108 [2];
  float *local_100;
  int local_f8 [2];
  FNDIOutputParam<FLinearColor> local_f0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  FLinearColor_u_0 local_88;
  FNiagaraDataSetReaderFloat<FLinearColor> local_78;
  
  FVar5.field0_0x0 = FLinearColor::White.field0_0x0;
  VectorVM::FUserPtrHandler<FNDIParticleRead_InstanceData>::
  FUserPtrHandler<FNDIParticleRead_InstanceData>(&local_128,param_1);
  iVar14 = 0;
  local_108[0] = 0;
  local_118 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_108);
  local_f8[0] = 0;
  local_118 = local_118 + local_108[0] * param_1->PerInstanceFnInstanceIdx;
  local_110 = local_118;
  local_100 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_f8);
  local_100 = local_100 + local_f8[0] * param_1->PerInstanceFnInstanceIdx;
  FNDIOutputParam<FLinearColor>::FNDIOutputParam<FLinearColor>(&local_f0,param_1);
  this_00 = (local_128.Ptr)->EmitterInstance;
  if (this_00 != (FNiagaraEmitterInstance *)0x0) {
    if ((this_00->ParticleDataSet == (FNiagaraDataSet *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ParticleDataSet",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraEmitterInstance.h"
                           ,0x39,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = this_00->ParticleDataSet->CurrentData;
    if (((pFVar3 != (FNiagaraDataBuffer *)0x0) && (uVar1 = pFVar3->NumInstances, uVar1 != 0)) &&
       (this_00->GPUExecContext == (FNiagaraComputeExecutionContext *)0x0)) {
      pFVar7 = FNiagaraEmitterInstance::GetParticleData(this_00);
      FNiagaraDataSetAccessorFloat<FLinearColor>::CreateReader(&local_78,pFVar7,param_2);
      if (local_78.bIsValid != false) {
        if (param_1->NumInstances < 1) {
          return;
        }
        lVar11 = (longlong)local_108[0];
        lVar15 = (longlong)local_f8[0];
        local_138 = local_f0.A.Register;
        local_140 = local_f0.B.Register;
        local_148 = local_f0.G.Register;
        lVar9 = (longlong)local_f0.R.AdvanceOffset << 2;
        lVar12 = (longlong)local_f0.G.AdvanceOffset << 2;
        lVar13 = (longlong)local_f0.B.AdvanceOffset << 2;
        local_res20 = local_f0.R.Register;
        local_res10 = local_100;
        pfVar10 = local_118;
        local_a8 = lVar9;
        local_a0 = lVar12;
        local_98 = lVar13;
        do {
          fVar2 = *pfVar10;
          pfVar10 = pfVar10 + lVar11;
          iVar8 = 1;
          FVar16 = FVar5.field0_0x0;
          if ((-1 < (int)fVar2) && ((int)fVar2 < (int)uVar1)) {
            if ((int)fVar2 < local_78.NumInstances) {
              FNiagaraDataSetReaderFloat<FLinearColor>::Get
                        (&local_78,(FLinearColor *)&local_88._s_0,(int)fVar2);
              lVar9 = local_a8;
              lVar12 = local_a0;
              lVar13 = local_98;
            }
            else {
              local_88 = FVar5.field0_0x0;
            }
            iVar8 = 0;
            FVar16 = local_88;
          }
          iVar14 = iVar14 + 1;
          *local_res10 = (float)(iVar8 + -1);
          local_res10 = local_res10 + lVar15;
          *local_res20 = FVar16._s_0.R;
          local_res20 = (float *)((longlong)local_res20 + lVar9);
          *local_148 = FVar16._s_0.G;
          local_148 = (float *)(lVar12 + (longlong)local_148);
          *local_140 = FVar16._s_0.B;
          local_140 = (float *)(lVar13 + (longlong)local_140);
          *local_138 = FVar16._s_0.A;
          local_138 = local_138 + local_f0.A.AdvanceOffset;
        } while (iVar14 < param_1->NumInstances);
        return;
      }
    }
  }
  if (0 < param_1->NumInstances) {
    fStack_14c = FVar5.field0_0x0._12_4_;
    fStack_150 = FVar5.field0_0x0._8_4_;
    fStack_154 = FVar5.field0_0x0._4_4_;
    local_158 = FVar5.field0_0x0._0_4_;
    do {
      iVar14 = iVar14 + 1;
      *local_100 = 0.0;
      *local_f0.R.Register = local_158;
      *local_f0.G.Register = fStack_154;
      *local_f0.B.Register = fStack_150;
      *local_f0.A.Register = fStack_14c;
      local_f0.A.Register = local_f0.A.Register + local_f0.A.AdvanceOffset;
      local_f0.B.Register = local_f0.B.Register + local_f0.B.AdvanceOffset;
      local_f0.G.Register = local_f0.G.Register + local_f0.G.AdvanceOffset;
      local_f0.R.Register = local_f0.R.Register + local_f0.R.AdvanceOffset;
      local_100 = local_100 + local_f8[0];
    } while (iVar14 < param_1->NumInstances);
  }
  return;
}

// ReadFloat @ 1491da5e0

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
UNiagaraDataInterfaceParticleRead::ReadFloat
          (UNiagaraDataInterfaceParticleRead *this,FVectorVMExternalFunctionContext *param_1,
          FName param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  FNiagaraEmitterInstance *this_00;
  FNiagaraDataBuffer *pFVar5;
  code *pcVar6;
  float fVar7;
  FName FVar8;
  bool bVar9;
  FNiagaraDataSet *pFVar10;
  float fVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  char cVar16;
  int local_res20;
  FNiagaraDataSetReaderFloat<float> local_f0;
  FNiagaraDataSetReaderStruct<FNiagaraID> local_e0;
  FDirectReadParamHandler<float> local_b8;
  
  FDirectReadParamHandler<float>::FDirectReadParamHandler<float>(&local_b8,param_1);
  this_00 = (local_b8.InstanceData.Ptr)->EmitterInstance;
  if (this_00 != (FNiagaraEmitterInstance *)0x0) {
    if ((this_00->ParticleDataSet == (FNiagaraDataSet *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("ParticleDataSet",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraEmitterInstance.h"
                           ,0x39,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar5 = this_00->ParticleDataSet->CurrentData;
    if (((pFVar5 != (FNiagaraDataBuffer *)0x0) &&
        (this_00->GPUExecContext == (FNiagaraComputeExecutionContext *)0x0)) &&
       (uVar2 = pFVar5->NumInstances, 0 < (pFVar5->IDToIndexTable).ArrayNum)) {
      pFVar10 = FNiagaraEmitterInstance::GetParticleData(this_00);
      FNiagaraDataSetAccessorFloat<float>::CreateReader(&local_f0,pFVar10,param_2);
      FVar8 = ParticleReadIDName;
      pFVar10 = FNiagaraEmitterInstance::GetParticleData(this_00);
      FNiagaraDataSetAccessorStruct<FNiagaraID>::CreateReader(&local_e0,pFVar10,FVar8);
      fVar7 = __real_b8800000;
      if ((local_e0.bIsValid != false) && (local_f0.bIsValid != false)) {
        local_res20 = 0;
        cVar16 = local_e0.bIsValid;
        if (param_1->NumInstances < 1) {
          return;
        }
        do {
          fVar11 = 0.0;
          iVar12 = *local_b8.ParticleIDAcquireTagParam.InputPtr;
          iVar3 = *local_b8.ParticleIDIndexParam.InputPtr;
          local_b8.ParticleIDAcquireTagParam.InputPtr =
               local_b8.ParticleIDAcquireTagParam.InputPtr +
               local_b8.ParticleIDAcquireTagParam.AdvanceOffset;
          iVar15 = 1;
          local_b8.ParticleIDIndexParam.InputPtr =
               local_b8.ParticleIDIndexParam.InputPtr + local_b8.ParticleIDIndexParam.AdvanceOffset;
          if ((-1 < iVar3) && (iVar3 < (pFVar5->IDToIndexTable).ArrayNum)) {
            if ((iVar3 < 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               cVar16 = local_e0.bIsValid, bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar15 = 1;
            iVar4 = *(int *)((pFVar5->IDToIndexTable).AllocatorInstance.Data + (longlong)iVar3 * 4);
            lVar14 = (longlong)iVar4;
            if (((((-1 < iVar4) && (iVar4 < (int)uVar2)) && (cVar16 != '\0')) &&
                ((iVar4 < local_e0.NumInstances && (local_e0.Int32Components[lVar14] == iVar3)))) &&
               (local_e0.Int32Components[local_e0.ComponentStride + iVar4] == iVar12)) {
              if ((local_f0.bIsValid == false) || (local_f0.NumInstances <= iVar4)) {
                fVar11 = 0.0;
              }
              else if (local_f0.bIsFloat == false) {
                uVar1 = *(ushort *)(local_f0.ComponentData[0] + lVar14 * 2);
                uVar13 = (uVar1 & 0x7fff) * 0x2000;
                fVar11 = (float)(uVar13 + 0x38000000);
                if ((uVar13 & 0xf800000) == 0xf800000) {
                  fVar11 = (float)((uVar1 & 0x8000) << 0x10 | uVar13 + 0x70000000);
                }
                else {
                  if ((uVar13 & 0xf800000) == 0) {
                    fVar11 = (float)(uVar13 + 0x38800000) + fVar7;
                  }
                  fVar11 = (float)((uVar1 & 0x8000) << 0x10 | (uint)fVar11);
                }
              }
              else {
                fVar11 = *(float *)(local_f0.ComponentData[0] + lVar14 * 4);
              }
              iVar15 = 0;
            }
          }
          local_res20 = local_res20 + 1;
          (local_b8.OutValid.Data.Register)->Value = iVar15 + -1;
          local_b8.OutValid.Data.Register =
               local_b8.OutValid.Data.Register + local_b8.OutValid.Data.AdvanceOffset;
          *local_b8.OutValue.Data.Register = fVar11;
          local_b8.OutValue.Data.Register =
               local_b8.OutValue.Data.Register + local_b8.OutValue.Data.AdvanceOffset;
          if (param_1->NumInstances <= local_res20) {
            return;
          }
        } while( true );
      }
    }
  }
  iVar12 = 0;
  if (0 < param_1->NumInstances) {
    do {
      iVar12 = iVar12 + 1;
      (local_b8.OutValid.Data.Register)->Value = 0;
      *local_b8.OutValue.Data.Register = 0.0;
      local_b8.OutValue.Data.Register =
           local_b8.OutValue.Data.Register + local_b8.OutValue.Data.AdvanceOffset;
      local_b8.OutValid.Data.Register =
           local_b8.OutValid.Data.Register + local_b8.OutValid.Data.AdvanceOffset;
    } while (iVar12 < param_1->NumInstances);
  }
  return;
}

// ReadFloatByIndex @ 1491da960

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
UNiagaraDataInterfaceParticleRead::ReadFloatByIndex
          (UNiagaraDataInterfaceParticleRead *this,FVectorVMExternalFunctionContext *param_1,
          FName param_2)

{
  uint uVar1;
  int iVar2;
  FNiagaraEmitterInstance *this_00;
  FNiagaraDataBuffer *pFVar3;
  code *pcVar4;
  float fVar5;
  bool bVar6;
  int iVar7;
  FNiagaraDataSet *pFVar8;
  float fVar9;
  uint uVar10;
  int iVar11;
  FNiagaraDataSetReaderFloat<float> local_88;
  FDirectReadByIndexParamHandler<float> local_78;
  
  FDirectReadByIndexParamHandler<float>::FDirectReadByIndexParamHandler<float>(&local_78,param_1);
  this_00 = (local_78.InstanceData.Ptr)->EmitterInstance;
  if (this_00 != (FNiagaraEmitterInstance *)0x0) {
    if ((this_00->ParticleDataSet == (FNiagaraDataSet *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ParticleDataSet",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraEmitterInstance.h"
                           ,0x39,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = this_00->ParticleDataSet->CurrentData;
    if (((pFVar3 != (FNiagaraDataBuffer *)0x0) && (uVar1 = pFVar3->NumInstances, uVar1 != 0)) &&
       (this_00->GPUExecContext == (FNiagaraComputeExecutionContext *)0x0)) {
      pFVar8 = FNiagaraEmitterInstance::GetParticleData(this_00);
      FNiagaraDataSetAccessorFloat<float>::CreateReader(&local_88,pFVar8,param_2);
      fVar5 = __real_b8800000;
      if (local_88.bIsValid != false) {
        iVar11 = 0;
        if (param_1->NumInstances < 1) {
          return;
        }
        do {
          iVar2 = *local_78.ParticleIndexParam.InputPtr;
          fVar9 = 0.0;
          local_78.ParticleIndexParam.InputPtr =
               local_78.ParticleIndexParam.InputPtr + local_78.ParticleIndexParam.AdvanceOffset;
          iVar7 = 1;
          if ((-1 < iVar2) && (iVar2 < (int)uVar1)) {
            if ((local_88.bIsValid != false) && (iVar2 < local_88.NumInstances)) {
              if (local_88.bIsFloat == false) {
                uVar10 = (*(ushort *)(local_88.ComponentData[0] + (longlong)iVar2 * 2) & 0x7fff) *
                         0x2000;
                fVar9 = (float)(uVar10 + 0x38000000);
                if ((uVar10 & 0xf800000) == 0xf800000) {
                  fVar9 = (float)(uVar10 + 0x70000000);
                }
                else if ((uVar10 & 0xf800000) == 0) {
                  fVar9 = (float)(uVar10 + 0x38800000) + fVar5;
                }
                fVar9 = (float)((*(ushort *)(local_88.ComponentData[0] + (longlong)iVar2 * 2) &
                                0x8000) << 0x10 | (uint)fVar9);
              }
              else {
                fVar9 = *(float *)(local_88.ComponentData[0] + (longlong)iVar2 * 4);
              }
            }
            iVar7 = 0;
          }
          iVar11 = iVar11 + 1;
          (local_78.OutValid.Data.Register)->Value = iVar7 + -1;
          *local_78.OutValue.Data.Register = fVar9;
          local_78.OutValue.Data.Register =
               local_78.OutValue.Data.Register + local_78.OutValue.Data.AdvanceOffset;
          local_78.OutValid.Data.Register =
               local_78.OutValid.Data.Register + local_78.OutValid.Data.AdvanceOffset;
        } while (iVar11 < param_1->NumInstances);
        return;
      }
    }
  }
  iVar11 = 0;
  if (0 < param_1->NumInstances) {
    do {
      iVar11 = iVar11 + 1;
      (local_78.OutValid.Data.Register)->Value = 0;
      *local_78.OutValue.Data.Register = 0.0;
      local_78.OutValue.Data.Register =
           local_78.OutValue.Data.Register + local_78.OutValue.Data.AdvanceOffset;
      local_78.OutValid.Data.Register =
           local_78.OutValid.Data.Register + local_78.OutValid.Data.AdvanceOffset;
    } while (iVar11 < param_1->NumInstances);
  }
  return;
}

// ReadID @ 1491dac00

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
UNiagaraDataInterfaceParticleRead::ReadID
          (UNiagaraDataInterfaceParticleRead *this,FVectorVMExternalFunctionContext *param_1,
          FName param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FNiagaraEmitterInstance *this_00;
  FNiagaraDataBuffer *pFVar4;
  code *pcVar5;
  FName FVar6;
  bool bVar7;
  FNiagaraDataSet *pFVar8;
  int iVar9;
  undefined8 uVar10;
  int iVar11;
  char cVar12;
  int local_res20;
  FNiagaraDataSetReaderStruct<FNiagaraID> local_e0;
  FDirectReadParamHandler<FNiagaraID> local_b8;
  FNiagaraDataSetReaderStruct<FNiagaraID> local_48;
  
  FDirectReadParamHandler<FNiagaraID>::FDirectReadParamHandler<FNiagaraID>(&local_b8,param_1);
  this_00 = (local_b8.InstanceData.Ptr)->EmitterInstance;
  if (this_00 != (FNiagaraEmitterInstance *)0x0) {
    if ((this_00->ParticleDataSet == (FNiagaraDataSet *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ParticleDataSet",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraEmitterInstance.h"
                           ,0x39,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar4 = this_00->ParticleDataSet->CurrentData;
    if (((pFVar4 != (FNiagaraDataBuffer *)0x0) &&
        (this_00->GPUExecContext == (FNiagaraComputeExecutionContext *)0x0)) &&
       (uVar1 = pFVar4->NumInstances, 0 < (pFVar4->IDToIndexTable).ArrayNum)) {
      pFVar8 = FNiagaraEmitterInstance::GetParticleData(this_00);
      FNiagaraDataSetAccessorStruct<FNiagaraID>::CreateReader(&local_48,pFVar8,param_2);
      FVar6 = ParticleReadIDName;
      pFVar8 = FNiagaraEmitterInstance::GetParticleData(this_00);
      FNiagaraDataSetAccessorStruct<FNiagaraID>::CreateReader(&local_e0,pFVar8,FVar6);
      if ((local_e0.bIsValid != false) && (local_48.bIsValid != false)) {
        local_res20 = 0;
        cVar12 = local_e0.bIsValid;
        if (param_1->NumInstances < 1) {
          return;
        }
        do {
          uVar10 = 0xffffffffffffffff;
          iVar9 = *local_b8.ParticleIDAcquireTagParam.InputPtr;
          iVar2 = *local_b8.ParticleIDIndexParam.InputPtr;
          local_b8.ParticleIDAcquireTagParam.InputPtr =
               local_b8.ParticleIDAcquireTagParam.InputPtr +
               local_b8.ParticleIDAcquireTagParam.AdvanceOffset;
          iVar11 = 1;
          local_b8.ParticleIDIndexParam.InputPtr =
               local_b8.ParticleIDIndexParam.InputPtr + local_b8.ParticleIDIndexParam.AdvanceOffset;
          if ((-1 < iVar2) && (iVar2 < (pFVar4->IDToIndexTable).ArrayNum)) {
            if ((iVar2 < 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               cVar12 = local_e0.bIsValid, bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar11 = 1;
            iVar3 = *(int *)((pFVar4->IDToIndexTable).AllocatorInstance.Data + (longlong)iVar2 * 4);
            if ((-1 < iVar3) && (iVar3 < (int)uVar1)) {
              if ((cVar12 == '\0') ||
                 (((local_e0.NumInstances <= iVar3 || (local_e0.Int32Components[iVar3] != iVar2)) ||
                  (local_e0.Int32Components[local_e0.ComponentStride + iVar3] != iVar9)))) {
                iVar11 = 1;
              }
              else {
                if ((local_48.bIsValid != false) && (iVar3 < local_48.NumInstances)) {
                  uVar10 = CONCAT44(local_48.Int32Components[local_48.ComponentStride + iVar3],
                                    local_48.Int32Components[iVar3]);
                }
                iVar11 = 0;
              }
            }
          }
          local_res20 = local_res20 + 1;
          (local_b8.OutValid.Data.Register)->Value = iVar11 + -1;
          local_b8.OutValid.Data.Register =
               local_b8.OutValid.Data.Register + local_b8.OutValid.Data.AdvanceOffset;
          *local_b8.OutValue.Index.Register = (int)uVar10;
          local_b8.OutValue.Index.Register =
               local_b8.OutValue.Index.Register + local_b8.OutValue.Index.AdvanceOffset;
          *local_b8.OutValue.AcquireTag.Register = (int)((ulonglong)uVar10 >> 0x20);
          local_b8.OutValue.AcquireTag.Register =
               local_b8.OutValue.AcquireTag.Register + local_b8.OutValue.AcquireTag.AdvanceOffset;
          if (param_1->NumInstances <= local_res20) {
            return;
          }
        } while( true );
      }
    }
  }
  iVar9 = 0;
  if (0 < param_1->NumInstances) {
    do {
      iVar9 = iVar9 + 1;
      (local_b8.OutValid.Data.Register)->Value = 0;
      *local_b8.OutValue.Index.Register = -1;
      *local_b8.OutValue.AcquireTag.Register = -1;
      local_b8.OutValue.AcquireTag.Register =
           local_b8.OutValue.AcquireTag.Register + local_b8.OutValue.AcquireTag.AdvanceOffset;
      local_b8.OutValue.Index.Register =
           local_b8.OutValue.Index.Register + local_b8.OutValue.Index.AdvanceOffset;
      local_b8.OutValid.Data.Register =
           local_b8.OutValid.Data.Register + local_b8.OutValid.Data.AdvanceOffset;
    } while (iVar9 < param_1->NumInstances);
  }
  return;
}

// ReadIDByIndex @ 1491daee0

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
UNiagaraDataInterfaceParticleRead::ReadIDByIndex
          (UNiagaraDataInterfaceParticleRead *this,FVectorVMExternalFunctionContext *param_1,
          FName param_2)

{
  uint uVar1;
  float fVar2;
  FNiagaraEmitterInstance *this_00;
  FNiagaraDataBuffer *pFVar3;
  code *pcVar4;
  bool bVar5;
  FNiagaraDataSet *pFVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  float *local_res10;
  int *local_res20;
  int *local_c8;
  FUserPtrHandler<FNDIParticleRead_InstanceData> local_b8;
  float *local_a8;
  float *local_a0;
  int local_98 [2];
  float *local_90;
  int local_88 [2];
  FNDIOutputParam<FNiagaraID> local_80;
  FNiagaraDataSetReaderStruct<FNiagaraID> local_58;
  
  VectorVM::FUserPtrHandler<FNDIParticleRead_InstanceData>::
  FUserPtrHandler<FNDIParticleRead_InstanceData>(&local_b8,param_1);
  iVar9 = 0;
  local_98[0] = 0;
  local_a8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_98);
  local_88[0] = 0;
  local_a8 = local_a8 + local_98[0] * param_1->PerInstanceFnInstanceIdx;
  local_a0 = local_a8;
  local_90 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_88);
  local_90 = local_90 + local_88[0] * param_1->PerInstanceFnInstanceIdx;
  FNDIOutputParam<FNiagaraID>::FNDIOutputParam<FNiagaraID>(&local_80,param_1);
  this_00 = (local_b8.Ptr)->EmitterInstance;
  if (this_00 != (FNiagaraEmitterInstance *)0x0) {
    if ((this_00->ParticleDataSet == (FNiagaraDataSet *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ParticleDataSet",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraEmitterInstance.h"
                           ,0x39,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = this_00->ParticleDataSet->CurrentData;
    if (((pFVar3 != (FNiagaraDataBuffer *)0x0) && (uVar1 = pFVar3->NumInstances, uVar1 != 0)) &&
       (this_00->GPUExecContext == (FNiagaraComputeExecutionContext *)0x0)) {
      pFVar6 = FNiagaraEmitterInstance::GetParticleData(this_00);
      FNiagaraDataSetAccessorStruct<FNiagaraID>::CreateReader(&local_58,pFVar6,param_2);
      if (local_58.bIsValid != false) {
        if (param_1->NumInstances < 1) {
          return;
        }
        local_c8 = local_80.AcquireTag.Register;
        local_res20 = local_80.Index.Register;
        local_res10 = local_90;
        do {
          fVar2 = *local_a8;
          uVar7 = 0xffffffffffffffff;
          local_a8 = local_a8 + local_98[0];
          iVar8 = 1;
          if ((-1 < (int)fVar2) && ((int)fVar2 < (int)uVar1)) {
            if ((local_58.bIsValid != false) && ((int)fVar2 < local_58.NumInstances)) {
              uVar7 = CONCAT44(local_58.Int32Components[local_58.ComponentStride + (int)fVar2],
                               local_58.Int32Components[(int)fVar2]);
            }
            iVar8 = 0;
          }
          iVar9 = iVar9 + 1;
          *local_res10 = (float)(iVar8 + -1);
          local_res10 = local_res10 + local_88[0];
          *local_res20 = (int)uVar7;
          local_res20 = local_res20 + local_80.Index.AdvanceOffset;
          *local_c8 = (int)((ulonglong)uVar7 >> 0x20);
          local_c8 = local_c8 + local_80.AcquireTag.AdvanceOffset;
        } while (iVar9 < param_1->NumInstances);
        return;
      }
    }
  }
  if (0 < param_1->NumInstances) {
    do {
      iVar9 = iVar9 + 1;
      *local_90 = 0.0;
      *local_80.Index.Register = -1;
      *local_80.AcquireTag.Register = -1;
      local_80.AcquireTag.Register =
           local_80.AcquireTag.Register + local_80.AcquireTag.AdvanceOffset;
      local_80.Index.Register = local_80.Index.Register + local_80.Index.AdvanceOffset;
      local_90 = local_90 + local_88[0];
    } while (iVar9 < param_1->NumInstances);
  }
  return;
}

// ReadInt @ 1491db150

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
UNiagaraDataInterfaceParticleRead::ReadInt
          (UNiagaraDataInterfaceParticleRead *this,FVectorVMExternalFunctionContext *param_1,
          FName param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FNiagaraEmitterInstance *this_00;
  FNiagaraDataBuffer *pFVar4;
  code *pcVar5;
  FName FVar6;
  bool bVar7;
  FNiagaraDataSet *pFVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  char cVar13;
  int local_res20;
  FNiagaraDataSetReaderInt32<int> local_c0;
  FNiagaraDataSetReaderStruct<FNiagaraID> local_b0;
  FDirectReadParamHandler<int> local_88;
  
  FDirectReadParamHandler<int>::FDirectReadParamHandler<int>(&local_88,param_1);
  this_00 = (local_88.InstanceData.Ptr)->EmitterInstance;
  if (this_00 != (FNiagaraEmitterInstance *)0x0) {
    if ((this_00->ParticleDataSet == (FNiagaraDataSet *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ParticleDataSet",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraEmitterInstance.h"
                           ,0x39,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar4 = this_00->ParticleDataSet->CurrentData;
    if (((pFVar4 != (FNiagaraDataBuffer *)0x0) &&
        (this_00->GPUExecContext == (FNiagaraComputeExecutionContext *)0x0)) &&
       (uVar1 = pFVar4->NumInstances, 0 < (pFVar4->IDToIndexTable).ArrayNum)) {
      pFVar8 = FNiagaraEmitterInstance::GetParticleData(this_00);
      FNiagaraDataSetAccessorInt32<int>::CreateReader(&local_c0,pFVar8,param_2);
      FVar6 = ParticleReadIDName;
      pFVar8 = FNiagaraEmitterInstance::GetParticleData(this_00);
      FNiagaraDataSetAccessorStruct<FNiagaraID>::CreateReader(&local_b0,pFVar8,FVar6);
      if ((local_b0.bIsValid != false) && (local_c0.bIsValid != false)) {
        local_res20 = 0;
        cVar13 = local_b0.bIsValid;
        if (param_1->NumInstances < 1) {
          return;
        }
        do {
          iVar10 = 0;
          iVar9 = *local_88.ParticleIDAcquireTagParam.InputPtr;
          iVar2 = *local_88.ParticleIDIndexParam.InputPtr;
          local_88.ParticleIDAcquireTagParam.InputPtr =
               local_88.ParticleIDAcquireTagParam.InputPtr +
               local_88.ParticleIDAcquireTagParam.AdvanceOffset;
          iVar12 = 1;
          local_88.ParticleIDIndexParam.InputPtr =
               local_88.ParticleIDIndexParam.InputPtr + local_88.ParticleIDIndexParam.AdvanceOffset;
          iVar11 = 0;
          if ((-1 < iVar2) && (iVar11 = 0, iVar2 < (pFVar4->IDToIndexTable).ArrayNum)) {
            if ((iVar2 < 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               cVar13 = local_b0.bIsValid, bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar12 = 1;
            iVar3 = *(int *)((pFVar4->IDToIndexTable).AllocatorInstance.Data + (longlong)iVar2 * 4);
            iVar11 = iVar10;
            if (((((-1 < iVar3) && (iVar3 < (int)uVar1)) && (cVar13 != '\0')) &&
                ((iVar3 < local_b0.NumInstances && (local_b0.Int32Components[iVar3] == iVar2)))) &&
               (local_b0.Int32Components[local_b0.ComponentStride + iVar3] == iVar9)) {
              iVar11 = 0;
              if ((local_c0.bIsValid != false) && (iVar11 = 0, iVar3 < local_c0.NumInstances)) {
                iVar11 = *(int *)(local_c0.ComponentData[0] + (longlong)iVar3 * 4);
              }
              iVar12 = 0;
            }
          }
          local_res20 = local_res20 + 1;
          (local_88.OutValid.Data.Register)->Value = iVar12 + -1;
          local_88.OutValid.Data.Register =
               local_88.OutValid.Data.Register + local_88.OutValid.Data.AdvanceOffset;
          *local_88.OutValue.Data.Register = iVar11;
          local_88.OutValue.Data.Register =
               local_88.OutValue.Data.Register + local_88.OutValue.Data.AdvanceOffset;
          if (param_1->NumInstances <= local_res20) {
            return;
          }
        } while( true );
      }
    }
  }
  iVar9 = 0;
  if (0 < param_1->NumInstances) {
    do {
      iVar9 = iVar9 + 1;
      (local_88.OutValid.Data.Register)->Value = 0;
      *local_88.OutValue.Data.Register = 0;
      local_88.OutValue.Data.Register =
           local_88.OutValue.Data.Register + local_88.OutValue.Data.AdvanceOffset;
      local_88.OutValid.Data.Register =
           local_88.OutValid.Data.Register + local_88.OutValid.Data.AdvanceOffset;
    } while (iVar9 < param_1->NumInstances);
  }
  return;
}

// ReadIntByIndex @ 1491db3e0

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
UNiagaraDataInterfaceParticleRead::ReadIntByIndex
          (UNiagaraDataInterfaceParticleRead *this,FVectorVMExternalFunctionContext *param_1,
          FName param_2)

{
  uint uVar1;
  int iVar2;
  FNiagaraEmitterInstance *this_00;
  FNiagaraDataBuffer *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FNiagaraDataSet *pFVar7;
  int iVar8;
  int iVar9;
  FNiagaraBool *local_res20;
  FNiagaraDataSetReaderInt32<int> local_88;
  FDirectReadByIndexParamHandler<int> local_78;
  
  FDirectReadByIndexParamHandler<int>::FDirectReadByIndexParamHandler<int>(&local_78,param_1);
  this_00 = (local_78.InstanceData.Ptr)->EmitterInstance;
  if (this_00 != (FNiagaraEmitterInstance *)0x0) {
    if ((this_00->ParticleDataSet == (FNiagaraDataSet *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ParticleDataSet",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraEmitterInstance.h"
                           ,0x39,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = this_00->ParticleDataSet->CurrentData;
    if (((pFVar3 != (FNiagaraDataBuffer *)0x0) && (uVar1 = pFVar3->NumInstances, uVar1 != 0)) &&
       (this_00->GPUExecContext == (FNiagaraComputeExecutionContext *)0x0)) {
      pFVar7 = FNiagaraEmitterInstance::GetParticleData(this_00);
      FNiagaraDataSetAccessorInt32<int>::CreateReader(&local_88,pFVar7,param_2);
      if (local_88.bIsValid != false) {
        iVar9 = 0;
        if (param_1->NumInstances < 1) {
          return;
        }
        local_res20 = local_78.OutValid.Data.Register;
        do {
          iVar2 = *local_78.ParticleIndexParam.InputPtr;
          iVar8 = 0;
          local_78.ParticleIndexParam.InputPtr =
               local_78.ParticleIndexParam.InputPtr + local_78.ParticleIndexParam.AdvanceOffset;
          iVar6 = 1;
          if ((-1 < iVar2) && (iVar2 < (int)uVar1)) {
            if ((local_88.bIsValid != false) && (iVar2 < local_88.NumInstances)) {
              iVar8 = *(int *)(local_88.ComponentData[0] + (longlong)iVar2 * 4);
            }
            iVar6 = 0;
          }
          iVar9 = iVar9 + 1;
          local_res20->Value = iVar6 + -1;
          *local_78.OutValue.Data.Register = iVar8;
          local_78.OutValue.Data.Register =
               local_78.OutValue.Data.Register + local_78.OutValue.Data.AdvanceOffset;
          local_res20 = local_res20 + local_78.OutValid.Data.AdvanceOffset;
        } while (iVar9 < param_1->NumInstances);
        return;
      }
    }
  }
  iVar9 = 0;
  if (0 < param_1->NumInstances) {
    do {
      iVar9 = iVar9 + 1;
      (local_78.OutValid.Data.Register)->Value = 0;
      *local_78.OutValue.Data.Register = 0;
      local_78.OutValue.Data.Register =
           local_78.OutValue.Data.Register + local_78.OutValue.Data.AdvanceOffset;
      local_78.OutValid.Data.Register =
           local_78.OutValid.Data.Register + local_78.OutValid.Data.AdvanceOffset;
    } while (iVar9 < param_1->NumInstances);
  }
  return;
}

// ReadPosition @ 1491db5e0

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
UNiagaraDataInterfaceParticleRead::ReadPosition
          (UNiagaraDataInterfaceParticleRead *this,FVectorVMExternalFunctionContext *param_1,
          FName param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FNiagaraEmitterInstance *this_00;
  FNiagaraDataBuffer *pFVar4;
  code *pcVar5;
  FName FVar6;
  bool bVar7;
  int iVar8;
  FNiagaraDataSet *pFVar9;
  int iVar10;
  char cVar11;
  float fVar12;
  float fVar13;
  int local_res20;
  float local_158;
  undefined1 local_144 [12];
  FNiagaraDataSetReaderStruct<FNiagaraID> local_138;
  FDirectReadParamHandler<FNiagaraPosition> local_118;
  FNiagaraDataSetReaderFloat<FNiagaraPosition> local_98 [3];
  
  FDirectReadParamHandler<FNiagaraPosition>::FDirectReadParamHandler<FNiagaraPosition>
            (&local_118,param_1);
  this_00 = (local_118.InstanceData.Ptr)->EmitterInstance;
  if (this_00 != (FNiagaraEmitterInstance *)0x0) {
    if ((this_00->ParticleDataSet == (FNiagaraDataSet *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ParticleDataSet",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraEmitterInstance.h"
                           ,0x39,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar4 = this_00->ParticleDataSet->CurrentData;
    if (((pFVar4 != (FNiagaraDataBuffer *)0x0) &&
        (this_00->GPUExecContext == (FNiagaraComputeExecutionContext *)0x0)) &&
       (uVar1 = pFVar4->NumInstances, 0 < (pFVar4->IDToIndexTable).ArrayNum)) {
      pFVar9 = FNiagaraEmitterInstance::GetParticleData(this_00);
      FNiagaraDataSetAccessorFloat<FNiagaraPosition>::CreateReader(local_98,pFVar9,param_2);
      FVar6 = ParticleReadIDName;
      pFVar9 = FNiagaraEmitterInstance::GetParticleData(this_00);
      FNiagaraDataSetAccessorStruct<FNiagaraID>::CreateReader(&local_138,pFVar9,FVar6);
      if ((local_138.bIsValid != false) && (local_98[0].bIsValid != false)) {
        local_res20 = 0;
        cVar11 = local_138.bIsValid;
        if (param_1->NumInstances < 1) {
          return;
        }
        do {
          local_158 = 0.0;
          fVar12 = 0.0;
          fVar13 = 0.0;
          iVar10 = *local_118.ParticleIDAcquireTagParam.InputPtr;
          iVar2 = *local_118.ParticleIDIndexParam.InputPtr;
          local_118.ParticleIDAcquireTagParam.InputPtr =
               local_118.ParticleIDAcquireTagParam.InputPtr +
               local_118.ParticleIDAcquireTagParam.AdvanceOffset;
          local_118.ParticleIDIndexParam.InputPtr =
               local_118.ParticleIDIndexParam.InputPtr +
               local_118.ParticleIDIndexParam.AdvanceOffset;
          iVar8 = 1;
          if ((-1 < iVar2) && (iVar2 < (pFVar4->IDToIndexTable).ArrayNum)) {
            if ((iVar2 < 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               cVar11 = local_138.bIsValid, bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar3 = *(int *)((pFVar4->IDToIndexTable).AllocatorInstance.Data + (longlong)iVar2 * 4);
            iVar8 = 1;
            if ((-1 < iVar3) && (iVar3 < (int)uVar1)) {
              if ((cVar11 == '\0') ||
                 (((local_138.NumInstances <= iVar3 || (local_138.Int32Components[iVar3] != iVar2))
                  || (local_138.Int32Components[local_138.ComponentStride + iVar3] != iVar10)))) {
                iVar8 = 1;
              }
              else {
                if ((local_98[0].bIsValid == false) || (local_98[0].NumInstances <= iVar3)) {
                  local_144._0_8_ = 0;
                  local_144._8_4_ = 0.0;
                }
                else {
                  FNiagaraDataSetReaderFloat<FNiagaraPosition>::Get
                            (local_98,(FNiagaraPosition *)local_144,iVar3);
                  cVar11 = local_138.bIsValid;
                }
                fVar12 = SUB84(local_144._0_8_,4);
                iVar8 = 0;
                local_158 = (float)local_144._0_8_;
                fVar13 = (float)local_144._8_4_;
              }
            }
          }
          local_res20 = local_res20 + 1;
          (local_118.OutValid.Data.Register)->Value = iVar8 + -1;
          local_118.OutValid.Data.Register =
               local_118.OutValid.Data.Register + local_118.OutValid.Data.AdvanceOffset;
          *local_118.OutValue.X.Register = local_158;
          local_118.OutValue.X.Register =
               local_118.OutValue.X.Register + local_118.OutValue.X.AdvanceOffset;
          *local_118.OutValue.Y.Register = fVar12;
          local_118.OutValue.Y.Register =
               local_118.OutValue.Y.Register + local_118.OutValue.Y.AdvanceOffset;
          *local_118.OutValue.Z.Register = fVar13;
          local_118.OutValue.Z.Register =
               local_118.OutValue.Z.Register + local_118.OutValue.Z.AdvanceOffset;
          if (param_1->NumInstances <= local_res20) {
            return;
          }
        } while( true );
      }
    }
  }
  iVar10 = 0;
  if (0 < param_1->NumInstances) {
    do {
      iVar10 = iVar10 + 1;
      (local_118.OutValid.Data.Register)->Value = 0;
      *local_118.OutValue.X.Register = 0.0;
      *local_118.OutValue.Y.Register = 0.0;
      *local_118.OutValue.Z.Register = 0.0;
      local_118.OutValue.Z.Register =
           local_118.OutValue.Z.Register + local_118.OutValue.Z.AdvanceOffset;
      local_118.OutValue.Y.Register =
           local_118.OutValue.Y.Register + local_118.OutValue.Y.AdvanceOffset;
      local_118.OutValue.X.Register =
           local_118.OutValue.X.Register + local_118.OutValue.X.AdvanceOffset;
      local_118.OutValid.Data.Register =
           local_118.OutValid.Data.Register + local_118.OutValid.Data.AdvanceOffset;
    } while (iVar10 < param_1->NumInstances);
  }
  return;
}

// ReadPositionByIndex @ 1491db9d0

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
UNiagaraDataInterfaceParticleRead::ReadPositionByIndex
          (UNiagaraDataInterfaceParticleRead *this,FVectorVMExternalFunctionContext *param_1,
          FName param_2)

{
  uint uVar1;
  float fVar2;
  FNiagaraEmitterInstance *this_00;
  FNiagaraDataBuffer *pFVar3;
  code *pcVar4;
  bool bVar5;
  FNiagaraDataSet *pFVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  float *pfVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float *local_res10;
  float *local_res20;
  float *local_148;
  undefined1 local_138 [8];
  float local_130;
  float *local_128;
  FUserPtrHandler<FNDIParticleRead_InstanceData> local_118;
  float *local_108;
  float *local_100;
  int local_f8 [2];
  float *local_f0;
  int local_e8 [2];
  FNDIOutputParam<FNiagaraPosition> local_e0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  float local_88 [4];
  FNiagaraDataSetReaderFloat<FNiagaraPosition> local_78 [2];
  
  VectorVM::FUserPtrHandler<FNDIParticleRead_InstanceData>::
  FUserPtrHandler<FNDIParticleRead_InstanceData>(&local_118,param_1);
  iVar9 = 0;
  local_f8[0] = 0;
  local_108 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_f8);
  local_e8[0] = 0;
  local_108 = local_108 + local_f8[0] * param_1->PerInstanceFnInstanceIdx;
  local_100 = local_108;
  local_f0 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_e8);
  local_f0 = local_f0 + local_e8[0] * param_1->PerInstanceFnInstanceIdx;
  FNDIOutputParam<FNiagaraPosition>::FNDIOutputParam<FNiagaraPosition>(&local_e0,param_1);
  this_00 = (local_118.Ptr)->EmitterInstance;
  if (this_00 != (FNiagaraEmitterInstance *)0x0) {
    if ((this_00->ParticleDataSet == (FNiagaraDataSet *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ParticleDataSet",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraEmitterInstance.h"
                           ,0x39,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = this_00->ParticleDataSet->CurrentData;
    if (((pFVar3 != (FNiagaraDataBuffer *)0x0) && (uVar1 = pFVar3->NumInstances, uVar1 != 0)) &&
       (this_00->GPUExecContext == (FNiagaraComputeExecutionContext *)0x0)) {
      pFVar6 = FNiagaraEmitterInstance::GetParticleData(this_00);
      FNiagaraDataSetAccessorFloat<FNiagaraPosition>::CreateReader(local_78,pFVar6,param_2);
      if (local_78[0].bIsValid != false) {
        if (param_1->NumInstances < 1) {
          return;
        }
        lVar13 = (longlong)local_f8[0];
        lVar8 = (longlong)local_e8[0] << 2;
        lVar10 = (longlong)local_e0.X.AdvanceOffset << 2;
        lVar11 = (longlong)local_e0.Y.AdvanceOffset << 2;
        local_148 = local_e0.Z.Register;
        local_128 = local_e0.Y.Register;
        local_res20 = local_e0.X.Register;
        lVar12 = (longlong)local_e0.Z.AdvanceOffset << 2;
        local_res10 = local_f0;
        pfVar14 = local_108;
        local_a8 = lVar8;
        local_a0 = lVar10;
        local_98 = lVar11;
        local_90 = lVar12;
        do {
          fVar2 = *pfVar14;
          pfVar14 = pfVar14 + lVar13;
          fVar16 = 0.0;
          iVar7 = 1;
          fVar15 = 0.0;
          fVar17 = 0.0;
          if ((-1 < (int)fVar2) && (fVar15 = 0.0, (int)fVar2 < (int)uVar1)) {
            if ((int)fVar2 < local_78[0].NumInstances) {
              FNiagaraDataSetReaderFloat<FNiagaraPosition>::Get
                        (local_78,(FNiagaraPosition *)local_138,(int)fVar2);
              lVar8 = local_a8;
              lVar10 = local_a0;
              lVar11 = local_98;
              lVar12 = local_90;
            }
            else {
              local_138 = (undefined1  [8])0x0;
              local_130 = 0.0;
            }
            fVar16 = local_138._4_4_;
            iVar7 = 0;
            local_88[0] = local_138._0_4_;
            fVar15 = local_88[0];
            fVar17 = local_130;
            local_88._0_8_ = local_138;
          }
          iVar9 = iVar9 + 1;
          *local_res10 = (float)(iVar7 + -1);
          local_res10 = (float *)(lVar8 + (longlong)local_res10);
          *local_res20 = fVar15;
          local_res20 = (float *)((longlong)local_res20 + lVar10);
          *local_128 = fVar16;
          local_128 = (float *)(lVar11 + (longlong)local_128);
          *local_148 = fVar17;
          local_148 = (float *)((longlong)local_148 + lVar12);
        } while (iVar9 < param_1->NumInstances);
        return;
      }
    }
  }
  if (0 < param_1->NumInstances) {
    do {
      iVar9 = iVar9 + 1;
      *local_f0 = 0.0;
      *local_e0.X.Register = 0.0;
      *local_e0.Y.Register = 0.0;
      *local_e0.Z.Register = 0.0;
      local_e0.Z.Register = local_e0.Z.Register + local_e0.Z.AdvanceOffset;
      local_e0.Y.Register = local_e0.Y.Register + local_e0.Y.AdvanceOffset;
      local_e0.X.Register = local_e0.X.Register + local_e0.X.AdvanceOffset;
      local_f0 = local_f0 + local_e8[0];
    } while (iVar9 < param_1->NumInstances);
  }
  return;
}

// ReadQuat @ 1491dbd00

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
UNiagaraDataInterfaceParticleRead::ReadQuat
          (UNiagaraDataInterfaceParticleRead *this,FVectorVMExternalFunctionContext *param_1,
          FName param_2)

{
  int iVar1;
  int iVar2;
  FNiagaraEmitterInstance *this_00;
  FNiagaraDataBuffer *pFVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  FName FVar9;
  bool bVar10;
  int iVar11;
  FNiagaraDataSet *pFVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int local_res20;
  TQuat<float> local_1a8;
  uint local_198;
  FDirectReadParamHandler<UE::Math::TQuat<float>_> local_188;
  FNiagaraDataSetReaderStruct<FNiagaraID> local_f8;
  FNiagaraDataSetReaderFloat<UE::Math::TQuat<float>_> local_d8 [4];
  
  fVar8 = UE::Math::TQuat<float>::Identity.W;
  fVar7 = UE::Math::TQuat<float>::Identity.Z;
  fVar6 = UE::Math::TQuat<float>::Identity.Y;
  fVar5 = UE::Math::TQuat<float>::Identity.X;
  FDirectReadParamHandler<UE::Math::TQuat<float>_>::FDirectReadParamHandler<UE::Math::TQuat<float>_>
            (&local_188,param_1);
  this_00 = (local_188.InstanceData.Ptr)->EmitterInstance;
  if (this_00 != (FNiagaraEmitterInstance *)0x0) {
    if ((this_00->ParticleDataSet == (FNiagaraDataSet *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ParticleDataSet",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraEmitterInstance.h"
                            ,0x39,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = this_00->ParticleDataSet->CurrentData;
    if (((pFVar3 != (FNiagaraDataBuffer *)0x0) &&
        (this_00->GPUExecContext == (FNiagaraComputeExecutionContext *)0x0)) &&
       (local_198 = pFVar3->NumInstances, 0 < (pFVar3->IDToIndexTable).ArrayNum)) {
      pFVar12 = FNiagaraEmitterInstance::GetParticleData(this_00);
      FNiagaraDataSetAccessorFloat<UE::Math::TQuat<float>_>::CreateReader(local_d8,pFVar12,param_2);
      FVar9 = ParticleReadIDName;
      pFVar12 = FNiagaraEmitterInstance::GetParticleData(this_00);
      FNiagaraDataSetAccessorStruct<FNiagaraID>::CreateReader(&local_f8,pFVar12,FVar9);
      if ((local_f8.bIsValid != false) && (local_d8[0].bIsValid != false)) {
        local_res20 = 0;
        if (param_1->NumInstances < 1) {
          return;
        }
        do {
          iVar13 = *local_188.ParticleIDAcquireTagParam.InputPtr;
          iVar1 = *local_188.ParticleIDIndexParam.InputPtr;
          local_188.ParticleIDAcquireTagParam.InputPtr =
               local_188.ParticleIDAcquireTagParam.InputPtr +
               local_188.ParticleIDAcquireTagParam.AdvanceOffset;
          local_188.ParticleIDIndexParam.InputPtr =
               local_188.ParticleIDIndexParam.InputPtr +
               local_188.ParticleIDIndexParam.AdvanceOffset;
          iVar11 = 1;
          fVar14 = fVar5;
          fVar15 = fVar6;
          fVar16 = fVar7;
          fVar17 = fVar8;
          if ((-1 < iVar1) && (iVar1 < (pFVar3->IDToIndexTable).ArrayNum)) {
            if ((iVar1 < 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar2 = *(int *)((pFVar3->IDToIndexTable).AllocatorInstance.Data + (longlong)iVar1 * 4);
            iVar11 = 1;
            if ((-1 < iVar2) && (iVar2 < (int)local_198)) {
              if ((local_f8.bIsValid == false) ||
                 (((local_f8.NumInstances <= iVar2 || (local_f8.Int32Components[iVar2] != iVar1)) ||
                  (local_f8.Int32Components[local_f8.ComponentStride + iVar2] != iVar13)))) {
                iVar11 = 1;
              }
              else if ((local_d8[0].bIsValid == false) || (local_d8[0].NumInstances <= iVar2)) {
                local_1a8.X = fVar5;
                local_1a8.Y = fVar6;
                local_1a8.Z = fVar7;
                local_1a8.W = fVar8;
                iVar11 = 0;
              }
              else {
                FNiagaraDataSetReaderFloat<UE::Math::TQuat<float>_>::Get(local_d8,&local_1a8,iVar2);
                iVar11 = 0;
                fVar14 = local_1a8.X;
                fVar15 = local_1a8.Y;
                fVar16 = local_1a8.Z;
                fVar17 = local_1a8.W;
              }
            }
          }
          local_res20 = local_res20 + 1;
          (local_188.OutValid.Data.Register)->Value = iVar11 + -1;
          local_188.OutValid.Data.Register =
               local_188.OutValid.Data.Register + local_188.OutValid.Data.AdvanceOffset;
          *local_188.OutValue.X.Register = fVar14;
          local_188.OutValue.X.Register =
               local_188.OutValue.X.Register + local_188.OutValue.X.AdvanceOffset;
          *local_188.OutValue.Y.Register = fVar15;
          local_188.OutValue.Y.Register =
               local_188.OutValue.Y.Register + local_188.OutValue.Y.AdvanceOffset;
          *local_188.OutValue.Z.Register = fVar16;
          local_188.OutValue.Z.Register =
               local_188.OutValue.Z.Register + local_188.OutValue.Z.AdvanceOffset;
          *local_188.OutValue.W.Register = fVar17;
          local_188.OutValue.W.Register =
               local_188.OutValue.W.Register + local_188.OutValue.W.AdvanceOffset;
          if (param_1->NumInstances <= local_res20) {
            return;
          }
        } while( true );
      }
    }
  }
  iVar13 = 0;
  if (0 < param_1->NumInstances) {
    do {
      iVar13 = iVar13 + 1;
      (local_188.OutValid.Data.Register)->Value = 0;
      *local_188.OutValue.X.Register = fVar5;
      *local_188.OutValue.Y.Register = fVar6;
      *local_188.OutValue.Z.Register = fVar7;
      *local_188.OutValue.W.Register = fVar8;
      local_188.OutValue.W.Register =
           local_188.OutValue.W.Register + local_188.OutValue.W.AdvanceOffset;
      local_188.OutValue.Z.Register =
           local_188.OutValue.Z.Register + local_188.OutValue.Z.AdvanceOffset;
      local_188.OutValue.Y.Register =
           local_188.OutValue.Y.Register + local_188.OutValue.Y.AdvanceOffset;
      local_188.OutValue.X.Register =
           local_188.OutValue.X.Register + local_188.OutValue.X.AdvanceOffset;
      local_188.OutValid.Data.Register =
           local_188.OutValid.Data.Register + local_188.OutValid.Data.AdvanceOffset;
    } while (iVar13 < param_1->NumInstances);
  }
  return;
}

// ReadQuatByIndex @ 1491dc160

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
UNiagaraDataInterfaceParticleRead::ReadQuatByIndex
          (UNiagaraDataInterfaceParticleRead *this,FVectorVMExternalFunctionContext *param_1,
          FName param_2)

{
  uint uVar1;
  float fVar2;
  FNiagaraEmitterInstance *this_00;
  FNiagaraDataBuffer *pFVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  FNiagaraDataSet *pFVar10;
  int iVar11;
  longlong lVar12;
  float *pfVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float *local_res10;
  float *local_res20;
  TQuat<float> local_178;
  float *local_168;
  float *local_160;
  float *local_158;
  FUserPtrHandler<FNDIParticleRead_InstanceData> local_148;
  float *local_138;
  float *local_130;
  int local_128 [2];
  float *local_120;
  int local_118 [2];
  FNDIOutputParam<UE::Math::TQuat<float>_> local_110;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  FNiagaraDataSetReaderFloat<UE::Math::TQuat<float>_> local_a8 [2];
  
  fVar8 = UE::Math::TQuat<float>::Identity.W;
  fVar7 = UE::Math::TQuat<float>::Identity.Z;
  fVar6 = UE::Math::TQuat<float>::Identity.Y;
  fVar5 = UE::Math::TQuat<float>::Identity.X;
  VectorVM::FUserPtrHandler<FNDIParticleRead_InstanceData>::
  FUserPtrHandler<FNDIParticleRead_InstanceData>(&local_148,param_1);
  iVar19 = 0;
  local_128[0] = 0;
  local_138 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_128);
  local_118[0] = 0;
  local_138 = local_138 + local_128[0] * param_1->PerInstanceFnInstanceIdx;
  local_130 = local_138;
  local_120 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_118);
  local_120 = local_120 + local_118[0] * param_1->PerInstanceFnInstanceIdx;
  FNDIOutputParam<UE::Math::TQuat<float>_>::FNDIOutputParam<UE::Math::TQuat<float>_>
            (&local_110,param_1);
  this_00 = (local_148.Ptr)->EmitterInstance;
  if (this_00 != (FNiagaraEmitterInstance *)0x0) {
    if ((this_00->ParticleDataSet == (FNiagaraDataSet *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("ParticleDataSet",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraEmitterInstance.h"
                           ,0x39,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = this_00->ParticleDataSet->CurrentData;
    if (((pFVar3 != (FNiagaraDataBuffer *)0x0) && (uVar1 = pFVar3->NumInstances, uVar1 != 0)) &&
       (this_00->GPUExecContext == (FNiagaraComputeExecutionContext *)0x0)) {
      pFVar10 = FNiagaraEmitterInstance::GetParticleData(this_00);
      FNiagaraDataSetAccessorFloat<UE::Math::TQuat<float>_>::CreateReader(local_a8,pFVar10,param_2);
      if (local_a8[0].bIsValid != false) {
        if (param_1->NumInstances < 1) {
          return;
        }
        lVar14 = (longlong)local_128[0];
        lVar18 = (longlong)local_118[0];
        local_158 = local_110.W.Register;
        local_160 = local_110.Z.Register;
        local_168 = local_110.Y.Register;
        lVar12 = (longlong)local_110.X.AdvanceOffset << 2;
        lVar15 = (longlong)local_110.Y.AdvanceOffset << 2;
        lVar16 = (longlong)local_110.Z.AdvanceOffset << 2;
        local_res20 = local_110.X.Register;
        lVar17 = (longlong)local_110.W.AdvanceOffset << 2;
        local_res10 = local_120;
        pfVar13 = local_138;
        local_c8 = lVar12;
        local_c0 = lVar15;
        local_b8 = lVar16;
        local_b0 = lVar17;
        do {
          fVar2 = *pfVar13;
          pfVar13 = pfVar13 + lVar14;
          iVar11 = 1;
          fVar20 = fVar5;
          fVar21 = fVar6;
          fVar22 = fVar7;
          fVar23 = fVar8;
          if ((-1 < (int)fVar2) && ((int)fVar2 < (int)uVar1)) {
            if ((int)fVar2 < local_a8[0].NumInstances) {
              FNiagaraDataSetReaderFloat<UE::Math::TQuat<float>_>::Get
                        (local_a8,&local_178,(int)fVar2);
              lVar12 = local_c8;
              lVar15 = local_c0;
              lVar16 = local_b8;
              lVar17 = local_b0;
            }
            else {
              local_178.X = fVar5;
              local_178.Z = fVar7;
              local_178.W = fVar8;
              local_178.Y = fVar6;
            }
            iVar11 = 0;
            fVar20 = local_178.X;
            fVar21 = local_178.Y;
            fVar22 = local_178.Z;
            fVar23 = local_178.W;
          }
          iVar19 = iVar19 + 1;
          *local_res10 = (float)(iVar11 + -1);
          local_res10 = local_res10 + lVar18;
          *local_res20 = fVar20;
          local_res20 = (float *)((longlong)local_res20 + lVar12);
          *local_168 = fVar21;
          local_168 = (float *)(lVar15 + (longlong)local_168);
          *local_160 = fVar22;
          local_160 = (float *)((longlong)local_160 + lVar16);
          *local_158 = fVar23;
          local_158 = (float *)((longlong)local_158 + lVar17);
        } while (iVar19 < param_1->NumInstances);
        return;
      }
    }
  }
  if (0 < param_1->NumInstances) {
    do {
      iVar19 = iVar19 + 1;
      *local_120 = 0.0;
      *local_110.X.Register = fVar5;
      *local_110.Y.Register = fVar6;
      *local_110.Z.Register = fVar7;
      *local_110.W.Register = fVar8;
      local_110.W.Register = local_110.W.Register + local_110.W.AdvanceOffset;
      local_110.Z.Register = local_110.Z.Register + local_110.Z.AdvanceOffset;
      local_110.Y.Register = local_110.Y.Register + local_110.Y.AdvanceOffset;
      local_110.X.Register = local_110.X.Register + local_110.X.AdvanceOffset;
      local_120 = local_120 + local_118[0];
    } while (iVar19 < param_1->NumInstances);
  }
  return;
}

// ReadVector2 @ 1491dc510

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
UNiagaraDataInterfaceParticleRead::ReadVector2
          (UNiagaraDataInterfaceParticleRead *this,FVectorVMExternalFunctionContext *param_1,
          FName param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  FNiagaraEmitterInstance *this_00;
  FNiagaraDataBuffer *pFVar5;
  code *pcVar6;
  TVector2<float> TVar7;
  FName FVar8;
  bool bVar9;
  FNiagaraDataSet *pFVar10;
  TVector2<float> TVar11;
  TVector2<float>_u_0 TVar12;
  int iVar13;
  int iVar14;
  float local_res20;
  float fStackX_24;
  FNiagaraDataSetReaderStruct<FNiagaraID> local_d8;
  FDirectReadParamHandler<UE::Math::TVector2<float>_> local_b8;
  undefined1 local_48 [8];
  FNiagaraDataSetReaderFloat<UE::Math::TVector2<float>_> local_40;
  
  TVar7.field0_0x0 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  FDirectReadParamHandler<UE::Math::TVector2<float>_>::
  FDirectReadParamHandler<UE::Math::TVector2<float>_>(&local_b8,param_1);
  this_00 = (local_b8.InstanceData.Ptr)->EmitterInstance;
  if (this_00 != (FNiagaraEmitterInstance *)0x0) {
    if ((this_00->ParticleDataSet == (FNiagaraDataSet *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("ParticleDataSet",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraEmitterInstance.h"
                           ,0x39,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar5 = this_00->ParticleDataSet->CurrentData;
    if (((pFVar5 != (FNiagaraDataBuffer *)0x0) &&
        (this_00->GPUExecContext == (FNiagaraComputeExecutionContext *)0x0)) &&
       (uVar1 = pFVar5->NumInstances, 0 < (pFVar5->IDToIndexTable).ArrayNum)) {
      pFVar10 = FNiagaraEmitterInstance::GetParticleData(this_00);
      FNiagaraDataSetAccessorFloat<UE::Math::TVector2<float>_>::CreateReader
                (&local_40,pFVar10,param_2);
      FVar8 = ParticleReadIDName;
      pFVar10 = FNiagaraEmitterInstance::GetParticleData(this_00);
      FNiagaraDataSetAccessorStruct<FNiagaraID>::CreateReader(&local_d8,pFVar10,FVar8);
      if ((local_d8.bIsValid != false) && (local_40.bIsValid != false)) {
        iVar14 = 0;
        if (param_1->NumInstances < 1) {
          return;
        }
        do {
          iVar2 = *local_b8.ParticleIDAcquireTagParam.InputPtr;
          iVar3 = *local_b8.ParticleIDIndexParam.InputPtr;
          local_b8.ParticleIDAcquireTagParam.InputPtr =
               local_b8.ParticleIDAcquireTagParam.InputPtr +
               local_b8.ParticleIDAcquireTagParam.AdvanceOffset;
          iVar13 = 1;
          local_b8.ParticleIDIndexParam.InputPtr =
               local_b8.ParticleIDIndexParam.InputPtr + local_b8.ParticleIDIndexParam.AdvanceOffset;
          TVar12 = TVar7.field0_0x0;
          if ((-1 < iVar3) && (iVar3 < (pFVar5->IDToIndexTable).ArrayNum)) {
            if ((iVar3 < 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar13 = 1;
            uVar4 = *(uint *)((pFVar5->IDToIndexTable).AllocatorInstance.Data + (longlong)iVar3 * 4)
            ;
            if (((((-1 < (int)uVar4) && ((int)uVar4 < (int)uVar1)) && (local_d8.bIsValid != false))
                && (((int)uVar4 < local_d8.NumInstances &&
                    (local_d8.Int32Components[(int)uVar4] == iVar3)))) &&
               (local_d8.Int32Components[(int)(local_d8.ComponentStride + uVar4)] == iVar2)) {
              TVar11 = FNiagaraDataSetReaderFloat<UE::Math::TVector2<float>_>::GetSafe
                                 (&local_40,(int)local_48,(TVector2<float> *)(ulonglong)uVar4);
              iVar13 = 0;
                    /* WARNING: Load size is inaccurate */
              TVar12._s_0 = *TVar11.field0_0x0;
            }
          }
          iVar14 = iVar14 + 1;
          local_res20 = TVar12._s_0.X;
          (local_b8.OutValid.Data.Register)->Value = iVar13 + -1;
          fStackX_24 = TVar12._s_0.Y;
          *local_b8.OutValue.X.Register = local_res20;
          local_b8.OutValue.X.Register =
               local_b8.OutValue.X.Register + local_b8.OutValue.X.AdvanceOffset;
          *local_b8.OutValue.Y.Register = fStackX_24;
          local_b8.OutValue.Y.Register =
               local_b8.OutValue.Y.Register + local_b8.OutValue.Y.AdvanceOffset;
          local_b8.OutValid.Data.Register =
               local_b8.OutValid.Data.Register + local_b8.OutValid.Data.AdvanceOffset;
          if (param_1->NumInstances <= iVar14) {
            return;
          }
        } while( true );
      }
    }
  }
  iVar14 = 0;
  if (0 < param_1->NumInstances) {
    fStackX_24 = TVar7.field0_0x0._4_4_;
    local_res20 = TVar7.field0_0x0._0_4_;
    do {
      iVar14 = iVar14 + 1;
      (local_b8.OutValid.Data.Register)->Value = 0;
      *local_b8.OutValue.X.Register = local_res20;
      *local_b8.OutValue.Y.Register = fStackX_24;
      local_b8.OutValue.Y.Register =
           local_b8.OutValue.Y.Register + local_b8.OutValue.Y.AdvanceOffset;
      local_b8.OutValue.X.Register =
           local_b8.OutValue.X.Register + local_b8.OutValue.X.AdvanceOffset;
      local_b8.OutValid.Data.Register =
           local_b8.OutValid.Data.Register + local_b8.OutValid.Data.AdvanceOffset;
    } while (iVar14 < param_1->NumInstances);
  }
  return;
}

// ReadVector2ByIndex @ 1491dc820

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
UNiagaraDataInterfaceParticleRead::ReadVector2ByIndex
          (UNiagaraDataInterfaceParticleRead *this,FVectorVMExternalFunctionContext *param_1,
          FName param_2)

{
  uint uVar1;
  float fVar2;
  FNiagaraEmitterInstance *this_00;
  FNiagaraDataBuffer *pFVar3;
  code *pcVar4;
  TVector2<float> TVar5;
  bool bVar6;
  FNiagaraDataSet *pFVar7;
  TVector2<float> TVar8;
  TVector2<float>_u_0 TVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  float *pfVar13;
  longlong lVar14;
  longlong lVar15;
  float *pfVar16;
  float local_res10;
  float fStackX_14;
  float *local_e0;
  float local_d8;
  float fStack_d4;
  FUserPtrHandler<FNDIParticleRead_InstanceData> local_c8;
  float *local_b8;
  float *local_b0;
  int local_a8 [2];
  float *local_a0;
  int local_98 [2];
  FNDIOutputParam<UE::Math::TVector2<float>_> local_90;
  longlong local_68;
  longlong local_60;
  undefined1 local_58 [8];
  FNiagaraDataSetReaderFloat<UE::Math::TVector2<float>_> local_50;
  
  TVar5.field0_0x0 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  VectorVM::FUserPtrHandler<FNDIParticleRead_InstanceData>::
  FUserPtrHandler<FNDIParticleRead_InstanceData>(&local_c8,param_1);
  iVar11 = 0;
  local_a8[0] = 0;
  local_b8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_a8);
  local_98[0] = 0;
  local_b8 = local_b8 + local_a8[0] * param_1->PerInstanceFnInstanceIdx;
  local_b0 = local_b8;
  local_a0 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_98);
  local_a0 = local_a0 + local_98[0] * param_1->PerInstanceFnInstanceIdx;
  FNDIOutputParam<UE::Math::TVector2<float>_>::FNDIOutputParam<UE::Math::TVector2<float>_>
            (&local_90,param_1);
  this_00 = (local_c8.Ptr)->EmitterInstance;
  if (this_00 != (FNiagaraEmitterInstance *)0x0) {
    if ((this_00->ParticleDataSet == (FNiagaraDataSet *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ParticleDataSet",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraEmitterInstance.h"
                           ,0x39,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = this_00->ParticleDataSet->CurrentData;
    if (((pFVar3 != (FNiagaraDataBuffer *)0x0) && (uVar1 = pFVar3->NumInstances, uVar1 != 0)) &&
       (this_00->GPUExecContext == (FNiagaraComputeExecutionContext *)0x0)) {
      pFVar7 = FNiagaraEmitterInstance::GetParticleData(this_00);
      FNiagaraDataSetAccessorFloat<UE::Math::TVector2<float>_>::CreateReader
                (&local_50,pFVar7,param_2);
      if (local_50.bIsValid != false) {
        if (param_1->NumInstances < 1) {
          return;
        }
        lVar14 = (longlong)local_a8[0];
        local_68 = (longlong)local_90.X.AdvanceOffset << 2;
        lVar15 = (longlong)local_98[0];
        local_60 = (longlong)local_90.Y.AdvanceOffset << 2;
        local_e0 = local_90.Y.Register;
        pfVar12 = local_90.X.Register;
        pfVar13 = local_a0;
        pfVar16 = local_b8;
        do {
          fVar2 = *pfVar16;
          pfVar16 = pfVar16 + lVar14;
          iVar10 = 1;
          TVar9 = TVar5.field0_0x0;
          if ((-1 < (int)fVar2) && ((int)fVar2 < (int)uVar1)) {
            TVar8 = FNiagaraDataSetReaderFloat<UE::Math::TVector2<float>_>::GetSafe
                              (&local_50,(int)local_58,(TVector2<float> *)(ulonglong)(uint)fVar2);
            iVar10 = 0;
                    /* WARNING: Load size is inaccurate */
            TVar9._s_0 = *TVar8.field0_0x0;
          }
          local_d8 = TVar9._s_0.X;
          *pfVar13 = (float)(iVar10 + -1);
          iVar11 = iVar11 + 1;
          *pfVar12 = local_d8;
          fStack_d4 = TVar9._s_0.Y;
          *local_e0 = fStack_d4;
          pfVar12 = (float *)(local_68 + (longlong)pfVar12);
          pfVar13 = pfVar13 + lVar15;
          local_e0 = (float *)(local_60 + (longlong)local_e0);
        } while (iVar11 < param_1->NumInstances);
        return;
      }
    }
  }
  if (0 < param_1->NumInstances) {
    fStackX_14 = TVar5.field0_0x0._4_4_;
    local_res10 = TVar5.field0_0x0._0_4_;
    do {
      iVar11 = iVar11 + 1;
      *local_a0 = 0.0;
      *local_90.X.Register = local_res10;
      *local_90.Y.Register = fStackX_14;
      local_90.Y.Register = local_90.Y.Register + local_90.Y.AdvanceOffset;
      local_90.X.Register = local_90.X.Register + local_90.X.AdvanceOffset;
      local_a0 = local_a0 + local_98[0];
    } while (iVar11 < param_1->NumInstances);
  }
  return;
}

// ReadVector3 @ 1491dcaa0

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
UNiagaraDataInterfaceParticleRead::ReadVector3
          (UNiagaraDataInterfaceParticleRead *this,FVectorVMExternalFunctionContext *param_1,
          FName param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  FNiagaraEmitterInstance *this_00;
  FNiagaraDataBuffer *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  FName FVar9;
  bool bVar10;
  int iVar11;
  FNiagaraDataSet *pFVar12;
  int iVar13;
  undefined4 uVar14;
  char cVar15;
  int local_res20;
  undefined8 local_118;
  TVector<float>_u_0 local_104;
  FNiagaraDataSetReaderStruct<FNiagaraID> local_f8;
  FDirectReadParamHandler<UE::Math::TVector<float>_> local_d8;
  FNiagaraDataSetReaderFloat<UE::Math::TVector<float>_> local_58;
  
  uVar8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  uVar7 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  FDirectReadParamHandler<UE::Math::TVector<float>_>::
  FDirectReadParamHandler<UE::Math::TVector<float>_>(&local_d8,param_1);
  this_00 = (local_d8.InstanceData.Ptr)->EmitterInstance;
  if (this_00 != (FNiagaraEmitterInstance *)0x0) {
    if ((this_00->ParticleDataSet == (FNiagaraDataSet *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ParticleDataSet",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraEmitterInstance.h"
                            ,0x39,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar5 = this_00->ParticleDataSet->CurrentData;
    if (((pFVar5 != (FNiagaraDataBuffer *)0x0) &&
        (this_00->GPUExecContext == (FNiagaraComputeExecutionContext *)0x0)) &&
       (uVar2 = pFVar5->NumInstances, 0 < (pFVar5->IDToIndexTable).ArrayNum)) {
      pFVar12 = FNiagaraEmitterInstance::GetParticleData(this_00);
      FNiagaraDataSetAccessorFloat<UE::Math::TVector<float>_>::CreateReader
                (&local_58,pFVar12,param_2);
      FVar9 = ParticleReadIDName;
      pFVar12 = FNiagaraEmitterInstance::GetParticleData(this_00);
      FNiagaraDataSetAccessorStruct<FNiagaraID>::CreateReader(&local_f8,pFVar12,FVar9);
      if ((local_f8.bIsValid != false) && (local_58.bIsValid != false)) {
        local_res20 = 0;
        cVar15 = local_f8.bIsValid;
        if (param_1->NumInstances < 1) {
          return;
        }
        do {
          local_118 = uVar7;
          iVar13 = *local_d8.ParticleIDIndexParam.InputPtr;
          piVar1 = local_d8.ParticleIDAcquireTagParam.InputPtr +
                   local_d8.ParticleIDAcquireTagParam.AdvanceOffset;
          local_d8.ParticleIDIndexParam.InputPtr =
               local_d8.ParticleIDIndexParam.InputPtr + local_d8.ParticleIDIndexParam.AdvanceOffset;
          iVar3 = *local_d8.ParticleIDAcquireTagParam.InputPtr;
          iVar11 = 1;
          uVar14 = uVar8;
          local_d8.ParticleIDAcquireTagParam.InputPtr = piVar1;
          if ((-1 < iVar13) && (iVar13 < (pFVar5->IDToIndexTable).ArrayNum)) {
            if ((iVar13 < 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               cVar15 = local_f8.bIsValid, bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar4 = *(int *)((pFVar5->IDToIndexTable).AllocatorInstance.Data + (longlong)iVar13 * 4)
            ;
            iVar11 = 1;
            if ((-1 < iVar4) && (iVar4 < (int)uVar2)) {
              if ((cVar15 == '\0') ||
                 (((local_f8.NumInstances <= iVar4 || (local_f8.Int32Components[iVar4] != iVar13))
                  || (local_f8.Int32Components[local_f8.ComponentStride + iVar4] != iVar3)))) {
                iVar11 = 1;
              }
              else if ((local_58.bIsValid == false) || (local_58.NumInstances <= iVar4)) {
                local_104._0_8_ = uVar7;
                iVar11 = 0;
                local_104._s_0.Z = (float)uVar8;
              }
              else {
                FNiagaraDataSetReaderFloat<UE::Math::TVector<float>_>::Get
                          (&local_58,(TVector<float> *)&local_104._s_0,iVar4);
                iVar11 = 0;
                local_118 = local_104._0_8_;
                cVar15 = local_f8.bIsValid;
                uVar14 = local_104._s_0.Z;
              }
            }
          }
          local_res20 = local_res20 + 1;
          (local_d8.OutValid.Data.Register)->Value = iVar11 + -1;
          local_d8.OutValid.Data.Register =
               local_d8.OutValid.Data.Register + local_d8.OutValid.Data.AdvanceOffset;
          *local_d8.OutValue.X.Register = (float)local_118;
          local_d8.OutValue.X.Register =
               local_d8.OutValue.X.Register + local_d8.OutValue.X.AdvanceOffset;
          *local_d8.OutValue.Y.Register = local_118._4_4_;
          local_d8.OutValue.Y.Register =
               local_d8.OutValue.Y.Register + local_d8.OutValue.Y.AdvanceOffset;
          *local_d8.OutValue.Z.Register = (float)uVar14;
          local_d8.OutValue.Z.Register =
               local_d8.OutValue.Z.Register + local_d8.OutValue.Z.AdvanceOffset;
          if (param_1->NumInstances <= local_res20) {
            return;
          }
        } while( true );
      }
    }
  }
  iVar13 = 0;
  if (0 < param_1->NumInstances) {
    local_118._4_4_ = (float)((ulonglong)uVar7 >> 0x20);
    local_118._0_4_ = (float)uVar7;
    do {
      iVar13 = iVar13 + 1;
      (local_d8.OutValid.Data.Register)->Value = 0;
      *local_d8.OutValue.X.Register = (float)local_118;
      *local_d8.OutValue.Y.Register = local_118._4_4_;
      *local_d8.OutValue.Z.Register = (float)uVar8;
      local_d8.OutValue.Z.Register =
           local_d8.OutValue.Z.Register + local_d8.OutValue.Z.AdvanceOffset;
      local_d8.OutValue.Y.Register =
           local_d8.OutValue.Y.Register + local_d8.OutValue.Y.AdvanceOffset;
      local_d8.OutValue.X.Register =
           local_d8.OutValue.X.Register + local_d8.OutValue.X.AdvanceOffset;
      local_d8.OutValid.Data.Register =
           local_d8.OutValid.Data.Register + local_d8.OutValid.Data.AdvanceOffset;
    } while (iVar13 < param_1->NumInstances);
  }
  return;
}

// ReadVector3ByIndex @ 1491dce30

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
UNiagaraDataInterfaceParticleRead::ReadVector3ByIndex
          (UNiagaraDataInterfaceParticleRead *this,FVectorVMExternalFunctionContext *param_1,
          FName param_2)

{
  uint uVar1;
  float fVar2;
  FNiagaraEmitterInstance *this_00;
  FNiagaraDataBuffer *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  bool bVar7;
  FNiagaraDataSet *pFVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  float *pfVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  float *local_res10;
  float *local_res20;
  float local_138;
  float fStack_134;
  TVector<float>_u_0 local_128;
  float *local_118;
  float *local_110;
  undefined8 local_108;
  FUserPtrHandler<FNDIParticleRead_InstanceData> local_f8;
  float *local_e8;
  float *local_e0;
  int local_d8 [2];
  float *local_d0;
  int local_c8 [2];
  FNDIOutputParam<UE::Math::TVector<float>_> local_c0;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  FNiagaraDataSetReaderFloat<UE::Math::TVector<float>_> local_70;
  
  uVar6 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  uVar5 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  VectorVM::FUserPtrHandler<FNDIParticleRead_InstanceData>::
  FUserPtrHandler<FNDIParticleRead_InstanceData>(&local_f8,param_1);
  iVar11 = 0;
  local_d8[0] = 0;
  local_e8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_d8);
  local_c8[0] = 0;
  local_e8 = local_e8 + local_d8[0] * param_1->PerInstanceFnInstanceIdx;
  local_e0 = local_e8;
  local_d0 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_c8);
  local_d0 = local_d0 + local_c8[0] * param_1->PerInstanceFnInstanceIdx;
  FNDIOutputParam<UE::Math::TVector<float>_>::FNDIOutputParam<UE::Math::TVector<float>_>
            (&local_c0,param_1);
  this_00 = (local_f8.Ptr)->EmitterInstance;
  if (this_00 != (FNiagaraEmitterInstance *)0x0) {
    if ((this_00->ParticleDataSet == (FNiagaraDataSet *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ParticleDataSet",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraEmitterInstance.h"
                           ,0x39,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = this_00->ParticleDataSet->CurrentData;
    if (((pFVar3 != (FNiagaraDataBuffer *)0x0) && (uVar1 = pFVar3->NumInstances, uVar1 != 0)) &&
       (this_00->GPUExecContext == (FNiagaraComputeExecutionContext *)0x0)) {
      pFVar8 = FNiagaraEmitterInstance::GetParticleData(this_00);
      FNiagaraDataSetAccessorFloat<UE::Math::TVector<float>_>::CreateReader
                (&local_70,pFVar8,param_2);
      if (local_70.bIsValid != false) {
        if (param_1->NumInstances < 1) {
          return;
        }
        lVar16 = (longlong)local_d8[0];
        lVar13 = (longlong)local_c8[0] << 2;
        lVar14 = (longlong)local_c0.X.AdvanceOffset << 2;
        lVar15 = (longlong)local_c0.Y.AdvanceOffset << 2;
        local_110 = local_c0.Z.Register;
        local_118 = local_c0.Y.Register;
        local_res20 = local_c0.X.Register;
        local_res10 = local_d0;
        pfVar12 = local_e8;
        local_88 = lVar13;
        local_80 = lVar14;
        local_78 = lVar15;
        do {
          fVar2 = *pfVar12;
          pfVar12 = pfVar12 + lVar16;
          local_108 = uVar5;
          iVar9 = 1;
          uVar10 = uVar6;
          if ((-1 < (int)fVar2) && ((int)fVar2 < (int)uVar1)) {
            if ((int)fVar2 < local_70.NumInstances) {
              FNiagaraDataSetReaderFloat<UE::Math::TVector<float>_>::Get
                        (&local_70,(TVector<float> *)&local_128._s_0,(int)fVar2);
              lVar13 = local_88;
              lVar14 = local_80;
              lVar15 = local_78;
            }
            else {
              local_128._0_8_ = uVar5;
              local_128._s_0.Z = (float)uVar6;
            }
            iVar9 = 0;
            uVar10 = local_128._s_0.Z;
            local_108 = local_128._0_8_;
          }
          iVar11 = iVar11 + 1;
          *local_res10 = (float)(iVar9 + -1);
          local_res10 = (float *)(lVar13 + (longlong)local_res10);
          *local_res20 = (float)local_108;
          local_res20 = (float *)((longlong)local_res20 + lVar14);
          *local_118 = local_108._4_4_;
          local_118 = (float *)(lVar15 + (longlong)local_118);
          *local_110 = (float)uVar10;
          local_110 = local_110 + local_c0.Z.AdvanceOffset;
        } while (iVar11 < param_1->NumInstances);
        return;
      }
    }
  }
  if (0 < param_1->NumInstances) {
    fStack_134 = (float)((ulonglong)uVar5 >> 0x20);
    local_138 = (float)uVar5;
    do {
      iVar11 = iVar11 + 1;
      *local_d0 = 0.0;
      *local_c0.X.Register = local_138;
      *local_c0.Y.Register = fStack_134;
      *local_c0.Z.Register = (float)uVar6;
      local_c0.Z.Register = local_c0.Z.Register + local_c0.Z.AdvanceOffset;
      local_c0.Y.Register = local_c0.Y.Register + local_c0.Y.AdvanceOffset;
      local_c0.X.Register = local_c0.X.Register + local_c0.X.AdvanceOffset;
      local_d0 = local_d0 + local_c8[0];
    } while (iVar11 < param_1->NumInstances);
  }
  return;
}

// ReadVector4 @ 1491dd140

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
UNiagaraDataInterfaceParticleRead::ReadVector4
          (UNiagaraDataInterfaceParticleRead *this,FVectorVMExternalFunctionContext *param_1,
          FName param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FNiagaraEmitterInstance *this_00;
  FNiagaraDataBuffer *pFVar4;
  code *pcVar5;
  FName FVar6;
  bool bVar7;
  int iVar8;
  FNiagaraDataSet *pFVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int local_res20;
  FDirectReadParamHandler<UE::Math::TVector4<float>_> local_148;
  FNiagaraDataSetReaderStruct<FNiagaraID> local_b8;
  TVector4<float>_u_0 local_98;
  FNiagaraDataSetReaderFloat<UE::Math::TVector4<float>_> local_88 [2];
  
  FDirectReadParamHandler<UE::Math::TVector4<float>_>::
  FDirectReadParamHandler<UE::Math::TVector4<float>_>(&local_148,param_1);
  this_00 = (local_148.InstanceData.Ptr)->EmitterInstance;
  if (this_00 != (FNiagaraEmitterInstance *)0x0) {
    if ((this_00->ParticleDataSet == (FNiagaraDataSet *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ParticleDataSet",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraEmitterInstance.h"
                           ,0x39,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar4 = this_00->ParticleDataSet->CurrentData;
    if (((pFVar4 != (FNiagaraDataBuffer *)0x0) &&
        (this_00->GPUExecContext == (FNiagaraComputeExecutionContext *)0x0)) &&
       (uVar1 = pFVar4->NumInstances, 0 < (pFVar4->IDToIndexTable).ArrayNum)) {
      pFVar9 = FNiagaraEmitterInstance::GetParticleData(this_00);
      FNiagaraDataSetAccessorFloat<UE::Math::TVector4<float>_>::CreateReader
                (local_88,pFVar9,param_2);
      FVar6 = ParticleReadIDName;
      pFVar9 = FNiagaraEmitterInstance::GetParticleData(this_00);
      FNiagaraDataSetAccessorStruct<FNiagaraID>::CreateReader(&local_b8,pFVar9,FVar6);
      if ((local_b8.bIsValid != false) && (local_88[0].bIsValid != false)) {
        local_res20 = 0;
        if (param_1->NumInstances < 1) {
          return;
        }
        do {
          uVar11 = 0.0;
          uVar12 = 0.0;
          uVar13 = 0.0;
          uVar14 = 0.0;
          iVar10 = *local_148.ParticleIDAcquireTagParam.InputPtr;
          iVar2 = *local_148.ParticleIDIndexParam.InputPtr;
          local_148.ParticleIDAcquireTagParam.InputPtr =
               local_148.ParticleIDAcquireTagParam.InputPtr +
               local_148.ParticleIDAcquireTagParam.AdvanceOffset;
          local_148.ParticleIDIndexParam.InputPtr =
               local_148.ParticleIDIndexParam.InputPtr +
               local_148.ParticleIDIndexParam.AdvanceOffset;
          iVar8 = 1;
          if ((-1 < iVar2) && (iVar2 < (pFVar4->IDToIndexTable).ArrayNum)) {
            if ((iVar2 < 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar3 = *(int *)((pFVar4->IDToIndexTable).AllocatorInstance.Data + (longlong)iVar2 * 4);
            iVar8 = 1;
            if ((-1 < iVar3) && (iVar3 < (int)uVar1)) {
              if ((local_b8.bIsValid == false) ||
                 (((local_b8.NumInstances <= iVar3 || (local_b8.Int32Components[iVar3] != iVar2)) ||
                  (local_b8.Int32Components[local_b8.ComponentStride + iVar3] != iVar10)))) {
                iVar8 = 1;
              }
              else if ((local_88[0].bIsValid == false) || (local_88[0].NumInstances <= iVar3)) {
                uVar11 = 0.0;
                uVar12 = 0.0;
                uVar13 = 0.0;
                uVar14 = 0.0;
                local_98._0_8_ = 0;
                local_98._8_8_ = 0;
                iVar8 = 0;
              }
              else {
                FNiagaraDataSetReaderFloat<UE::Math::TVector4<float>_>::Get
                          (local_88,(TVector4<float> *)&local_98._s_0,iVar3);
                uVar11 = local_98._s_0.X;
                uVar12 = local_98._s_0.Y;
                uVar13 = local_98._s_0.Z;
                uVar14 = local_98._s_0.W;
                iVar8 = 0;
              }
            }
          }
          local_res20 = local_res20 + 1;
          (local_148.OutValid.Data.Register)->Value = iVar8 + -1;
          local_148.OutValid.Data.Register =
               local_148.OutValid.Data.Register + local_148.OutValid.Data.AdvanceOffset;
          *local_148.OutValue.X.Register = (float)uVar11;
          local_148.OutValue.X.Register =
               local_148.OutValue.X.Register + local_148.OutValue.X.AdvanceOffset;
          *local_148.OutValue.Y.Register = (float)uVar12;
          local_148.OutValue.Y.Register =
               local_148.OutValue.Y.Register + local_148.OutValue.Y.AdvanceOffset;
          *local_148.OutValue.Z.Register = (float)uVar13;
          local_148.OutValue.Z.Register =
               local_148.OutValue.Z.Register + local_148.OutValue.Z.AdvanceOffset;
          *local_148.OutValue.W.Register = (float)uVar14;
          local_148.OutValue.W.Register =
               local_148.OutValue.W.Register + local_148.OutValue.W.AdvanceOffset;
          if (param_1->NumInstances <= local_res20) {
            return;
          }
        } while( true );
      }
    }
  }
  iVar10 = 0;
  if (0 < param_1->NumInstances) {
    do {
      iVar10 = iVar10 + 1;
      (local_148.OutValid.Data.Register)->Value = 0;
      *local_148.OutValue.X.Register = 0.0;
      *local_148.OutValue.Y.Register = 0.0;
      *local_148.OutValue.Z.Register = 0.0;
      *local_148.OutValue.W.Register = 0.0;
      local_148.OutValue.W.Register =
           local_148.OutValue.W.Register + local_148.OutValue.W.AdvanceOffset;
      local_148.OutValue.Z.Register =
           local_148.OutValue.Z.Register + local_148.OutValue.Z.AdvanceOffset;
      local_148.OutValue.Y.Register =
           local_148.OutValue.Y.Register + local_148.OutValue.Y.AdvanceOffset;
      local_148.OutValue.X.Register =
           local_148.OutValue.X.Register + local_148.OutValue.X.AdvanceOffset;
      local_148.OutValid.Data.Register =
           local_148.OutValid.Data.Register + local_148.OutValid.Data.AdvanceOffset;
    } while (iVar10 < param_1->NumInstances);
  }
  return;
}

// ReadVector4ByIndex @ 1491dd4b0

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
UNiagaraDataInterfaceParticleRead::ReadVector4ByIndex
          (UNiagaraDataInterfaceParticleRead *this,FVectorVMExternalFunctionContext *param_1,
          FName param_2)

{
  uint uVar1;
  float fVar2;
  FNiagaraEmitterInstance *this_00;
  FNiagaraDataBuffer *pFVar3;
  code *pcVar4;
  bool bVar5;
  FNiagaraDataSet *pFVar6;
  int iVar7;
  longlong lVar8;
  float *pfVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float *local_res10;
  float *local_res20;
  float *local_148;
  float *local_140;
  float *local_138;
  FUserPtrHandler<FNDIParticleRead_InstanceData> local_128;
  float *local_118;
  float *local_110;
  int local_108 [2];
  float *local_100;
  int local_f8 [2];
  FNDIOutputParam<UE::Math::TVector4<float>_> local_f0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  TVector4<float>_u_0 local_88;
  FNiagaraDataSetReaderFloat<UE::Math::TVector4<float>_> local_78;
  
  VectorVM::FUserPtrHandler<FNDIParticleRead_InstanceData>::
  FUserPtrHandler<FNDIParticleRead_InstanceData>(&local_128,param_1);
  iVar14 = 0;
  local_108[0] = 0;
  local_118 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_108);
  local_f8[0] = 0;
  local_118 = local_118 + local_108[0] * param_1->PerInstanceFnInstanceIdx;
  local_110 = local_118;
  local_100 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_f8);
  local_100 = local_100 + local_f8[0] * param_1->PerInstanceFnInstanceIdx;
  FNDIOutputParam<UE::Math::TVector4<float>_>::FNDIOutputParam<UE::Math::TVector4<float>_>
            (&local_f0,param_1);
  this_00 = (local_128.Ptr)->EmitterInstance;
  if (this_00 != (FNiagaraEmitterInstance *)0x0) {
    if ((this_00->ParticleDataSet == (FNiagaraDataSet *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ParticleDataSet",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraEmitterInstance.h"
                           ,0x39,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = this_00->ParticleDataSet->CurrentData;
    if (((pFVar3 != (FNiagaraDataBuffer *)0x0) && (uVar1 = pFVar3->NumInstances, uVar1 != 0)) &&
       (this_00->GPUExecContext == (FNiagaraComputeExecutionContext *)0x0)) {
      pFVar6 = FNiagaraEmitterInstance::GetParticleData(this_00);
      FNiagaraDataSetAccessorFloat<UE::Math::TVector4<float>_>::CreateReader
                (&local_78,pFVar6,param_2);
      if (local_78.bIsValid != false) {
        if (param_1->NumInstances < 1) {
          return;
        }
        lVar10 = (longlong)local_108[0];
        lVar15 = (longlong)local_f8[0];
        local_138 = local_f0.W.Register;
        local_140 = local_f0.Z.Register;
        local_148 = local_f0.Y.Register;
        lVar8 = (longlong)local_f0.X.AdvanceOffset << 2;
        lVar11 = (longlong)local_f0.Y.AdvanceOffset << 2;
        lVar12 = (longlong)local_f0.Z.AdvanceOffset << 2;
        local_res20 = local_f0.X.Register;
        lVar13 = (longlong)local_f0.W.AdvanceOffset << 2;
        local_res10 = local_100;
        pfVar9 = local_118;
        local_a8 = lVar8;
        local_a0 = lVar11;
        local_98 = lVar12;
        local_90 = lVar13;
        do {
          fVar2 = *pfVar9;
          pfVar9 = pfVar9 + lVar10;
          iVar7 = 1;
          fVar16 = 0.0;
          fVar17 = 0.0;
          fVar18 = 0.0;
          fVar19 = 0.0;
          if ((-1 < (int)fVar2) && ((int)fVar2 < (int)uVar1)) {
            if ((int)fVar2 < local_78.NumInstances) {
              FNiagaraDataSetReaderFloat<UE::Math::TVector4<float>_>::Get
                        (&local_78,(TVector4<float> *)&local_88._s_0,(int)fVar2);
              lVar8 = local_a8;
              lVar11 = local_a0;
              lVar12 = local_98;
              lVar13 = local_90;
            }
            else {
              local_88._0_8_ = 0;
              local_88._8_8_ = 0;
              local_88._s_0.X = 0.0;
              local_88._s_0.Y = 0.0;
              local_88._s_0.Z = 0.0;
              local_88._s_0.W = 0.0;
            }
            iVar7 = 0;
            fVar16 = local_88._s_0.X;
            fVar17 = local_88._s_0.Y;
            fVar18 = local_88._s_0.Z;
            fVar19 = local_88._s_0.W;
          }
          iVar14 = iVar14 + 1;
          *local_res10 = (float)(iVar7 + -1);
          local_res10 = local_res10 + lVar15;
          *local_res20 = fVar16;
          local_res20 = (float *)(lVar8 + (longlong)local_res20);
          *local_148 = fVar17;
          local_148 = (float *)((longlong)local_148 + lVar11);
          *local_140 = fVar18;
          local_140 = (float *)(lVar12 + (longlong)local_140);
          *local_138 = fVar19;
          local_138 = (float *)((longlong)local_138 + lVar13);
        } while (iVar14 < param_1->NumInstances);
        return;
      }
    }
  }
  if (0 < param_1->NumInstances) {
    do {
      iVar14 = iVar14 + 1;
      *local_100 = 0.0;
      *local_f0.X.Register = 0.0;
      *local_f0.Y.Register = 0.0;
      *local_f0.Z.Register = 0.0;
      *local_f0.W.Register = 0.0;
      local_f0.W.Register = local_f0.W.Register + local_f0.W.AdvanceOffset;
      local_f0.Z.Register = local_f0.Z.Register + local_f0.Z.AdvanceOffset;
      local_f0.Y.Register = local_f0.Y.Register + local_f0.Y.AdvanceOffset;
      local_f0.X.Register = local_f0.X.Register + local_f0.X.AdvanceOffset;
      local_100 = local_100 + local_f8[0];
    } while (iVar14 < param_1->NumInstances);
  }
  return;
}

// SetShaderParameters @ 1491e02b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
UNiagaraDataInterfaceParticleRead::SetShaderParameters
          (UNiagaraDataInterfaceParticleRead *this,
          FNiagaraDataInterfaceSetShaderParametersContext *param_1)

{
  int iVar1;
  FNiagaraDataInterfaceProxy *pFVar2;
  FNiagaraDataInterfaceParametersCS_ParticleRead *pFVar3;
  FNiagaraComputeExecutionContext *pFVar4;
  FNiagaraDataSet *pFVar5;
  FNiagaraSimStageData *pFVar6;
  FSimulationStageMetaData *this_00;
  FNiagaraDataBuffer *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  int iVar12;
  FShaderParametersMetadata *pFVar13;
  ulong64 uVar14;
  FNDIParticleRead_RenderInstanceData *pFVar15;
  FRHIShaderResourceView *pFVar16;
  uint uVar17;
  uint uVar18;
  FNiagaraDataBuffer *pFVar19;
  uint *local_res18 [2];
  uchar *local_88;
  int local_80;
  uchar *local_78;
  int local_70;
  FString local_68;
  uint **local_58;
  uchar **local_50;
  uchar **local_48;
  
  if ((param_1->DataInterfaceProxy == (FNiagaraDataInterfaceProxy *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("DataInterfaceProxy",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                          ,0x1c1,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar2 = param_1->DataInterfaceProxy;
  if ((param_1->ShaderStorage == (FNiagaraDataInterfaceParametersCS *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ShaderStorage != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                          ,0x1f1,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar3 = (FNiagaraDataInterfaceParametersCS_ParticleRead *)param_1->ShaderStorage;
  iVar1 = (pFVar3->AttributeNames).ArrayNum;
  iVar12 = iVar1 + 3;
  iVar12 = (int)((iVar12 >> 0x1f & 3U) + iVar12) >> 2;
  if (iVar12 < 1) {
    iVar12 = 1;
  }
  uVar18 = param_1->ParametersOffset + 0xf & 0xfffffff0;
  pFVar13 = TShaderParameterStructTypeInfo<UNiagaraDataInterfaceParticleRead::FShaderParameters>::
            GetStructMetadata();
  local_res18[0] = (uint *)(param_1->BaseParameters + uVar18);
  uVar18 = pFVar13->Size + uVar18 + 0xf & 0xfffffff0;
  local_88 = param_1->BaseParameters + uVar18;
  param_1->ParametersOffset = iVar12 * 0x10 + uVar18;
  local_80 = iVar12;
  if ((iVar12 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar18 = param_1->ParametersOffset + 0xf & 0xfffffff0;
  local_78 = param_1->BaseParameters + uVar18;
  param_1->ParametersOffset = uVar18 + iVar12 * 0x10;
  local_70 = iVar12;
  if ((iVar12 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_58 = local_res18;
  local_50 = &local_88;
  local_48 = &local_78;
  uVar14 = FNiagaraDataInterfaceSetShaderParametersContext::GetSystemInstanceID(param_1);
  pFVar15 = TMapBase<unsigned___int64,FNDIParticleRead_RenderInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIParticleRead_RenderInstanceData,0>_>
            ::Find((TMapBase<unsigned___int64,FNDIParticleRead_RenderInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIParticleRead_RenderInstanceData,0>_>
                    *)(pFVar2 + 1),uVar14);
  if (pFVar15 == (FNDIParticleRead_RenderInstanceData *)0x0) {
    *local_res18[0] = 0;
    local_res18[0][1] = 0;
    local_res18[0][2] = 0;
    pFVar16 = FNiagaraRenderer::GetDummyIntBuffer();
    *(FRHIShaderResourceView **)(local_res18[0] + 8) = pFVar16;
    local_res18[0][3] = 0xffffffff;
    local_res18[0][4] = 0;
    local_res18[0][5] = 0;
    local_res18[0][6] = 0;
    local_res18[0][7] = 0xffffffff;
    pFVar16 = FNiagaraRenderer::GetDummyIntBuffer();
    *(FRHIShaderResourceView **)(local_res18[0] + 10) = pFVar16;
    pFVar16 = FNiagaraRenderer::GetDummyFloatBuffer();
    *(FRHIShaderResourceView **)(local_res18[0] + 0xc) = pFVar16;
    pFVar16 = FNiagaraRenderer::GetDummyIntBuffer();
    *(FRHIShaderResourceView **)(local_res18[0] + 0xe) = pFVar16;
    pFVar16 = FNiagaraRenderer::GetDummyHalfBuffer();
    uVar10 = _UNK_15060db28;
    uVar9 = ___xmm_ffffffffffffffffffffffffffffffff;
    *(FRHIShaderResourceView **)(local_res18[0] + 0x10) = pFVar16;
    *(undefined8 *)local_88 = uVar9;
    *(undefined8 *)(local_88 + 8) = uVar10;
    local_78[0] = '\0';
    local_78[1] = '\0';
    local_78[2] = '\0';
    local_78[3] = '\0';
    local_78[4] = '\0';
    local_78[5] = '\0';
    local_78[6] = '\0';
    local_78[7] = '\0';
    local_78[8] = '\0';
    local_78[9] = '\0';
    local_78[10] = '\0';
    local_78[0xb] = '\0';
    local_78[0xc] = '\0';
    local_78[0xd] = '\0';
    local_78[0xe] = '\0';
    local_78[0xf] = '\0';
    return;
  }
  *local_res18[0] = pFVar15->IsLocalSpace;
  pFVar4 = pFVar15->SourceEmitterGPUContext;
  if (pFVar4 == (FNiagaraComputeExecutionContext *)0x0) {
    if (ZPULL(*(undefined4 *)&pFVar15->field_0x48,0,1) == 0) {
      if (1 < (byte)LogNiagara._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      }
      pFVar15->bSourceEmitterNotGPUErrorShown = 1;
    }
    `UNiagaraDataInterfaceParticleRead::SetShaderParameters'::__l2::<lambda_1>::operator()
              (&local_58,true);
    pFVar15->bWarnFailedToFindAcquireTag = 1;
    pFVar15->CachedDataSet = (FNiagaraDataSet *)0x0;
    return;
  }
  *(uint *)&pFVar15->field_0x48 = *(undefined4 *)&pFVar15->field_0x48 & 0xfffffffe;
  pFVar5 = pFVar4->MainDataSet;
  if (pFVar5 == (FNiagaraDataSet *)0x0) {
    `UNiagaraDataInterfaceParticleRead::SetShaderParameters'::__l2::<lambda_1>::operator()
              (&local_58,true);
    pFVar15->bWarnFailedToFindAcquireTag = 1;
    pFVar15->CachedDataSet = (FNiagaraDataSet *)0x0;
    return;
  }
  uVar17 = 0;
  uVar18 = 0;
  if (param_1->ComputeInstanceData->Context == pFVar4) {
    pFVar6 = param_1->SimStageData;
    this_00 = pFVar6->StageMetaData;
    if ((this_00 != (FSimulationStageMetaData *)0x0) && (this_00->bPartialParticleUpdate != 0)) {
      if ((GNiagaraParticleReadIgnoreUnsafeReads == false) && (1 < (byte)LogNiagara._0_1_)) {
        ::FName::ToString(&this_00->SimulationStageName,&local_68);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
      }
      `UNiagaraDataInterfaceParticleRead::SetShaderParameters'::__l2::<lambda_1>::operator()
                (&local_58,true);
      return;
    }
    pFVar19 = pFVar6->Source;
    if (pFVar6->Destination != (FNiagaraDataBuffer *)0x0) {
      if ((pFVar19 == (FNiagaraDataBuffer *)0x0) &&
         (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<1777922452576274576>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceParticleRead.cpp"
                              ,0x890,"SourceData != nullptr"), bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar7 = param_1->SimStageData->Destination;
      uVar18 = pFVar7->NumSpawnedInstances;
      uVar17 = pFVar7->IDAcquireTag;
      goto LAB_1491e0644;
    }
  }
  else {
    pFVar19 = pFVar5->CurrentData;
  }
  if (pFVar19 != (FNiagaraDataBuffer *)0x0) {
    uVar17 = pFVar19->IDAcquireTag;
    uVar18 = pFVar19->NumSpawnedInstances;
  }
LAB_1491e0644:
  local_res18[0][1] = uVar18;
  local_res18[0][2] = uVar17;
  pFVar16 = (pFVar5->GPUFreeIDs).SRV.Reference;
  if (pFVar16 == (FRHIShaderResourceView *)0x0) {
    pFVar16 = FNiagaraRenderer::GetDummyIntBuffer();
  }
  *(FRHIShaderResourceView **)(local_res18[0] + 8) = pFVar16;
  if (pFVar19 == (FNiagaraDataBuffer *)0x0) {
    `UNiagaraDataInterfaceParticleRead::SetShaderParameters'::__l2::<lambda_1>::operator()
              (&local_58,false);
  }
  else {
    if (pFVar15->CachedDataSet != pFVar5) {
      NDIParticleRead_FindAttributeIndices(pFVar15,pFVar5,pFVar3);
      pFVar15->bWarnFailedToFindAcquireTag = 1;
      pFVar15->CachedDataSet = pFVar5;
    }
    local_res18[0][3] = pFVar19->GPUInstanceCountBufferOffset;
    local_res18[0][4] = pFVar19->FloatStride >> 2;
    local_res18[0][5] = pFVar19->Int32Stride >> 2;
    local_res18[0][6] = pFVar19->HalfStride >> 1;
    local_res18[0][7] = pFVar15->AcquireTagRegisterIndex;
    pFVar16 = (pFVar19->GPUIDToIndexTable).SRV.Reference;
    if (pFVar16 == (FRHIShaderResourceView *)0x0) {
      pFVar16 = FNiagaraRenderer::GetDummyIntBuffer();
    }
    *(FRHIShaderResourceView **)(local_res18[0] + 10) = pFVar16;
    pFVar16 = (pFVar19->GPUBufferFloat).SRV.Reference;
    if (pFVar16 == (FRHIShaderResourceView *)0x0) {
      pFVar16 = FNiagaraRenderer::GetDummyFloatBuffer();
    }
    *(FRHIShaderResourceView **)(local_res18[0] + 0xc) = pFVar16;
    pFVar16 = (pFVar19->GPUBufferInt).SRV.Reference;
    if (pFVar16 == (FRHIShaderResourceView *)0x0) {
      pFVar16 = FNiagaraRenderer::GetDummyIntBuffer();
    }
    *(FRHIShaderResourceView **)(local_res18[0] + 0xe) = pFVar16;
    pFVar16 = (pFVar19->GPUBufferHalf).SRV.Reference;
    if (pFVar16 == (FRHIShaderResourceView *)0x0) {
      pFVar16 = FNiagaraRenderer::GetDummyHalfBuffer();
    }
    *(FRHIShaderResourceView **)(local_res18[0] + 0x10) = pFVar16;
    if (0 < iVar1) {
      if (((ulonglong)(uint)((pFVar15->AttributeIndices).ArrayNum << 2) != (longlong)local_80 * 0x10
          ) && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InstanceData->AttributeIndices.Num() * InstanceData->AttributeIndices.GetTypeSize() == AttributeIndices.Num() * AttributeIndices.GetTypeSize()"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceParticleRead.cpp"
                                    ,0x8c5,L""), bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (((ulonglong)(uint)((pFVar15->AttributeCompressed).ArrayNum << 2) !=
           (longlong)local_70 * 0x10) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("InstanceData->AttributeCompressed.Num() * InstanceData->AttributeCompressed.GetTypeSize() == AttributeCompressed.Num() * AttributeCompressed.GetTypeSize()"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceParticleRead.cpp"
                              ,0x8c6,L""), bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      memcpy(local_88,(pFVar15->AttributeIndices).AllocatorInstance.Data,(longlong)local_80 << 4);
      memcpy(local_78,(pFVar15->AttributeCompressed).AllocatorInstance.Data,(longlong)local_70 << 4)
      ;
    }
    if ((((pFVar15->bWarnFailedToFindAcquireTag != 0) && (pFVar15->AcquireTagRegisterIndex == -1))
        && (bVar11 = FNiagaraDataInterfaceSetShaderParametersContext::IsParameterBound
                               (param_1,local_res18[0] + 7), bVar11)) &&
       (pFVar15->bWarnFailedToFindAcquireTag = 0, 1 < (byte)LogNiagara._0_1_)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    }
  }
  return;
}

// StaticRegisterNativesUNiagaraDataInterfaceParticleRead @ 1491e35d0

void __cdecl
UNiagaraDataInterfaceParticleRead::StaticRegisterNativesUNiagaraDataInterfaceParticleRead(void)

{
  return;
}

// VMGetLocalSpace @ 1491e5bb0

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
UNiagaraDataInterfaceParticleRead::VMGetLocalSpace
          (UNiagaraDataInterfaceParticleRead *this,FVectorVMExternalFunctionContext *param_1)

{
  uint uVar1;
  float *pfVar2;
  int iVar3;
  int local_20 [2];
  FUserPtrHandler<FNDIParticleRead_InstanceData> local_18;
  
  VectorVM::FUserPtrHandler<FNDIParticleRead_InstanceData>::
  FUserPtrHandler<FNDIParticleRead_InstanceData>(&local_18,param_1);
  iVar3 = 0;
  local_20[0] = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  uVar1 = 0;
  if ((local_18.Ptr)->EmitterInstance != (FNiagaraEmitterInstance *)0x0) {
    uVar1 = (local_18.Ptr)->EmitterInstance->bLocalSpace;
  }
  if (0 < param_1->NumInstances) {
    pfVar2 = pfVar2 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
    do {
      iVar3 = iVar3 + 1;
      *pfVar2 = (float)((uVar1 ^ 1) - 1);
      pfVar2 = pfVar2 + local_20[0];
    } while (iVar3 < param_1->NumInstances);
  }
  return;
}

