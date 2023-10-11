#pragma once
#include "Matrix4x4.h"
#include "Vector3.h"
#include <cmath>
#include <assert.h>

/// <summary>
/// 単位秒列
/// </summary>
/// <returns></returns>
Matrix4x4 MakeIdentity4x4();

/// <summary>
/// X軸回転行列
/// </summary>
Matrix4x4 MakeRotateXmatrix(float radian);

/// <summary>
/// Y軸回転行列
/// </summary>
Matrix4x4 MakeRotateYmatrix(float radian);

/// <summary>
/// Z軸回転行列
/// </summary>
Matrix4x4 MakeRotateZmatrix(float radian);

/// <summary>
/// 平行行列
/// </summary>
Matrix4x4 MakeTranslateMatrix(Vector3 translate);

/// <summary>
/// 拡大縮小
/// </summary>
Matrix4x4 MakeScaleMatrix(const Vector3& scale);

/// <summary>
/// 
/// </summary>
/// <param name="m1"></param>
/// <param name="m2"></param>
/// <returns></returns>
Matrix4x4 Multiply(const Matrix4x4& m1, const Matrix4x4& m2);

/// <summary>
/// アフィン変換
/// </summary>
/// <param name="scale"></param>
/// <param name="rot"></param>
/// <param name="translate"></param>
/// <returns></returns>
Matrix4x4 MakeAffineMatrix(const Vector3& scale, const Vector3& rot, const Vector3& translate);

/// <summary>
/// 透視投影行列
/// </summary>
/// <param name="fovY"></param>
/// <param name="aspectRatio"></param>
/// <param name="nearClip"></param>
/// <param name="farClip"></param>
/// <returns></returns>
Matrix4x4 MakePerspectiveFovMatrix(float fovY, float aspectRatio, float nearClip, float farClip);
/// <summary>
/// 正射影行列
/// </summary>
/// <param name="left"></param>
/// <param name="top"></param>
/// <param name="right"></param>
/// <param name="bottom"></param>
/// <param name="nearClip"></param>
/// <param name="farClip"></param>
/// <returns></returns>
Matrix4x4 MakeOrthographicMatrix(float left, float top, float right, float bottom, float nearClip, float farClip);

Matrix4x4 Inverse(const Matrix4x4& m);