// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 61

// GetElement<UE::Math::TVector4<float>_> @ 14c7966c0

void __thiscall
UniformTessellateLocals::FElementsGenerator<float,4>::GetElement<UE::Math::TVector4<float>_>
          (FElementsGenerator<float,4> *this,int param_1,TVector4<float> *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (param_1 < (this->ElementIsSet).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->ElementIsSet).AllocatorInstance.Data[param_1] != (FScriptContainerElement)0x0) {
    uVar4 = param_1 * 4;
    uVar5 = 0;
    if ((int)uVar4 < (this->Elements).ArrayNum) {
      uVar5 = ~uVar4 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    uVar5 = uVar4 + 1;
    (param_2->field0_0x0)._s_0.X =
         *(float *)((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar4 * 4);
    uVar3 = 0;
    if ((int)uVar5 < (this->Elements).ArrayNum) {
      uVar3 = ~uVar5 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    uVar3 = uVar4 + 2;
    (param_2->field0_0x0)._s_0.Y =
         *(float *)((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar5 * 4);
    uVar5 = 0;
    if ((int)uVar3 < (this->Elements).ArrayNum) {
      uVar5 = ~uVar3 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    uVar4 = uVar4 + 3;
    (param_2->field0_0x0)._s_0.Z =
         *(float *)((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar3 * 4);
    uVar5 = 0;
    if ((int)uVar4 < (this->Elements).ArrayNum) {
      uVar5 = ~uVar4 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (param_2->field0_0x0)._s_0.W =
         *(float *)((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar4 * 4);
  }
  return;
}

// GetElement<UE::Math::TVector<float>_> @ 14c7968d0

void __thiscall
UniformTessellateLocals::FElementsGenerator<float,3>::GetElement<UE::Math::TVector<float>_>
          (FElementsGenerator<float,3> *this,int param_1,TVector<float> *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (param_1 < (this->ElementIsSet).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->ElementIsSet).AllocatorInstance.Data[param_1] != (FScriptContainerElement)0x0) {
    uVar5 = param_1 * 3;
    uVar3 = 0;
    if ((int)uVar5 < (this->Elements).ArrayNum) {
      uVar3 = ~uVar5 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    uVar3 = uVar5 + 1;
    (param_2->field0_0x0)._s_0.X =
         *(float *)((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar5 * 4);
    uVar4 = 0;
    if ((int)uVar3 < (this->Elements).ArrayNum) {
      uVar4 = ~uVar3 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    uVar5 = uVar5 + 2;
    (param_2->field0_0x0)._s_0.Y =
         *(float *)((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar3 * 4);
    uVar3 = 0;
    if ((int)uVar5 < (this->Elements).ArrayNum) {
      uVar3 = ~uVar5 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (param_2->field0_0x0)._s_0.Z =
         *(float *)((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar5 * 4);
  }
  return;
}

// GetElement<UE::Math::TVector<double>_> @ 14c796a80

void __thiscall
UniformTessellateLocals::FElementsGenerator<double,3>::GetElement<UE::Math::TVector<double>_>
          (FElementsGenerator<double,3> *this,int param_1,TVector<double> *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (param_1 < (this->ElementIsSet).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->ElementIsSet).AllocatorInstance.Data[param_1] != (FScriptContainerElement)0x0) {
    uVar5 = param_1 * 3;
    uVar3 = 0;
    if ((int)uVar5 < (this->Elements).ArrayNum) {
      uVar3 = ~uVar5 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    uVar3 = uVar5 + 1;
    (param_2->field0_0x0)._s_0.X =
         *(double *)((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar5 * 8);
    uVar4 = 0;
    if ((int)uVar3 < (this->Elements).ArrayNum) {
      uVar4 = ~uVar3 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    uVar5 = uVar5 + 2;
    (param_2->field0_0x0)._s_0.Y =
         *(double *)((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar3 * 8);
    uVar3 = 0;
    if ((int)uVar5 < (this->Elements).ArrayNum) {
      uVar3 = ~uVar5 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (param_2->field0_0x0)._s_0.Z =
         *(double *)((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar5 * 8);
  }
  return;
}

// ~FElementsGenerator<float,1> @ 14c7b5860

void __thiscall
UniformTessellateLocals::FElementsGenerator<float,1>::~FElementsGenerator<float,1>
          (FElementsGenerator<float,1> *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7__FElementsGenerator_M_00_UniformTessellateLocals__6B_;
  pFVar1 = (this->ElementIsSet).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Elements).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FBaseGenerator_UniformTessellateLocals__6B_;
  return;
}

// ~FElementsGenerator<float,2> @ 14c7b58b0

void __thiscall
UniformTessellateLocals::FElementsGenerator<float,2>::~FElementsGenerator<float,2>
          (FElementsGenerator<float,2> *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7__FElementsGenerator_M_01_UniformTessellateLocals__6B_;
  pFVar1 = (this->ElementIsSet).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Elements).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FBaseGenerator_UniformTessellateLocals__6B_;
  return;
}

// ~FElementsGenerator<float,3> @ 14c7b5900

void __thiscall
UniformTessellateLocals::FElementsGenerator<float,3>::~FElementsGenerator<float,3>
          (FElementsGenerator<float,3> *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7__FElementsGenerator_M_02_UniformTessellateLocals__6B_;
  pFVar1 = (this->ElementIsSet).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Elements).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FBaseGenerator_UniformTessellateLocals__6B_;
  return;
}

// ~FElementsGenerator<float,4> @ 14c7b5950

void __thiscall
UniformTessellateLocals::FElementsGenerator<float,4>::~FElementsGenerator<float,4>
          (FElementsGenerator<float,4> *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7__FElementsGenerator_M_03_UniformTessellateLocals__6B_;
  pFVar1 = (this->ElementIsSet).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Elements).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FBaseGenerator_UniformTessellateLocals__6B_;
  return;
}

// ~FElementsGenerator<double,3> @ 14c7b59a0

void __thiscall
UniformTessellateLocals::FElementsGenerator<double,3>::~FElementsGenerator<double,3>
          (FElementsGenerator<double,3> *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7__FElementsGenerator_N_02_UniformTessellateLocals__6B_;
  pFVar1 = (this->ElementIsSet).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Elements).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FBaseGenerator_UniformTessellateLocals__6B_;
  return;
}

// operator() @ 14c7bd990

void __thiscall
`UniformTessellateLocals::FElementsGenerator<float,1>::GenerateEdgeElements'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  float fVar5;
  char cVar6;
  longlong *plVar7;
  int iVar8;
  float fVar9;
  float local_res8 [2];
  float local_res18 [2];
  float local_res20 [2];
  undefined4 uStack_44;
  
  cVar6 = (**(code **)(**(longlong **)this + 8))();
  if (cVar6 == '\0') {
    plVar7 = *(longlong **)this;
    lVar2 = *(longlong *)(*(longlong *)(plVar7[1] + 0x1c0) + (ulonglong)((uint)param_1 >> 9) * 8);
    uVar3 = *(undefined8 *)(lVar2 + (ulonglong)(param_1 & 0x1ff) * 0x10);
    uVar4 = *(ulonglong *)(lVar2 + 8 + (ulonglong)(param_1 & 0x1ff) * 0x10);
    (**(code **)(*plVar7 + 0x50))(plVar7,uVar4 & 0xffffffff,uVar3,local_res8);
    uStack_44 = (undefined4)((ulonglong)uVar3 >> 0x20);
    (**(code **)(**(longlong **)this + 0x50))
              (*(longlong **)this,uVar4 & 0xffffffff,uStack_44,local_res18);
    fVar5 = __real_3f800000;
    plVar7 = *(longlong **)this;
    iVar8 = 0;
    if (0 < (int)plVar7[2]) {
      do {
        iVar1 = iVar8 + 1;
        fVar9 = (float)iVar1 / (float)((int)plVar7[2] + 1);
        if (fVar5 <= fVar9) {
          fVar9 = fVar5;
        }
        if (fVar9 <= 0.0) {
          fVar9 = 0.0;
        }
        local_res20[0] = (fVar5 - fVar9) * local_res8[0] + fVar9 * local_res18[0];
        (**(code **)(*plVar7 + 0x30))(local_res20[0],param_1,uVar4 & 0xffffffff,iVar8,local_res20);
        plVar7 = *(longlong **)this;
        iVar8 = iVar1;
      } while (iVar1 < (int)plVar7[2]);
    }
  }
  return;
}

// operator() @ 14c7bdae0

void __thiscall
`UniformTessellateLocals::FElementsGenerator<float,2>::GenerateEdgeElements'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  float fVar5;
  char cVar6;
  longlong *plVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float local_res8;
  float local_resc;
  float local_res18;
  float local_res1c;
  float local_res20;
  float local_res24;
  undefined4 uStack_44;
  
  cVar6 = (**(code **)(**(longlong **)this + 8))();
  if (cVar6 == '\0') {
    plVar7 = *(longlong **)this;
    lVar2 = *(longlong *)(*(longlong *)(plVar7[1] + 0x1c0) + (ulonglong)((uint)param_1 >> 9) * 8);
    uVar3 = *(undefined8 *)(lVar2 + (ulonglong)(param_1 & 0x1ff) * 0x10);
    uVar4 = *(ulonglong *)(lVar2 + 8 + (ulonglong)(param_1 & 0x1ff) * 0x10);
    (**(code **)(*plVar7 + 0x50))(plVar7,uVar4 & 0xffffffff,uVar3,&local_res18);
    uStack_44 = (undefined4)((ulonglong)uVar3 >> 0x20);
    (**(code **)(**(longlong **)this + 0x50))
              (*(longlong **)this,uVar4 & 0xffffffff,uStack_44,&local_res8);
    fVar5 = __real_3f800000;
    plVar7 = *(longlong **)this;
    iVar8 = 0;
    if (0 < (int)plVar7[2]) {
      do {
        iVar1 = iVar8 + 1;
        fVar10 = (float)iVar1 / (float)((int)plVar7[2] + 1);
        if (fVar5 <= fVar10) {
          fVar10 = fVar5;
        }
        if (fVar10 <= 0.0) {
          fVar10 = 0.0;
        }
        fVar9 = (fVar5 - fVar10) * local_res18;
        local_res24 = fVar10 * local_resc + (fVar5 - fVar10) * local_res1c;
        local_res20 = fVar10 * local_res8 + fVar9;
        (**(code **)(*plVar7 + 0x30))(fVar9,param_1,uVar4 & 0xffffffff,iVar8,&local_res20);
        plVar7 = *(longlong **)this;
        iVar8 = iVar1;
      } while (iVar1 < (int)plVar7[2]);
    }
  }
  return;
}

// operator() @ 14c7bdc50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UniformTessellateLocals::FElementsGenerator<float,3>::GenerateEdgeElements'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  float fVar4;
  char cVar5;
  longlong *plVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_a8 [32];
  float *local_88;
  undefined8 local_78;
  float local_70;
  float local_6c;
  float local_68;
  float local_60;
  float local_5c;
  float local_58;
  float local_50;
  float local_4c;
  float local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_a8;
  cVar5 = (**(code **)(**(longlong **)this + 8))();
  if (cVar5 == '\0') {
    plVar6 = *(longlong **)this;
    lVar2 = *(longlong *)(*(longlong *)(plVar6[1] + 0x1c0) + (ulonglong)((uint)param_1 >> 9) * 8);
    local_78 = *(undefined8 *)(lVar2 + (ulonglong)(param_1 & 0x1ff) * 0x10);
    uVar3 = *(ulonglong *)(lVar2 + 8 + (ulonglong)(param_1 & 0x1ff) * 0x10);
    (**(code **)(*plVar6 + 0x50))(plVar6,uVar3 & 0xffffffff,local_78,&local_70);
    (**(code **)(**(longlong **)this + 0x50))
              (*(longlong **)this,uVar3 & 0xffffffff,local_78._4_4_,&local_60);
    fVar4 = __real_3f800000;
    plVar6 = *(longlong **)this;
    iVar7 = 0;
    if (0 < (int)plVar6[2]) {
      do {
        iVar1 = iVar7 + 1;
        local_88 = &local_50;
        fVar9 = (float)iVar1 / (float)((int)plVar6[2] + 1);
        if (fVar4 <= fVar9) {
          fVar9 = fVar4;
        }
        if (fVar9 <= 0.0) {
          fVar9 = 0.0;
        }
        fVar8 = fVar4 - fVar9;
        local_50 = fVar8 * local_70 + fVar9 * local_60;
        local_4c = fVar9 * local_5c + fVar8 * local_6c;
        local_48 = fVar8 * local_68 + fVar9 * local_58;
        (**(code **)(*plVar6 + 0x30))(fVar8 * local_6c,param_1,uVar3 & 0xffffffff,iVar7);
        plVar6 = *(longlong **)this;
        iVar7 = iVar1;
      } while (iVar1 < (int)plVar6[2]);
    }
  }
  return;
}

// operator() @ 14c7bddf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UniformTessellateLocals::FElementsGenerator<float,4>::GenerateEdgeElements'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  float fVar4;
  char cVar5;
  longlong *plVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_a8 [32];
  float *local_88;
  undefined8 local_78;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_a8;
  cVar5 = (**(code **)(**(longlong **)this + 8))();
  if (cVar5 == '\0') {
    plVar6 = *(longlong **)this;
    lVar2 = *(longlong *)(*(longlong *)(plVar6[1] + 0x1c0) + (ulonglong)((uint)param_1 >> 9) * 8);
    local_78 = *(undefined8 *)(lVar2 + (ulonglong)(param_1 & 0x1ff) * 0x10);
    uVar3 = *(ulonglong *)(lVar2 + 8 + (ulonglong)(param_1 & 0x1ff) * 0x10);
    (**(code **)(*plVar6 + 0x50))(plVar6,uVar3 & 0xffffffff,local_78,&local_70);
    (**(code **)(**(longlong **)this + 0x50))
              (*(longlong **)this,uVar3 & 0xffffffff,local_78._4_4_,&local_60);
    fVar4 = __real_3f800000;
    plVar6 = *(longlong **)this;
    iVar7 = 0;
    if (0 < (int)plVar6[2]) {
      do {
        iVar1 = iVar7 + 1;
        local_88 = &local_50;
        fVar8 = (float)iVar1 / (float)((int)plVar6[2] + 1);
        if (fVar4 <= fVar8) {
          fVar8 = fVar4;
        }
        if (fVar8 <= 0.0) {
          fVar8 = 0.0;
        }
        fVar9 = fVar4 - fVar8;
        local_50 = fVar9 * local_70 + fVar8 * local_60;
        fStack_4c = fVar9 * fStack_6c + fVar8 * fStack_5c;
        fStack_48 = fVar9 * fStack_68 + fVar8 * fStack_58;
        fStack_44 = fVar9 * fStack_64 + fVar8 * fStack_54;
        (**(code **)(*plVar6 + 0x30))(plVar6,param_1,uVar3 & 0xffffffff,iVar7);
        plVar6 = *(longlong **)this;
        iVar7 = iVar1;
      } while (iVar1 < (int)plVar6[2]);
    }
  }
  return;
}

// operator() @ 14c7bdf60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UniformTessellateLocals::FElementsGenerator<double,3>::GenerateEdgeElements'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  double dVar4;
  char cVar5;
  longlong *plVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_c8 [32];
  double *local_a8;
  undefined8 local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_c8;
  cVar5 = (**(code **)(**(longlong **)this + 8))();
  if (cVar5 == '\0') {
    plVar6 = *(longlong **)this;
    lVar2 = *(longlong *)(*(longlong *)(plVar6[1] + 0x1c0) + (ulonglong)((uint)param_1 >> 9) * 8);
    local_98 = *(undefined8 *)(lVar2 + (ulonglong)(param_1 & 0x1ff) * 0x10);
    uVar3 = *(ulonglong *)(lVar2 + 8 + (ulonglong)(param_1 & 0x1ff) * 0x10);
    (**(code **)(*plVar6 + 0x50))(plVar6,uVar3 & 0xffffffff,local_98,&local_90);
    (**(code **)(**(longlong **)this + 0x50))
              (*(longlong **)this,uVar3 & 0xffffffff,local_98._4_4_,&local_78);
    dVar4 = __real_3ff0000000000000;
    plVar6 = *(longlong **)this;
    iVar7 = 0;
    if (0 < (int)plVar6[2]) {
      do {
        iVar1 = iVar7 + 1;
        local_a8 = &local_60;
        dVar9 = (double)iVar1 / (double)((int)plVar6[2] + 1);
        if (dVar4 <= dVar9) {
          dVar9 = dVar4;
        }
        if (dVar9 <= 0.0) {
          dVar9 = 0.0;
        }
        dVar8 = dVar4 - dVar9;
        local_60 = dVar8 * local_90 + dVar9 * local_78;
        local_58 = dVar9 * local_70 + dVar8 * local_88;
        local_50 = dVar8 * local_80 + dVar9 * local_68;
        (**(code **)(*plVar6 + 0x30))(dVar8 * local_88,param_1,uVar3 & 0xffffffff,iVar7);
        plVar6 = *(longlong **)this;
        iVar7 = iVar1;
      } while (iVar1 < (int)plVar6[2]);
    }
  }
  return;
}

// operator() @ 14c7bef80

void __thiscall
`UniformTessellateLocals::FElementsGenerator<float,1>::GenerateTriangleElements'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  float fVar8;
  char cVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  longlong *plVar17;
  int iVar18;
  float fVar19;
  float local_res20 [2];
  float local_c8;
  float local_c4;
  int local_c0;
  uint local_b0;
  
  cVar9 = (**(code **)(**(longlong **)this + 8))();
  if ((cVar9 == '\0') &&
     (cVar9 = (**(code **)(**(longlong **)this + 0x68))(*(longlong **)this,param_1),
     fVar8 = __real_3f800000, cVar9 != '\0')) {
    plVar17 = *(longlong **)this;
    uVar13 = (ulonglong)(param_1 & 0x1ff);
    iVar15 = 1;
    lVar5 = plVar17[1];
    lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0x180) + (ulonglong)((uint)param_1 >> 9) * 8);
    uVar2 = *(uint *)(lVar6 + 8 + uVar13 * 0xc);
    uVar1 = *(ulonglong *)(lVar6 + uVar13 * 0xc);
    local_c0 = (int)*(undefined8 *)
                     (*(longlong *)
                       (*(longlong *)(lVar5 + 0x130) + (ulonglong)((uint)param_1 >> 9) * 8) +
                     uVar13 * 0xc);
    local_b0 = (uint)uVar1;
    iVar3 = *(int *)(*(longlong *)(*(longlong *)(lVar5 + 0x1c0) + (ulonglong)(local_b0 >> 9) * 8) +
                    (ulonglong)(local_b0 & 0x1ff) * 0x10);
    iVar4 = *(int *)(*(longlong *)(*(longlong *)(lVar5 + 0x1c0) + (ulonglong)(uVar2 >> 9) * 8) +
                    (ulonglong)(uVar2 & 0x1ff) * 0x10);
    iVar18 = 0;
    if (1 < (int)plVar17[2]) {
      do {
        iVar16 = iVar15;
        if (iVar3 != local_c0) {
          iVar16 = ((int)plVar17[2] - iVar15) + -1;
        }
        uVar11 = (**(code **)(*plVar17 + 0x28))(plVar17,uVar1 & 0xffffffff,param_1,iVar16);
        plVar17 = *(longlong **)this;
        iVar16 = iVar15;
        if (iVar4 != local_c0) {
          iVar16 = ((int)plVar17[2] - iVar15) + -1;
        }
        uVar12 = (**(code **)(*plVar17 + 0x28))(plVar17,uVar2,param_1,iVar16);
        lVar5 = *(longlong *)this;
        uVar14 = 0;
        if ((int)uVar11 < *(int *)(lVar5 + 0x50)) {
          uVar14 = ~uVar11 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (*(char *)((longlong)(int)uVar11 + *(longlong *)(lVar5 + 0x48)) != '\0') {
          uVar14 = 0;
          if ((int)uVar11 < *(int *)(lVar5 + 0x40)) {
            uVar14 = ~uVar11 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          local_c8 = *(float *)(*(longlong *)(lVar5 + 0x38) + (longlong)(int)uVar11 * 4);
        }
        lVar5 = *(longlong *)this;
        uVar11 = 0;
        if ((int)uVar12 < *(int *)(lVar5 + 0x50)) {
          uVar11 = ~uVar12 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (*(char *)(*(longlong *)(lVar5 + 0x48) + (longlong)(int)uVar12) != '\0') {
          uVar11 = 0;
          if ((int)uVar12 < *(int *)(lVar5 + 0x40)) {
            uVar11 = ~uVar12 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          local_c4 = *(float *)(*(longlong *)(lVar5 + 0x38) + (longlong)(int)uVar12 * 4);
        }
        iVar16 = 0;
        if (0 < iVar15) {
          do {
            iVar16 = iVar16 + 1;
            fVar19 = (float)iVar16 * (fVar8 / (float)(iVar15 + 1));
            if (fVar8 <= fVar19) {
              fVar19 = fVar8;
            }
            if (fVar19 <= 0.0) {
              fVar19 = 0.0;
            }
            local_res20[0] = (fVar8 - fVar19) * local_c8 + fVar19 * local_c4;
            (**(code **)(**(longlong **)this + 0x40))(*(longlong **)this,param_1,iVar18,local_res20)
            ;
            iVar18 = iVar18 + 1;
          } while (iVar16 < iVar15);
        }
        plVar17 = *(longlong **)this;
        iVar15 = iVar15 + 1;
      } while (iVar15 < (int)plVar17[2]);
    }
  }
  return;
}

// operator() @ 14c7bf390

void __thiscall
`UniformTessellateLocals::FElementsGenerator<float,2>::GenerateTriangleElements'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  float fVar7;
  char cVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  longlong *plVar16;
  int iVar17;
  bool bVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_res8;
  float local_res18;
  float local_res1c;
  int local_c8;
  uint local_b8;
  
  cVar8 = (**(code **)(**(longlong **)this + 8))();
  if ((cVar8 == '\0') &&
     (cVar8 = (**(code **)(**(longlong **)this + 0x68))(*(longlong **)this,param_1),
     fVar7 = __real_3f800000, cVar8 != '\0')) {
    plVar16 = *(longlong **)this;
    uVar12 = (ulonglong)(param_1 & 0x1ff);
    iVar13 = 1;
    lVar4 = plVar16[1];
    lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x180) + (ulonglong)((uint)param_1 >> 9) * 8);
    uVar2 = *(uint *)(lVar5 + 8 + uVar12 * 0xc);
    uVar1 = *(ulonglong *)(lVar5 + uVar12 * 0xc);
    local_c8 = (int)*(undefined8 *)
                     (*(longlong *)
                       (*(longlong *)(lVar4 + 0x130) + (ulonglong)((uint)param_1 >> 9) * 8) +
                     uVar12 * 0xc);
    local_b8 = (uint)uVar1;
    iVar3 = *(int *)(*(longlong *)(*(longlong *)(lVar4 + 0x1c0) + (ulonglong)(local_b8 >> 9) * 8) +
                    (ulonglong)(local_b8 & 0x1ff) * 0x10);
    bVar18 = *(int *)(*(longlong *)(*(longlong *)(lVar4 + 0x1c0) + (ulonglong)(uVar2 >> 9) * 8) +
                     (ulonglong)(uVar2 & 0x1ff) * 0x10) != local_c8;
    iVar17 = 0;
    local_res8 = (float)CONCAT31(local_res8._1_3_,bVar18);
    fVar20 = local_res8;
    fVar21 = local_res8;
    fVar22 = local_res8;
    if (1 < (int)plVar16[2]) {
      do {
        iVar15 = iVar13;
        if (iVar3 != local_c8) {
          iVar15 = ((int)plVar16[2] - iVar13) + -1;
        }
        uVar10 = (**(code **)(*plVar16 + 0x28))(plVar16,uVar1 & 0xffffffff,param_1,iVar15);
        plVar16 = *(longlong **)this;
        iVar15 = iVar13;
        if (bVar18) {
          iVar15 = ((int)plVar16[2] - iVar13) + -1;
        }
        uVar11 = (**(code **)(*plVar16 + 0x28))(plVar16,uVar2,param_1,iVar15);
        lVar4 = *(longlong *)this;
        uVar14 = 0;
        if ((int)uVar10 < *(int *)(lVar4 + 0x50)) {
          uVar14 = ~uVar10 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (*(char *)((longlong)(int)uVar10 + *(longlong *)(lVar4 + 0x48)) != '\0') {
          uVar10 = uVar10 * 2;
          uVar14 = 0;
          if ((int)uVar10 < *(int *)(lVar4 + 0x40)) {
            uVar14 = ~uVar10 >> 0x1f;
          }
          if ((uVar14 == 0) &&
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
          uVar14 = uVar10 + 1;
          fVar22 = *(float *)(*(longlong *)(lVar4 + 0x38) + (longlong)(int)uVar10 * 4);
          uVar10 = 0;
          if ((int)uVar14 < *(int *)(lVar4 + 0x40)) {
            uVar10 = ~uVar14 >> 0x1f;
          }
          if ((uVar10 == 0) &&
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
          fVar20 = *(float *)(*(longlong *)(lVar4 + 0x38) + (longlong)(int)uVar14 * 4);
        }
        lVar4 = *(longlong *)this;
        uVar10 = 0;
        if ((int)uVar11 < *(int *)(lVar4 + 0x50)) {
          uVar10 = ~uVar11 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (*(char *)((longlong)(int)uVar11 + *(longlong *)(lVar4 + 0x48)) != '\0') {
          uVar11 = uVar11 * 2;
          uVar10 = 0;
          if ((int)uVar11 < *(int *)(lVar4 + 0x40)) {
            uVar10 = ~uVar11 >> 0x1f;
          }
          if ((uVar10 == 0) &&
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
          uVar14 = uVar11 + 1;
          fVar21 = *(float *)(*(longlong *)(lVar4 + 0x38) + (longlong)(int)uVar11 * 4);
          uVar10 = 0;
          if ((int)uVar14 < *(int *)(lVar4 + 0x40)) {
            uVar10 = ~uVar14 >> 0x1f;
          }
          if ((uVar10 == 0) &&
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
          local_res8 = *(float *)(*(longlong *)(lVar4 + 0x38) + (longlong)(int)uVar14 * 4);
        }
        iVar15 = 0;
        if (0 < iVar13) {
          do {
            iVar15 = iVar15 + 1;
            fVar19 = (float)iVar15 * (fVar7 / (float)(iVar13 + 1));
            if (fVar7 <= fVar19) {
              fVar19 = fVar7;
            }
            if (fVar19 <= 0.0) {
              fVar19 = 0.0;
            }
            local_res18 = fVar19 * fVar21 + fVar22 * (fVar7 - fVar19);
            local_res1c = fVar19 * local_res8 + fVar20 * (fVar7 - fVar19);
            (**(code **)(**(longlong **)this + 0x40))
                      (*(longlong **)this,param_1,iVar17,&local_res18);
            iVar17 = iVar17 + 1;
          } while (iVar15 < iVar13);
        }
        plVar16 = *(longlong **)this;
        iVar13 = iVar13 + 1;
      } while (iVar13 < (int)plVar16[2]);
    }
  }
  return;
}

// operator() @ 14c7bf8a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UniformTessellateLocals::FElementsGenerator<float,3>::GenerateTriangleElements'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  float fVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_138 [32];
  longlong local_118;
  longlong local_110;
  char local_108;
  char local_107;
  float local_104;
  ulonglong local_100;
  uint local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  float local_e0;
  float local_dc;
  float local_d8;
  ulonglong local_d0;
  
  local_d0 = __security_cookie.value ^ (ulonglong)auStack_138;
  cVar5 = (**(code **)(**(longlong **)this + 8))();
  if ((cVar5 == '\0') &&
     (cVar5 = (**(code **)(**(longlong **)this + 0x68))(*(longlong **)this,param_1),
     fVar4 = __real_3f800000, cVar5 != '\0')) {
    plVar14 = *(longlong **)this;
    uVar10 = (ulonglong)(param_1 & 0x1ff);
    iVar13 = 1;
    lVar1 = plVar14[1];
    lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x130) + (ulonglong)((uint)param_1 >> 9) * 8);
    local_f0 = *(undefined8 *)(lVar2 + uVar10 * 0xc);
    local_e8 = *(undefined4 *)(lVar2 + 8 + uVar10 * 0xc);
    lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x180) + (ulonglong)((uint)param_1 >> 9) * 8);
    local_f8 = *(uint *)(lVar2 + 8 + uVar10 * 0xc);
    local_100 = *(ulonglong *)(lVar2 + uVar10 * 0xc);
    local_108 = *(int *)(*(longlong *)
                          (*(longlong *)(lVar1 + 0x1c0) + (ulonglong)((uint)local_100 >> 9) * 8) +
                        (ulonglong)((uint)local_100 & 0x1ff) * 0x10) != (int)local_f0;
    local_107 = *(int *)(*(longlong *)
                          (*(longlong *)(lVar1 + 0x1c0) + (ulonglong)(local_f8 >> 9) * 8) +
                        (ulonglong)(local_f8 & 0x1ff) * 0x10) != (int)local_f0;
    iVar15 = 0;
    fVar18 = local_104;
    fVar19 = local_104;
    fVar20 = local_104;
    fVar21 = local_104;
    fVar22 = local_104;
    fVar23 = local_104;
    if (1 < (int)plVar14[2]) {
      do {
        cVar5 = local_107;
        iVar12 = iVar13;
        if (local_108 != '\0') {
          iVar12 = ((int)plVar14[2] - iVar13) + -1;
        }
        uVar7 = (**(code **)(*plVar14 + 0x28))(plVar14,local_100 & 0xffffffff,param_1,iVar12);
        plVar14 = *(longlong **)this;
        iVar12 = iVar13;
        if (cVar5 != '\0') {
          iVar12 = ((int)plVar14[2] - iVar13) + -1;
        }
        uVar8 = (**(code **)(*plVar14 + 0x28))(plVar14,local_f8,param_1,iVar12);
        lVar1 = *(longlong *)this;
        uVar11 = 0;
        if ((int)uVar7 < *(int *)(lVar1 + 0x50)) {
          uVar11 = ~uVar7 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (local_118 = (longlong)(int)uVar7, local_110 = (longlong)*(int *)(lVar1 + 0x50),
           bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (*(char *)((longlong)(int)uVar7 + *(longlong *)(lVar1 + 0x48)) != '\0') {
          uVar7 = uVar7 * 3;
          uVar11 = 0;
          if ((int)uVar7 < *(int *)(lVar1 + 0x40)) {
            uVar11 = ~uVar7 >> 0x1f;
          }
          if (uVar11 == 0) {
            local_118 = (longlong)(int)uVar7;
            local_110 = (longlong)*(int *)(lVar1 + 0x40);
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          uVar11 = uVar7 + 1;
          fVar23 = *(float *)(*(longlong *)(lVar1 + 0x38) + (longlong)(int)uVar7 * 4);
          uVar9 = 0;
          if ((int)uVar11 < *(int *)(lVar1 + 0x40)) {
            uVar9 = ~uVar11 >> 0x1f;
          }
          if (uVar9 == 0) {
            local_118 = (longlong)(int)uVar11;
            local_110 = (longlong)*(int *)(lVar1 + 0x40);
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          uVar7 = uVar7 + 2;
          fVar21 = *(float *)(*(longlong *)(lVar1 + 0x38) + (longlong)(int)uVar11 * 4);
          uVar11 = 0;
          if ((int)uVar7 < *(int *)(lVar1 + 0x40)) {
            uVar11 = ~uVar7 >> 0x1f;
          }
          if (uVar11 == 0) {
            local_118 = (longlong)(int)uVar7;
            local_110 = (longlong)*(int *)(lVar1 + 0x40);
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          fVar18 = *(float *)(*(longlong *)(lVar1 + 0x38) + (longlong)(int)uVar7 * 4);
        }
        lVar1 = *(longlong *)this;
        uVar7 = 0;
        if ((int)uVar8 < *(int *)(lVar1 + 0x50)) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (local_118 = (longlong)(int)uVar8, local_110 = (longlong)*(int *)(lVar1 + 0x50),
           bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (*(char *)((longlong)(int)uVar8 + *(longlong *)(lVar1 + 0x48)) != '\0') {
          uVar8 = uVar8 * 3;
          uVar7 = 0;
          if ((int)uVar8 < *(int *)(lVar1 + 0x40)) {
            uVar7 = ~uVar8 >> 0x1f;
          }
          if (uVar7 == 0) {
            local_118 = (longlong)(int)uVar8;
            local_110 = (longlong)*(int *)(lVar1 + 0x40);
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          uVar7 = uVar8 + 1;
          fVar22 = *(float *)(*(longlong *)(lVar1 + 0x38) + (longlong)(int)uVar8 * 4);
          uVar11 = 0;
          if ((int)uVar7 < *(int *)(lVar1 + 0x40)) {
            uVar11 = ~uVar7 >> 0x1f;
          }
          if (uVar11 == 0) {
            local_118 = (longlong)(int)uVar7;
            local_110 = (longlong)*(int *)(lVar1 + 0x40);
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          uVar8 = uVar8 + 2;
          fVar20 = *(float *)(*(longlong *)(lVar1 + 0x38) + (longlong)(int)uVar7 * 4);
          uVar7 = 0;
          if ((int)uVar8 < *(int *)(lVar1 + 0x40)) {
            uVar7 = ~uVar8 >> 0x1f;
          }
          if (uVar7 == 0) {
            local_118 = (longlong)(int)uVar8;
            local_110 = (longlong)*(int *)(lVar1 + 0x40);
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          fVar19 = *(float *)(*(longlong *)(lVar1 + 0x38) + (longlong)(int)uVar8 * 4);
        }
        iVar12 = 0;
        if (0 < iVar13) {
          do {
            iVar12 = iVar12 + 1;
            fVar17 = (float)iVar12 * (fVar4 / (float)(iVar13 + 1));
            if (fVar4 <= fVar17) {
              fVar17 = fVar4;
            }
            if (fVar17 <= 0.0) {
              fVar17 = 0.0;
            }
            fVar16 = fVar4 - fVar17;
            local_e0 = fVar22 * fVar17 + fVar23 * fVar16;
            local_dc = fVar20 * fVar17 + fVar21 * fVar16;
            local_d8 = fVar19 * fVar17 + fVar18 * fVar16;
            (**(code **)(**(longlong **)this + 0x40))(*(longlong **)this,param_1,iVar15,&local_e0);
            iVar15 = iVar15 + 1;
          } while (iVar12 < iVar13);
        }
        plVar14 = *(longlong **)this;
        iVar13 = iVar13 + 1;
      } while (iVar13 < (int)plVar14[2]);
    }
  }
  return;
}

// operator() @ 14c7bfed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UniformTessellateLocals::FElementsGenerator<float,4>::GenerateTriangleElements'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  float fVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_118 [32];
  longlong local_f8;
  longlong local_f0;
  char local_e8;
  char local_e7;
  ulonglong local_e0;
  uint local_d8;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  ulonglong local_90;
  
  local_90 = __security_cookie.value ^ (ulonglong)auStack_118;
  cVar5 = (**(code **)(**(longlong **)this + 8))();
  if ((cVar5 == '\0') &&
     (cVar5 = (**(code **)(**(longlong **)this + 0x68))(*(longlong **)this,param_1),
     fVar4 = __real_3f800000, cVar5 != '\0')) {
    plVar14 = *(longlong **)this;
    uVar10 = (ulonglong)(param_1 & 0x1ff);
    iVar13 = 1;
    lVar1 = plVar14[1];
    lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x130) + (ulonglong)((uint)param_1 >> 9) * 8);
    local_b0 = *(undefined8 *)(lVar2 + uVar10 * 0xc);
    local_a8 = *(undefined4 *)(lVar2 + 8 + uVar10 * 0xc);
    lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x180) + (ulonglong)((uint)param_1 >> 9) * 8);
    local_d8 = *(uint *)(lVar2 + 8 + uVar10 * 0xc);
    local_e0 = *(ulonglong *)(lVar2 + uVar10 * 0xc);
    local_e8 = *(int *)(*(longlong *)
                         (*(longlong *)(lVar1 + 0x1c0) + (ulonglong)((uint)local_e0 >> 9) * 8) +
                       (ulonglong)((uint)local_e0 & 0x1ff) * 0x10) != (int)local_b0;
    local_e7 = *(int *)(*(longlong *)(*(longlong *)(lVar1 + 0x1c0) + (ulonglong)(local_d8 >> 9) * 8)
                       + (ulonglong)(local_d8 & 0x1ff) * 0x10) != (int)local_b0;
    iVar15 = 0;
    fVar18 = local_c0;
    fVar19 = fStack_bc;
    fVar20 = fStack_b8;
    fVar21 = fStack_b4;
    fVar22 = local_d0;
    fVar23 = fStack_cc;
    fVar24 = fStack_c8;
    fVar25 = fStack_c4;
    if (1 < (int)plVar14[2]) {
      do {
        cVar5 = local_e7;
        iVar12 = iVar13;
        if (local_e8 != '\0') {
          iVar12 = ((int)plVar14[2] - iVar13) + -1;
        }
        uVar7 = (**(code **)(*plVar14 + 0x28))(plVar14,local_e0 & 0xffffffff,param_1,iVar12);
        plVar14 = *(longlong **)this;
        iVar12 = iVar13;
        if (cVar5 != '\0') {
          iVar12 = ((int)plVar14[2] - iVar13) + -1;
        }
        uVar8 = (**(code **)(*plVar14 + 0x28))(plVar14,local_d8,param_1,iVar12);
        lVar1 = *(longlong *)this;
        uVar11 = 0;
        if ((int)uVar7 < *(int *)(lVar1 + 0x50)) {
          uVar11 = ~uVar7 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (local_f8 = (longlong)(int)uVar7, local_f0 = (longlong)*(int *)(lVar1 + 0x50),
           bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (*(char *)((longlong)(int)uVar7 + *(longlong *)(lVar1 + 0x48)) != '\0') {
          uVar7 = uVar7 * 4;
          uVar11 = 0;
          if ((int)uVar7 < *(int *)(lVar1 + 0x40)) {
            uVar11 = ~uVar7 >> 0x1f;
          }
          if (uVar11 == 0) {
            local_f8 = (longlong)(int)uVar7;
            local_f0 = (longlong)*(int *)(lVar1 + 0x40);
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          uVar11 = uVar7 + 1;
          local_d0 = *(float *)(*(longlong *)(lVar1 + 0x38) + (longlong)(int)uVar7 * 4);
          uVar9 = 0;
          if ((int)uVar11 < *(int *)(lVar1 + 0x40)) {
            uVar9 = ~uVar11 >> 0x1f;
          }
          if (uVar9 == 0) {
            local_f8 = (longlong)(int)uVar11;
            local_f0 = (longlong)*(int *)(lVar1 + 0x40);
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          uVar9 = uVar7 + 2;
          fStack_cc = *(float *)(*(longlong *)(lVar1 + 0x38) + (longlong)(int)uVar11 * 4);
          uVar11 = 0;
          if ((int)uVar9 < *(int *)(lVar1 + 0x40)) {
            uVar11 = ~uVar9 >> 0x1f;
          }
          if (uVar11 == 0) {
            local_f8 = (longlong)(int)uVar9;
            local_f0 = (longlong)*(int *)(lVar1 + 0x40);
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          uVar7 = uVar7 + 3;
          fStack_c8 = *(float *)(*(longlong *)(lVar1 + 0x38) + (longlong)(int)uVar9 * 4);
          uVar11 = 0;
          if ((int)uVar7 < *(int *)(lVar1 + 0x40)) {
            uVar11 = ~uVar7 >> 0x1f;
          }
          if (uVar11 == 0) {
            local_f8 = (longlong)(int)uVar7;
            local_f0 = (longlong)*(int *)(lVar1 + 0x40);
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          fVar25 = *(float *)(*(longlong *)(lVar1 + 0x38) + (longlong)(int)uVar7 * 4);
          fVar22 = local_d0;
          fVar23 = fStack_cc;
          fVar24 = fStack_c8;
          fStack_c4 = fVar25;
        }
        lVar1 = *(longlong *)this;
        uVar7 = 0;
        if ((int)uVar8 < *(int *)(lVar1 + 0x50)) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (local_f8 = (longlong)(int)uVar8, local_f0 = (longlong)*(int *)(lVar1 + 0x50),
           bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (*(char *)((longlong)(int)uVar8 + *(longlong *)(lVar1 + 0x48)) != '\0') {
          uVar8 = uVar8 * 4;
          uVar7 = 0;
          if ((int)uVar8 < *(int *)(lVar1 + 0x40)) {
            uVar7 = ~uVar8 >> 0x1f;
          }
          if (uVar7 == 0) {
            local_f8 = (longlong)(int)uVar8;
            local_f0 = (longlong)*(int *)(lVar1 + 0x40);
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          uVar7 = uVar8 + 1;
          local_c0 = *(float *)(*(longlong *)(lVar1 + 0x38) + (longlong)(int)uVar8 * 4);
          uVar11 = 0;
          if ((int)uVar7 < *(int *)(lVar1 + 0x40)) {
            uVar11 = ~uVar7 >> 0x1f;
          }
          if (uVar11 == 0) {
            local_f8 = (longlong)(int)uVar7;
            local_f0 = (longlong)*(int *)(lVar1 + 0x40);
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          uVar11 = uVar8 + 2;
          fStack_bc = *(float *)(*(longlong *)(lVar1 + 0x38) + (longlong)(int)uVar7 * 4);
          uVar7 = 0;
          if ((int)uVar11 < *(int *)(lVar1 + 0x40)) {
            uVar7 = ~uVar11 >> 0x1f;
          }
          if (uVar7 == 0) {
            local_f8 = (longlong)(int)uVar11;
            local_f0 = (longlong)*(int *)(lVar1 + 0x40);
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          uVar8 = uVar8 + 3;
          fStack_b8 = *(float *)(*(longlong *)(lVar1 + 0x38) + (longlong)(int)uVar11 * 4);
          uVar7 = 0;
          if ((int)uVar8 < *(int *)(lVar1 + 0x40)) {
            uVar7 = ~uVar8 >> 0x1f;
          }
          if (uVar7 == 0) {
            local_f8 = (longlong)(int)uVar8;
            local_f0 = (longlong)*(int *)(lVar1 + 0x40);
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          fVar21 = *(float *)(*(longlong *)(lVar1 + 0x38) + (longlong)(int)uVar8 * 4);
          fVar18 = local_c0;
          fVar19 = fStack_bc;
          fVar20 = fStack_b8;
          fStack_b4 = fVar21;
        }
        iVar12 = 0;
        if (0 < iVar13) {
          do {
            iVar12 = iVar12 + 1;
            fVar17 = (float)iVar12 * (fVar4 / (float)(iVar13 + 1));
            if (fVar4 <= fVar17) {
              fVar17 = fVar4;
            }
            if (fVar17 <= 0.0) {
              fVar17 = 0.0;
            }
            fVar16 = fVar4 - fVar17;
            local_a0 = fVar16 * fVar22 + fVar17 * fVar18;
            fStack_9c = fVar16 * fVar23 + fVar17 * fVar19;
            fStack_98 = fVar16 * fVar24 + fVar17 * fVar20;
            fStack_94 = fVar16 * fVar25 + fVar17 * fVar21;
            (**(code **)(**(longlong **)this + 0x40))(*(longlong **)this,param_1,iVar15,&local_a0);
            iVar15 = iVar15 + 1;
          } while (iVar12 < iVar13);
        }
        plVar14 = *(longlong **)this;
        iVar13 = iVar13 + 1;
      } while (iVar13 < (int)plVar14[2]);
    }
  }
  return;
}

// operator() @ 14c7c0570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UniformTessellateLocals::FElementsGenerator<double,3>::GenerateTriangleElements'::__l2::<lambda_1>
::operator()(void *this,int param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  longlong *plVar15;
  int iVar16;
  double dVar17;
  double dVar18;
  int iVar19;
  undefined4 uVar20;
  int iVar21;
  undefined4 uVar22;
  int iVar23;
  undefined4 uVar24;
  int iVar25;
  undefined4 uVar26;
  int iVar27;
  undefined4 uVar28;
  int iVar29;
  undefined4 uVar30;
  undefined1 auStack_148 [32];
  longlong local_128;
  longlong local_120;
  char local_118;
  char local_117;
  undefined8 local_110;
  undefined4 local_108;
  ulonglong local_100;
  uint local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_148;
  cVar6 = (**(code **)(**(longlong **)this + 8))();
  if ((cVar6 == '\0') &&
     (cVar6 = (**(code **)(**(longlong **)this + 0x68))(*(longlong **)this,param_1),
     dVar5 = __real_3ff0000000000000, cVar6 != '\0')) {
    plVar15 = *(longlong **)this;
    uVar11 = (ulonglong)(param_1 & 0x1ff);
    iVar14 = 1;
    lVar2 = plVar15[1];
    lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x130) + (ulonglong)((uint)param_1 >> 9) * 8);
    local_110 = *(undefined8 *)(lVar3 + uVar11 * 0xc);
    local_108 = *(undefined4 *)(lVar3 + 8 + uVar11 * 0xc);
    lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x180) + (ulonglong)((uint)param_1 >> 9) * 8);
    local_f8 = *(uint *)(lVar3 + 8 + uVar11 * 0xc);
    local_100 = *(ulonglong *)(lVar3 + uVar11 * 0xc);
    local_118 = *(int *)(*(longlong *)
                          (*(longlong *)(lVar2 + 0x1c0) + (ulonglong)((uint)local_100 >> 9) * 8) +
                        (ulonglong)((uint)local_100 & 0x1ff) * 0x10) != (int)local_110;
    local_117 = *(int *)(*(longlong *)
                          (*(longlong *)(lVar2 + 0x1c0) + (ulonglong)(local_f8 >> 9) * 8) +
                        (ulonglong)(local_f8 & 0x1ff) * 0x10) != (int)local_110;
    iVar16 = 0;
    if (1 < (int)plVar15[2]) {
      uVar20 = (undefined4)((ulonglong)local_110 >> 0x20);
      iVar19 = (int)local_110;
      iVar21 = (int)local_110;
      uVar22 = uVar20;
      iVar23 = (int)local_110;
      uVar24 = uVar20;
      iVar25 = (int)local_110;
      uVar26 = uVar20;
      iVar27 = (int)local_110;
      uVar28 = uVar20;
      iVar29 = (int)local_110;
      uVar30 = uVar20;
      do {
        cVar6 = local_117;
        iVar13 = iVar14;
        if (local_118 != '\0') {
          iVar13 = ((int)plVar15[2] - iVar14) + -1;
        }
        uVar8 = (**(code **)(*plVar15 + 0x28))(plVar15,local_100 & 0xffffffff,param_1,iVar13);
        plVar15 = *(longlong **)this;
        iVar13 = iVar14;
        if (cVar6 != '\0') {
          iVar13 = ((int)plVar15[2] - iVar14) + -1;
        }
        uVar9 = (**(code **)(*plVar15 + 0x28))(plVar15,local_f8,param_1,iVar13);
        lVar2 = *(longlong *)this;
        uVar12 = 0;
        if ((int)uVar8 < *(int *)(lVar2 + 0x50)) {
          uVar12 = ~uVar8 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (local_128 = (longlong)(int)uVar8, local_120 = (longlong)*(int *)(lVar2 + 0x50),
           bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (*(char *)((longlong)(int)uVar8 + *(longlong *)(lVar2 + 0x48)) != '\0') {
          uVar8 = uVar8 * 3;
          uVar12 = 0;
          if ((int)uVar8 < *(int *)(lVar2 + 0x40)) {
            uVar12 = ~uVar8 >> 0x1f;
          }
          if (uVar12 == 0) {
            local_128 = (longlong)(int)uVar8;
            local_120 = (longlong)*(int *)(lVar2 + 0x40);
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          uVar12 = uVar8 + 1;
          uVar1 = *(undefined8 *)(*(longlong *)(lVar2 + 0x38) + (longlong)(int)uVar8 * 8);
          iVar29 = (int)uVar1;
          uVar30 = (undefined4)((ulonglong)uVar1 >> 0x20);
          uVar10 = 0;
          if ((int)uVar12 < *(int *)(lVar2 + 0x40)) {
            uVar10 = ~uVar12 >> 0x1f;
          }
          if (uVar10 == 0) {
            local_128 = (longlong)(int)uVar12;
            local_120 = (longlong)*(int *)(lVar2 + 0x40);
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          uVar8 = uVar8 + 2;
          uVar1 = *(undefined8 *)(*(longlong *)(lVar2 + 0x38) + (longlong)(int)uVar12 * 8);
          iVar25 = (int)uVar1;
          uVar26 = (undefined4)((ulonglong)uVar1 >> 0x20);
          uVar12 = 0;
          if ((int)uVar8 < *(int *)(lVar2 + 0x40)) {
            uVar12 = ~uVar8 >> 0x1f;
          }
          if (uVar12 == 0) {
            local_128 = (longlong)(int)uVar8;
            local_120 = (longlong)*(int *)(lVar2 + 0x40);
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          uVar1 = *(undefined8 *)(*(longlong *)(lVar2 + 0x38) + (longlong)(int)uVar8 * 8);
          iVar19 = (int)uVar1;
          uVar20 = (undefined4)((ulonglong)uVar1 >> 0x20);
        }
        lVar2 = *(longlong *)this;
        uVar8 = 0;
        if ((int)uVar9 < *(int *)(lVar2 + 0x50)) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (local_128 = (longlong)(int)uVar9, local_120 = (longlong)*(int *)(lVar2 + 0x50),
           bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (*(char *)((longlong)(int)uVar9 + *(longlong *)(lVar2 + 0x48)) != '\0') {
          uVar9 = uVar9 * 3;
          uVar8 = 0;
          if ((int)uVar9 < *(int *)(lVar2 + 0x40)) {
            uVar8 = ~uVar9 >> 0x1f;
          }
          if (uVar8 == 0) {
            local_128 = (longlong)(int)uVar9;
            local_120 = (longlong)*(int *)(lVar2 + 0x40);
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          uVar8 = uVar9 + 1;
          uVar1 = *(undefined8 *)(*(longlong *)(lVar2 + 0x38) + (longlong)(int)uVar9 * 8);
          iVar27 = (int)uVar1;
          uVar28 = (undefined4)((ulonglong)uVar1 >> 0x20);
          uVar12 = 0;
          if ((int)uVar8 < *(int *)(lVar2 + 0x40)) {
            uVar12 = ~uVar8 >> 0x1f;
          }
          if (uVar12 == 0) {
            local_128 = (longlong)(int)uVar8;
            local_120 = (longlong)*(int *)(lVar2 + 0x40);
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          uVar9 = uVar9 + 2;
          uVar1 = *(undefined8 *)(*(longlong *)(lVar2 + 0x38) + (longlong)(int)uVar8 * 8);
          iVar23 = (int)uVar1;
          uVar24 = (undefined4)((ulonglong)uVar1 >> 0x20);
          uVar8 = 0;
          if ((int)uVar9 < *(int *)(lVar2 + 0x40)) {
            uVar8 = ~uVar9 >> 0x1f;
          }
          if (uVar8 == 0) {
            local_128 = (longlong)(int)uVar9;
            local_120 = (longlong)*(int *)(lVar2 + 0x40);
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          uVar1 = *(undefined8 *)(*(longlong *)(lVar2 + 0x38) + (longlong)(int)uVar9 * 8);
          iVar21 = (int)uVar1;
          uVar22 = (undefined4)((ulonglong)uVar1 >> 0x20);
        }
        iVar13 = 0;
        if (0 < iVar14) {
          do {
            iVar13 = iVar13 + 1;
            dVar18 = (double)iVar13 * (dVar5 / (double)(iVar14 + 1));
            if (dVar5 <= dVar18) {
              dVar18 = dVar5;
            }
            if (dVar18 <= 0.0) {
              dVar18 = 0.0;
            }
            dVar17 = dVar5 - dVar18;
            local_f0 = (double)CONCAT44(uVar28,iVar27) * dVar18 +
                       (double)CONCAT44(uVar30,iVar29) * dVar17;
            local_e8 = (double)CONCAT44(uVar24,iVar23) * dVar18 +
                       (double)CONCAT44(uVar26,iVar25) * dVar17;
            local_e0 = (double)CONCAT44(uVar22,iVar21) * dVar18 +
                       (double)CONCAT44(uVar20,iVar19) * dVar17;
            (**(code **)(**(longlong **)this + 0x40))(*(longlong **)this,param_1,iVar16,&local_f0);
            iVar16 = iVar16 + 1;
          } while (iVar13 < iVar14);
        }
        plVar15 = *(longlong **)this;
        iVar14 = iVar14 + 1;
      } while (iVar14 < (int)plVar15[2]);
    }
  }
  return;
}

// GenerateEdgeElements @ 14c80bba0

bool __thiscall
UniformTessellateLocals::FElementsGenerator<float,1>::GenerateEdgeElements
          (FElementsGenerator<float,1> *this)

{
  <lambda_1> <Var1;
  char cVar2;
  FElementsGenerator<float,1> *local_res8 [4];
  TArrayView<std::nullptr_t,int> local_28;
  code *local_18;
  FElementsGenerator<float,1> **local_10;
  
  local_28.DataPtr = (void **)0x0;
  local_28.ArrayNum = 0;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UniformTessellateLocals::FElementsGenerator<float,1>::GenerateEdgeElements'::__l2::<lambda_1>,void,int>
             ::Call;
  local_10 = local_res8;
  local_res8[0]._0_1_ = SUB81(this,0);
  <Var1 = local_res8[0]._0_1_;
  local_res8[0] = this;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",
             *(int *)(this->_padding_ + 0x1d0) * 0x200 + *(int *)(this->_padding_ + 0x1d4),1,
             (TFunctionRef<void___cdecl(int)> *)&local_18,<Var1,
             (uint)((char)this->_padding_ == '\0'),&local_28);
  cVar2 = (**(code **)(this->_padding_ + 8))(this);
  return cVar2 == '\0';
}

// GenerateEdgeElements @ 14c80bc30

bool __thiscall
UniformTessellateLocals::FElementsGenerator<float,2>::GenerateEdgeElements
          (FElementsGenerator<float,2> *this)

{
  <lambda_1> <Var1;
  char cVar2;
  FElementsGenerator<float,2> *local_res8 [4];
  TArrayView<std::nullptr_t,int> local_28;
  code *local_18;
  FElementsGenerator<float,2> **local_10;
  
  local_28.DataPtr = (void **)0x0;
  local_28.ArrayNum = 0;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UniformTessellateLocals::FElementsGenerator<float,2>::GenerateEdgeElements'::__l2::<lambda_1>,void,int>
             ::Call;
  local_10 = local_res8;
  local_res8[0]._0_1_ = SUB81(this,0);
  <Var1 = local_res8[0]._0_1_;
  local_res8[0] = this;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",
             *(int *)(this->_padding_ + 0x1d0) * 0x200 + *(int *)(this->_padding_ + 0x1d4),1,
             (TFunctionRef<void___cdecl(int)> *)&local_18,<Var1,
             (uint)((char)this->_padding_ == '\0'),&local_28);
  cVar2 = (**(code **)(this->_padding_ + 8))(this);
  return cVar2 == '\0';
}

// GenerateEdgeElements @ 14c80bcc0

bool __thiscall
UniformTessellateLocals::FElementsGenerator<float,3>::GenerateEdgeElements
          (FElementsGenerator<float,3> *this)

{
  <lambda_1> <Var1;
  char cVar2;
  FElementsGenerator<float,3> *local_res8 [4];
  TArrayView<std::nullptr_t,int> local_28;
  code *local_18;
  FElementsGenerator<float,3> **local_10;
  
  local_28.DataPtr = (void **)0x0;
  local_28.ArrayNum = 0;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UniformTessellateLocals::FElementsGenerator<float,3>::GenerateEdgeElements'::__l2::<lambda_1>,void,int>
             ::Call;
  local_10 = local_res8;
  local_res8[0]._0_1_ = SUB81(this,0);
  <Var1 = local_res8[0]._0_1_;
  local_res8[0] = this;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",
             *(int *)(this->_padding_ + 0x1d0) * 0x200 + *(int *)(this->_padding_ + 0x1d4),1,
             (TFunctionRef<void___cdecl(int)> *)&local_18,<Var1,
             (uint)((char)this->_padding_ == '\0'),&local_28);
  cVar2 = (**(code **)(this->_padding_ + 8))(this);
  return cVar2 == '\0';
}

// GenerateEdgeElements @ 14c80bd50

bool __thiscall
UniformTessellateLocals::FElementsGenerator<float,4>::GenerateEdgeElements
          (FElementsGenerator<float,4> *this)

{
  <lambda_1> <Var1;
  char cVar2;
  FElementsGenerator<float,4> *local_res8 [4];
  TArrayView<std::nullptr_t,int> local_28;
  code *local_18;
  FElementsGenerator<float,4> **local_10;
  
  local_28.DataPtr = (void **)0x0;
  local_28.ArrayNum = 0;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UniformTessellateLocals::FElementsGenerator<float,4>::GenerateEdgeElements'::__l2::<lambda_1>,void,int>
             ::Call;
  local_10 = local_res8;
  local_res8[0]._0_1_ = SUB81(this,0);
  <Var1 = local_res8[0]._0_1_;
  local_res8[0] = this;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",
             *(int *)(this->_padding_ + 0x1d0) * 0x200 + *(int *)(this->_padding_ + 0x1d4),1,
             (TFunctionRef<void___cdecl(int)> *)&local_18,<Var1,
             (uint)((char)this->_padding_ == '\0'),&local_28);
  cVar2 = (**(code **)(this->_padding_ + 8))(this);
  return cVar2 == '\0';
}

// GenerateEdgeElements @ 14c80bde0

bool __thiscall
UniformTessellateLocals::FElementsGenerator<double,3>::GenerateEdgeElements
          (FElementsGenerator<double,3> *this)

{
  <lambda_1> <Var1;
  char cVar2;
  FElementsGenerator<double,3> *local_res8 [4];
  TArrayView<std::nullptr_t,int> local_28;
  code *local_18;
  FElementsGenerator<double,3> **local_10;
  
  local_28.DataPtr = (void **)0x0;
  local_28.ArrayNum = 0;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UniformTessellateLocals::FElementsGenerator<double,3>::GenerateEdgeElements'::__l2::<lambda_1>,void,int>
             ::Call;
  local_10 = local_res8;
  local_res8[0]._0_1_ = SUB81(this,0);
  <Var1 = local_res8[0]._0_1_;
  local_res8[0] = this;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",
             *(int *)(this->_padding_ + 0x1d0) * 0x200 + *(int *)(this->_padding_ + 0x1d4),1,
             (TFunctionRef<void___cdecl(int)> *)&local_18,<Var1,
             (uint)((char)this->_padding_ == '\0'),&local_28);
  cVar2 = (**(code **)(this->_padding_ + 8))(this);
  return cVar2 == '\0';
}

// GenerateTriangleElements @ 14c80c020

bool __thiscall
UniformTessellateLocals::FElementsGenerator<float,1>::GenerateTriangleElements
          (FElementsGenerator<float,1> *this)

{
  <lambda_1> <Var1;
  char cVar2;
  FElementsGenerator<float,1> *local_res8 [4];
  TArrayView<std::nullptr_t,int> local_28;
  code *local_18;
  FElementsGenerator<float,1> **local_10;
  
  if (1 < (int)this->_padding_) {
    local_28.DataPtr = (void **)0x0;
    local_28.ArrayNum = 0;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`UniformTessellateLocals::FElementsGenerator<float,1>::GenerateTriangleElements'::__l2::<lambda_1>,void,int>
               ::Call;
    local_10 = local_res8;
    local_res8[0]._0_1_ = SUB81(this,0);
    <Var1 = local_res8[0]._0_1_;
    local_res8[0] = this;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",
               *(int *)(this->_padding_ + 0x140) * 0x200 + *(int *)(this->_padding_ + 0x144),1,
               (TFunctionRef<void___cdecl(int)> *)&local_18,<Var1,
               (uint)((char)this->_padding_ == '\0'),&local_28);
    cVar2 = (**(code **)(this->_padding_ + 8))(this);
    return cVar2 == '\0';
  }
  return true;
}

// GenerateTriangleElements @ 14c80c0c0

bool __thiscall
UniformTessellateLocals::FElementsGenerator<float,2>::GenerateTriangleElements
          (FElementsGenerator<float,2> *this)

{
  <lambda_1> <Var1;
  char cVar2;
  FElementsGenerator<float,2> *local_res8 [4];
  TArrayView<std::nullptr_t,int> local_28;
  code *local_18;
  FElementsGenerator<float,2> **local_10;
  
  if (1 < (int)this->_padding_) {
    local_28.DataPtr = (void **)0x0;
    local_28.ArrayNum = 0;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`UniformTessellateLocals::FElementsGenerator<float,2>::GenerateTriangleElements'::__l2::<lambda_1>,void,int>
               ::Call;
    local_10 = local_res8;
    local_res8[0]._0_1_ = SUB81(this,0);
    <Var1 = local_res8[0]._0_1_;
    local_res8[0] = this;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",
               *(int *)(this->_padding_ + 0x140) * 0x200 + *(int *)(this->_padding_ + 0x144),1,
               (TFunctionRef<void___cdecl(int)> *)&local_18,<Var1,
               (uint)((char)this->_padding_ == '\0'),&local_28);
    cVar2 = (**(code **)(this->_padding_ + 8))(this);
    return cVar2 == '\0';
  }
  return true;
}

// GenerateTriangleElements @ 14c80c160

bool __thiscall
UniformTessellateLocals::FElementsGenerator<float,3>::GenerateTriangleElements
          (FElementsGenerator<float,3> *this)

{
  <lambda_1> <Var1;
  char cVar2;
  FElementsGenerator<float,3> *local_res8 [4];
  TArrayView<std::nullptr_t,int> local_28;
  code *local_18;
  FElementsGenerator<float,3> **local_10;
  
  if (1 < (int)this->_padding_) {
    local_28.DataPtr = (void **)0x0;
    local_28.ArrayNum = 0;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`UniformTessellateLocals::FElementsGenerator<float,3>::GenerateTriangleElements'::__l2::<lambda_1>,void,int>
               ::Call;
    local_10 = local_res8;
    local_res8[0]._0_1_ = SUB81(this,0);
    <Var1 = local_res8[0]._0_1_;
    local_res8[0] = this;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",
               *(int *)(this->_padding_ + 0x140) * 0x200 + *(int *)(this->_padding_ + 0x144),1,
               (TFunctionRef<void___cdecl(int)> *)&local_18,<Var1,
               (uint)((char)this->_padding_ == '\0'),&local_28);
    cVar2 = (**(code **)(this->_padding_ + 8))(this);
    return cVar2 == '\0';
  }
  return true;
}

// GenerateTriangleElements @ 14c80c200

bool __thiscall
UniformTessellateLocals::FElementsGenerator<float,4>::GenerateTriangleElements
          (FElementsGenerator<float,4> *this)

{
  <lambda_1> <Var1;
  char cVar2;
  FElementsGenerator<float,4> *local_res8 [4];
  TArrayView<std::nullptr_t,int> local_28;
  code *local_18;
  FElementsGenerator<float,4> **local_10;
  
  if (1 < (int)this->_padding_) {
    local_28.DataPtr = (void **)0x0;
    local_28.ArrayNum = 0;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`UniformTessellateLocals::FElementsGenerator<float,4>::GenerateTriangleElements'::__l2::<lambda_1>,void,int>
               ::Call;
    local_10 = local_res8;
    local_res8[0]._0_1_ = SUB81(this,0);
    <Var1 = local_res8[0]._0_1_;
    local_res8[0] = this;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",
               *(int *)(this->_padding_ + 0x140) * 0x200 + *(int *)(this->_padding_ + 0x144),1,
               (TFunctionRef<void___cdecl(int)> *)&local_18,<Var1,
               (uint)((char)this->_padding_ == '\0'),&local_28);
    cVar2 = (**(code **)(this->_padding_ + 8))(this);
    return cVar2 == '\0';
  }
  return true;
}

// GenerateTriangleElements @ 14c80c2a0

bool __thiscall
UniformTessellateLocals::FElementsGenerator<double,3>::GenerateTriangleElements
          (FElementsGenerator<double,3> *this)

{
  <lambda_1> <Var1;
  char cVar2;
  FElementsGenerator<double,3> *local_res8 [4];
  TArrayView<std::nullptr_t,int> local_28;
  code *local_18;
  FElementsGenerator<double,3> **local_10;
  
  if (1 < (int)this->_padding_) {
    local_28.DataPtr = (void **)0x0;
    local_28.ArrayNum = 0;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`UniformTessellateLocals::FElementsGenerator<double,3>::GenerateTriangleElements'::__l2::<lambda_1>,void,int>
               ::Call;
    local_10 = local_res8;
    local_res8[0]._0_1_ = SUB81(this,0);
    <Var1 = local_res8[0]._0_1_;
    local_res8[0] = this;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",
               *(int *)(this->_padding_ + 0x140) * 0x200 + *(int *)(this->_padding_ + 0x144),1,
               (TFunctionRef<void___cdecl(int)> *)&local_18,<Var1,
               (uint)((char)this->_padding_ == '\0'),&local_28);
    cVar2 = (**(code **)(this->_padding_ + 8))(this);
    return cVar2 == '\0';
  }
  return true;
}

// GetElement @ 14c80f690

void __thiscall
UniformTessellateLocals::FElementsGenerator<float,2>::GetElement
          (FElementsGenerator<float,2> *this,int param_1,float *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 < (this->ElementIsSet).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->ElementIsSet).AllocatorInstance.Data[param_1] != (FScriptContainerElement)0x0) {
    uVar4 = param_1 * 2;
    uVar3 = 0;
    if ((int)uVar4 < (this->Elements).ArrayNum) {
      uVar3 = ~uVar4 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    uVar3 = uVar4 + 1;
    *param_2 = *(float *)((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar4 * 4);
    uVar4 = 0;
    if ((int)uVar3 < (this->Elements).ArrayNum) {
      uVar4 = ~uVar3 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    param_2[1] = *(float *)((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar3 * 4);
  }
  return;
}

// GetElement @ 14c80f7e0

void __thiscall
UniformTessellateLocals::FElementsGenerator<float,3>::GetElement
          (FElementsGenerator<float,3> *this,int param_1,float *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (param_1 < (this->ElementIsSet).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->ElementIsSet).AllocatorInstance.Data[param_1] != (FScriptContainerElement)0x0) {
    uVar5 = param_1 * 3;
    uVar3 = 0;
    if ((int)uVar5 < (this->Elements).ArrayNum) {
      uVar3 = ~uVar5 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    uVar3 = uVar5 + 1;
    *param_2 = *(float *)((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar5 * 4);
    uVar4 = 0;
    if ((int)uVar3 < (this->Elements).ArrayNum) {
      uVar4 = ~uVar3 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    uVar5 = uVar5 + 2;
    param_2[1] = *(float *)((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar3 * 4);
    uVar3 = 0;
    if ((int)uVar5 < (this->Elements).ArrayNum) {
      uVar3 = ~uVar5 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    param_2[2] = *(float *)((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar5 * 4);
  }
  return;
}

// GetElement @ 14c80f990

void __thiscall
UniformTessellateLocals::FElementsGenerator<float,4>::GetElement
          (FElementsGenerator<float,4> *this,int param_1,float *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (param_1 < (this->ElementIsSet).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->ElementIsSet).AllocatorInstance.Data[param_1] != (FScriptContainerElement)0x0) {
    uVar4 = param_1 * 4;
    uVar5 = 0;
    if ((int)uVar4 < (this->Elements).ArrayNum) {
      uVar5 = ~uVar4 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    uVar5 = uVar4 + 1;
    *param_2 = *(float *)((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar4 * 4);
    uVar3 = 0;
    if ((int)uVar5 < (this->Elements).ArrayNum) {
      uVar3 = ~uVar5 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    uVar3 = uVar4 + 2;
    param_2[1] = *(float *)((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar5 * 4);
    uVar5 = 0;
    if ((int)uVar3 < (this->Elements).ArrayNum) {
      uVar5 = ~uVar3 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    uVar4 = uVar4 + 3;
    param_2[2] = *(float *)((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar3 * 4);
    uVar5 = 0;
    if ((int)uVar4 < (this->Elements).ArrayNum) {
      uVar5 = ~uVar4 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    param_2[3] = *(float *)((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar4 * 4);
  }
  return;
}

// GetElementIDOnTriangle @ 14c80ffd0

int __thiscall
UniformTessellateLocals::FElementsGenerator<float,1>::GetElementIDOnTriangle
          (FElementsGenerator<float,1> *this,int param_1,int param_2)

{
  return param_2 + param_1 * this->OutInnerElementCount + this->OutEdgeElementCount +
                   this->InElementCount;
}

// GetElementIDOnTriangle @ 14c80fff0

int __thiscall
UniformTessellateLocals::FElementsGenerator<float,2>::GetElementIDOnTriangle
          (FElementsGenerator<float,2> *this,int param_1,int param_2)

{
  return param_2 + param_1 * this->OutInnerElementCount + this->OutEdgeElementCount +
                   this->InElementCount;
}

// GetElementIDOnTriangle @ 14c810010

int __thiscall
UniformTessellateLocals::FElementsGenerator<float,3>::GetElementIDOnTriangle
          (FElementsGenerator<float,3> *this,int param_1,int param_2)

{
  return param_2 + param_1 * this->OutInnerElementCount + this->OutEdgeElementCount +
                   this->InElementCount;
}

// GetElementIDOnTriangle @ 14c810030

int __thiscall
UniformTessellateLocals::FElementsGenerator<float,4>::GetElementIDOnTriangle
          (FElementsGenerator<float,4> *this,int param_1,int param_2)

{
  return param_2 + param_1 * this->OutInnerElementCount + this->OutEdgeElementCount +
                   this->InElementCount;
}

// GetElementIDOnTriangle @ 14c810050

int __thiscall
UniformTessellateLocals::FElementsGenerator<double,3>::GetElementIDOnTriangle
          (FElementsGenerator<double,3> *this,int param_1,int param_2)

{
  return param_2 + param_1 * this->OutInnerElementCount + this->OutEdgeElementCount +
                   this->InElementCount;
}

// IsValidTriangle @ 14c818bf0

bool __thiscall
UniformTessellateLocals::FElementsGenerator<float,1>::IsValidTriangle
          (FElementsGenerator<float,1> *this,int param_1)

{
  longlong lVar1;
  
  lVar1 = this->_padding_;
  if (((-1 < param_1) && (param_1 < *(int *)(lVar1 + 0x140) * 0x200 + *(int *)(lVar1 + 0x144))) &&
     ((ushort)(*(short *)(*(longlong *)
                           (*(longlong *)(lVar1 + 0x148) + (ulonglong)((uint)param_1 >> 9) * 8) +
                         (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    return true;
  }
  return false;
}

// IsValidTriangle @ 14c818c50

bool __thiscall
UniformTessellateLocals::FElementsGenerator<float,2>::IsValidTriangle
          (FElementsGenerator<float,2> *this,int param_1)

{
  longlong lVar1;
  
  lVar1 = this->_padding_;
  if (((-1 < param_1) && (param_1 < *(int *)(lVar1 + 0x140) * 0x200 + *(int *)(lVar1 + 0x144))) &&
     ((ushort)(*(short *)(*(longlong *)
                           (*(longlong *)(lVar1 + 0x148) + (ulonglong)((uint)param_1 >> 9) * 8) +
                         (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    return true;
  }
  return false;
}

// IsValidTriangle @ 14c818cb0

bool __thiscall
UniformTessellateLocals::FElementsGenerator<float,3>::IsValidTriangle
          (FElementsGenerator<float,3> *this,int param_1)

{
  longlong lVar1;
  
  lVar1 = this->_padding_;
  if (((-1 < param_1) && (param_1 < *(int *)(lVar1 + 0x140) * 0x200 + *(int *)(lVar1 + 0x144))) &&
     ((ushort)(*(short *)(*(longlong *)
                           (*(longlong *)(lVar1 + 0x148) + (ulonglong)((uint)param_1 >> 9) * 8) +
                         (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    return true;
  }
  return false;
}

// IsValidTriangle @ 14c818d10

bool __thiscall
UniformTessellateLocals::FElementsGenerator<float,4>::IsValidTriangle
          (FElementsGenerator<float,4> *this,int param_1)

{
  longlong lVar1;
  
  lVar1 = this->_padding_;
  if (((-1 < param_1) && (param_1 < *(int *)(lVar1 + 0x140) * 0x200 + *(int *)(lVar1 + 0x144))) &&
     ((ushort)(*(short *)(*(longlong *)
                           (*(longlong *)(lVar1 + 0x148) + (ulonglong)((uint)param_1 >> 9) * 8) +
                         (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    return true;
  }
  return false;
}

// IsValidTriangle @ 14c818d70

bool __thiscall
UniformTessellateLocals::FElementsGenerator<double,3>::IsValidTriangle
          (FElementsGenerator<double,3> *this,int param_1)

{
  longlong lVar1;
  
  lVar1 = this->_padding_;
  if (((-1 < param_1) && (param_1 < *(int *)(lVar1 + 0x140) * 0x200 + *(int *)(lVar1 + 0x144))) &&
     ((ushort)(*(short *)(*(longlong *)
                           (*(longlong *)(lVar1 + 0x148) + (ulonglong)((uint)param_1 >> 9) * 8) +
                         (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    return true;
  }
  return false;
}

// SetBufferSizes @ 14c8279f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UniformTessellateLocals::FElementsGenerator<float,1>::SetBufferSizes
          (FElementsGenerator<float,1> *this,int param_1)

{
  bool local_res8 [8];
  
  TArray<float,TSizedDefaultAllocator<32>_>::SetNum(&this->Elements,param_1,Default);
  local_res8[0] = false;
  TArray<bool,TSizedDefaultAllocator<32>_>::Init(&this->ElementIsSet,local_res8,param_1);
  return;
}

// SetBufferSizes @ 14c827a40

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UniformTessellateLocals::FElementsGenerator<float,2>::SetBufferSizes
          (FElementsGenerator<float,2> *this,int param_1)

{
  bool local_res10 [24];
  
  TArray<float,TSizedDefaultAllocator<32>_>::SetNum(&this->Elements,param_1 * 2,Default);
  local_res10[0] = false;
  TArray<bool,TSizedDefaultAllocator<32>_>::Init(&this->ElementIsSet,local_res10,param_1);
  return;
}

// SetBufferSizes @ 14c827a90

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UniformTessellateLocals::FElementsGenerator<float,3>::SetBufferSizes
          (FElementsGenerator<float,3> *this,int param_1)

{
  bool local_res10 [24];
  
  TArray<float,TSizedDefaultAllocator<32>_>::SetNum(&this->Elements,param_1 * 3,Default);
  local_res10[0] = false;
  TArray<bool,TSizedDefaultAllocator<32>_>::Init(&this->ElementIsSet,local_res10,param_1);
  return;
}

// SetBufferSizes @ 14c827ae0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UniformTessellateLocals::FElementsGenerator<float,4>::SetBufferSizes
          (FElementsGenerator<float,4> *this,int param_1)

{
  bool local_res10 [24];
  
  TArray<float,TSizedDefaultAllocator<32>_>::SetNum(&this->Elements,param_1 * 4,Default);
  local_res10[0] = false;
  TArray<bool,TSizedDefaultAllocator<32>_>::Init(&this->ElementIsSet,local_res10,param_1);
  return;
}

// SetBufferSizes @ 14c827b30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UniformTessellateLocals::FElementsGenerator<double,3>::SetBufferSizes
          (FElementsGenerator<double,3> *this,int param_1)

{
  bool local_res10 [24];
  
  TArray<double,TSizedDefaultAllocator<32>_>::SetNum(&this->Elements,param_1 * 3,Default);
  local_res10[0] = false;
  TArray<bool,TSizedDefaultAllocator<32>_>::Init(&this->ElementIsSet,local_res10,param_1);
  return;
}

// SetElement @ 14c827c80

void __thiscall
UniformTessellateLocals::FElementsGenerator<float,1>::SetElement
          (FElementsGenerator<float,1> *this,int param_1,float *param_2)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 < (this->ElementIsSet).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (this->ElementIsSet).AllocatorInstance.Data[param_1] = (FScriptContainerElement)0x1;
  fVar1 = *param_2;
  uVar4 = 0;
  if (param_1 < (this->Elements).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(float *)((this->Elements).AllocatorInstance.Data + (longlong)param_1 * 4) = fVar1;
  return;
}

// SetElement @ 14c827d70

void __thiscall
UniformTessellateLocals::FElementsGenerator<float,2>::SetElement
          (FElementsGenerator<float,2> *this,int param_1,float *param_2)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = param_1 * 2;
  uVar5 = 0;
  if (param_1 < (this->ElementIsSet).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (this->ElementIsSet).AllocatorInstance.Data[param_1] = (FScriptContainerElement)0x1;
  fVar1 = *param_2;
  uVar5 = 0;
  if ((int)uVar4 < (this->Elements).ArrayNum) {
    uVar5 = ~uVar4 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar5 = uVar4 + 1;
  *(float *)((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar4 * 4) = fVar1;
  fVar1 = param_2[1];
  uVar4 = 0;
  if ((int)uVar5 < (this->Elements).ArrayNum) {
    uVar4 = ~uVar5 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(float *)((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar5 * 4) = fVar1;
  return;
}

// SetElement @ 14c827ed0

void __thiscall
UniformTessellateLocals::FElementsGenerator<float,3>::SetElement
          (FElementsGenerator<float,3> *this,int param_1,float *param_2)

{
  float fVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  
  uVar3 = param_1 * 3;
  uVar6 = 0;
  if (param_1 < (this->ElementIsSet).ArrayNum) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (this->ElementIsSet).AllocatorInstance.Data[param_1] = (FScriptContainerElement)0x1;
  fVar1 = *param_2;
  uVar6 = 0;
  if ((int)uVar3 < (this->Elements).ArrayNum) {
    uVar6 = ~uVar3 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar6 = uVar3 + 1;
  *(float *)((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar3 * 4) = fVar1;
  fVar1 = param_2[1];
  uVar5 = 0;
  if ((int)uVar6 < (this->Elements).ArrayNum) {
    uVar5 = ~uVar6 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar3 = uVar3 + 2;
  *(float *)((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar6 * 4) = fVar1;
  fVar1 = param_2[2];
  uVar6 = 0;
  if ((int)uVar3 < (this->Elements).ArrayNum) {
    uVar6 = ~uVar3 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(float *)((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar3 * 4) = fVar1;
  return;
}

// SetElement @ 14c828090

void __thiscall
UniformTessellateLocals::FElementsGenerator<float,4>::SetElement
          (FElementsGenerator<float,4> *this,int param_1,float *param_2)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = param_1 * 4;
  uVar6 = 0;
  if (param_1 < (this->ElementIsSet).ArrayNum) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (this->ElementIsSet).AllocatorInstance.Data[param_1] = (FScriptContainerElement)0x1;
  fVar1 = *param_2;
  uVar6 = 0;
  if ((int)uVar5 < (this->Elements).ArrayNum) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar6 = uVar5 + 1;
  *(float *)((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar5 * 4) = fVar1;
  fVar1 = param_2[1];
  uVar4 = 0;
  if ((int)uVar6 < (this->Elements).ArrayNum) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar4 = uVar5 + 2;
  *(float *)((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar6 * 4) = fVar1;
  fVar1 = param_2[2];
  uVar6 = 0;
  if ((int)uVar4 < (this->Elements).ArrayNum) {
    uVar6 = ~uVar4 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar5 = uVar5 + 3;
  *(float *)((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar4 * 4) = fVar1;
  fVar1 = param_2[3];
  uVar6 = 0;
  if ((int)uVar5 < (this->Elements).ArrayNum) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(float *)((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar5 * 4) = fVar1;
  return;
}

// SetElement @ 14c8282b0

void __thiscall
UniformTessellateLocals::FElementsGenerator<double,3>::SetElement
          (FElementsGenerator<double,3> *this,int param_1,double *param_2)

{
  double dVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  
  uVar3 = param_1 * 3;
  uVar6 = 0;
  if (param_1 < (this->ElementIsSet).ArrayNum) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (this->ElementIsSet).AllocatorInstance.Data[param_1] = (FScriptContainerElement)0x1;
  dVar1 = *param_2;
  uVar6 = 0;
  if ((int)uVar3 < (this->Elements).ArrayNum) {
    uVar6 = ~uVar3 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar6 = uVar3 + 1;
  *(double *)((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar3 * 8) = dVar1;
  dVar1 = param_2[1];
  uVar5 = 0;
  if ((int)uVar6 < (this->Elements).ArrayNum) {
    uVar5 = ~uVar6 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar3 = uVar3 + 2;
  *(double *)((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar6 * 8) = dVar1;
  dVar1 = param_2[2];
  uVar6 = 0;
  if ((int)uVar3 < (this->Elements).ArrayNum) {
    uVar6 = ~uVar3 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(double *)((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar3 * 8) = dVar1;
  return;
}

// SetElementOnEdge @ 14c828470

void __thiscall
UniformTessellateLocals::FElementsGenerator<float,1>::SetElementOnEdge
          (FElementsGenerator<float,1> *this,int param_1,int param_2,int param_3,float *param_4)

{
  int iVar1;
  undefined4 in_register_00000014;
  undefined4 in_register_00000084;
  
  iVar1 = (**(code **)(this->_padding_ + 0x28))
                    (this,CONCAT44(in_register_00000014,param_1),
                     CONCAT44(in_register_00000084,param_2));
  SetElement(this,iVar1,param_4);
  return;
}

// SetElementOnEdge @ 14c8284a0

void __thiscall
UniformTessellateLocals::FElementsGenerator<float,2>::SetElementOnEdge
          (FElementsGenerator<float,2> *this,int param_1,int param_2,int param_3,float *param_4)

{
  int iVar1;
  undefined4 in_register_00000014;
  undefined4 in_register_00000084;
  
  iVar1 = (**(code **)(this->_padding_ + 0x28))
                    (this,CONCAT44(in_register_00000014,param_1),
                     CONCAT44(in_register_00000084,param_2));
  SetElement(this,iVar1,param_4);
  return;
}

// SetElementOnEdge @ 14c8284d0

void __thiscall
UniformTessellateLocals::FElementsGenerator<float,3>::SetElementOnEdge
          (FElementsGenerator<float,3> *this,int param_1,int param_2,int param_3,float *param_4)

{
  int iVar1;
  undefined4 in_register_00000014;
  undefined4 in_register_00000084;
  
  iVar1 = (**(code **)(this->_padding_ + 0x28))
                    (this,CONCAT44(in_register_00000014,param_1),
                     CONCAT44(in_register_00000084,param_2));
  SetElement(this,iVar1,param_4);
  return;
}

// SetElementOnEdge @ 14c828500

void __thiscall
UniformTessellateLocals::FElementsGenerator<float,4>::SetElementOnEdge
          (FElementsGenerator<float,4> *this,int param_1,int param_2,int param_3,float *param_4)

{
  int iVar1;
  undefined4 in_register_00000014;
  undefined4 in_register_00000084;
  
  iVar1 = (**(code **)(this->_padding_ + 0x28))
                    (this,CONCAT44(in_register_00000014,param_1),
                     CONCAT44(in_register_00000084,param_2));
  SetElement(this,iVar1,param_4);
  return;
}

// SetElementOnEdge @ 14c828530

void __thiscall
UniformTessellateLocals::FElementsGenerator<double,3>::SetElementOnEdge
          (FElementsGenerator<double,3> *this,int param_1,int param_2,int param_3,double *param_4)

{
  int iVar1;
  undefined4 in_register_00000014;
  undefined4 in_register_00000084;
  
  iVar1 = (**(code **)(this->_padding_ + 0x28))
                    (this,CONCAT44(in_register_00000014,param_1),
                     CONCAT44(in_register_00000084,param_2));
  SetElement(this,iVar1,param_4);
  return;
}

// SetElementOnTriangle @ 14c828560

void __thiscall
UniformTessellateLocals::FElementsGenerator<float,1>::SetElementOnTriangle
          (FElementsGenerator<float,1> *this,int param_1,int param_2,float *param_3)

{
  int iVar1;
  undefined4 in_register_00000014;
  undefined4 in_register_00000084;
  
  iVar1 = (**(code **)(this->_padding_ + 0x38))
                    (this,CONCAT44(in_register_00000014,param_1),
                     CONCAT44(in_register_00000084,param_2));
  SetElement(this,iVar1,param_3);
  return;
}

// SetElementOnTriangle @ 14c8285a0

void __thiscall
UniformTessellateLocals::FElementsGenerator<float,2>::SetElementOnTriangle
          (FElementsGenerator<float,2> *this,int param_1,int param_2,float *param_3)

{
  int iVar1;
  undefined4 in_register_00000014;
  undefined4 in_register_00000084;
  
  iVar1 = (**(code **)(this->_padding_ + 0x38))
                    (this,CONCAT44(in_register_00000014,param_1),
                     CONCAT44(in_register_00000084,param_2));
  SetElement(this,iVar1,param_3);
  return;
}

// SetElementOnTriangle @ 14c8285e0

void __thiscall
UniformTessellateLocals::FElementsGenerator<float,3>::SetElementOnTriangle
          (FElementsGenerator<float,3> *this,int param_1,int param_2,float *param_3)

{
  int iVar1;
  undefined4 in_register_00000014;
  undefined4 in_register_00000084;
  
  iVar1 = (**(code **)(this->_padding_ + 0x38))
                    (this,CONCAT44(in_register_00000014,param_1),
                     CONCAT44(in_register_00000084,param_2));
  SetElement(this,iVar1,param_3);
  return;
}

// SetElementOnTriangle @ 14c828620

void __thiscall
UniformTessellateLocals::FElementsGenerator<float,4>::SetElementOnTriangle
          (FElementsGenerator<float,4> *this,int param_1,int param_2,float *param_3)

{
  int iVar1;
  undefined4 in_register_00000014;
  undefined4 in_register_00000084;
  
  iVar1 = (**(code **)(this->_padding_ + 0x38))
                    (this,CONCAT44(in_register_00000014,param_1),
                     CONCAT44(in_register_00000084,param_2));
  SetElement(this,iVar1,param_3);
  return;
}

// SetElementOnTriangle @ 14c828660

void __thiscall
UniformTessellateLocals::FElementsGenerator<double,3>::SetElementOnTriangle
          (FElementsGenerator<double,3> *this,int param_1,int param_2,double *param_3)

{
  int iVar1;
  undefined4 in_register_00000014;
  undefined4 in_register_00000084;
  
  iVar1 = (**(code **)(this->_padding_ + 0x38))
                    (this,CONCAT44(in_register_00000014,param_1),
                     CONCAT44(in_register_00000084,param_2));
  SetElement(this,iVar1,param_3);
  return;
}

