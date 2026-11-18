// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFCore
// Functions: 5

// FAttributeAccessors @ 14e629d20

FAttributeAccessors * __thiscall
GLTF::FAttributeAccessors::FAttributeAccessors
          (FAttributeAccessors *this,
          TArray<TTuple<GLTF::EMeshAttributeType,GLTF::FAccessor_&>,TSizedDefaultAllocator<32>_>
          *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FAttributeAccessors *pFVar6;
  FScriptContainerElement FVar7;
  ulonglong uVar8;
  
  (this->AttributeAccessors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttributeAccessors).ArrayNum = 0;
  (this->AttributeAccessors).ArrayMax = 0;
  uVar8 = 0;
  do {
    FVar7 = SUB81(uVar8,0);
    if (param_1->ArrayNum <= (int)uVar8) break;
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (pFVar1[uVar8 * 0x10] == FVar7) {
      uVar2 = *(undefined8 *)(pFVar1 + uVar8 * 0x10 + 8);
      iVar5 = (this->AttributeAccessors).ArrayNum;
      if (iVar5 == (this->AttributeAccessors).ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)this,&(this->AttributeAccessors).ArrayMax);
      }
      (this->AttributeAccessors).ArrayNum = iVar5 + 1;
      pFVar1 = (this->AttributeAccessors).AllocatorInstance.Data;
      pFVar1[(longlong)iVar5 * 0x10] = FVar7;
      *(undefined8 *)(pFVar1 + (longlong)iVar5 * 0x10 + 8) = uVar2;
    }
    else {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2748183013878661092>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTF\\GLTFMesh.cpp"
                         ,0x1c,"false");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FAttributeAccessors *)(*pcVar3)();
        return pFVar6;
      }
      iVar5 = (this->AttributeAccessors).ArrayNum;
      if (iVar5 == (this->AttributeAccessors).ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)this,&(this->AttributeAccessors).ArrayMax);
      }
      (this->AttributeAccessors).ArrayNum = iVar5 + 1;
      pFVar1 = (this->AttributeAccessors).AllocatorInstance.Data;
      pFVar1[(longlong)iVar5 * 0x10] = FVar7;
      *(FAccessor **)(pFVar1 + (longlong)iVar5 * 0x10 + 8) = &EmptyAccessor;
    }
    uVar8 = (ulonglong)(byte)((char)FVar7 + 1U);
  } while ((byte)((char)FVar7 + 1U) < 0xe);
  this->bMorphTarget = param_2;
  return this;
}

// AreAttributeAccessorsValid @ 14e62e010

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
GLTF::FAttributeAccessors::AreAttributeAccessorsValid
          (FAttributeAccessors *this,bool *param_1,uint param_2)

{
  FScriptContainerElement FVar1;
  int iVar2;
  EType EVar3;
  FAccessor *this_00;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  undefined1 local_res8 [8];
  
  *param_1 = false;
  iVar2 = (this->AttributeAccessors).ArrayNum;
  pFVar7 = (this->AttributeAccessors).AllocatorInstance.Data;
  pFVar8 = pFVar7 + (longlong)iVar2 * 0x10;
  do {
    if ((this->AttributeAccessors).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TTuple<enum_GLTF::EMeshAttributeType,GLTF::FAccessor_&>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar8) {
      return true;
    }
    this_00 = *(FAccessor **)(pFVar7 + 8);
    FVar1 = *pFVar7;
    if (((this_00->BufferView).Buffer.Data == (uchar *)0x0) &&
       ((this_00->Sparse).bHasSparse == false)) goto LAB_14e62e135;
    *param_1 = true;
    if (this_00->Count != param_2) {
      return false;
    }
    bVar5 = this->bMorphTarget;
    switch(FVar1) {
    case (FScriptContainerElement)0x0:
    case (FScriptContainerElement)0x1:
      bVar9 = this_00->Type == Vec3;
      break;
    case (FScriptContainerElement)0x2:
      if (bVar5 == false) {
        EVar3 = this_00->Type;
joined_r0x00014e62e0f9:
        if (EVar3 != Vec4) {
          return false;
        }
      }
      else if (this_00->Type != Vec3) {
        return false;
      }
      goto LAB_14e62e108;
    case (FScriptContainerElement)0x3:
    case (FScriptContainerElement)0x4:
    case (FScriptContainerElement)0x5:
    case (FScriptContainerElement)0x6:
    case (FScriptContainerElement)0x7:
    case (FScriptContainerElement)0x8:
    case (FScriptContainerElement)0x9:
    case (FScriptContainerElement)0xa:
      bVar9 = this_00->Type == Vec2;
      break;
    case (FScriptContainerElement)0xb:
      EVar3 = this_00->Type;
      if (EVar3 != Vec3) goto joined_r0x00014e62e0f9;
      goto LAB_14e62e108;
    case (FScriptContainerElement)0xc:
    case (FScriptContainerElement)0xd:
      bVar9 = this_00->Type == Vec4;
      break;
    default:
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2814153273458556318>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Parsers\\GLTFCore\\Private\\GLTF\\GLTFAccessor.cpp"
                         ,0x262,"false");
      if (!bVar5) {
        return false;
      }
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    if (!bVar9) {
      return false;
    }
LAB_14e62e108:
    bVar9 = FAccessor::CheckNonQuantizedComponentTypeForDataType
                      (this_00,(EMeshAttributeType)FVar1,bVar5);
    if (!bVar9) {
      if (this_00->bQuantized == false) {
        return false;
      }
      bVar5 = FAccessor::CheckQuantizedComponentTypeForDataType
                        (this_00,(EMeshAttributeType)FVar1,bVar5);
      if (!bVar5) {
        return false;
      }
    }
LAB_14e62e135:
    pFVar7 = pFVar7 + 0x10;
  } while( true );
}

