// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// Add<UE::Math::TVector4<float>_[7]> @ 147996c50

void __thiscall
FMeshDrawSingleShaderBindings::Add<UE::Math::TVector4<float>_[7]>
          (FMeshDrawSingleShaderBindings *this,FShaderParameter param_1,
          TVector4<float> (*param_2) [7])

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined2 in_register_00000016;
  short *psVar6;
  short *psVar7;
  uint *puVar8;
  uchar *_Dst;
  int iVar9;
  short *local_res10;
  
  psVar6 = (short *)CONCAT26(in_register_00000016,param_1);
  if (psVar6[2] == 0) {
    return;
  }
  lVar1 = this->_padding_;
  iVar4 = *(int *)(lVar1 + 0x28) + 7;
  psVar7 = *(short **)(lVar1 + 0x30);
  _Dst = this->Data +
         (uint)(((int)(iVar4 + (iVar4 >> 0x1f & 7U)) >> 3) +
               (*(int *)(lVar1 + 0x18) + *(int *)(lVar1 + 8) + *(int *)(lVar1 + 0x28)) * 8);
  if (((ulonglong)psVar7 & 1) != 0) {
    psVar7 = (short *)(((longlong)psVar7 >> 0x18) + (longlong)(lVar1 + 0x30));
  }
  iVar4 = *(int *)(lVar1 + 0x38);
  if (iVar4 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (!bVar3) {
      return;
    }
  }
  else {
    iVar9 = 0;
    if (iVar4 < 1) {
      return;
    }
    while( true ) {
      if ((iVar9 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*psVar7 == *psVar6) break;
      iVar9 = iVar9 + 1;
      _Dst = _Dst + (ushort)psVar7[1];
      psVar7 = psVar7 + 0xc;
      if (iVar4 <= iVar9) {
        return;
      }
    }
    puVar8 = *(uint **)(psVar7 + 4);
    if (((ulonglong)puVar8 & 1) != 0) {
      puVar8 = (uint *)((longlong)psVar7 + ((longlong)puVar8 >> 0x18) + 8);
    }
    iVar4 = *(int *)(psVar7 + 8);
    if ((-1 < iVar4) ||
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), !bVar3)) {
      iVar9 = 0;
      if (iVar4 < 1) {
        return;
      }
      do {
        if ((iVar9 < 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (psVar6[1] == (short)*puVar8) {
          if (psVar6[2] != 0x70) {
            local_res10 = psVar6;
            `FMeshDrawSingleShaderBindings::Add<UE::Math::TVector4<float>_[7]>'::__l16::<lambda_1>::
            operator()(&local_res10);
          }
          uVar5 = (uint)(ushort)psVar6[2];
          if (0x70 < (ushort)psVar6[2]) {
            uVar5 = 0x70;
          }
          memcpy(_Dst,param_2,(ulonglong)uVar5);
          iVar4 = (ushort)psVar6[2] - uVar5;
          if (0 < (int)((ushort)psVar6[2] - uVar5)) {
            iVar4 = 0;
          }
          memset(_Dst + uVar5,0,(longlong)iVar4);
          return;
        }
        iVar9 = iVar9 + 1;
        _Dst = _Dst + (*puVar8 >> 0x10);
        puVar8 = puVar8 + 1;
      } while (iVar9 < iVar4);
      return;
    }
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// Add @ 147c34bb0

void __thiscall
FMeshDrawSingleShaderBindings::Add
          (FMeshDrawSingleShaderBindings *this,FShaderUniformBufferParameter *param_1,
          FRHIUniformBuffer *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1->BaseIndex != 0xffff) {
    if (param_2 == (FRHIUniformBuffer *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                         ,0x8f,L"Attempted to set null uniform buffer");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (param_1->BaseIndex == 0xffff) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4717616138333192331>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameters.h"
                         ,0x8b,"IsBound()");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    WriteBindingUniformBuffer(this,param_2,(uint)param_1->BaseIndex);
  }
  return;
}

// Add @ 147cd0830

void __thiscall
FMeshDrawSingleShaderBindings::Add
          (FMeshDrawSingleShaderBindings *this,FShaderResourceParameter param_1,
          FRHIShaderResourceView *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  ulonglong *puVar6;
  uint uVar7;
  TArrayView<FShaderResourceParameterInfo_const_,int> local_18;
  
  if (param_1.NumResources != '\0') {
    if (param_2 == (FRHIShaderResourceView *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                         ,0x9a,L"Attempted to set null SRV on slot %u");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    puVar6 = (ulonglong *)(this->_padding_ + 0x20);
    local_18.DataPtr = (FShaderResourceParameterInfo *)*puVar6;
    if (((ulonglong)local_18.DataPtr & 1) != 0) {
      local_18.DataPtr =
           (FShaderResourceParameterInfo *)(((longlong)local_18.DataPtr >> 0x18) + (longlong)puVar6)
      ;
    }
    iVar4 = *(int *)(this->_padding_ + 0x28);
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_18.ArrayNum = iVar4;
    iVar4 = FindSortedArrayBaseIndex<FShaderResourceParameterInfo>
                      (this,&local_18,(uint)param_1 & 0xffff);
    if (-1 < iVar4) {
      lVar1 = this->_padding_;
      uVar7 = iVar4 >> 0x1f & 7;
      uVar5 = iVar4 + uVar7;
      this->Data
      [(ulonglong)(uint)((int)uVar5 >> 3) +
       (ulonglong)
       (uint)((*(int *)(lVar1 + 0x28) + *(int *)(lVar1 + 0x18) + *(int *)(lVar1 + 8)) * 8)] =
           this->Data
           [(ulonglong)(uint)((int)uVar5 >> 3) +
            (ulonglong)
            (uint)((*(int *)(lVar1 + 0x28) + *(int *)(lVar1 + 0x18) + *(int *)(lVar1 + 8)) * 8)] |
           (byte)(1 << ((uVar5 & 7) - uVar7 & 0x1f));
      *(FRHIShaderResourceView **)
       (this->Data +
       (ulonglong)(uint)((*(int *)(this->_padding_ + 0x18) + *(int *)(this->_padding_ + 8)) * 8) +
       (longlong)iVar4 * 8) = param_2;
    }
  }
  return;
}

// operator() @ 150515fd0

bool __thiscall
`FMeshDrawSingleShaderBindings::Add<UE::Math::TVector4<float>_[7]>'::__l16::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6735256229121097509>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6735256229121097509>,
                       &`public:___cdecl_`public:_void___cdecl_FMeshDrawSingleShaderBindings::Add<struct_UE::Math::TVector4<float>_[7]>(FShaderParameter,struct_UE::Math::TVector4<float>_const_(&___ptr64)[7])___ptr64'::`16'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

