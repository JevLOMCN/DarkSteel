// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// RegisterMember @ 145501eb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl
FSceneUniformBufferTypeRegistry::RegisterMember
          (wchar_t *param_1,FShaderParametersMetadata *param_2,
          TFunction<void___cdecl(void_*,FShaderParametersMetadata_const_&,FRDGBuilder_&)> *param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ForAnyElementType FVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_98;
  if (FImpl::bStructMetadataWasBuilt) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("!FImpl::bStructMetadataWasBuilt",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUniformBuffer.cpp"
                       ,0x1f,L"");
    if (bVar9) {
      pcVar1 = (code *)swi(3);
      iVar10 = (*pcVar1)();
      return iVar10;
    }
  }
  uVar11 = FImpl::MemberInfos.ArrayNum;
  if (FImpl::MemberInfos.ArrayNum == FImpl::MemberInfos.ArrayMax) {
    uVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x1050,&FImpl::MemberInfos.AllocatorInstance,&FImpl::MemberInfos.ArrayMax);
  }
  FVar8.Data = FImpl::MemberInfos.AllocatorInstance.Data;
  FImpl::MemberInfos.ArrayNum = uVar11 + 1;
  lVar16 = (longlong)(int)uVar11 * 0x50;
  *(undefined8 *)(FImpl::MemberInfos.AllocatorInstance.Data + lVar16) = 0;
  *(undefined8 *)(FVar8.Data + lVar16 + 0x18) = 0;
  *(undefined8 *)(FVar8.Data + lVar16 + 0x28) = 0;
  *(undefined8 *)(FVar8.Data + lVar16 + 0x30) = 0;
  *(undefined8 *)(FVar8.Data + lVar16 + 0x38) = 0;
  *(undefined8 *)(FVar8.Data + lVar16 + 0x40) = 0;
  *(undefined8 *)(FVar8.Data + lVar16 + 8) = 0;
  *(undefined8 *)(FVar8.Data + lVar16 + 0x10) = 0;
  *(undefined8 *)(FVar8.Data + lVar16 + 0x20) = 0;
  *(undefined8 *)(FVar8.Data + lVar16 + 0x48) = 0;
  uVar12 = 0;
  if ((int)uVar11 < FImpl::MemberInfos.ArrayNum) {
    uVar12 = ~uVar11 >> 0x1f;
  }
  if (uVar12 == 0) {
    local_78 = (longlong)(int)uVar11;
    local_70 = (longlong)FImpl::MemberInfos.ArrayNum;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar1 = (code *)swi(3);
      iVar10 = (*pcVar1)();
      return iVar10;
    }
  }
  pFVar17 = FImpl::MemberInfos.AllocatorInstance.Data + lVar16;
  *(uint *)pFVar17 = uVar11;
  ::FString::operator=((FString *)(pFVar17 + 8),param_1);
  *(undefined4 *)(pFVar17 + 4) = 0xffffffff;
  *(FShaderParametersMetadata **)(pFVar17 + 0x18) = param_2;
  local_68 = *(longlong *)param_3;
  uStack_40 = (longlong *)0x0;
  if (local_68 != 0) {
    puVar13 = (undefined8 *)&param_3->field_0x10;
    if (*(undefined8 **)&param_3->field_0x28 != (undefined8 *)0x0) {
      puVar13 = *(undefined8 **)&param_3->field_0x28;
    }
    (**(code **)*puVar13)(puVar13,&local_58);
  }
  lVar16 = *(longlong *)(pFVar17 + 0x20);
  uVar7 = *(undefined8 *)(pFVar17 + 0x28);
  uVar2 = *(undefined4 *)(pFVar17 + 0x30);
  uVar3 = *(undefined4 *)(pFVar17 + 0x34);
  uVar4 = *(undefined4 *)(pFVar17 + 0x38);
  uVar5 = *(undefined4 *)(pFVar17 + 0x3c);
  uVar6 = *(undefined8 *)(pFVar17 + 0x40);
  plVar15 = *(longlong **)(pFVar17 + 0x48);
  *(longlong *)(pFVar17 + 0x20) = local_68;
  *(undefined8 *)(pFVar17 + 0x28) = uStack_60;
  *(undefined4 *)(pFVar17 + 0x30) = local_58;
  *(undefined4 *)(pFVar17 + 0x34) = uStack_54;
  *(undefined4 *)(pFVar17 + 0x38) = uStack_50;
  *(undefined4 *)(pFVar17 + 0x3c) = uStack_4c;
  *(undefined4 *)(pFVar17 + 0x40) = (undefined4)local_48;
  *(undefined4 *)(pFVar17 + 0x44) = local_48._4_4_;
  *(undefined4 *)(pFVar17 + 0x48) = (undefined4)uStack_40;
  *(undefined4 *)(pFVar17 + 0x4c) = uStack_40._4_4_;
  local_58 = uVar2;
  uStack_54 = uVar3;
  uStack_50 = uVar4;
  uStack_4c = uVar5;
  local_48 = uVar6;
  uStack_40 = plVar15;
  local_68 = lVar16;
  uStack_60 = uVar7;
  if (lVar16 != 0) {
    plVar14 = (longlong *)&local_58;
    if (plVar15 != (longlong *)0x0) {
      plVar14 = plVar15;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  if (*(longlong *)param_3 != 0) {
    plVar15 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar15 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar15 + 0x10))();
  }
  return uVar11;
}

