// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 3

// operator<FString,FParameterAllocation>_TTuple<FString,FParameterAllocation> @ 145e39de0

TTuple<FString,FParameterAllocation> * __thiscall
TPairInitializer<TStringView<wchar_t>_&,FParameterAllocation_&&>::
operator<FString,FParameterAllocation>_TTuple<FString,FParameterAllocation>
          (TPairInitializer<TStringView<wchar_t>_&,FParameterAllocation_&&> *this,
          TTuple<FString,FParameterAllocation> *__return_storage_ptr__)

{
  FParameterAllocation *pFVar1;
  TStringView<wchar_t> *pTVar2;
  ushort uVar3;
  ushort uVar4;
  EShaderParameterType EVar5;
  bool bVar6;
  TTuple<FString,FParameterAllocation> *pTVar7;
  FString local_18;
  
  pFVar1 = this->Value;
  pTVar2 = this->Key;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  pTVar7 = (TTuple<FString,FParameterAllocation> *)
           ::FString::ConstructFromPtrSize
                     (&local_18,pTVar2->DataPtr,(int)*(undefined8 *)&pTVar2->Size);
  if (__return_storage_ptr__ != pTVar7) {
    if (*(void **)__return_storage_ptr__ != (void *)0x0) {
      FMemory::Free(*(void **)__return_storage_ptr__);
    }
    *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)pTVar7;
    *(undefined8 *)pTVar7 = 0;
    *(int *)&__return_storage_ptr__->field_0x8 = *(int *)&pTVar7->field_0x8;
    *(int *)&__return_storage_ptr__->field_0xc = *(int *)&pTVar7->field_0xc;
    *(undefined8 *)&pTVar7->field_0x8 = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  uVar3 = pFVar1->BaseIndex;
  uVar4 = pFVar1->Size;
  EVar5 = pFVar1->Type;
  bVar6 = pFVar1->bBound;
  *(ushort *)&__return_storage_ptr__->field_0x10 = pFVar1->BufferIndex;
  *(ushort *)&__return_storage_ptr__->field_0x12 = uVar3;
  *(ushort *)&__return_storage_ptr__->field_0x14 = uVar4;
  __return_storage_ptr__->field_0x16 = EVar5;
  __return_storage_ptr__->field_0x17 = bVar6;
  return __return_storage_ptr__;
}

// operator<FString,FUniformBufferEntry>_TTuple<FString,FUniformBufferEntry> @ 145e39e80

TTuple<FString,FUniformBufferEntry> * __thiscall
TPairInitializer<FString_const_&,FUniformBufferEntry_const_&>::
operator<FString,FUniformBufferEntry>_TTuple<FString,FUniformBufferEntry>
          (TPairInitializer<FString_const_&,FUniformBufferEntry_const_&> *this,
          TTuple<FString,FUniformBufferEntry> *__return_storage_ptr__)

{
  FUniformBufferEntry *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  pFVar1 = this->Value;
  ::FString::FString((FString *)__return_storage_ptr__,this->Key);
  ::FString::FString((FString *)&__return_storage_ptr__->field_0x10,&pFVar1->StaticSlotName);
  *(TArray<wchar_t,TSizedDefaultAllocator<32>_> **)&__return_storage_ptr__->field_0x20 =
       (pFVar1->MemberNameBuffer).Object;
  pTVar2 = (pFVar1->MemberNameBuffer).SharedReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x28 = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(uint *)&__return_storage_ptr__->field_0x30 = pFVar1->LayoutHash;
  __return_storage_ptr__->field_0x34 = pFVar1->BindingFlags;
  __return_storage_ptr__->field_0x35 = pFVar1->Flags;
  return __return_storage_ptr__;
}

// operator<FShaderId,TShaderRefBase<FShader,FShaderMapPointerTable>_>_TTuple<FShaderId,TShaderRefBase<FShader,FShaderMapPointerTable>_> @ 145e73f60

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TTuple<FShaderId,TShaderRefBase<FShader,FShaderMapPointerTable>_> * __thiscall
TPairInitializer<FShaderId_const_&,TShaderRefBase<FShader,FShaderMapPointerTable>_&&>::
operator<FShaderId,TShaderRefBase<FShader,FShaderMapPointerTable>_>_TTuple<FShaderId,TShaderRefBase<FShader,FShaderMapPointerTable>_>
          (TPairInitializer<FShaderId_const_&,TShaderRefBase<FShader,FShaderMapPointerTable>_&&>
           *this,TTuple<FShaderId,TShaderRefBase<FShader,FShaderMapPointerTable>_>
                 *__return_storage_ptr__)

