// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 30

// Add<UE::Math::TIntVector4<int>_[64]> @ 1447e27a0

void __thiscall
FMeshDrawSingleShaderBindings::Add<UE::Math::TIntVector4<int>_[64]>
          (FMeshDrawSingleShaderBindings *this,FShaderParameter param_1,
          TIntVector4<int> (*param_2) [64])

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
          if (psVar6[2] != 0x400) {
            local_res10 = psVar6;
            `FMeshDrawSingleShaderBindings::Add<UE::Math::TIntVector4<int>_[64]>'::__l16::<lambda_1>
            ::operator()(&local_res10);
          }
          uVar5 = (uint)(ushort)psVar6[2];
          if (0x400 < (ushort)psVar6[2]) {
            uVar5 = 0x400;
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

// Add<UE::Math::TVector4<float>_[64]> @ 1447e29d0

void __thiscall
FMeshDrawSingleShaderBindings::Add<UE::Math::TVector4<float>_[64]>
          (FMeshDrawSingleShaderBindings *this,FShaderParameter param_1,
          TVector4<float> (*param_2) [64])

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
          if (psVar6[2] != 0x400) {
            local_res10 = psVar6;
            `FMeshDrawSingleShaderBindings::Add<UE::Math::TVector4<float>_[64]>'::__l16::<lambda_1>
            ::operator()(&local_res10);
          }
          uVar5 = (uint)(ushort)psVar6[2];
          if (0x400 < (ushort)psVar6[2]) {
            uVar5 = 0x400;
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

// Add<int> @ 1447e2c00

void __thiscall
FMeshDrawSingleShaderBindings::Add<int>
          (FMeshDrawSingleShaderBindings *this,FShaderParameter param_1,int *param_2)

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
          if (psVar6[2] != 4) {
            local_res10 = psVar6;
            `FMeshDrawSingleShaderBindings::Add<int>'::__l16::<lambda_1>::operator()(&local_res10);
          }
          uVar5 = (uint)(ushort)psVar6[2];
          if (4 < (ushort)psVar6[2]) {
            uVar5 = 4;
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

// Add<float> @ 1447e2e30

void __thiscall
FMeshDrawSingleShaderBindings::Add<float>
          (FMeshDrawSingleShaderBindings *this,FShaderParameter param_1,float *param_2)

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
          if (psVar6[2] != 4) {
            local_res10 = psVar6;
            `FMeshDrawSingleShaderBindings::Add<float>'::__l16::<lambda_1>::operator()(&local_res10)
            ;
          }
          uVar5 = (uint)(ushort)psVar6[2];
          if (4 < (ushort)psVar6[2]) {
            uVar5 = 4;
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

// Add<UE::Math::TIntPoint<int>_> @ 1447e3060

void __thiscall
FMeshDrawSingleShaderBindings::Add<UE::Math::TIntPoint<int>_>
          (FMeshDrawSingleShaderBindings *this,FShaderParameter param_1,TIntPoint<int> *param_2)

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
          if (psVar6[2] != 8) {
            local_res10 = psVar6;
            `FMeshDrawSingleShaderBindings::Add<UE::Math::TIntPoint<int>_>'::__l16::<lambda_1>::
            operator()(&local_res10);
          }
          uVar5 = (uint)(ushort)psVar6[2];
          if (8 < (ushort)psVar6[2]) {
            uVar5 = 8;
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

// Add<UE::Math::TVector4<float>_> @ 1447e3290

void __thiscall
FMeshDrawSingleShaderBindings::Add<UE::Math::TVector4<float>_>
          (FMeshDrawSingleShaderBindings *this,FShaderParameter param_1,TVector4<float> *param_2)

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
          if (psVar6[2] != 0x10) {
            local_res10 = psVar6;
            `FMeshDrawSingleShaderBindings::Add<UE::Math::TVector4<float>_>'::__l16::<lambda_1>::
            operator()(&local_res10);
          }
          uVar5 = (uint)(ushort)psVar6[2];
          if (0x10 < (ushort)psVar6[2]) {
            uVar5 = 0x10;
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

// Add<UE::Math::TVector<float>_> @ 1447e34c0

void __thiscall
FMeshDrawSingleShaderBindings::Add<UE::Math::TVector<float>_>
          (FMeshDrawSingleShaderBindings *this,FShaderParameter param_1,TVector<float> *param_2)

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
          if (psVar6[2] != 0xc) {
            local_res10 = psVar6;
            `FMeshDrawSingleShaderBindings::Add<UE::Math::TVector<float>_>'::__l16::<lambda_1>::
            operator()(&local_res10);
          }
          uVar5 = (uint)(ushort)psVar6[2];
          if (0xc < (ushort)psVar6[2]) {
            uVar5 = 0xc;
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

// Add<enum_EDebugViewShaderMode> @ 1447e36f0

void __thiscall
FMeshDrawSingleShaderBindings::Add<enum_EDebugViewShaderMode>
          (FMeshDrawSingleShaderBindings *this,FShaderParameter param_1,
          EDebugViewShaderMode *param_2)

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
          if (psVar6[2] != 4) {
            local_res10 = psVar6;
            `FMeshDrawSingleShaderBindings::Add<enum_EDebugViewShaderMode>'::__l16::<lambda_1>::
            operator()(&local_res10);
          }
          uVar5 = (uint)(ushort)psVar6[2];
          if (4 < (ushort)psVar6[2]) {
            uVar5 = 4;
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

// Add<unsigned_int> @ 144964090

void __thiscall
FMeshDrawSingleShaderBindings::Add<unsigned_int>
          (FMeshDrawSingleShaderBindings *this,FShaderParameter param_1,uint *param_2)

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
          if (psVar6[2] != 4) {
            local_res10 = psVar6;
            `FMeshDrawSingleShaderBindings::Add<unsigned_int>'::__l16::<lambda_1>::operator()
                      (&local_res10);
          }
          uVar5 = (uint)(ushort)psVar6[2];
          if (4 < (ushort)psVar6[2]) {
            uVar5 = 4;
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

// Add<FAdaptiveVolumetricShadowMapUniformBufferParameters> @ 144a43f20

void __thiscall
FMeshDrawSingleShaderBindings::Add<FAdaptiveVolumetricShadowMapUniformBufferParameters>
          (FMeshDrawSingleShaderBindings *this,
          TShaderUniformBufferParameter<FAdaptiveVolumetricShadowMapUniformBufferParameters>
          *param_1,TUniformBufferRef<FAdaptiveVolumetricShadowMapUniformBufferParameters> *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (*param_1 !=
      (TShaderUniformBufferParameter<FAdaptiveVolumetricShadowMapUniformBufferParameters>)0xffff) {
    if (*param_2 == (TUniformBufferRef<FAdaptiveVolumetricShadowMapUniformBufferParameters>)0x0) {
      FAdaptiveVolumetricShadowMapUniformBufferParameters::GetStructMetadata();
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value.GetReference()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                         ,0x78,L"Attempted to set null uniform buffer for type %s");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (*param_1 ==
        (TShaderUniformBufferParameter<FAdaptiveVolumetricShadowMapUniformBufferParameters>)0xffff)
    {
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
    WriteBindingUniformBuffer(this,(FRHIUniformBuffer *)*param_2,(uint)(ushort)*param_1);
  }
  return;
}

// Add<FForwardLightUniformParameters> @ 144a43fe0

void __thiscall
FMeshDrawSingleShaderBindings::Add<FForwardLightUniformParameters>
          (FMeshDrawSingleShaderBindings *this,
          TShaderUniformBufferParameter<FForwardLightUniformParameters> *param_1,
          TUniformBufferRef<FForwardLightUniformParameters> *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (*param_1 != (TShaderUniformBufferParameter<FForwardLightUniformParameters>)0xffff) {
    if (*param_2 == (TUniformBufferRef<FForwardLightUniformParameters>)0x0) {
      FForwardLightUniformParameters::GetStructMetadata();
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value.GetReference()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                         ,0x78,L"Attempted to set null uniform buffer for type %s");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (*param_1 == (TShaderUniformBufferParameter<FForwardLightUniformParameters>)0xffff) {
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
    WriteBindingUniformBuffer(this,(FRHIUniformBuffer *)*param_2,(uint)(ushort)*param_1);
  }
  return;
}

// Add<FVirtualShadowMapUniformParameters> @ 144a440a0

void __thiscall
FMeshDrawSingleShaderBindings::Add<FVirtualShadowMapUniformParameters>
          (FMeshDrawSingleShaderBindings *this,
          TShaderUniformBufferParameter<FVirtualShadowMapUniformParameters> *param_1,
          TUniformBufferRef<FVirtualShadowMapUniformParameters> *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (*param_1 != (TShaderUniformBufferParameter<FVirtualShadowMapUniformParameters>)0xffff) {
    if (*param_2 == (TUniformBufferRef<FVirtualShadowMapUniformParameters>)0x0) {
      FVirtualShadowMapUniformParameters::GetStructMetadata();
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value.GetReference()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                         ,0x78,L"Attempted to set null uniform buffer for type %s");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (*param_1 == (TShaderUniformBufferParameter<FVirtualShadowMapUniformParameters>)0xffff) {
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
    WriteBindingUniformBuffer(this,(FRHIUniformBuffer *)*param_2,(uint)(ushort)*param_1);
  }
  return;
}

// FindSortedArrayBaseIndex<FShaderResourceParameterInfo> @ 144a56b00

int __thiscall
FMeshDrawSingleShaderBindings::FindSortedArrayBaseIndex<FShaderResourceParameterInfo>
          (FMeshDrawSingleShaderBindings *this,
          TArrayView<FShaderResourceParameterInfo_const_,int> *param_1,uint param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  
  uVar9 = param_1->ArrayNum;
  uVar7 = 0;
  uVar8 = uVar9;
  if (8 < (int)uVar9) {
    do {
      uVar9 = uVar8 >> 1;
      uVar1 = uVar9 + uVar7;
      uVar4 = 0;
      if ((int)uVar1 < param_1->ArrayNum) {
        uVar4 = ~uVar1 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      if (param_1->DataPtr[(int)uVar1].BaseIndex < param_2) {
        uVar7 = (uVar8 & 1) + uVar9 + uVar7;
      }
      uVar8 = uVar9;
    } while (8 < uVar9);
  }
  iVar6 = uVar9 + 1 + uVar7;
  lVar10 = (longlong)(int)uVar7;
  iVar5 = param_1->ArrayNum;
  if (iVar6 < param_1->ArrayNum) {
    iVar5 = iVar6;
  }
  while( true ) {
    if (iVar5 <= lVar10) {
      return -1;
    }
    uVar9 = 0;
    if ((int)uVar7 < param_1->ArrayNum) {
      uVar9 = ~uVar7 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar3)) break;
    if (param_1->DataPtr[lVar10].BaseIndex == param_2) {
      return uVar7;
    }
    uVar7 = uVar7 + 1;
    lVar10 = lVar10 + 1;
  }
  pcVar2 = (code *)swi(3);
  iVar5 = (*pcVar2)();
  return iVar5;
}

// AddTexture @ 144a682c0

void __thiscall
FMeshDrawSingleShaderBindings::AddTexture
          (FMeshDrawSingleShaderBindings *this,FShaderResourceParameter param_1,
          FShaderResourceParameter param_2,FRHISamplerState *param_3,FRHITexture *param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  ulonglong *puVar4;
  TArrayView<FShaderResourceParameterInfo_const_,int> local_38;
  TArrayView<FShaderResourceParameterInfo_const_,int> local_28;
  
  if (param_1.NumResources != '\0') {
    if ((param_4 == (FRHITexture *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TextureRHI",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                           ,0xb0,L"Attempted to set null Texture on slot %u"), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    puVar4 = (ulonglong *)(this->_padding_ + 0x20);
    local_38.DataPtr = (FShaderResourceParameterInfo *)*puVar4;
    if (((ulonglong)local_38.DataPtr & 1) != 0) {
      local_38.DataPtr =
           (FShaderResourceParameterInfo *)(((longlong)local_38.DataPtr >> 0x18) + (longlong)puVar4)
      ;
    }
    iVar3 = *(int *)(this->_padding_ + 0x28);
    if ((iVar3 < 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_38.ArrayNum = iVar3;
    iVar3 = FindSortedArrayBaseIndex<FShaderResourceParameterInfo>
                      (this,&local_38,(uint)param_1 & 0xffff);
    if (-1 < iVar3) {
      *(FRHITexture **)
       (this->Data +
       (ulonglong)(uint)((*(int *)(this->_padding_ + 0x18) + *(int *)(this->_padding_ + 8)) * 8) +
       (longlong)iVar3 * 8) = param_4;
    }
  }
  if (param_2.NumResources != '\0') {
    if ((param_3 == (FRHISamplerState *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("SamplerStateRHI",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                           ,0xa5,L"Attempted to set null Sampler on slot %u"), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    puVar4 = (ulonglong *)(this->_padding_ + 0x10);
    local_28.DataPtr = (FShaderResourceParameterInfo *)*puVar4;
    if (((ulonglong)local_28.DataPtr & 1) != 0) {
      local_28.DataPtr =
           (FShaderResourceParameterInfo *)(((longlong)local_28.DataPtr >> 0x18) + (longlong)puVar4)
      ;
    }
    iVar3 = *(int *)(this->_padding_ + 0x18);
    if ((iVar3 < 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_28.ArrayNum = iVar3;
    iVar3 = FindSortedArrayBaseIndex<FShaderResourceParameterInfo>
                      (this,&local_28,(uint)param_2 & 0xffff);
    if (-1 < iVar3) {
      *(FRHISamplerState **)
       (this->Data + (ulonglong)(uint)(*(int *)(this->_padding_ + 8) << 3) + (longlong)iVar3 * 8) =
           param_3;
    }
  }
  return;
}

// WriteBindingUniformBuffer @ 144ab8da0

void __thiscall
FMeshDrawSingleShaderBindings::WriteBindingUniformBuffer
          (FMeshDrawSingleShaderBindings *this,FRHIUniformBuffer *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong *puVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  
  puVar3 = (ulonglong *)this->_padding_;
  uVar9 = *puVar3;
  if ((uVar9 & 1) != 0) {
    uVar9 = ((longlong)uVar9 >> 0x18) + (longlong)puVar3;
  }
  uVar2 = (uint)puVar3[1];
  if (((int)uVar2 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar8 = 0;
  uVar10 = uVar2;
  uVar7 = uVar2;
  if (8 < (int)uVar2) {
    do {
      uVar10 = uVar7 >> 1;
      uVar1 = uVar10 + uVar8;
      uVar6 = 0;
      if ((int)uVar1 < (int)uVar2) {
        uVar6 = ~uVar1 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (*(ushort *)(uVar9 + (longlong)(int)uVar1 * 2) < param_2) {
        uVar8 = (uVar7 & 1) + uVar10 + uVar8;
      }
      uVar7 = uVar10;
    } while (8 < uVar10);
  }
  uVar7 = uVar10 + 1 + uVar8;
  lVar11 = (longlong)(int)uVar8;
  uVar10 = uVar2;
  if ((int)uVar7 < (int)uVar2) {
    uVar10 = uVar7;
  }
  while( true ) {
    if ((int)uVar10 <= lVar11) {
      return;
    }
    uVar7 = 0;
    if ((int)uVar8 < (int)uVar2) {
      uVar7 = ~uVar8 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar5)) break;
    if (*(ushort *)(uVar9 + lVar11 * 2) == param_2) {
      if ((int)uVar8 < 0) {
        return;
      }
      *(FRHIUniformBuffer **)(this->Data + (longlong)(int)uVar8 * 8) = param_1;
      return;
    }
    uVar8 = uVar8 + 1;
    lVar11 = lVar11 + 1;
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// Add<UE::Math::TVector2<float>_> @ 144b7c4b0

void __thiscall
FMeshDrawSingleShaderBindings::Add<UE::Math::TVector2<float>_>
          (FMeshDrawSingleShaderBindings *this,FShaderParameter param_1,TVector2<float> *param_2)

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
          if (psVar6[2] != 8) {
            local_res10 = psVar6;
            `FMeshDrawSingleShaderBindings::Add<UE::Math::TVector2<float>_>'::__l16::<lambda_1>::
            operator()(&local_res10);
          }
          uVar5 = (uint)(ushort)psVar6[2];
          if (8 < (ushort)psVar6[2]) {
            uVar5 = 8;
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

// Add<FPrimitiveUniformShaderParameters> @ 14509aad0

void __thiscall
FMeshDrawSingleShaderBindings::Add<FPrimitiveUniformShaderParameters>
          (FMeshDrawSingleShaderBindings *this,
          TShaderUniformBufferParameter<FPrimitiveUniformShaderParameters> *param_1,
          TUniformBuffer<FPrimitiveUniformShaderParameters> *param_2)

{
  TShaderUniformBufferParameter<FPrimitiveUniformShaderParameters> TVar1;
  code *pcVar2;
  bool bVar3;
  FRHIUniformBuffer *pFVar4;
  
  if (*param_1 != (TShaderUniformBufferParameter<FPrimitiveUniformShaderParameters>)0xffff) {
    pFVar4 = TUniformBuffer<FPrimitiveUniformShaderParameters>::GetUniformBufferRHI(param_2);
    if (pFVar4 == (FRHIUniformBuffer *)0x0) {
      FPrimitiveUniformShaderParameters::GetStructMetadata();
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value.GetUniformBufferRHI()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                         ,0x84,L"Attempted to set null uniform buffer for type %s");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (*param_1 == (TShaderUniformBufferParameter<FPrimitiveUniformShaderParameters>)0xffff) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4717616138333192331>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameters.h"
                         ,0x8b,"IsBound()");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TVar1 = *param_1;
    pFVar4 = TUniformBuffer<FPrimitiveUniformShaderParameters>::GetUniformBufferRHI(param_2);
    WriteBindingUniformBuffer(this,pFVar4,(uint)(ushort)TVar1);
  }
  return;
}

// Add<FViewUniformShaderParameters> @ 14509abb0

void __thiscall
FMeshDrawSingleShaderBindings::Add<FViewUniformShaderParameters>
          (FMeshDrawSingleShaderBindings *this,
          TShaderUniformBufferParameter<FViewUniformShaderParameters> *param_1,
          TUniformBufferRef<FViewUniformShaderParameters> *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (*param_1 != (TShaderUniformBufferParameter<FViewUniformShaderParameters>)0xffff) {
    if (*param_2 == (TUniformBufferRef<FViewUniformShaderParameters>)0x0) {
      FViewUniformShaderParameters::GetStructMetadata();
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value.GetReference()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                         ,0x78,L"Attempted to set null uniform buffer for type %s");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (*param_1 == (TShaderUniformBufferParameter<FViewUniformShaderParameters>)0xffff) {
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
    WriteBindingUniformBuffer(this,(FRHIUniformBuffer *)*param_2,(uint)(ushort)*param_1);
  }
  return;
}

// Add<UE::Math::TMatrix<float>_> @ 1452f1780

void __thiscall
FMeshDrawSingleShaderBindings::Add<UE::Math::TMatrix<float>_>
          (FMeshDrawSingleShaderBindings *this,FShaderParameter param_1,TMatrix<float> *param_2)

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
          if (psVar6[2] != 0x40) {
            local_res10 = psVar6;
            `FMeshDrawSingleShaderBindings::Add<UE::Math::TMatrix<float>_>'::__l16::<lambda_1>::
            operator()(&local_res10);
          }
          uVar5 = (uint)(ushort)psVar6[2];
          if (0x40 < (ushort)psVar6[2]) {
            uVar5 = 0x40;
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

// operator() @ 1504c32f0

bool __thiscall
`FMeshDrawSingleShaderBindings::Add<UE::Math::TIntVector4<int>_[64]>'::__l16::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6735256229121097509>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6735256229121097509>,
                       &`public:___cdecl_`public:_void___cdecl_FMeshDrawSingleShaderBindings::Add<struct_UE::Math::TIntVector4<int>_[64]>(FShaderParameter,struct_UE::Math::TIntVector4<int>_const_(&___ptr64)[64])___ptr64'::`16'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c3350

bool __thiscall
`FMeshDrawSingleShaderBindings::Add<UE::Math::TVector4<float>_[64]>'::__l16::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6735256229121097509>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6735256229121097509>,
                       &`public:___cdecl_`public:_void___cdecl_FMeshDrawSingleShaderBindings::Add<struct_UE::Math::TVector4<float>_[64]>(FShaderParameter,struct_UE::Math::TVector4<float>_const_(&___ptr64)[64])___ptr64'::`16'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c33b0

bool __thiscall `FMeshDrawSingleShaderBindings::Add<int>'::__l16::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6735256229121097509>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6735256229121097509>,
                       &`public:___cdecl_`public:_void___cdecl_FMeshDrawSingleShaderBindings::Add<int>(FShaderParameter,int_const&___ptr64)___ptr64'::`16'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c3410

bool __thiscall
`FMeshDrawSingleShaderBindings::Add<float>'::__l16::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6735256229121097509>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6735256229121097509>,
                       &`public:___cdecl_`public:_void___cdecl_FMeshDrawSingleShaderBindings::Add<float>(FShaderParameter,float_const&___ptr64)___ptr64'::`16'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c3470

bool __thiscall
`FMeshDrawSingleShaderBindings::Add<UE::Math::TIntPoint<int>_>'::__l16::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6735256229121097509>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6735256229121097509>,
                       &`public:___cdecl_`public:_void___cdecl_FMeshDrawSingleShaderBindings::Add<UE::Math::TIntPoint<int>_>(FShaderParameter,UE::Math::TIntPoint<int>_const&___ptr64)___ptr64'::`16'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c34d0

bool __thiscall
`FMeshDrawSingleShaderBindings::Add<UE::Math::TVector4<float>_>'::__l16::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6735256229121097509>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6735256229121097509>,
                       &`public:___cdecl_`public:_void___cdecl_FMeshDrawSingleShaderBindings::Add<UE::Math::TVector4<float>_>(FShaderParameter,UE::Math::TVector4<float>_const&___ptr64)___ptr64'::`16'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c3530

bool __thiscall
`FMeshDrawSingleShaderBindings::Add<UE::Math::TVector<float>_>'::__l16::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6735256229121097509>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6735256229121097509>,
                       &`public:___cdecl_`public:_void___cdecl_FMeshDrawSingleShaderBindings::Add<UE::Math::TVector<float>_>(FShaderParameter,UE::Math::TVector<float>_const&___ptr64)___ptr64'::`16'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c3590

bool __thiscall
`FMeshDrawSingleShaderBindings::Add<enum_EDebugViewShaderMode>'::__l16::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6735256229121097509>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6735256229121097509>,
                       &`public:___cdecl_`public:_void___cdecl_FMeshDrawSingleShaderBindings::Add<EDebugViewShaderMode>(FShaderParameter,EDebugViewShaderMode_const&___ptr64)___ptr64'::`16'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c5100

bool __thiscall
`FMeshDrawSingleShaderBindings::Add<unsigned_int>'::__l16::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6735256229121097509>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6735256229121097509>,
                       &`public:___cdecl_`public:_void___cdecl_FMeshDrawSingleShaderBindings::Add<unsigned_int>(FShaderParameter,unsigned_int_const&___ptr64)___ptr64'::`16'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504c65d0

bool __thiscall
`FMeshDrawSingleShaderBindings::Add<UE::Math::TVector2<float>_>'::__l16::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6735256229121097509>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6735256229121097509>,
                       &`public:___cdecl_`public:_void___cdecl_FMeshDrawSingleShaderBindings::Add<UE::Math::TVector2<float>_>(FShaderParameter,UE::Math::TVector2<float>_const&___ptr64)___ptr64'::`16'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504cd290

bool __thiscall
`FMeshDrawSingleShaderBindings::Add<UE::Math::TMatrix<float>_>'::__l16::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6735256229121097509>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6735256229121097509>,
                       &`public:___cdecl_`public:_void___cdecl_FMeshDrawSingleShaderBindings::Add<UE::Math::TMatrix<float>_>(FShaderParameter,UE::Math::TMatrix<float>_const&___ptr64)___ptr64'::`16'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

