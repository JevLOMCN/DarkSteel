// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 3

// Add @ 14d4eec50

bool __thiscall
FStateTreeExecutionContext::FExternalGlobalParameters::Add
          (FExternalGlobalParameters *this,FPropertyBindingCopyInfo *param_1,uchar *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint local_res8 [2];
  TPairInitializer<unsigned_int_&&,unsigned_char_*_const_&> local_res10;
  uint *local_18;
  uchar ***local_10;
  
  local_res10.Value = (uchar **)param_2;
  uVar3 = ::GetTypeHash(&param_1->SourceIndirection);
  iVar1 = *(int *)&(this->Mappings).field_0x8;
  iVar2 = *(int *)&(this->Mappings).field_0x34;
  uVar5 = ((uint)((ulonglong)param_1->SourceLeafProperty >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->SourceLeafProperty >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar4 = (uVar5 >> 0x10 ^ uVar5) - uVar3 ^ uVar3 >> 0xd;
  uVar5 = (-0x61c88647 - uVar4) - uVar3 ^ uVar4 << 8;
  uVar6 = (uVar3 - uVar5) - uVar4 ^ uVar5 >> 0xd;
  uVar4 = (uVar4 - uVar6) - uVar5 ^ uVar6 >> 0xc;
  uVar3 = (uVar5 - uVar4) - uVar6 ^ uVar4 << 0x10;
  uVar6 = (uVar6 - uVar3) - uVar4 ^ uVar3 >> 5;
  uVar5 = (uVar4 - uVar6) - uVar3 ^ uVar6 >> 3;
  uVar3 = (uVar3 - uVar5) - uVar6 ^ uVar5 << 10;
  local_18 = local_res8;
  local_res8[0] = (uVar6 - uVar3) - uVar5 ^ uVar3 >> 0xf;
  local_10 = &local_res10.Value;
  TSet<TTuple<unsigned_int,unsigned_char_*>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_&&,unsigned_char_*_const_&>_>
            ((TSet<TTuple<unsigned_int,unsigned_char_*>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char_*,0>,FDefaultSetAllocator>
              *)this,&local_res10,(bool *)&local_18);
  return iVar1 - iVar2 < *(int *)&(this->Mappings).field_0x8 - *(int *)&(this->Mappings).field_0x34;
}

// Find @ 14d4f8c60

uchar * __thiscall
FStateTreeExecutionContext::FExternalGlobalParameters::Find
          (FExternalGlobalParameters *this,FPropertyBindingCopyInfo *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uchar *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  
  uVar4 = ::GetTypeHash(&param_1->SourceIndirection);
  uVar10 = ((uint)((ulonglong)param_1->SourceLeafProperty >> 0x14) & 0xffff ^
           (uint)((ulonglong)param_1->SourceLeafProperty >> 4)) * -0x7a143595;
  uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
  uVar8 = (uVar10 >> 0x10 ^ uVar10) - uVar4 ^ uVar4 >> 0xd;
  uVar10 = (-0x61c88647 - uVar8) - uVar4 ^ uVar8 << 8;
  uVar11 = (uVar4 - uVar10) - uVar8 ^ uVar10 >> 0xd;
  uVar8 = (uVar8 - uVar11) - uVar10 ^ uVar11 >> 0xc;
  uVar4 = (uVar10 - uVar8) - uVar11 ^ uVar8 << 0x10;
  uVar11 = (uVar11 - uVar4) - uVar8 ^ uVar4 >> 5;
  uVar10 = (uVar8 - uVar11) - uVar4 ^ uVar11 >> 3;
  uVar4 = (uVar4 - uVar10) - uVar11 ^ uVar10 << 10;
  uVar4 = (uVar11 - uVar4) - uVar10 ^ uVar4 >> 0xf;
  if (*(int *)&(this->Mappings).field_0x8 != *(int *)&(this->Mappings).field_0x34) {
    puVar9 = *(undefined1 **)&(this->Mappings).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->Mappings).field_0x38;
    }
    iVar5 = *(int *)(puVar9 + (ulonglong)(*(int *)&(this->Mappings).field_0x48 - 1U & uVar4) * 4);
    if (iVar5 != -1) {
      do {
        lVar1 = *(longlong *)&this->Mappings + (longlong)iVar5 * 0x18;
        if (*(uint *)(*(longlong *)&this->Mappings + (longlong)iVar5 * 0x18) == uVar4) {
          puVar7 = (undefined8 *)(lVar1 + 8);
          if (lVar1 == 0) {
            puVar7 = (undefined8 *)0x0;
          }
          if (puVar7 != (undefined8 *)0x0) {
            return (uchar *)*puVar7;
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeExecutionContext.cpp"
                     ,0x4d8,L"Missing external parameter data");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    puVar6 = (uchar *)(*pcVar2)();
    return puVar6;
  }
  return (uchar *)0x0;
}

// Reset @ 14d506610

void __thiscall
FStateTreeExecutionContext::FExternalGlobalParameters::Reset(FExternalGlobalParameters *this)

{
  if (*(int *)&(this->Mappings).field_0x8 != *(int *)&(this->Mappings).field_0x34) {
    TSet<TTuple<unsigned_int,unsigned_char_*>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char_*,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<unsigned_int,unsigned_char_*>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char_*,0>,FDefaultSetAllocator>
                      *)this);
    *(undefined4 *)&(this->Mappings).field_0x8 = 0;
    if (*(int *)&(this->Mappings).field_0xc < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)this,0,(int *)&(this->Mappings).field_0xc);
    }
    *(undefined4 *)&(this->Mappings).field_0x34 = 0;
    *(undefined4 *)&(this->Mappings).field_0x28 = 0;
    *(undefined4 *)&(this->Mappings).field_0x30 = 0xffffffff;
  }
  return;
}

