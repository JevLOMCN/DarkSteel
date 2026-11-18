// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFCore
// Functions: 4

// GenerateIsValidCache @ 14e637720

void __thiscall GLTF::FMesh::GenerateIsValidCache(FMesh *this,bool param_1)

{
  int iVar1;
  FScriptContainerElement FVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  FPrimitive *pFVar5;
  FPrimitive *this_00;
  undefined1 local_res10 [8];
  FScriptContainerElement local_28;
  undefined1 local_27 [15];
  
  if (param_1) {
    this_00 = (FPrimitive *)(this->Primitives).AllocatorInstance.Data;
    iVar1 = (this->Primitives).ArrayNum;
    pFVar4 = (FScriptContainerElement *)&this_00->bIsValidCache;
    pFVar5 = this_00 + iVar1;
    while( true ) {
      if ((this->Primitives).ArrayNum != iVar1) {
        `TCheckedPointerIterator<GLTF::FPrimitive,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (this_00 == pFVar5) break;
      FVar2 = (FScriptContainerElement)FPrimitive::IsValidPrivate(this_00);
      if (&local_28 != pFVar4) {
        *pFVar4 = FVar2;
        pFVar4[1] = (FScriptContainerElement)0x1;
      }
      this_00 = this_00 + 1;
      pFVar4 = pFVar4 + 0xa0;
    }
  }
  bVar3 = IsValidPrivate(this);
  if ((TOptional<bool> *)local_27 != &this->bIsValidCache) {
    (this->bIsValidCache).TypedValue = bVar3;
    (this->bIsValidCache).bIsSet = true;
  }
  return;
}

// GetHash @ 14e63be50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

FMD5Hash * __thiscall GLTF::FMesh::GetHash(FMesh *this,FMD5Hash *__return_storage_ptr__)

{
  FAttributeAccessors *pFVar1;
  int iVar2;
  int iVar3;
  FAccessor *this_00;
  char cVar4;
  FAttributeAccessors *this_01;
  FPrimitive *pFVar5;
  int *piVar6;
  FPrimitive *this_02;
  undefined1 auStack_208 [32];
  FScriptContainerElement local_1e8;
  undefined1 local_1e7 [7];
  FPrimitive *local_1e0;
  FMD5Hash *local_1d8;
  FMD5Hash local_1d0;
  undefined1 local_1b8;
  undefined8 local_1b7;
  undefined8 local_1af;
  char local_1a0;
  undefined8 local_19f;
  undefined8 local_197;
  undefined1 local_188;
  undefined7 uStack_187;
  undefined8 uStack_180;
  uchar local_178;
  FMD5 local_168;
  FMD5 local_108;
  FMD5 local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_208;
  local_1d8 = __return_storage_ptr__;
  if ((this->bIsValidCache).bIsSet == false) {
    cVar4 = IsValidPrivate(this);
  }
  else {
    cVar4 = (this->bIsValidCache).TypedValue;
  }
  if (cVar4 == '\0') {
    __return_storage_ptr__->bIsValid = false;
  }
  else {
    FMD5::FMD5(&local_a8);
    this_02 = (FPrimitive *)(this->Primitives).AllocatorInstance.Data;
    iVar2 = (this->Primitives).ArrayNum;
    piVar6 = &(this_02->MorphTargets).ArrayNum;
    pFVar5 = this_02 + iVar2;
    local_1e0 = pFVar5;
    while( true ) {
      if ((this->Primitives).ArrayNum != iVar2) {
        `TCheckedPointerIterator<GLTF::FPrimitive_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_1e7);
      }
      if (this_02 == pFVar5) break;
      if (*(char *)((longlong)piVar6 + 0x11) == '\0') {
        cVar4 = FPrimitive::IsValidPrivate(this_02);
      }
      else {
        cVar4 = (char)piVar6[4];
      }
      if (cVar4 != '\0') {
        FMD5::FMD5(&local_168);
        local_1e8 = *(FScriptContainerElement *)(piVar6 + -0x1c);
        FMD5::Update(&local_168,(uchar *)&local_1e8,1);
        FMD5::Update(&local_168,(uchar *)(piVar6 + -0x1b),4);
        this_00 = *(FAccessor **)(piVar6 + 2);
        if ((((this_00->BufferView).Buffer.Data != (uchar *)0x0) ||
            ((this_00->Sparse).bHasSparse != false)) &&
           (FAccessor::GetHash(this_00,&local_1d0), local_1d0.bIsValid != false)) {
          FMD5::Update(&local_168,local_1d0.Bytes,0x10);
        }
        FAttributeAccessors::HashAttributes((FAttributeAccessors *)this_02,&local_168);
        iVar3 = *piVar6;
        this_01 = (FAttributeAccessors *)
                  (((TArray<GLTF::FMorphTarget,TSizedDefaultAllocator<32>_> *)(piVar6 + -2))->
                  AllocatorInstance).Data;
        pFVar1 = this_01 + iVar3;
        while( true ) {
          if (*piVar6 != iVar3) {
            `TCheckedPointerIterator<GLTF::FMorphTarget_const_,int,0>::operator!='::__l2::<lambda_1>
            ::operator()(local_1e7);
          }
          if (this_01 == pFVar1) break;
          FMD5::FMD5(&local_108);
          FAttributeAccessors::HashAttributes(this_01,&local_108);
          local_1d0.bIsValid = false;
          FMD5::Final(&local_108,local_1d0.Bytes);
          local_1d0.bIsValid = true;
          FMD5::~FMD5(&local_108);
          if (local_1d0.bIsValid != false) {
            FMD5::Update(&local_168,local_1d0.Bytes,0x10);
          }
          this_01 = this_01 + 1;
        }
        local_1b8 = 0;
        FMD5::Final(&local_168,(uchar *)&local_1b7);
        local_19f = local_1b7;
        local_197 = local_1af;
        local_1b8 = 1;
        local_1a0 = '\x01';
        FMD5::~FMD5(&local_168);
        pFVar5 = local_1e0;
        if (local_1a0 != '\0') {
          FMD5::Update(&local_a8,(uchar *)&local_19f,0x10);
          pFVar5 = local_1e0;
        }
      }
      this_02 = this_02 + 1;
      piVar6 = piVar6 + 0x28;
    }
    local_188 = 0;
    FMD5::Final(&local_a8,(uchar *)&uStack_187);
    __return_storage_ptr__ = local_1d8;
    local_188 = 1;
    local_1d8->bIsValid = true;
    local_1d8->Bytes[0] = (char)uStack_187;
    local_1d8->Bytes[1] = (char)((uint7)uStack_187 >> 8);
    local_1d8->Bytes[2] = (char)((uint7)uStack_187 >> 0x10);
    local_1d8->Bytes[3] = (char)((uint7)uStack_187 >> 0x18);
    local_1d8->Bytes[4] = (char)((uint7)uStack_187 >> 0x20);
    local_1d8->Bytes[5] = (char)((uint7)uStack_187 >> 0x28);
    local_1d8->Bytes[6] = (char)((uint7)uStack_187 >> 0x30);
    *(undefined8 *)(local_1d8->Bytes + 7) = uStack_180;
    local_1d8->Bytes[0xf] = local_178;
    FMD5::~FMD5(&local_a8);
  }
  return __return_storage_ptr__;
}

// IsValidPrivate @ 14e646b30

bool __thiscall GLTF::FMesh::IsValidPrivate(FMesh *this)

{
  int iVar1;
  int iVar2;
  FPrimitive *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  <lambda_1> local_res8 [8];
  
  pFVar3 = TArray<GLTF::FPrimitive,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_GLTF::FMesh::IsValidPrivate_::__l2::<lambda_1>_>
                     (&this->Primitives,local_res8[0]);
  iVar1 = (this->MorphTargetNames).ArrayNum;
  bVar6 = pFVar3 == (FPrimitive *)0x0;
  if (((0 < iVar1) && (iVar2 = (this->MorphTargetWeights).ArrayNum, 0 < iVar2)) && (iVar1 != iVar2))
  {
    bVar6 = false;
  }
  iVar2 = (this->Primitives).ArrayNum;
  pFVar4 = (this->Primitives).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar2 * 0xa0;
  while( true ) {
    if ((this->Primitives).ArrayNum != iVar2) {
      `TCheckedPointerIterator<GLTF::FPrimitive_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar5) break;
    if (iVar1 != *(int *)(pFVar4 + 0x88)) {
      return false;
    }
    pFVar4 = pFVar4 + 0xa0;
  }
  return bVar6;
}

// NumberOfMorphTargetsPerPrimitive @ 14e647330

int __thiscall GLTF::FMesh::NumberOfMorphTargetsPerPrimitive(FMesh *this)

{
  if (0 < (this->Primitives).ArrayNum) {
    return *(int *)((this->Primitives).AllocatorInstance.Data + 0x88);
  }
  return 0;
}