// GetAttributeAccessor @ 14e63ab60

FAccessor * __thiscall
GLTF::FAttributeAccessors::GetAttributeAccessor
          (FAttributeAccessors *this,EMeshAttributeType *param_1)

{
  FScriptContainerElement FVar1;
  FScriptContainerElement *pFVar2;
  
  FVar1 = (FScriptContainerElement)*param_1;
  if ((int)(uint)(byte)FVar1 < (this->AttributeAccessors).ArrayNum) {
    pFVar2 = (this->AttributeAccessors).AllocatorInstance.Data;
    if (pFVar2[(ulonglong)(byte)FVar1 * 0x10] == FVar1) {
      return *(FAccessor **)(pFVar2 + (ulonglong)(byte)FVar1 * 0x10 + 8);
    }
  }
  return &EmptyAccessor;
}

// HasAttributeAccessor @ 14e642340

bool __thiscall
GLTF::FAttributeAccessors::HasAttributeAccessor
          (FAttributeAccessors *this,EMeshAttributeType *param_1)

{
  FScriptContainerElement FVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  
  FVar1 = (FScriptContainerElement)*param_1;
  if ((((int)(uint)(byte)FVar1 < (this->AttributeAccessors).ArrayNum) &&
      (pFVar2 = (this->AttributeAccessors).AllocatorInstance.Data,
      pFVar2[(ulonglong)(byte)FVar1 * 0x10] == FVar1)) &&
     ((lVar3 = *(longlong *)(pFVar2 + (ulonglong)(byte)FVar1 * 0x10 + 8),
      *(longlong *)(lVar3 + 0x98) != 0 || (*(char *)(lVar3 + 0x18) != '\0')))) {
    return true;
  }
  return false;
}

// HashAttributes @ 14e642420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall GLTF::FAttributeAccessors::HashAttributes(FAttributeAccessors *this,FMD5 *param_1)

{
  int iVar1;
  FAccessor *this_00;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  FMD5Hash local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_68;
  iVar1 = (this->AttributeAccessors).ArrayNum;
  pFVar2 = (this->AttributeAccessors).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->AttributeAccessors).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TTuple<enum_GLTF::EMeshAttributeType,GLTF::FAccessor_&>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_48);
    }
    if (pFVar2 == pFVar3) break;
    this_00 = *(FAccessor **)(pFVar2 + 8);
    if (((this_00->BufferView).Buffer.Data != (uchar *)0x0) ||
       ((this_00->Sparse).bHasSparse != false)) {
      FAccessor::GetHash(this_00,&local_40);
      if (local_40.bIsValid != false) {
        FMD5::Update(param_1,local_40.Bytes,0x10);
      }
    }
    pFVar2 = pFVar2 + 0x10;
  }
  return;
}