{
  FShaderId *pFVar1;
  TShaderRefBase<FShader,FShaderMapPointerTable> *pTVar2;
  FShaderMapBase *pFVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  uchar uVar15;
  uchar uVar16;
  uchar uVar17;
  uchar uVar18;
  
  pFVar1 = this->Key;
  pTVar2 = this->Value;
  *(FShaderType **)__return_storage_ptr__ = pFVar1->Type;
  *(FVertexFactoryType **)&__return_storage_ptr__->field_0x8 = pFVar1->VFType;
  FHashedName::FHashedName
            ((FHashedName *)&__return_storage_ptr__->field_0x10,&pFVar1->ShaderPipelineName);
  uVar4 = (pFVar1->MaterialShaderMapHash).Hash[1];
  uVar5 = (pFVar1->MaterialShaderMapHash).Hash[2];
  uVar6 = (pFVar1->MaterialShaderMapHash).Hash[3];
  uVar7 = (pFVar1->MaterialShaderMapHash).Hash[4];
  uVar8 = (pFVar1->MaterialShaderMapHash).Hash[5];
  uVar9 = (pFVar1->MaterialShaderMapHash).Hash[6];
  uVar10 = (pFVar1->MaterialShaderMapHash).Hash[7];
  uVar11 = (pFVar1->MaterialShaderMapHash).Hash[8];
  uVar12 = (pFVar1->MaterialShaderMapHash).Hash[9];
  uVar13 = (pFVar1->MaterialShaderMapHash).Hash[10];
  uVar14 = (pFVar1->MaterialShaderMapHash).Hash[0xb];
  uVar15 = (pFVar1->MaterialShaderMapHash).Hash[0xc];
  uVar16 = (pFVar1->MaterialShaderMapHash).Hash[0xd];
  uVar17 = (pFVar1->MaterialShaderMapHash).Hash[0xe];
  uVar18 = (pFVar1->MaterialShaderMapHash).Hash[0xf];
  __return_storage_ptr__->field_0x18 = (pFVar1->MaterialShaderMapHash).Hash[0];
  __return_storage_ptr__->field_0x19 = uVar4;
  __return_storage_ptr__->field_0x1a = uVar5;
  __return_storage_ptr__->field_0x1b = uVar6;
  __return_storage_ptr__->field_0x1c = uVar7;
  __return_storage_ptr__->field_0x1d = uVar8;
  __return_storage_ptr__->field_0x1e = uVar9;
  __return_storage_ptr__->field_0x1f = uVar10;
  __return_storage_ptr__->field_0x20 = uVar11;
  __return_storage_ptr__->field_0x21 = uVar12;
  __return_storage_ptr__->field_0x22 = uVar13;
  __return_storage_ptr__->field_0x23 = uVar14;
  __return_storage_ptr__->field_0x24 = uVar15;
  __return_storage_ptr__->field_0x25 = uVar16;
  __return_storage_ptr__->field_0x26 = uVar17;
  __return_storage_ptr__->field_0x27 = uVar18;
  uVar4 = (pFVar1->MaterialShaderMapHash).Hash[0x11];
  uVar5 = (pFVar1->MaterialShaderMapHash).Hash[0x12];
  uVar6 = (pFVar1->MaterialShaderMapHash).Hash[0x13];
  __return_storage_ptr__->field_0x28 = (pFVar1->MaterialShaderMapHash).Hash[0x10];
  __return_storage_ptr__->field_0x29 = uVar4;
  __return_storage_ptr__->field_0x2a = uVar5;
  __return_storage_ptr__->field_0x2b = uVar6;
  *(int *)&__return_storage_ptr__->field_0x2c = pFVar1->PermutationId;
  *(ushort *)&__return_storage_ptr__->field_0x30 = pFVar1->Platform;
  pFVar3 = pTVar2->ShaderMap;
  *(FShader **)&__return_storage_ptr__->field_0x38 = pTVar2->ShaderContent;
  *(FShaderMapBase **)&__return_storage_ptr__->field_0x40 = pFVar3;
  return __return_storage_ptr__;
}

